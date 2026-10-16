/**
 * PoP SoT xbox-retail - Recompiled code chunk 53
 * Functions: 250 (0x003CB961 - 0x003D213B)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_003CB961
 * Original: 0x003CB961 - 0x003CB9F0 (143 bytes, 66 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CB961(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CB961: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), eax (32-bit) */
    MEM32(ebp + -12) = eax;
    MEM32(ebp + -4) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_003CB9E4; /* jle: less or equal (signed <=) */

loc_003CB977: ;
    ecx = ebx + 4;
    PUSH32(esp, esi);
    MEM32(ebp + -8) = ecx;
    PUSH32(esp, edi);

loc_003CB97F: ;
    edx = MEM32(ebx);
    ecx = eax + eax * 2;
    ecx = ebx + ecx * 4;
    esi = ecx + 4;
    edi = ebp + -24;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    if (CMP_GE(_fas, _fbs)) goto loc_003CB9CA; /* jge: greater or equal (signed >=) */

loc_003CB995: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = ecx;

loc_003CB99B: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CB9ABu); RECOMP_ABI_CALL(0x003CB886u, sub_003CB886); /* call 0x003CB886 */

loc_003CB9AB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CB9C7; /* je: equal / zero */

loc_003CB9AF: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 0xC;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebx);
    esi = ebp + -36;
    edi = ebp + -24;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    if (CMP_L(_fas, _fbs)) goto loc_003CB99B; /* jl: less (signed <) */

loc_003CB9C7: ;
    eax = MEM32(ebp + -4);

loc_003CB9CA: ;
    edi = MEM32(ebp + -8);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -8) = MEM32(ebp + -8) + 0xC;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebp + -24;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -12) = MEM32(ebp + -12) + 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003CB97F; /* jl: less (signed <) */

loc_003CB9E2: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003CB9E4: ;
    eax = MEM32(ebp + -12);
    MEM32(ebx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CB9F0
 * Original: 0x003CB9F0 - 0x003CBA23 (51 bytes, 19 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CB9F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CB9F0: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), esi (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003CBA1F; /* jbe: below or equal (unsigned <=) */

loc_003CB9FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CBA1F; /* jl: less (signed <) */

loc_003CB9FF: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, MEM32(eax + esi * 4));
    PUSH32(esp, esi);
    PUSH32(esp, 0x3E224C);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x003CBA15u); RECOMP_ABI_CALL(0x003C9E5Bu, sub_003C9E5B); /* call 0x003C9E5B */

loc_003CBA15: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x10) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003CB9FB; /* jb: below (unsigned <) */

loc_003CBA1F: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003CBA23
 * Original: 0x003CBA23 - 0x003CBA6C (73 bytes, 24 insns)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CBA23(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CBA23: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    edx = 0x3E1D78;
    if (CMP_NE(_fa, _fb)) goto loc_003CBA36; /* jne: not equal / not zero */

loc_003CBA31: ;
    edx = 0x3E2270;

loc_003CBA36: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CBA40; /* jne: not equal / not zero */

loc_003CBA3D: ;
    eax = MEM32(ecx + 8);

loc_003CBA40: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CBA4D; /* jne: not equal / not zero */

loc_003CBA46: ;
    MEM32(ebp + 0x14) = 1;

loc_003CBA4D: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E2258);
    PUSH32(esp, MEM32(ecx + 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CBA65u); RECOMP_ABI_CALL(0x003C9E5Bu, sub_003C9E5B); /* call 0x003C9E5B */

loc_003CBA65: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003CBA6C
 * Original: 0x003CBA6C - 0x003CBA90 (36 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBA6C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CBA6C: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003CBA74u); RECOMP_ABI_CALL(0x003C9DCAu, sub_003C9DCA); /* call 0x003C9DCA */

loc_003CBA74: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CBA8A; /* je: equal / zero */

loc_003CBA7B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CBA8A; /* je: equal / zero */

loc_003CBA7F: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CBA8Au); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003CBA8A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CBA90
 * Original: 0x003CBA90 - 0x003CBAE0 (80 bytes, 37 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CBA90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CBA90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CBAD8; /* je: equal / zero */

loc_003CBAA0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CBAD7; /* je: equal / zero */

loc_003CBAA8: ;
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CBAB3u); RECOMP_ABI_CALL(0x003C9D6Eu, sub_003C9D6E); /* call 0x003C9D6E */

loc_003CBAB3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003CBAD6; /* jl: less (signed <) */

loc_003CBABA: ;
    PUSH32(esp, MEM32(ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CBAC1u); RECOMP_ABI_CALL(0x003C61E8u, sub_003C61E8); /* call 0x003C61E8 */

loc_003CBAC1: ;
    esi = MEM32(esi + 4);
    ecx = edi;
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

loc_003CBAD6: ;
    POP32(esp, edi);

loc_003CBAD7: ;
    POP32(esp, ebx);

loc_003CBAD8: ;
    eax = MEM32(ebp + -4);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CBAE0
 * Original: 0x003CBAE0 - 0x003CBC78 (408 bytes, 134 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CBAE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CBAE0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CBAEFu); RECOMP_ABI_CALL(0x003C61E8u, sub_003C61E8); /* call 0x003C61E8 */

loc_003CBAEF: ;
    PUSH32(esp, MEM32(ebp + 8));
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CBAF9u); RECOMP_ABI_CALL(0x003C61F2u, sub_003C61F2); /* call 0x003C61F2 */

loc_003CBAF9: ;
    PUSH32(esp, MEM32(ebp + 8));
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CBB03u); RECOMP_ABI_CALL(0x003C61E8u, sub_003C61E8); /* call 0x003C61E8 */

loc_003CBB03: ;
    PUSH32(esp, MEM32(ebp + 8));
    ebx = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + esi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CBB0Fu); RECOMP_ABI_CALL(0x003C61E8u, sub_003C61E8); /* call 0x003C61E8 */

loc_003CBB0F: ;
    esi = eax;
    eax = MEM32(edi);
    PUSH32(esp, 4);
    MEM32(esi) = eax;
    MEM8(ebp + -1) = 0;
    POP32(esp, eax);
    goto loc_003CBC55;

loc_003CBB21: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CBC61; /* jne: not equal / not zero */

loc_003CBB2B: ;
    ecx = MEM32(edi);
    edx = ecx;
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x42) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x42 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003CBB6A; /* ja: above (unsigned >) */

loc_003CBB3C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x40 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003CBB61; /* jae: above or equal (unsigned >=) */

loc_003CBB41: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x18) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x18 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003CBC59; /* ja: above (unsigned >) */

loc_003CBB4A: ;
    edx = ZX8(MEM8(edx + 0x3CBC88));
    { uint32_t _jt = MEM32(edx * 4 + 0x3CBC78); /* switch: 4 entries, 4 targets */
    if (_jt == 0x003CBB58u) goto loc_003CBB58;
    if (_jt == 0x003CBC35u) goto loc_003CBC35;
    if (_jt == 0x003CBC3Du) goto loc_003CBC3D;
    if (_jt == 0x003CBC45u) goto loc_003CBC45;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_003CBB58: ;
    MEM32(esi) = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003CBC59;

loc_003CBB61: ;
    MEM32(esi) = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003CBC51;

loc_003CBB6A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x101) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x101 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003CBBCB; /* ja: above (unsigned >) */

loc_003CBB72: ;
    if (CMP_EQ(_fa, _fb)) goto loc_003CBC45; /* je: equal / zero */

loc_003CBB78: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x4F (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003CBBB8; /* ja: above (unsigned >) */

loc_003CBB7D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x4D (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003CBC45; /* jae: above or equal (unsigned >=) */

loc_003CBB86: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x43) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x43 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003CBC59; /* jb: below (unsigned <) */

loc_003CBB8F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x44) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x44 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003CBC45; /* jbe: below or equal (unsigned <=) */

loc_003CBB98: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x46 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003CBC59; /* jbe: below or equal (unsigned <=) */

loc_003CBBA1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x4B (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003CBC45; /* jbe: below or equal (unsigned <=) */

loc_003CBBAA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x4C (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CBC3D; /* je: equal / zero */

loc_003CBBB3: ;
    goto loc_003CBC59;

loc_003CBBB8: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x50) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x50 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CBC35; /* je: equal / zero */

loc_003CBBBD: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x100 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CBC59; /* jne: not equal / not zero */

loc_003CBBC9: ;
    goto loc_003CBC3D;

loc_003CBBCB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x102) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x102 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003CBC59; /* jb: below (unsigned <) */

loc_003CBBD7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x103) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x103 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003CBC1D; /* jbe: below or equal (unsigned <=) */

loc_003CBBDF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x105) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x105 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003CBC17; /* jbe: below or equal (unsigned <=) */

loc_003CBBE7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x106) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x106 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CBC1D; /* je: equal / zero */

loc_003CBBEF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFE (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CBC09; /* je: equal / zero */

loc_003CBBF7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CBC59; /* jne: not equal / not zero */

loc_003CBBFF: ;
    MEM32(esi) = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebp + -1) = 1;
    goto loc_003CBC59;

loc_003CBC09: ;
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0x7FFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi + ecx * 4;
    goto loc_003CBC59;

loc_003CBC17: ;
    MEM32(esi) = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003CBC29;

loc_003CBC1D: ;
    MEM32(esi) = ecx;
    ecx = MEM32(edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CBC29: ;
    ecx = MEM32(edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ecx;
    ecx = MEM32(edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CBC35: ;
    MEM32(esi) = ecx;
    ecx = MEM32(edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CBC3D: ;
    MEM32(esi) = ecx;
    ecx = MEM32(edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CBC45: ;
    MEM32(esi) = ecx;
    ecx = MEM32(edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CBC51: ;
    ecx = MEM32(edi);
    MEM32(esi) = ecx;

loc_003CBC55: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CBC59: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003CBB21; /* jb: below (unsigned <) */

loc_003CBC61: ;
    edi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CBC6Au); RECOMP_ABI_CALL(0x003C61E8u, sub_003C61E8); /* call 0x003C61E8 */

loc_003CBC6A: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edi + 8) = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CBCA1
 * Original: 0x003CBCA1 - 0x003CBCAA (9 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBCA1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CBCA1: ;
    MEM32(ecx + 8) = MEM32(ecx + 8) & 0;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_seh_ebp = ebp; sub_003C9DDD(); return; /* tail jmp 0x003C9DDD */

}

/**
 * sub_003CBCAA
 * Original: 0x003CBCAA - 0x003CBCC5 (27 bytes, 9 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CBCAA(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003CBCAA: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(esp + 8));
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    SET_LO8(eax, _cf ? 0xFFFFFFFF : 0); /* sbb self (CF extend) */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx + 0x10) = LO8(eax);
    PUSH32(esp, 0x003CBCC2u); RECOMP_ABI_CALL(0x003C9F39u, sub_003C9F39); /* call 0x003C9F39 */

loc_003CBCC2: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CBCC5
 * Original: 0x003CBCC5 - 0x003CBD1A (85 bytes, 31 insns)
 * Category: game_render
 * CC: cdecl, 12 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CBCC5(void)
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

loc_003CBCC5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 0x34);
    MEM32(edx) = 0x20;
    if ((_fa == 0)) goto loc_003CBCFD; /* je: equal / zero */

loc_003CBCD7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003CBCF5; /* je: equal / zero */

loc_003CBCDA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003CBCF5; /* jne: not equal / not zero */

loc_003CBCDD: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CBCF5; /* je: equal / zero */

loc_003CBCE5: ;
    eax = MEM32(ecx + 0x610);
    MEM32(edx) = eax;
    fp_push(MEMF(ecx + 0x290)); /* fld float */
    goto loc_003CBD16;

loc_003CBCF5: ;
    fp_push(MEMF(0x429350)); /* fld float */
    goto loc_003CBD16;

loc_003CBCFD: ;
    fp_push(MEMF(ebp + 0x30)); /* fld float */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + 0x2C));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CBD16u); RECOMP_ABI_CALL(0x003CA1FAu, sub_003CA1FA); /* call 0x003CA1FA */

loc_003CBD16: ;
    POP32(esp, ebp);
    esp += 52; return; /* ret 48 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003CBD1A
 * Original: 0x003CBD1A - 0x003CBD70 (86 bytes, 39 insns)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CBD1A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CBD1A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x18);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CBD27: ;
    SET_LO8(eax, 1);
    ecx = ebx;
    SET_LO8(eax, LO8(eax) << LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), LO8(eax) (8-bit) */
    MEM8(ebp + 0x18) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_003CBD5D; /* je: equal / zero */

loc_003CBD35: ;
    eax = ZX8(MEM8(ebp + 0x10));
    eax = ebx + eax * 4 + 8;
    _fa = (uint32_t)(MEM32(esi + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax * 4), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CBD5D; /* jle: less or equal (signed <=) */

loc_003CBD42: ;
    eax = ZX8(MEM8(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    ecx = esi + 0x20;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CBD59u); RECOMP_ABI_CALL(0x003CA27Au, sub_003CA27A); /* call 0x003CA27A */

loc_003CBD59: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CBD6C; /* je: equal / zero */

loc_003CBD5D: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CBD27; /* jl: less (signed <) */

loc_003CBD63: ;
    SET_LO8(eax, 1);

loc_003CBD65: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

loc_003CBD6C: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003CBD65;

}

/**
 * sub_003CBD70
 * Original: 0x003CBD70 - 0x003CBE5B (235 bytes, 102 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CBD70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CBD70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ebp + -16;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -32;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CBD9Du); RECOMP_ABI_CALL(0x003C6D7Fu, sub_003C6D7F); /* call 0x003C6D7F */

loc_003CBD9D: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CBE52; /* jl: less (signed <) */

loc_003CBDA7: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CBDB7u); RECOMP_ABI_CALL(0x003CA5B3u, sub_003CA5B3); /* call 0x003CA5B3 */

loc_003CBDB7: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CBE52; /* jl: less (signed <) */

loc_003CBDC1: ;
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CBDCEu); RECOMP_ABI_CALL(0x003C6E6Bu, sub_003C6E6B); /* call 0x003C6E6B */

loc_003CBDCE: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CBE52; /* jl: less (signed <) */

loc_003CBDD4: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CBDDDu); RECOMP_ABI_CALL(0x003C6C92u, sub_003C6C92); /* call 0x003C6C92 */

loc_003CBDDD: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CBE52; /* jl: less (signed <) */

loc_003CBDE3: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CBDECu); RECOMP_ABI_CALL(0x003C6CD8u, sub_003C6CD8); /* call 0x003C6CD8 */

loc_003CBDEC: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CBE52; /* jne: not equal / not zero */

loc_003CBDF0: ;
    SET_LO8(eax, MEM8(ebp + -20));
    SET_LO8(eax, LO8(eax) | MEM8(ebp + -22));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    SET_LO8(eax, LO8(eax) | MEM8(ebp + -18));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_003CBE52; /* je: equal / zero */

loc_003CBDFB: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CBE0Cu); RECOMP_ABI_CALL(0x003CA32Fu, sub_003CA32F); /* call 0x003CA32F */

loc_003CBE0C: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CBE52; /* jl: less (signed <) */

loc_003CBE12: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + -24;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CBE22u); RECOMP_ABI_CALL(0x003CA616u, sub_003CA616); /* call 0x003CA616 */

loc_003CBE22: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CBE52; /* jl: less (signed <) */

loc_003CBE28: ;
    ecx = MEM32(ebp + -4);
    eax = ebp + -32;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CBE38u); RECOMP_ABI_CALL(0x003CA679u, sub_003CA679); /* call 0x003CA679 */

loc_003CBE38: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CBE52; /* jl: less (signed <) */

loc_003CBE3E: ;
    _fa = (uint32_t)(MEM8(ebp + -5)) & 0xFFu; _fb = (uint32_t)(0xFE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -5), 0xFE (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CBE52; /* je: equal / zero */

loc_003CBE44: ;
    eax = MEM32(ebp + 0xC);
    edi = MEM32(eax);
    esi = ebp + -16;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + 0xC;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CBE52: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CBE5B
 * Original: 0x003CBE5B - 0x003CBEDA (127 bytes, 51 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CBE5B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CBE5B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1E000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0x1E000000 (32-bit) */
    ebx = ecx;
    MEM8(ebp + -1) = LO8(eax);
    MEM8(ebp + -2) = LO8(eax);
    if (TEST_Z(_fa, _fb)) goto loc_003CBE84; /* je: equal / zero */

loc_003CBE7A: ;
    eax = ebp + -2;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CBE84u); RECOMP_ABI_CALL(0x003CA82Du, sub_003CA82D); /* call 0x003CA82D */

loc_003CBE84: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM8(ebp + 0xB) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_003CBEA0; /* jl: less (signed <) */

loc_003CBE8C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xE0000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 0xE0000000u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CBEA0; /* je: equal / zero */

loc_003CBE94: ;
    eax = ebp + 0xB;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CBEA0u); RECOMP_ABI_CALL(0x003CA984u, sub_003CA984); /* call 0x003CA984 */

loc_003CBEA0: ;
    _fa = (uint32_t)(MEM8(ebx + 0xDD)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0xDD), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CBEB2; /* je: equal / zero */

loc_003CBEA9: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CBEB2; /* je: equal / zero */

loc_003CBEAE: ;
    SET_LO8(ecx, 1);
    goto loc_003CBEB4;

loc_003CBEB2: ;
    SET_LO8(ecx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003CBEB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    if (CMP_L(_fas, _fbs)) goto loc_003CBED3; /* jl: less (signed <) */

loc_003CBEBB: ;
    _fa = (uint32_t)(MEM8(ebp + -2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -2), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CBECF; /* jne: not equal / not zero */

loc_003CBEC1: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xB), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CBECF; /* jne: not equal / not zero */

loc_003CBEC7: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    MEM8(ebp + -1) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_003CBED3; /* je: equal / zero */

loc_003CBECF: ;
    MEM8(ebp + -1) = 1;

loc_003CBED3: ;
    SET_LO8(eax, MEM8(ebp + -1));
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CBEDA
 * Original: 0x003CBEDA - 0x003CBF52 (120 bytes, 49 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CBEDA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CBEDA: ;
    PUSH32(esp, ebp);
    ebp = esp + -108;
    _fb = (uint32_t)(0xE0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -116;
    PUSH32(esp, 0x003CBEF1u); RECOMP_ABI_CALL(0x003C71A0u, sub_003C71A0); /* call 0x003C71A0 */

loc_003CBEF1: ;
    edi = MEM32(ebp + 0x7C);
    ecx = MEM32(esi);
    eax = edi + edi * 2;
    eax = ecx + eax * 4 + 4;
    PUSH32(esp, eax);
    ecx = ebp + -116;
    PUSH32(esp, 0x003CBF06u); RECOMP_ABI_CALL(0x003C71FBu, sub_003C71FB); /* call 0x003C71FB */

loc_003CBF06: ;
    ecx = MEM32(ebp + 0x74);
    eax = ebp + -116;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CBF12u); RECOMP_ABI_CALL(0x003CA6D7u, sub_003CA6D7); /* call 0x003CA6D7 */

loc_003CBF12: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CBF1A; /* je: equal / zero */

loc_003CBF16: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003CBF45;

loc_003CBF1A: ;
    eax = MEM32(ebp + 0x78);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    PUSH32(esp, ebx);
    ebx = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_003CBF42; /* jge: greater or equal (signed >=) */

loc_003CBF24: ;
    ecx = MEM32(esi);
    eax = eax + eax * 2;
    esi = ecx + eax * 4 + 4;

loc_003CBF2D: ;
    PUSH32(esp, esi);
    ecx = ebp + -116;
    PUSH32(esp, 0x003CBF36u); RECOMP_ABI_CALL(0x003CBE5Bu, sub_003CBE5B); /* call 0x003CBE5B */

loc_003CBF36: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CBF4E; /* jne: not equal / not zero */

loc_003CBF3A: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CBF2D; /* jl: less (signed <) */

loc_003CBF42: ;
    SET_LO8(eax, 1);

loc_003CBF44: ;
    POP32(esp, ebx);

loc_003CBF45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x6C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_003CBF4E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003CBF44;

}

/**
 * sub_003CBF52
 * Original: 0x003CBF52 - 0x003CC00F (189 bytes, 74 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CBF52(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CBF52: ;
    PUSH32(esp, ebp);
    ebp = esp + -108;
    _fb = (uint32_t)(0xE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -124;
    MEM32(ebp + 0x64) = esi;
    PUSH32(esp, 0x003CBF6Du); RECOMP_ABI_CALL(0x003C71A0u, sub_003C71A0); /* call 0x003C71A0 */

loc_003CBF6D: ;
    ebx = MEM32(ebp + 0x74);
    eax = MEM32(esi);
    edi = ebx + ebx * 2;
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = edi + eax + 4;
    PUSH32(esp, eax);
    ecx = ebp + -124;
    PUSH32(esp, 0x003CBF85u); RECOMP_ABI_CALL(0x003C71FBu, sub_003C71FB); /* call 0x003C71FB */

loc_003CBF85: ;
    esi = MEM32(esi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003CC003; /* jge: greater or equal (signed >=) */

loc_003CBF8C: ;
    eax = ebx + ebx * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x68) = eax;
    goto loc_003CBF9A;

loc_003CBF97: ;
    eax = MEM32(ebp + 0x68);

loc_003CBF9A: ;
    eax = eax + esi + 4;
    PUSH32(esp, eax);
    ecx = ebp + -124;
    PUSH32(esp, 0x003CBFA7u); RECOMP_ABI_CALL(0x003CBE5Bu, sub_003CBE5B); /* call 0x003CBE5B */

loc_003CBFA7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CBFE3; /* jne: not equal / not zero */

loc_003CBFAB: ;
    eax = MEM32(ebp + 0x68);
    eax = eax + esi + 4;
    PUSH32(esp, eax);
    eax = esi + edi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x7C));
    PUSH32(esp, 0x003CBFC0u); RECOMP_ABI_CALL(0x003CB341u, sub_003CB341); /* call 0x003CB341 */

loc_003CBFC0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CBFE3; /* je: equal / zero */

loc_003CBFC4: ;
    esi = MEM32(ebp + 0x64);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x74));
    eax = ebp + -124;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003CBFD6u); RECOMP_ABI_CALL(0x003CBEDAu, sub_003CBEDA); /* call 0x003CBEDA */

loc_003CBFD6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CBFE6; /* je: equal / zero */

loc_003CBFDA: ;
    eax = MEM32(ebp + 0x78);
    MEM32(eax) = ebx;
    SET_LO8(eax, 1);
    goto loc_003CC005;

loc_003CBFE3: ;
    esi = MEM32(ebp + 0x64);

loc_003CBFE6: ;
    eax = MEM32(esi);
    ecx = MEM32(ebp + 0x68);
    eax = ecx + eax + 4;
    PUSH32(esp, eax);
    ecx = ebp + -124;
    PUSH32(esp, 0x003CBFF8u); RECOMP_ABI_CALL(0x003C71FBu, sub_003C71FB); /* call 0x003C71FB */

loc_003CBFF8: ;
    esi = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x68) = MEM32(ebp + 0x68) + 0xC;
    _fa = (uint32_t)(MEM32(ebp + 0x68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CBF97; /* jl: less (signed <) */

loc_003CC003: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003CC005: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x6C;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003CC00F
 * Original: 0x003CC00F - 0x003CC1A3 (404 bytes, 162 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CC00F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CC00F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -4) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003CC032; /* je: equal / zero */

loc_003CC026: ;
    eax = eax >> 0x1D;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax * 4 + 0x42F538);
    goto loc_003CC03F;

loc_003CC032: ;
    eax = eax >> 0x19;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax * 4 + 0x42F4F8);

loc_003CC03F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E22F4);
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC04Cu); RECOMP_ABI_CALL(0x003C9E5Bu, sub_003C9E5B); /* call 0x003C9E5B */

loc_003CC04C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CC061; /* jl: less (signed <) */

loc_003CC053: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC061u); RECOMP_ABI_CALL(0x003CA9E5u, sub_003CA9E5); /* call 0x003CA9E5 */

loc_003CC061: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    ecx = MEM32(esi + 8);
    edx = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003CC077; /* je: equal / zero */

loc_003CC06C: ;
    edx = edx >> 0x1D;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, MEM8(edx + 0x3E22EC));
    goto loc_003CC083;

loc_003CC077: ;
    edx = edx >> 0x19;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, MEM8(edx + 0x3E22DC));

loc_003CC083: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    MEM8(ebp + 0xB) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_003CC09C; /* je: equal / zero */

loc_003CC08C: ;
    ecx = ecx >> 0x1D;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(ecx + 0x3E22D4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x3E22D4), 0 (8-bit) */
    MEM8(ebp + 0xC) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_003CC0A0; /* jne: not equal / not zero */

loc_003CC09C: ;
    MEM8(ebp + 0xC) = 0;

loc_003CC0A0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CC19D; /* jl: less (signed <) */

loc_003CC0A8: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xB), 1 (8-bit) */
    PUSH32(esp, 3);
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_003CC0F7; /* je: equal / zero */

loc_003CC0B1: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, 0);
    ecx = eax;
    ecx = ecx >> 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    eax = eax >> 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x61);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC0F7u); RECOMP_ABI_CALL(0x003CAB31u, sub_003CAB31); /* call 0x003CAB31 */

loc_003CC0F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CC19D; /* jl: less (signed <) */

loc_003CC0FF: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xB), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CC14D; /* je: equal / zero */

loc_003CC105: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    ecx = eax;
    ecx = ecx >> 0x1B;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 0x19;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 0x17;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 0x15;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 0x13;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    eax = eax >> 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x62);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC14Du); RECOMP_ABI_CALL(0x003CAB31u, sub_003CAB31); /* call 0x003CAB31 */

loc_003CC14D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CC19D; /* jl: less (signed <) */

loc_003CC151: ;
    _fa = (uint32_t)(MEM8(ebp + 0xB)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xB), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CC19D; /* je: equal / zero */

loc_003CC157: ;
    eax = MEM32(esi + 4);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = eax;
    ecx = ecx >> 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esi);
    eax = eax >> 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x63);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC19Du); RECOMP_ABI_CALL(0x003CAB31u, sub_003CAB31); /* call 0x003CAB31 */

loc_003CC19D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003CC1A3
 * Original: 0x003CC1A3 - 0x003CC3A7 (516 bytes, 185 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CC1A3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CC1A3: ;
    PUSH32(esp, ebp);
    ebp = esp + -120;
    _fb = (uint32_t)(0x98) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x98;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x20);
    POP32(esp, ecx);
    edi = ebp + -32;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebx + 0x14);
    MEM16(ebx + 8) = 1;
    MEM16(ebx + 0x10) = 1;
    eax = ZX16(MEM16(eax));
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(edi) (16-bit) */
    MEM32(ebp + 0x60) = eax;
    MEM32(ebp + 0x74) = edi;
    if (CMP_BE(_fa, _fb)) goto loc_003CC39D; /* jbe: below or equal (unsigned <=) */

loc_003CC1DF: ;
    MEM32(ebp + 0x70) = edi;
    PUSH32(esp, esi);

loc_003CC1E3: ;
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(ebp + 0x70);
    esi = ecx + eax + 4;
    eax = ebp + 0x64;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CC1F7u); RECOMP_ABI_CALL(0x003C805Bu, sub_003C805B); /* call 0x003C805B */

loc_003CC1F7: ;
    PUSH32(esp, MEM32(ebp + 0x74));
    eax = MEM32(esi + 8);
    ecx = ebp + -32;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFFFFFF03u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFFFFFF03u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    eax = eax >> 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFFFFF03u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFFFFFF03u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 8));
    ecx = ebx;
    eax = eax & 0xFFFFFF0Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    eax = eax >> 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFFFFF03u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x64));
    PUSH32(esp, 0x003CC254u); RECOMP_ABI_CALL(0x003C7552u, sub_003C7552); /* call 0x003C7552 */

loc_003CC254: ;
    PUSH32(esp, MEM32(ebp + 0x74));
    eax = MEM32(esi + 4);
    ecx = ebp + -32;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    ecx = edi + ecx + 8;
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 0x13;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFFFFFF03u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 0x15;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFFFFFF03u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 0x17;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFFFFFF03u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 0x19;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFFFFFF03u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFFFFFF0Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    eax = eax >> 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFFFFF03u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x65));
    ecx = ebx;
    PUSH32(esp, 0x003CC2B4u); RECOMP_ABI_CALL(0x003C7552u, sub_003C7552); /* call 0x003C7552 */

loc_003CC2B4: ;
    PUSH32(esp, MEM32(ebp + 0x74));
    eax = MEM32(esi + 4);
    ecx = ebp + -32;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    ecx = edi + ecx + 0x10;
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFFFFFF03u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFFFFFF03u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    eax = eax >> 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFFFFF03u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFFFFFF03u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 4));
    ecx = ebx;
    eax = eax & 0xFFFFFF0Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(esi);
    eax = eax >> 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFFFFF03u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x66));
    PUSH32(esp, 0x003CC312u); RECOMP_ABI_CALL(0x003C7552u, sub_003C7552); /* call 0x003C7552 */

loc_003CC312: ;
    ecx = MEM32(esi);
    eax = ecx;
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CC344; /* je: equal / zero */

loc_003CC31D: ;
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x74));
    edx = ebp + -32;
    PUSH32(esp, edx);
    edx = MEM32(ebx);
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edi + edx + 0x18;
    PUSH32(esp, edx);
    ecx = ecx & 0xFFFFFF0Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    eax = eax & 0xFFFFFF0Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x003CC344u); RECOMP_ABI_CALL(0x003CAD25u, sub_003CAD25); /* call 0x003CAD25 */

loc_003CC344: ;
    ecx = MEM32(esi);
    eax = ecx;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0xF (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CC384; /* je: equal / zero */

loc_003CC34F: ;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x1E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 0x1E (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CC35B; /* je: equal / zero */

loc_003CC355: ;
    MEM8(ebp + 0x6C) = 1;
    goto loc_003CC364;

loc_003CC35B: ;
    ecx = ecx >> 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, LO8(ecx) & 0xF);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ebp + 0x6C) = LO8(ecx);

loc_003CC364: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x74));
    ecx = ebp + -32;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    ecx = edi + ecx + 0x1A;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x6C));
    eax = eax & 0xFFFFFF0Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x003CC384u); RECOMP_ABI_CALL(0x003CAD25u, sub_003CAD25); /* call 0x003CAD25 */

loc_003CC384: ;
    MEM32(ebp + 0x74) = MEM32(ebp + 0x74) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(eax, MEM16(ebp + 0x74));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x70) = MEM32(ebp + 0x70) + 0xC;
    _fa = (uint32_t)(MEM32(ebp + 0x70)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x1C;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x60)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + 0x60) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003CC1E3; /* jb: below (unsigned <) */

loc_003CC39C: ;
    POP32(esp, esi);

loc_003CC39D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x78;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003CC3A7
 * Original: 0x003CC3A7 - 0x003CC442 (155 bytes, 70 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CC3A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CC3A7: ;
    PUSH32(esp, ebp);
    ebp = esp + -120;
    _fb = (uint32_t)(0x84) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x84;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    ebx = ecx;
    PUSH32(esp, 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ecx);
    edi = ebp + -12;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebx + 0x14);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CC439; /* jle: less or equal (signed <=) */

loc_003CC3CB: ;
    PUSH32(esp, esi);

loc_003CC3CC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CC438; /* jl: less (signed <) */

loc_003CC3D0: ;
    esi = ZX16(LO16(edi));
    esi = (uint32_t)((int32_t)esi * (int32_t)0x1C);
    _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x18));
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CC3EBu); RECOMP_ABI_CALL(0x003CADD9u, sub_003CADD9); /* call 0x003CADD9 */

loc_003CC3EB: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CC42D; /* jl: less (signed <) */

loc_003CC3F1: ;
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x1A));
    ecx = ebx;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CC404u); RECOMP_ABI_CALL(0x003CADD9u, sub_003CADD9); /* call 0x003CADD9 */

loc_003CC404: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CC42D; /* jl: less (signed <) */

loc_003CC40A: ;
    MEM32(ebp + 0x74) = MEM32(ebp + 0x74) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003CC40E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CC42D; /* jl: less (signed <) */

loc_003CC412: ;
    PUSH32(esp, edi);
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x003CC41Fu); RECOMP_ABI_CALL(0x003C79F7u, sub_003C79F7); /* call 0x003C79F7 */

loc_003CC41F: ;
    MEM32(ebp + 0x74) = MEM32(ebp + 0x74) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x74)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x74), 3 (32-bit) */
    edx = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003CC40E; /* jl: less (signed <) */

loc_003CC42D: ;
    ecx = MEM32(ebx + 0x14);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX16(LO16(edi));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CC3CC; /* jl: less (signed <) */

loc_003CC438: ;
    POP32(esp, esi);

loc_003CC439: ;
    POP32(esp, edi);
    eax = edx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x78) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x78;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003CC457
 * Original: 0x003CC457 - 0x003CC4A0 (73 bytes, 26 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC457(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CC457: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0xC);
    esi = ecx;
    PUSH32(esp, 0x003CC466u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003CC466: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CC476; /* je: equal / zero */

loc_003CC46C: ;
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    goto loc_003CC478;

loc_003CC476: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CC478: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003CC486; /* jne: not equal / not zero */

loc_003CC47F: ;
    eax = 0x8007000Eu;
    goto loc_003CC495;

loc_003CC486: ;
    MEM32(eax + 8) = ecx;
    PUSH32(esp, 0x400);
    ecx = eax;
    PUSH32(esp, 0x003CC495u); RECOMP_ABI_CALL(0x003C9DDDu, sub_003C9DDD); /* call 0x003C9DDD */

loc_003CC495: ;
    ecx = MEM32(esp + 8);
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CC4A0
 * Original: 0x003CC4A0 - 0x003CC504 (100 bytes, 40 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC4A0(void)
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

loc_003CC4A0: ;
    edx = MEM32(esp + 4);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(edx + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    edi = eax;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esp + 0x14));
    edi = edi >> 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    edi = eax;
    edi = edi >> 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = eax;
    edi = edi >> 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = eax;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi >> 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edx + 8));
    eax = eax & 0xFFFFFF0Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    eax = eax >> 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003CC500u); RECOMP_ABI_CALL(0x003CBCC5u, sub_003CBCC5); /* call 0x003CBCC5 */

loc_003CC500: ;
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003CC504
 * Original: 0x003CC504 - 0x003CC56C (104 bytes, 46 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC504(void)
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

loc_003CC504: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x18));
    edi = ecx;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esp + 0x18));
    ecx = eax;
    ecx = ecx >> 0x13;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    POP32(esp, edx);
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 0x15;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 0x17;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 0x19;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 0x1B;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFFFFFF0Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    eax = eax >> 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003CC567u); RECOMP_ABI_CALL(0x003CBCC5u, sub_003CBCC5); /* call 0x003CBCC5 */

loc_003CC567: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003CC56C
 * Original: 0x003CC56C - 0x003CC5CF (99 bytes, 40 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC56C(void)
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

loc_003CC56C: ;
    edx = MEM32(esp + 4);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    eax = MEM32(edx + 4);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    edi = eax;
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(esp + 0x14));
    edi = edi >> 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    edi = eax;
    edi = edi >> 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = eax;
    edi = edi >> 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = eax;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi >> 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edx + 4));
    eax = eax & 0xFFFFFF0Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    eax = eax >> 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003CC5CBu); RECOMP_ABI_CALL(0x003CBCC5u, sub_003CBCC5); /* call 0x003CBCC5 */

loc_003CC5CB: ;
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003CC5CF
 * Original: 0x003CC5CF - 0x003CC617 (72 bytes, 29 insns)
 * Category: game_render
 * CC: cdecl, 11 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CC5CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CC5CF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003CC5FF; /* je: equal / zero */

loc_003CC5D8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003CC5FB; /* je: equal / zero */

loc_003CC5DB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003CC5FB; /* jne: not equal / not zero */

loc_003CC5DE: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 4);
    edx = MEM32(ebp + 0x30);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(MEM32(ecx + eax * 4 + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ecx + eax * 4 + 0x18);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 6 (32-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    goto loc_003CC613;

loc_003CC5FB: ;
    SET_LO8(eax, 1);
    goto loc_003CC613;

loc_003CC5FF: ;
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, MEM32(ebp + 0x2C));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC613u); RECOMP_ABI_CALL(0x003CBD1Au, sub_003CBD1A); /* call 0x003CBD1A */

loc_003CC613: ;
    POP32(esp, ebp);
    esp += 48; return; /* ret 44 */

}

/**
 * sub_003CC617
 * Original: 0x003CC617 - 0x003CC6D0 (185 bytes, 72 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CC617(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CC617: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -8) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC627u); RECOMP_ABI_CALL(0x003C7150u, sub_003C7150); /* call 0x003C7150 */

loc_003CC627: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x1320);
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC639u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003CC639: ;
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003CC64C; /* jne: not equal / not zero */

loc_003CC642: ;
    eax = 0x8007000Eu;
    goto loc_003CC6CC;

loc_003CC64C: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    eax = eax + eax * 2;
    PUSH32(esp, edi);
    esi = ebx + eax * 4 + -8;
    MEM32(ebp + 0xC) = ecx;
    edi = ebx + -8;
    goto loc_003CC67C;

loc_003CC663: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CC6B9; /* jl: less (signed <) */

loc_003CC669: ;
    ecx = MEM32(ebp + -8);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC676u); RECOMP_ABI_CALL(0x003CBD70u, sub_003CBD70); /* call 0x003CBD70 */

loc_003CC676: ;
    MEM32(ebp + 8) = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003CC67C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003CC663; /* ja: above (unsigned >) */

loc_003CC680: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CC6B9; /* jl: less (signed <) */

loc_003CC686: ;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + -4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, esi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003CC6B7; /* jbe: below or equal (unsigned <=) */

loc_003CC698: ;
    esi = eax + eax * 2;
    edx = ebx + 4;
    ecx = ecx + esi * 4 + -12;
    MEM32(ebp + 0xC) = eax;

loc_003CC6A5: ;
    esi = ecx;
    edi = edx;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xC;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    if ((_fa != 0)) goto loc_003CC6A5; /* jne: not equal / not zero */

loc_003CC6B7: ;
    MEM32(ebx) = eax;

loc_003CC6B9: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC6C6u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003CC6C6: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003CC6CC: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CC6D0
 * Original: 0x003CC6D0 - 0x003CC7E9 (281 bytes, 106 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CC6D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CC6D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(edi) = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(0xFE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 0xFE (8-bit) */
    SET_LO8(edx, 1);
    if (TEST_NZ(_fa, _fb)) goto loc_003CC6FE; /* jne: not equal / not zero */

loc_003CC6EC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC6F4u); RECOMP_ABI_CALL(0x003CC00Fu, sub_003CC00F); /* call 0x003CC00F */

loc_003CC6F4: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CC7E2; /* jl: less (signed <) */

loc_003CC6FE: ;
    ecx = MEM32(esi + 8);
    ecx = ecx >> 0x19;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_003CC720; /* je: equal / zero */

loc_003CC709: ;
    _fa = (uint32_t)(MEM8(esi + 3)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 3), 0xF (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003CC714; /* jne: not equal / not zero */

loc_003CC70F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CC720; /* jne: not equal / not zero */

loc_003CC714: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC71Eu); RECOMP_ABI_CALL(0x003CC00Fu, sub_003CC00F); /* call 0x003CC00F */

loc_003CC71E: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003CC720: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CC7E2; /* jl: less (signed <) */

loc_003CC728: ;
    _fa = (uint32_t)(MEM8(esi + 0xB)) & 0xFFu; _fb = (uint32_t)(0x1E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xB), 0x1E (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CC759; /* je: equal / zero */

loc_003CC72E: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0xF0 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CC759; /* je: equal / zero */

loc_003CC735: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003CC759; /* jne: not equal / not zero */

loc_003CC73A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CC74C; /* jne: not equal / not zero */

loc_003CC73E: ;
    PUSH32(esp, MEM32(0x42F558));
    ecx = MEM32(ebp + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC74Cu); RECOMP_ABI_CALL(0x003C9F02u, sub_003C9F02); /* call 0x003C9F02 */

loc_003CC74C: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC757u); RECOMP_ABI_CALL(0x003CC00Fu, sub_003CC00F); /* call 0x003CC00F */

loc_003CC757: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003CC759: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CC7E2; /* jl: less (signed <) */

loc_003CC761: ;
    ebx = 0xE0000000u;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 8), ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CC791; /* je: equal / zero */

loc_003CC76B: ;
    _fa = (uint32_t)(MEM8(esi + 2)) & 0xFFu; _fb = (uint32_t)(0xF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 2), 0xF (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CC791; /* je: equal / zero */

loc_003CC771: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CC783; /* jne: not equal / not zero */

loc_003CC775: ;
    PUSH32(esp, MEM32(0x42F558));
    ecx = MEM32(ebp + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC783u); RECOMP_ABI_CALL(0x003C9F02u, sub_003C9F02); /* call 0x003C9F02 */

loc_003CC783: ;
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC78Fu); RECOMP_ABI_CALL(0x003CC00Fu, sub_003CC00F); /* call 0x003CC00F */

loc_003CC78F: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003CC791: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CC7E2; /* jl: less (signed <) */

loc_003CC795: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 8), ebx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CC7C4; /* je: equal / zero */

loc_003CC79A: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0xF0 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CC7C4; /* je: equal / zero */

loc_003CC7A1: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CC7C4; /* je: equal / zero */

loc_003CC7A6: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CC7B8; /* jne: not equal / not zero */

loc_003CC7AA: ;
    PUSH32(esp, MEM32(0x42F558));
    ecx = MEM32(ebp + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC7B8u); RECOMP_ABI_CALL(0x003C9F02u, sub_003C9F02); /* call 0x003C9F02 */

loc_003CC7B8: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC7C4u); RECOMP_ABI_CALL(0x003CC00Fu, sub_003CC00F); /* call 0x003CC00F */

loc_003CC7C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CC7E2; /* jl: less (signed <) */

loc_003CC7C8: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CC7E2; /* je: equal / zero */

loc_003CC7CD: ;
    PUSH32(esp, MEM32(0x42F558));
    PUSH32(esp, 0x3E2310);
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC7DFu); RECOMP_ABI_CALL(0x003C9E5Bu, sub_003C9E5B); /* call 0x003C9E5B */

loc_003CC7DF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CC7E2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CC7E9
 * Original: 0x003CC7E9 - 0x003CC920 (311 bytes, 131 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CC7E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CC7E9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM16(esi + 8) = LO16(eax);
    MEM32(esi + 0xC) = eax;
    MEM16(esi + 0x10) = LO16(eax);
    MEM8(esi + 0x12) = LO8(eax);
    MEM32(esi + 0x14) = ebx;
    eax = MEM32(ebx);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x1C);
    PUSH32(esp, edi);
    edi = 0x24870000;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC81Du); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003CC81D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003CC89D; /* je: equal / zero */

loc_003CC825: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), edx (32-bit) */
    MEM32(ebp + 8) = edx;
    if (CMP_LE(_fas, _fbs)) goto loc_003CC849; /* jle: less or equal (signed <=) */

loc_003CC82C: ;
    edi = MEM32(esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 7);
    POP32(esp, ecx);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CC82C; /* jl: less (signed <) */

loc_003CC844: ;
    edi = 0x24870000;

loc_003CC849: ;
    eax = MEM32(ebx);
    eax = eax + eax + 1;
    MEM32(ebp + 8) = eax;
    eax = eax + eax * 4;
    PUSH32(esp, edi);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC85Eu); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003CC85E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003CC89D; /* je: equal / zero */

loc_003CC865: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CC884; /* jle: less or equal (signed <=) */

loc_003CC86C: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CC86E: ;
    edi = MEM32(esi + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xA;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    if ((_fa != 0)) goto loc_003CC86E; /* jne: not equal / not zero */

loc_003CC87F: ;
    edi = 0x24870000;

loc_003CC884: ;
    ebx = MEM32(ebx);
    ebx = ebx + ebx + 1;
    eax = ebx + ebx * 8;
    PUSH32(esp, edi);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC896u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003CC896: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003CC8A4; /* jne: not equal / not zero */

loc_003CC89D: ;
    ebx = 0x80004005u;
    goto loc_003CC8E3;

loc_003CC8A4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CC8C2; /* jle: less or equal (signed <=) */

loc_003CC8A8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CC8AA: ;
    edi = MEM32(esi + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    _fb = (uint32_t)(0x12) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x12;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    if ((_fa != 0)) goto loc_003CC8AA; /* jne: not equal / not zero */

loc_003CC8BD: ;
    edi = 0x24870000;

loc_003CC8C2: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC8C9u); RECOMP_ABI_CALL(0x003CC1A3u, sub_003CC1A3); /* call 0x003CC1A3 */

loc_003CC8C9: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CC8E3; /* jl: less (signed <) */

loc_003CC8CF: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC8D6u); RECOMP_ABI_CALL(0x003CC3A7u, sub_003CC3A7); /* call 0x003CC3A7 */

loc_003CC8D6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CC8E3; /* jl: less (signed <) */

loc_003CC8DA: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC8E1u); RECOMP_ABI_CALL(0x003CAE65u, sub_003CAE65); /* call 0x003CAE65 */

loc_003CC8E1: ;
    ebx = eax;

loc_003CC8E3: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CC8F0; /* je: equal / zero */

loc_003CC8E9: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC8F0u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003CC8F0: ;
    eax = MEM32(esi + 4);
    MEM32(esi) = MEM32(esi) & 0;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CC901; /* je: equal / zero */

loc_003CC8FA: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC901u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003CC901: ;
    eax = MEM32(esi + 0xC);
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CC913; /* je: equal / zero */

loc_003CC90C: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CC913u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003CC913: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CC920
 * Original: 0x003CC920 - 0x003CC97F (95 bytes, 38 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CC920: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    edi = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    edi = edi >> 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    edi = eax;
    edi = edi >> 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = eax;
    edi = edi >> 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = eax;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi >> 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edx + 8));
    eax = eax & 0xFFFFFF0Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(edx + 4);
    eax = eax >> 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003CC978u); RECOMP_ABI_CALL(0x003CC5CFu, sub_003CC5CF); /* call 0x003CC5CF */

loc_003CC978: ;
    eax = ZX8(LO8(eax));
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003CC97F
 * Original: 0x003CC97F - 0x003CC9E2 (99 bytes, 44 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC97F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CC97F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    edi = ecx;
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = eax;
    ecx = ecx >> 0x13;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, 1);
    PUSH32(esp, 3);
    POP32(esp, edx);
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 0x15;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 0x17;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 0x19;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 0x1B;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    ecx = eax;
    ecx = ecx >> 0xF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xFFFFFF0Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    eax = eax >> 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003CC9DAu); RECOMP_ABI_CALL(0x003CC5CFu, sub_003CC5CF); /* call 0x003CC5CF */

loc_003CC9DA: ;
    POP32(esp, edi);
    eax = ZX8(LO8(eax));
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003CC9E2
 * Original: 0x003CC9E2 - 0x003CCA40 (94 bytes, 38 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CC9E2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CC9E2: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 4);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x10));
    edi = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    edi = edi >> 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    edi = eax;
    edi = edi >> 6;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = eax;
    edi = edi >> 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    edi = eax;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi >> 0xA;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(edx + 4));
    eax = eax & 0xFFFFFF0Fu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    eax = MEM32(edx);
    eax = eax >> 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003CCA39u); RECOMP_ABI_CALL(0x003CC5CFu, sub_003CC5CF); /* call 0x003CC5CF */

loc_003CCA39: ;
    eax = ZX8(LO8(eax));
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003CCA40
 * Original: 0x003CCA40 - 0x003CCA6C (44 bytes, 19 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CCA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CCA40: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    eax = ebp + -1;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCA53u); RECOMP_ABI_CALL(0x003C74C3u, sub_003C74C3); /* call 0x003C74C3 */

loc_003CCA53: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CCA67; /* jl: less (signed <) */

loc_003CCA57: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CCA67; /* je: equal / zero */

loc_003CCA5D: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCA67u); RECOMP_ABI_CALL(0x003CC7E9u, sub_003CC7E9); /* call 0x003CC7E9 */

loc_003CCA67: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CCA6C
 * Original: 0x003CCA6C - 0x003CCBB2 (326 bytes, 127 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CCA6C(void)
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

loc_003CCA6C: ;
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
    edi = MEM32(ebp + 0xC);
    esi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = 0x20;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CCB30; /* je: equal / zero */

loc_003CCA8B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCA94u); RECOMP_ABI_CALL(0x003C8237u, sub_003C8237); /* call 0x003C8237 */

loc_003CCA94: ;
    MEM8(ebp + ebx + -16) = LO8(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CCA8B; /* jl: less (signed <) */

loc_003CCA9E: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    PUSH32(esp, 0x20);
    POP32(esp, ebx);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + -16));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + 0xC) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCABCu); RECOMP_ABI_CALL(0x003CC4A0u, sub_003CC4A0); /* call 0x003CC4A0 */

loc_003CCABC: ;
    MEMF(ebp + -8) = (float)fp_top(); /* fst */
    eax = MEM32(ebp + 0xC);
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi) = eax;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + -15));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCADFu); RECOMP_ABI_CALL(0x003CC504u, sub_003CC504); /* call 0x003CC504 */

loc_003CCADF: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + -8)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebp - 8] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CCAED; /* je: equal / zero */

loc_003CCAE9: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CCAF7; /* jne: not equal / not zero */

loc_003CCAED: ;
    eax = MEM32(ebp + 0xC);
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi) = eax;
    goto loc_003CCAF9;

loc_003CCAF7: ;
    fp_pop(); /* fstp st(0) */

loc_003CCAF9: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + -14));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCB11u); RECOMP_ABI_CALL(0x003CC56Cu, sub_003CC56C); /* call 0x003CC56C */

loc_003CCB11: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + -4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); /* fcom dword ptr [ebp - 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CCB1F; /* je: equal / zero */

loc_003CCB1B: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CCB29; /* jne: not equal / not zero */

loc_003CCB1F: ;
    eax = MEM32(ebp + 0xC);
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(edi) = eax;
    goto loc_003CCB2B;

loc_003CCB29: ;
    fp_pop(); /* fstp st(0) */

loc_003CCB2B: ;
    fp_push(MEMF(ebp + -4)); /* fld float */
    goto loc_003CCBAB;

loc_003CCB30: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CCB32: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCB3Bu); RECOMP_ABI_CALL(0x003C8237u, sub_003C8237); /* call 0x003C8237 */

loc_003CCB3B: ;
    MEM8(ebp + edi + -16) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CCB32; /* jl: less (signed <) */

loc_003CCB45: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + 0xC) = ebx;
    fp_push((double)SMEM32(ebp + 0xC)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_003CCB55; /* jge: greater or equal (signed >=) */

loc_003CCB4F: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_003CCB55: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x14)); /* fadd dword ptr [esi + 0x14] */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCB5Du); RECOMP_ABI_CALL(0x00348128u, sub_00348128); /* call 0x00348128 */

loc_003CCB5D: ;
    edi = eax;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -16));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCB6Du); RECOMP_ABI_CALL(0x003CC920u, sub_003CC920); /* call 0x003CC920 */

loc_003CCB6D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CCB95; /* je: equal / zero */

loc_003CCB71: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -15));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCB7Fu); RECOMP_ABI_CALL(0x003CC97Fu, sub_003CC97F); /* call 0x003CC97F */

loc_003CCB7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CCB95; /* je: equal / zero */

loc_003CCB83: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -14));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCB91u); RECOMP_ABI_CALL(0x003CC9E2u, sub_003CC9E2); /* call 0x003CC9E2 */

loc_003CCB91: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CCB9B; /* jne: not equal / not zero */

loc_003CCB95: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 5 (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003CCB45; /* jb: below (unsigned <) */

loc_003CCB9B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + 8) = ebx;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_003CCBAB; /* jge: greater or equal (signed >=) */

loc_003CCBA5: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_003CCBAB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_003CCBB2
 * Original: 0x003CCBB2 - 0x003CCC90 (222 bytes, 75 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CCBB2(void)
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

loc_003CCBB2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    esi = ecx;
    MEM32(edi) = 0x20;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), 0 (8-bit) */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    if (CMP_EQ(_fa, _fb)) goto loc_003CCC16; /* je: equal / zero */

loc_003CCBCC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCBD1u); RECOMP_ABI_CALL(0x003CCA6Cu, sub_003CCA6C); /* call 0x003CCA6C */

loc_003CCBD1: ;
    MEMF(ebp + 0x10) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x14)); /* fadd dword ptr [esi + 0x14] */
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x41E7E0)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x41e7e0] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003CCBF4; /* jne: not equal / not zero */

loc_003CCBE9: ;
    ecx = esi + 0x1C0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCBF4u); RECOMP_ABI_CALL(0x003C63BCu, sub_003C63BC); /* call 0x003C63BC */

loc_003CCBF4: ;
    PUSH32(esp, MEM32(edi));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCC00u); RECOMP_ABI_CALL(0x003CA0B8u, sub_003CA0B8); /* call 0x003CA0B8 */

loc_003CCC00: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429354)); /* fadd dword ptr [0x429354] */
    ecx = MEM32(ebp + 0xC);
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    goto loc_003CCC8A;

loc_003CCC16: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCC1Bu); RECOMP_ABI_CALL(0x003CCA6Cu, sub_003CCA6C); /* call 0x003CCA6C */

loc_003CCC1B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCC20u); RECOMP_ABI_CALL(0x00348128u, sub_00348128); /* call 0x00348128 */

loc_003CCC20: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + 0x10) = edi;
    fp_push((double)SMEM32(ebp + 0x10)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_003CCC32; /* jge: greater or equal (signed >=) */

loc_003CCC2C: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_003CCC32: ;
    PUSH32(esp, MEM32(ebp + 8));
    MEMF(ebp + 0x10) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esi + 0x14)); /* fadd dword ptr [esi + 0x14] */
    ecx = esi;
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCC45u); RECOMP_ABI_CALL(0x003C9F70u, sub_003C9F70); /* call 0x003C9F70 */

loc_003CCC45: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), 0 (8-bit) */
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003CCC74; /* je: equal / zero */

loc_003CCC4D: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    PUSH32(esp, 3);
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x429530)); /* fadd qword ptr [0x429530] */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi;
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)esi);
      edx = (uint32_t)(_dividend % (uint32_t)esi); }
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    fp_push((double)SMEM32(ebp + 8)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_003CCC83; /* jge: greater or equal (signed >=) */

loc_003CCC6C: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */
    goto loc_003CCC83;

loc_003CCC74: ;
    fp_push(MEMF(esi + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429344)); /* fadd dword ptr [0x429344] */
    MEMF(esi + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x10)); /* fld float */

loc_003CCC83: ;
    eax = MEM32(ebp + 0xC);
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ecx;

loc_003CCC8A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003CCC90
 * Original: 0x003CCC90 - 0x003CCD4E (190 bytes, 68 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CCC90(void)
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

loc_003CCC90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x8D8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8D8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebp + -2264;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCCAFu); RECOMP_ABI_CALL(0x003CBCAAu, sub_003CBCAA); /* call 0x003CBCAA */

loc_003CCCAF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CCD48; /* jl: less (signed <) */

loc_003CCCB7: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CCD48; /* jle: less or equal (signed <=) */

loc_003CCCC3: ;
    PUSH32(esp, edi);
    edi = ebx + 4;
    MEM32(ebp + -8) = edi;

loc_003CCCCA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CCD47; /* jl: less (signed <) */

loc_003CCCCE: ;
    PUSH32(esp, edi);
    eax = ebp + -20;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCCD8u); RECOMP_ABI_CALL(0x003C7C84u, sub_003C7C84); /* call 0x003C7C84 */

loc_003CCCD8: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CCD19; /* je: equal / zero */

loc_003CCCDC: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -2264;
    MEM32(ebp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCCF3u); RECOMP_ABI_CALL(0x003CCA6Cu, sub_003CCA6C); /* call 0x003CCA6C */

loc_003CCCF3: ;
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -20;
    PUSH32(esp, eax);
    ecx = ebp + -2264;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCD09u); RECOMP_ABI_CALL(0x003CCA6Cu, sub_003CCA6C); /* call 0x003CCA6C */

loc_003CCD09: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + -4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp - 4] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003CCD19; /* jp: parity */

loc_003CCD13: ;
    esi = ebp + -20;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_003CCD19: ;
    edi = MEM32(ebp + -8);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -2264;
    MEM32(ebp + 8) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCD37u); RECOMP_ABI_CALL(0x003CCBB2u, sub_003CCBB2); /* call 0x003CCBB2 */

loc_003CCD37: ;
    MEM32(ebp + 0xC) = MEM32(ebp + 0xC) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx) (32-bit) */
    MEM32(ebp + -8) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_003CCCCA; /* jl: less (signed <) */

loc_003CCD47: ;
    POP32(esp, edi);

loc_003CCD48: ;
    POP32(esp, esi);
    POP32(esp, ebx);
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
 * sub_003CCD4E
 * Original: 0x003CCD4E - 0x003CCE00 (178 bytes, 65 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CCD4E(void)
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

loc_003CCD4E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x8D0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x8D0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    fp_push(0.0); /* fldz */
    PUSH32(esp, esi);
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    esi = MEM32(edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = ebp + -2256;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCD73u); RECOMP_ABI_CALL(0x003CBCAAu, sub_003CBCAA); /* call 0x003CBCAA */

loc_003CCD73: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CCDF7; /* jl: less (signed <) */

loc_003CCD79: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_push(0.0); /* fldz */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEMF(ebp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(ebp + -12) = 0x20;
    if (CMP_LE(_fas, _fbs)) goto loc_003CCDD8; /* jle: less or equal (signed <=) */

loc_003CCD8D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CCD90: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CCDD8; /* jl: less (signed <) */

loc_003CCD94: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    ecx = ebp + -2256;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCDA8u); RECOMP_ABI_CALL(0x003CCBB2u, sub_003CCBB2); /* call 0x003CCBB2 */

loc_003CCDA8: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 1 (8-bit) */
    ebx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003CCDBE; /* jne: not equal / not zero */

loc_003CCDB0: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -4)); /* fadd dword ptr [ebp - 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x429530)); /* fadd qword ptr [0x429530] */
    goto loc_003CCDCA;

loc_003CCDBE: ;
    fp_push(MEMF(ebp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -4)); /* fadd dword ptr [ebp - 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x429344)); /* fadd dword ptr [0x429344] */

loc_003CCDCA: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) + 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(ebp + -4) = (float)fp_top(); fp_pop(); /* fstp */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CCD90; /* jl: less (signed <) */

loc_003CCDD8: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    ecx = ebp + -2256;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCDE7u); RECOMP_ABI_CALL(0x003C6227u, sub_003C6227); /* call 0x003C6227 */

loc_003CCDE7: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(ebp + -4)); /* fadd dword ptr [ebp - 4] */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CCDF5; /* jl: less (signed <) */

loc_003CCDEE: ;
    eax = MEM32(ebp + 0x10);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */

loc_003CCDF5: ;
    fp_pop(); /* fstp st(0) */

loc_003CCDF7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
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
 * sub_003CCE00
 * Original: 0x003CCE00 - 0x003CCE2F (47 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CCE00(void)
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

loc_003CCE00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = ebp + -4;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + -4) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCE17u); RECOMP_ABI_CALL(0x003CCA6Cu, sub_003CCA6C); /* call 0x003CCA6C */

loc_003CCE17: ;
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(0x429350)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [0x429350] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003CCE29; /* jne: not equal / not zero */

loc_003CCE24: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003CCE2B;

loc_003CCE29: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CCE2B: ;
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
 * sub_003CCE2F
 * Original: 0x003CCE2F - 0x003CCECD (158 bytes, 63 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CCE2F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CCE2F: ;
    PUSH32(esp, ebp);
    ebp = esp + -112;
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xE4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -116;
    PUSH32(esp, 0x003CCE47u); RECOMP_ABI_CALL(0x003C71A0u, sub_003C71A0); /* call 0x003C71A0 */

loc_003CCE47: ;
    edi = MEM32(ebp + 0x78);
    ecx = MEM32(esi);
    eax = edi + edi * 2;
    eax = ecx + eax * 4 + 4;
    PUSH32(esp, eax);
    ecx = ebp + -116;
    PUSH32(esp, 0x003CCE5Cu); RECOMP_ABI_CALL(0x003C71FBu, sub_003C71FB); /* call 0x003C71FB */

loc_003CCE5C: ;
    eax = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003CCEB8; /* jge: greater or equal (signed >=) */

loc_003CCE63: ;
    ebx = edi + edi * 2;
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_003CCE69: ;
    eax = ebx + eax + 4;
    PUSH32(esp, eax);
    ecx = ebp + -116;
    MEM32(ebp + 0x6C) = eax;
    PUSH32(esp, 0x003CCE79u); RECOMP_ABI_CALL(0x003CBE5Bu, sub_003CBE5B); /* call 0x003CBE5B */

loc_003CCE79: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CCE9F; /* jne: not equal / not zero */

loc_003CCE7D: ;
    PUSH32(esp, MEM32(ebp + 0x6C));
    ecx = esi + 4;
    PUSH32(esp, 0x003CCE88u); RECOMP_ABI_CALL(0x003CCE00u, sub_003CCE00); /* call 0x003CCE00 */

loc_003CCE88: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CCE9F; /* jne: not equal / not zero */

loc_003CCE8C: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x78));
    eax = ebp + -116;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003CCE9Bu); RECOMP_ABI_CALL(0x003CBEDAu, sub_003CBEDA); /* call 0x003CBEDA */

loc_003CCE9B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CCEC4; /* jne: not equal / not zero */

loc_003CCE9F: ;
    eax = MEM32(esi);
    eax = ebx + eax + 4;
    PUSH32(esp, eax);
    ecx = ebp + -116;
    PUSH32(esp, 0x003CCEAEu); RECOMP_ABI_CALL(0x003C71FBu, sub_003C71FB); /* call 0x003C71FB */

loc_003CCEAE: ;
    eax = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CCE69; /* jl: less (signed <) */

loc_003CCEB8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003CCEBA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x70;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_003CCEC4: ;
    eax = MEM32(ebp + 0x7C);
    MEM32(eax) = edi;
    SET_LO8(eax, 1);
    goto loc_003CCEBA;

}

/**
 * sub_003CCECD
 * Original: 0x003CCECD - 0x003CD03A (365 bytes, 150 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CCECD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CCECD: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    MEM32(esi) = eax;
    PUSH32(esp, MEM32(eax));
    ecx = esi + 4;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCEEAu); RECOMP_ABI_CALL(0x003CBCAAu, sub_003CBCAA); /* call 0x003CBCAA */

loc_003CCEEA: ;
    edi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM8(ebp + 0xF) = 0;
    if (CMP_L(_fas, _fbs)) goto loc_003CD031; /* jl: less (signed <) */

loc_003CCEFA: ;
    eax = MEM32(esi);
    eax = MEM32(eax);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CCFD4; /* jle: less or equal (signed <=) */

loc_003CCF07: ;
    MEM32(ebp + -4) = ebx;

loc_003CCF0A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD031; /* jl: less (signed <) */

loc_003CCF12: ;
    eax = MEM32(esi);
    ecx = MEM32(ebp + -4);
    eax = ecx + eax + 4;
    PUSH32(esp, eax);
    ecx = esi + 4;
    MEM32(ebp + -24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCF27u); RECOMP_ABI_CALL(0x003CCE00u, sub_003CCE00); /* call 0x003CCE00 */

loc_003CCF27: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CCF48; /* je: equal / zero */

loc_003CCF2B: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCF37u); RECOMP_ABI_CALL(0x003CCE2Fu, sub_003CCE2F); /* call 0x003CCE2F */

loc_003CCF37: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CCF48; /* je: equal / zero */

loc_003CCF3B: ;
    PUSH32(esp, MEM32(ebp + -8));
    ecx = esi;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCF46u); RECOMP_ABI_CALL(0x003C7375u, sub_003C7375); /* call 0x003C7375 */

loc_003CCF46: ;
    edi = eax;

loc_003CCF48: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CCFC2; /* jl: less (signed <) */

loc_003CCF4C: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCF5Cu); RECOMP_ABI_CALL(0x003CBF52u, sub_003CBF52); /* call 0x003CBF52 */

loc_003CCF5C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CCFA2; /* je: equal / zero */

loc_003CCF60: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    ecx = esi + 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCF6Cu); RECOMP_ABI_CALL(0x003CCE00u, sub_003CCE00); /* call 0x003CCE00 */

loc_003CCF6C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CCF91; /* je: equal / zero */

loc_003CCF70: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCF7Cu); RECOMP_ABI_CALL(0x003CCE2Fu, sub_003CCE2F); /* call 0x003CCE2F */

loc_003CCF7C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CCF91; /* je: equal / zero */

loc_003CCF80: ;
    PUSH32(esp, MEM32(ebp + -12));
    ecx = esi;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCF8Bu); RECOMP_ABI_CALL(0x003C7375u, sub_003C7375); /* call 0x003C7375 */

loc_003CCF8B: ;
    MEM8(ebp + 0xF) = 1;
    goto loc_003CCFA0;

loc_003CCF91: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -16));
    ecx = esi;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCFA0u); RECOMP_ABI_CALL(0x003C73EAu, sub_003C73EA); /* call 0x003C73EA */

loc_003CCFA0: ;
    edi = eax;

loc_003CCFA2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CCFC2; /* jl: less (signed <) */

loc_003CCFA6: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -24));
    ecx = esi + 4;
    MEM32(ebp + -20) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCFC0u); RECOMP_ABI_CALL(0x003CCBB2u, sub_003CCBB2); /* call 0x003CCBB2 */

loc_003CCFC0: ;
    edi = eax;

loc_003CCFC2: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0xC;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CCF0A; /* jl: less (signed <) */

loc_003CCFD4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD031; /* jl: less (signed <) */

loc_003CCFD8: ;
    _fa = (uint32_t)(MEM8(ebp + 0xF)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xF), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD031; /* je: equal / zero */

loc_003CCFDE: ;
    eax = MEM32(esi);
    PUSH32(esp, MEM32(eax));
    ecx = esi + 4;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CCFEDu); RECOMP_ABI_CALL(0x003CBCAAu, sub_003CBCAA); /* call 0x003CBCAA */

loc_003CCFED: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD031; /* jl: less (signed <) */

loc_003CCFF3: ;
    eax = MEM32(esi);
    eax = MEM32(eax);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CD031; /* jle: less or equal (signed <=) */

loc_003CCFFE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD031; /* jl: less (signed <) */

loc_003CD002: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD012u); RECOMP_ABI_CALL(0x003CBF52u, sub_003CBF52); /* call 0x003CBF52 */

loc_003CD012: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD027; /* je: equal / zero */

loc_003CD016: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = esi;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD025u); RECOMP_ABI_CALL(0x003C73EAu, sub_003C73EA); /* call 0x003C73EA */

loc_003CD025: ;
    edi = eax;

loc_003CD027: ;
    eax = MEM32(esi);
    eax = MEM32(eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CCFFE; /* jl: less (signed <) */

loc_003CD031: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CD03A
 * Original: 0x003CD03A - 0x003CD29A (608 bytes, 202 insns)
 * Category: game_render
 * CC: cdecl, 7 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CD03A(void)
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

loc_003CD03A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xAF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xAF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD05D; /* je: equal / zero */

loc_003CD049: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1C), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD05D; /* jne: not equal / not zero */

loc_003CD04F: ;
    _fa = (uint32_t)(MEM8(ebp + 0x20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x20), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD05D; /* jne: not equal / not zero */

loc_003CD055: ;
    MEM8(ebp + 0x1C) = 0;
    MEM8(ebp + 0x20) = 1;

loc_003CD05D: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD069; /* jne: not equal / not zero */

loc_003CD063: ;
    _fa = (uint32_t)(MEM8(ebp + 0x15)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x15), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CD081; /* je: equal / zero */

loc_003CD069: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1C), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD079; /* jne: not equal / not zero */

loc_003CD06F: ;
    _fa = (uint32_t)(MEM8(ebp + 0x20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x20), 0 (8-bit) */
    MEM8(ebp + 0x1C) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_003CD07D; /* je: equal / zero */

loc_003CD079: ;
    MEM8(ebp + 0x1C) = 1;

loc_003CD07D: ;
    MEM8(ebp + 0x20) = 0;

loc_003CD081: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ebp + 0x20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x20), 0 (8-bit) */
    MEM32(ebp + -4) = edi;
    MEM32(ebp + -12) = edi;
    MEM8(ebp + -5) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_003CD10B; /* je: equal / zero */

loc_003CD099: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x1324);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD0A8u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003CD0A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -12) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003CD0B6; /* jne: not equal / not zero */

loc_003CD0AF: ;
    MEM32(ebp + -4) = 0x8007000Eu;

loc_003CD0B6: ;
    ecx = MEM32(ebx);
    MEM32(eax) = ecx;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), edi (32-bit) */
    MEM32(ebp + 0x18) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_003CD0E2; /* jle: less or equal (signed <=) */

loc_003CD0C1: ;
    edx = ebx;
    ecx = eax + 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003CD0C8: ;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 0x18);
    esi = edx + ecx;
    edi = ecx;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD0C8; /* jl: less (signed <) */

loc_003CD0DD: ;
    eax = MEM32(ebp + -12);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CD0E2: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD0F1; /* jne: not equal / not zero */

loc_003CD0E8: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD10B; /* je: equal / zero */

loc_003CD0EE: ;
    eax = MEM32(ebp + -12);

loc_003CD0F1: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD0F7u); RECOMP_ABI_CALL(0x003D6BDDu, sub_003D6BDD); /* call 0x003D6BDD */

loc_003CD0F7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD10B; /* jne: not equal / not zero */

loc_003CD0FB: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1C)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1C), LO8(eax) (8-bit) */
    MEM8(ebp + -5) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_003CD115; /* jne: not equal / not zero */

loc_003CD104: ;
    MEM32(ebp + -4) = 0xFFFFEFE5u;

loc_003CD10B: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1C), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD214; /* je: equal / zero */

loc_003CD115: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    esi = MEM32(ebx);
    if (CMP_L(_fas, _fbs)) goto loc_003CD278; /* jl: less (signed <) */

loc_003CD120: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD12F; /* je: equal / zero */

loc_003CD126: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD12Cu); RECOMP_ABI_CALL(0x003CB804u, sub_003CB804); /* call 0x003CB804 */

loc_003CD12C: ;
    MEM32(ebp + -4) = eax;

loc_003CD12F: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD278; /* jl: less (signed <) */

loc_003CD138: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD15B; /* je: equal / zero */

loc_003CD13E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = ebp + -556;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD14Du); RECOMP_ABI_CALL(0x003CC617u, sub_003CC617); /* call 0x003CC617 */

loc_003CD14D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003CD278; /* jl: less (signed <) */

loc_003CD158: ;
    MEM32(ebp + -4) = edi;

loc_003CD15B: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD278; /* jl: less (signed <) */

loc_003CD164: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD18A; /* je: equal / zero */

loc_003CD16A: ;
    _fa = (uint32_t)(MEM8(ebp + 0x15)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x15), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003CD18A; /* jne: not equal / not zero */

loc_003CD170: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = ebp + -36;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD17Cu); RECOMP_ABI_CALL(0x003CCA40u, sub_003CCA40); /* call 0x003CCA40 */

loc_003CD17C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003CD278; /* jl: less (signed <) */

loc_003CD187: ;
    MEM32(ebp + -4) = edi;

loc_003CD18A: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD278; /* jl: less (signed <) */

loc_003CD193: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD1B6; /* je: equal / zero */

loc_003CD199: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = ebp + -2804;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD1A8u); RECOMP_ABI_CALL(0x003CCECDu, sub_003CCECD); /* call 0x003CCECD */

loc_003CD1A8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003CD278; /* jl: less (signed <) */

loc_003CD1B3: ;
    MEM32(ebp + -4) = edi;

loc_003CD1B6: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD278; /* jl: less (signed <) */

loc_003CD1BF: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD1D1; /* je: equal / zero */

loc_003CD1C5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD1CEu); RECOMP_ABI_CALL(0x003CCC90u, sub_003CCC90); /* call 0x003CCC90 */

loc_003CD1CE: ;
    MEM32(ebp + -4) = eax;

loc_003CD1D1: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD278; /* jl: less (signed <) */

loc_003CD1DA: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD1E9; /* je: equal / zero */

loc_003CD1E0: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD1E6u); RECOMP_ABI_CALL(0x003CB8D2u, sub_003CB8D2); /* call 0x003CB8D2 */

loc_003CD1E6: ;
    MEM32(ebp + -4) = eax;

loc_003CD1E9: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD278; /* jl: less (signed <) */

loc_003CD1F2: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD201; /* je: equal / zero */

loc_003CD1F8: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD1FEu); RECOMP_ABI_CALL(0x003CB961u, sub_003CB961); /* call 0x003CB961 */

loc_003CD1FE: ;
    MEM32(ebp + -4) = eax;

loc_003CD201: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD278; /* jl: less (signed <) */

loc_003CD206: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD214; /* je: equal / zero */

loc_003CD20C: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD115; /* jl: less (signed <) */

loc_003CD214: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD278; /* jl: less (signed <) */

loc_003CD219: ;
    _fa = (uint32_t)(MEM8(ebp + 0x20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x20), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD290; /* je: equal / zero */

loc_003CD21F: ;
    _fa = (uint32_t)(MEM8(ebp + -5)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -5), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD278; /* jne: not equal / not zero */

loc_003CD225: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1C), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD254; /* je: equal / zero */

loc_003CD22B: ;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD238u); RECOMP_ABI_CALL(0x003CCD4Eu, sub_003CCD4E); /* call 0x003CCD4E */

loc_003CD238: ;
    eax = ebp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD247u); RECOMP_ABI_CALL(0x003CCD4Eu, sub_003CCD4E); /* call 0x003CCD4E */

loc_003CD247: ;
    fp_push(MEMF(ebp + 0x1C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMF(ebp + 0xC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp dword ptr [ebp + 0xc] */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(5) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 5 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003CD278; /* jp: parity */

loc_003CD254: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebx) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_003CD278; /* jle: less or equal (signed <=) */

loc_003CD261: ;
    eax = ebx + 4;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003CD266: ;
    esi = ecx + eax;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD266; /* jl: less (signed <) */

loc_003CD276: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CD278: ;
    _fa = (uint32_t)(MEM8(ebp + 0x20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x20), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD290; /* je: equal / zero */

loc_003CD27E: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD290; /* je: equal / zero */

loc_003CD283: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, MEM32(ebp + -12));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD290u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003CD290: ;
    eax = MEM32(ebp + -4);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 32; return; /* ret 28 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003CD29A
 * Original: 0x003CD29A - 0x003CD705 (1131 bytes, 370 insns)
 * Category: game_render
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CD29A(void)
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

loc_003CD29A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x9D0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x9D0;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x18);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD2C1; /* je: equal / zero */

loc_003CD2B0: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD2BDu); RECOMP_ABI_CALL(0x003C8FC3u, sub_003C8FC3); /* call 0x003C8FC3 */

loc_003CD2BD: ;
    edi = eax;
    goto loc_003CD307;

loc_003CD2C1: ;
    _fa = (uint32_t)(MEM8(ebp + 0x15)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x15), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003CD307; /* jne: not equal / not zero */

loc_003CD2C7: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(3) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 3 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD307; /* je: equal / zero */

loc_003CD2CD: ;
    eax = MEM32(esi);
    eax = eax + eax * 2;
    eax = esi + eax * 4 + 4;
    MEM32(eax) = MEM32(eax) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esi);
    ecx = eax + eax * 2;
    ecx = esi + ecx * 4 + 4;
    PUSH32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3E1DDC);
    MEM32(esi) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD2F0u); RECOMP_ABI_CALL(0x003C7AACu, sub_003C7AAC); /* call 0x003C7AAC */

loc_003CD2F0: ;
    eax = MEM32(esi);
    ecx = eax + eax * 2;
    ecx = esi + ecx * 4 + 4;
    PUSH32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x3E1DEC);
    MEM32(esi) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD307u); RECOMP_ABI_CALL(0x003C7AACu, sub_003C7AAC); /* call 0x003C7AAC */

loc_003CD307: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    edi = MEM32(ebp + 0x1C);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -12) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003CD33A; /* jl: less (signed <) */

loc_003CD316: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD33A; /* je: equal / zero */

loc_003CD31A: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E252C);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD326u); RECOMP_ABI_CALL(0x003C9E5Bu, sub_003C9E5B); /* call 0x003C9E5B */

loc_003CD326: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD33A; /* jl: less (signed <) */

loc_003CD32D: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD33Au); RECOMP_ABI_CALL(0x003CCD4Eu, sub_003CCD4E); /* call 0x003CCD4E */

loc_003CD33A: ;
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD352u); RECOMP_ABI_CALL(0x003CD03Au, sub_003CD03A); /* call 0x003CD03A */

loc_003CD352: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD58B; /* jl: less (signed <) */

loc_003CD35C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD58B; /* je: equal / zero */

loc_003CD364: ;
    eax = MEM32(ebp + 0x14);
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = edi;
    if ((_fa == 0)) goto loc_003CD383; /* je: equal / zero */

loc_003CD372: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003CD37C; /* je: equal / zero */

loc_003CD375: ;
    PUSH32(esp, 0x3E250C);
    goto loc_003CD388;

loc_003CD37C: ;
    PUSH32(esp, 0x3E2500);
    goto loc_003CD388;

loc_003CD383: ;
    PUSH32(esp, 0x3E24E0);

loc_003CD388: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD38Du); RECOMP_ABI_CALL(0x003C9F02u, sub_003C9F02); /* call 0x003C9F02 */

loc_003CD38D: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD58B; /* jl: less (signed <) */

loc_003CD397: ;
    _fa = (uint32_t)(MEM8(ebp + 0x15)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x15), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CD3AB; /* je: equal / zero */

loc_003CD39D: ;
    PUSH32(esp, 0x3E24CC);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD3A9u); RECOMP_ABI_CALL(0x003C9F02u, sub_003C9F02); /* call 0x003C9F02 */

loc_003CD3A9: ;
    ebx = eax;

loc_003CD3AB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD58B; /* jl: less (signed <) */

loc_003CD3B3: ;
    PUSH32(esp, 0x3E24B8);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD3BFu); RECOMP_ABI_CALL(0x003C9F02u, sub_003C9F02); /* call 0x003C9F02 */

loc_003CD3BF: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD58B; /* jl: less (signed <) */

loc_003CD3C9: ;
    PUSH32(esp, MEM32(esi));
    ecx = ebp + -2512;
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD3D9u); RECOMP_ABI_CALL(0x003CBCAAu, sub_003CBCAA); /* call 0x003CBCAA */

loc_003CD3D9: ;
    ebx = eax;
    PUSH32(esp, 0x3F);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ebp + -268) = 0;
    POP32(esp, ecx);
    edi = ebp + -267;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CD4C9; /* jle: less or equal (signed <=) */

loc_003CD3FC: ;
    eax = esi + 4;
    MEM32(ebp + 0x28) = eax;

loc_003CD402: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD4C9; /* jl: less (signed <) */

loc_003CD40A: ;
    eax = ebp + 0x18;
    fp_push(0.0); /* fldz */
    PUSH32(esp, eax);
    MEMF(ebp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    eax = ebp + 0x24;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x28));
    ecx = ebp + -2512;
    MEM32(ebp + 0x18) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD42Cu); RECOMP_ABI_CALL(0x003CCBB2u, sub_003CCBB2); /* call 0x003CCBB2 */

loc_003CD42C: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD4BC; /* jl: less (signed <) */

loc_003CD436: ;
    fp_push(MEMF(0x429350)); /* fld float */
    fp_push(MEMF(ebp + 0x24)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_003CD463; /* jp: parity */

loc_003CD448: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD463; /* jne: not equal / not zero */

loc_003CD44E: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x3E24A4);
    PUSH32(esp, MEM32(ebp + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD45Cu); RECOMP_ABI_CALL(0x003C9E5Bu, sub_003C9E5B); /* call 0x003C9E5B */

loc_003CD45C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    goto loc_003CD495;

loc_003CD463: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x18);
    fp_push(MEMF(ebp + 0x24)); /* fld float */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x3E2490);
    PUSH32(esp, MEM32(ebp + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD47Eu); RECOMP_ABI_CALL(0x003C9E5Bu, sub_003C9E5B); /* call 0x003C9E5B */

loc_003CD47E: ;
    ebx = eax;
    eax = MEM32(ebp + 0x18);
    MEM8(ebp + eax + -268) = 1;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ebp + -268) = 1;

loc_003CD495: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD4BC; /* jl: less (signed <) */

loc_003CD499: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    ecx = ebp + 0x10;
    PUSH32(esp, MEM32(ebp + 0x28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD4A7u); RECOMP_ABI_CALL(0x003CC6D0u, sub_003CC6D0); /* call 0x003CC6D0 */

loc_003CD4A7: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD4BC; /* jl: less (signed <) */

loc_003CD4AD: ;
    ecx = MEM32(ebp + 0x1C);
    PUSH32(esp, 0x41FC24);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD4BAu); RECOMP_ABI_CALL(0x003C9F02u, sub_003C9F02); /* call 0x003C9F02 */

loc_003CD4BA: ;
    ebx = eax;

loc_003CD4BC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) + 0xC;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD402; /* jl: less (signed <) */

loc_003CD4C9: ;
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    ecx = ebp + -2512;
    MEM32(ebp + 0x18) = 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD4DFu); RECOMP_ABI_CALL(0x003C6227u, sub_003C6227); /* call 0x003C6227 */

loc_003CD4DF: ;
    fp_push(MEMF(0x429350)); /* fld float */
    { double _t = fp_st1(); fp_push(_t); } /* fld st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fucompp  */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_003CD50E; /* jnp: not parity */

loc_003CD4F0: ;
    eax = (uint32_t)(int32_t)SMEM8(ebp + 0x18);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E2470);
    PUSH32(esp, MEM32(ebp + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD507u); RECOMP_ABI_CALL(0x003C9E5Bu, sub_003C9E5B); /* call 0x003C9E5B */

loc_003CD507: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = eax;
    goto loc_003CD510;

loc_003CD50E: ;
    fp_pop(); /* fstp st(0) */

loc_003CD510: ;
    _fa = (uint32_t)(MEM8(ebp + -268)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -268), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD58B; /* jne: not equal / not zero */

loc_003CD519: ;
    PUSH32(esp, 0x3E245C);
    PUSH32(esp, MEM32(ebp + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD526u); RECOMP_ABI_CALL(0x003C9E5Bu, sub_003C9E5B); /* call 0x003C9E5B */

loc_003CD526: ;
    POP32(esp, ecx);
    edi = 0x42F4C4;
    POP32(esp, ecx);
    MEM32(ebp + 0x18) = 1;
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x100;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x28) = 0xFFFFFF00u;

loc_003CD541: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF7Cu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 0xFFFFFF7Cu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD56A; /* je: equal / zero */

loc_003CD54A: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(MEM8(ebp + eax + -268)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + eax + -268), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD56A; /* je: equal / zero */

loc_003CD557: ;
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E2450);
    PUSH32(esp, MEM32(ebp + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD567u); RECOMP_ABI_CALL(0x003C9E5Bu, sub_003C9E5B); /* call 0x003C9E5B */

loc_003CD567: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CD56A: ;
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x28) = MEM32(ebp + 0x28) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x42F7BC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x42F7BC (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD541; /* jl: less (signed <) */

loc_003CD57C: ;
    PUSH32(esp, 0x41FC24);
    PUSH32(esp, MEM32(ebp + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD589u); RECOMP_ABI_CALL(0x003C9E5Bu, sub_003C9E5B); /* call 0x003C9E5B */

loc_003CD589: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_003CD58B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    edi = MEM32(esi);
    if (CMP_L(_fas, _fbs)) goto loc_003CD6B9; /* jl: less (signed <) */

loc_003CD595: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD661; /* je: equal / zero */

loc_003CD59F: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD623; /* je: equal / zero */

loc_003CD5A5: ;
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD5B2u); RECOMP_ABI_CALL(0x003CCD4Eu, sub_003CCD4E); /* call 0x003CCD4E */

loc_003CD5B2: ;
    ebx = eax;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD5CE; /* je: equal / zero */

loc_003CD5BB: ;
    MEM32(ebp + 0x18) = eax;
    fp_push((double)SMEM32(ebp + 0x18)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_003CD5C9; /* jge: greater or equal (signed >=) */

loc_003CD5C3: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_003CD5C9: ;
    fp_top() = RECOMP_FP_PC(MEMF(ebp + 0x14) / fp_top()); /* fdivr dword ptr [ebp + 0x14] */
    goto loc_003CD5D0;

loc_003CD5CE: ;
    fp_push(0.0); /* fldz */

loc_003CD5D0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD6B7; /* jl: less (signed <) */

loc_003CD5D8: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 0x14)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, edi);
    PUSH32(esp, 0x3E241C);
    PUSH32(esp, MEM32(ebp + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD5F3u); RECOMP_ABI_CALL(0x003C9E5Bu, sub_003C9E5B); /* call 0x003C9E5B */

loc_003CD5F3: ;
    ebx = eax;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD6B9; /* jl: less (signed <) */

loc_003CD600: ;
    fp_push(MEMF(ebp + -8)); /* fld float */
    eax = MEM32(ebp + -12);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ebp + 0x14)); /* fsub dword ptr [ebp + 0x14] */
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, eax);
    PUSH32(esp, 0x3E23EC);
    PUSH32(esp, MEM32(ebp + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD61Eu); RECOMP_ABI_CALL(0x003C9E5Bu, sub_003C9E5B); /* call 0x003C9E5B */

loc_003CD61E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003CD65F;

loc_003CD623: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD63D; /* je: equal / zero */

loc_003CD62A: ;
    MEM32(ebp + 0x14) = eax;
    fp_push((double)SMEM32(ebp + 0x14)); /* fild */
    if (CMP_GE(_fas, _fbs)) goto loc_003CD638; /* jge: greater or equal (signed >=) */

loc_003CD632: ;
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x42935C)); /* fadd dword ptr [0x42935c] */

loc_003CD638: ;
    fp_top() = RECOMP_FP_PC(MEMF(ebp + -8) / fp_top()); /* fdivr dword ptr [ebp - 8] */
    goto loc_003CD63F;

loc_003CD63D: ;
    fp_push(0.0); /* fldz */

loc_003CD63F: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + -8)); /* fld float */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, 0x3E241C);
    PUSH32(esp, MEM32(ebp + 0x1C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD65Cu); RECOMP_ABI_CALL(0x003C9E5Bu, sub_003C9E5B); /* call 0x003C9E5B */

loc_003CD65C: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003CD65F: ;
    ebx = eax;

loc_003CD661: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD6B9; /* jl: less (signed <) */

loc_003CD665: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x88) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x88 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CD6A1; /* jle: less or equal (signed <=) */

loc_003CD66E: ;
    PUSH32(esp, eax);
    eax = ebp + -268;
    PUSH32(esp, 0x3E23B8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD680u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_003CD680: ;
    ecx = MEM32(ebp + 0x20);
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ebp + -268;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x258);
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003CD69Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD69Au); } /* indirect call */
    }

loc_003CD69C: ;
    ebx = 0x80004005u;

loc_003CD6A1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD6B9; /* jl: less (signed <) */

loc_003CD6A5: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD6B9; /* je: equal / zero */

loc_003CD6AB: ;
    eax = eax + eax * 2;
    esi = esi + eax * 4 + -8;
    MEM32(esi) = MEM32(esi) | 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_003CD6B9;

loc_003CD6B7: ;
    fp_pop(); /* fstp st(0) */

loc_003CD6B9: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFEFE5u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFEFE5u (32-bit) */
    esi = MEM32(ebp + 0x20);
    if (CMP_NE(_fa, _fb)) goto loc_003CD6DC; /* jne: not equal / not zero */

loc_003CD6C4: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E2368);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x79);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003CD6D7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD6D5u); } /* indirect call */
    }

loc_003CD6D7: ;
    ebx = 0x80004005u;

loc_003CD6DC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFEFE4u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFEFE4u (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD6FC; /* jne: not equal / not zero */

loc_003CD6E4: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0x3E2320);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0x6D);
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003CD6F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CD6F5u); } /* indirect call */
    }

loc_003CD6F7: ;
    ebx = 0x80004005u;

loc_003CD6FC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 40; return; /* ret 36 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003CD705
 * Original: 0x003CD705 - 0x003CD848 (323 bytes, 114 insns)
 * Category: game_render
 * CC: cdecl, 10 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CD705(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CD705: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x24870000);
    edi = ecx;
    PUSH32(esp, 0x1324);
    MEM32(ebp + -4) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD720u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003CD720: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD730; /* jne: not equal / not zero */

loc_003CD726: ;
    ebx = 0x8007000Eu;
    goto loc_003CD83F;

loc_003CD730: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD75B; /* jne: not equal / not zero */

loc_003CD735: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD73Du); RECOMP_ABI_CALL(0x003C61E8u, sub_003C61E8); /* call 0x003C61E8 */

loc_003CD73D: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD747u); RECOMP_ABI_CALL(0x003C61F2u, sub_003C61F2); /* call 0x003C61F2 */

loc_003CD747: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD751u); RECOMP_ABI_CALL(0x003C919Bu, sub_003C919B); /* call 0x003C919B */

loc_003CD751: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD834; /* jl: less (signed <) */

loc_003CD75B: ;
    PUSH32(esp, MEM32(ebp + 0x2C));
    edi = MEM32(ebp + 0x14);
    PUSH32(esp, MEM32(ebp + 0x28));
    ecx = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD77Du); RECOMP_ABI_CALL(0x003CD29Au, sub_003CD29A); /* call 0x003CD29A */

loc_003CD77D: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD834; /* jl: less (signed <) */

loc_003CD787: ;
    eax = MEM32(esi);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ebp + 0x18;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD799u); RECOMP_ABI_CALL(0x003C9D6Eu, sub_003C9D6E); /* call 0x003C9D6E */

loc_003CD799: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + 0x24) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_003CD834; /* jl: less (signed <) */

loc_003CD7A6: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD7AEu); RECOMP_ABI_CALL(0x003C61E8u, sub_003C61E8); /* call 0x003C61E8 */

loc_003CD7AE: ;
    edi = edi & 0xFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD7BC; /* jne: not equal / not zero */

loc_003CD7BB: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003CD7BC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD7C4; /* jne: not equal / not zero */

loc_003CD7C1: ;
    PUSH32(esp, 2);
    POP32(esp, ecx);

loc_003CD7C4: ;
    SET_LO16(ecx, MEM16(ecx * 2 + 0x3E2544));
    MEM16(eax) = LO16(ecx);
    SET_LO16(ecx, MEM16(esi));
    MEM16(eax + 2) = LO16(ecx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), edx (32-bit) */
    ecx = esi + 4;
    if (CMP_LE(_fas, _fbs)) goto loc_003CD82C; /* jle: less or equal (signed <=) */

loc_003CD7E2: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(ecx + 8);
    edi = edi >> 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    edi = MEM32(ecx + 4);
    ebx = MEM32(ecx + 8);
    edi = edi >> 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 0xFFFFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx << 0x1C;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    edi = MEM32(ecx);
    ebx = MEM32(ecx + 4);
    edi = edi & 0x3FFFFFFF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx << 0x1E;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi | ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CD7E2; /* jl: less (signed <) */

loc_003CD829: ;
    ebx = MEM32(ebp + 0x24);

loc_003CD82C: ;
    eax = MEM32(ebp + 0x1C);
    ecx = MEM32(ebp + 0x18);
    MEM32(eax) = ecx;

loc_003CD834: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD83Fu); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003CD83F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 44; return; /* ret 40 */

}

/**
 * sub_003CD848
 * Original: 0x003CD848 - 0x003CD8BF (119 bytes, 45 insns)
 * Category: game_render
 * CC: cdecl, 12 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CD848(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CD848: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x1C);
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD89A; /* jne: not equal / not zero */

loc_003CD854: ;
    _fa = (uint32_t)(MEM8(ebp + 8)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 8), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD85E; /* je: equal / zero */

loc_003CD859: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD862; /* jne: not equal / not zero */

loc_003CD85E: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD883; /* je: equal / zero */

loc_003CD862: ;
    PUSH32(esp, MEM32(ebp + 0x2C));
    ecx = ZX8(MEM8(ecx));
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD881u); RECOMP_ABI_CALL(0x003DB384u, sub_003DB384); /* call 0x003DB384 */

loc_003CD881: ;
    goto loc_003CD8BB;

loc_003CD883: ;
    PUSH32(esp, MEM32(ebp + 0x2C));
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD898u); RECOMP_ABI_CALL(0x003D8B39u, sub_003D8B39); /* call 0x003D8B39 */

loc_003CD898: ;
    goto loc_003CD8BB;

loc_003CD89A: ;
    PUSH32(esp, MEM32(ebp + 0x34));
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, MEM32(ebp + 0x2C));
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD8BBu); RECOMP_ABI_CALL(0x003CD705u, sub_003CD705); /* call 0x003CD705 */

loc_003CD8BB: ;
    POP32(esp, ebp);
    esp += 52; return; /* ret 48 */

}

/**
 * sub_003CD8BF
 * Original: 0x003CD8BF - 0x003CDD97 (1240 bytes, 418 insns)
 * Category: game_render
 * CC: cdecl, 12 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CD8BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CD8BF: ;
    eax = 0x367D55;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CD8C9u); RECOMP_ABI_CALL(0x00349EA0u, sub_00349EA0); /* call 0x00349EA0 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003CD8C9: ;
    _fb = (uint32_t)(0x414) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x414;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CD8DE; /* jne: not equal / not zero */

loc_003CD8D6: ;
    eax = MEM32(0x42F55C);
    MEM32(ebp + 0xC) = eax;

loc_003CD8DE: ;
    ecx = MEM32(ebp + 0x18);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    MEM32(edi + 4) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(edi + 8) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(edi + 0xC) = eax;
    SET_LO8(eax, LO8(ecx));
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ebp + -29) = LO8(eax);
    edx = ecx;
    edx = edx >> 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = ecx;
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ebp + -68) = LO8(edx);
    edx = ecx;
    SET_LO8(eax, ~LO8(eax));
    edx = edx >> 0x15;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ebp + -80) = LO8(eax);
    MEM8(ebp + -72) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_003CD92F; /* je: equal / zero */

loc_003CD923: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000 (32-bit) */
    MEM8(ebp + -56) = 1;
    if (TEST_NZ(_fa, _fb)) goto loc_003CD933; /* jne: not equal / not zero */

loc_003CD92F: ;
    MEM8(ebp + -56) = 0;

loc_003CD933: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CD943; /* je: equal / zero */

loc_003CD937: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x20000 (32-bit) */
    MEM8(ebp + -60) = 1;
    if (TEST_NZ(_fa, _fb)) goto loc_003CD947; /* jne: not equal / not zero */

loc_003CD943: ;
    MEM8(ebp + -60) = 0;

loc_003CD947: ;
    edx = ecx;
    edx = edx >> 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(edx) & 1);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ebp + -76) = LO8(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_003CD95F; /* je: equal / zero */

loc_003CD956: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    MEM8(ebp + -64) = 1;
    if (TEST_Z(_fa, _fb)) goto loc_003CD963; /* je: equal / zero */

loc_003CD95F: ;
    MEM8(ebp + -64) = 0;

loc_003CD963: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), 0 (32-bit) */
    eax = ecx;
    MEM8(ebp + -37) = (CMP_NE(_fa, _fb)) ? 1 : 0; /* setne */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xF0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0xF0 (8-bit) */
    MEM8(ebp + 0x1B) = (TEST_NZ(_fa, _fb)) ? 1 : 0; /* setne */
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0xC) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0xC (8-bit) */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM8(ebp + -13) = LO8(eax);
    eax = ecx;
    ebx = ecx;
    eax = eax >> 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx >> 0xD;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(eax, LO8(eax) & 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO8(ebx, LO8(ebx) & 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(ebp + 0x1B)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1B), 0 (8-bit) */
    MEM8(edi) = LO8(edx);
    MEM8(ebp + -21) = LO8(eax);
    esi = 0x100;
    if (CMP_EQ(_fa, _fb)) goto loc_003CD9DE; /* je: equal / zero */

loc_003CD9A5: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CD9B0; /* je: equal / zero */

loc_003CD9AA: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003CD9D7;

loc_003CD9B0: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CD9BE; /* je: equal / zero */

loc_003CD9B5: ;
    MEM32(ebp + -20) = 1;
    goto loc_003CD9D7;

loc_003CD9BE: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CD9CC; /* je: equal / zero */

loc_003CD9C3: ;
    MEM32(ebp + -20) = 2;
    goto loc_003CD9D7;

loc_003CD9CC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_003CD9D7; /* jns: not sign (positive) */

loc_003CD9D0: ;
    MEM32(ebp + -20) = 3;

loc_003CD9D7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, ecx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CD9DE; /* je: equal / zero */

loc_003CD9DB: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) | esi;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003CD9DE: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    MEM8(edi + 1) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_003CDA4C; /* je: equal / zero */

loc_003CD9EA: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 2 (32-bit) */
    MEM32(ebp + -20) = 1;
    if (CMP_BE(_fa, _fb)) goto loc_003CDAC6; /* jbe: below or equal (unsigned <=) */

loc_003CD9FB: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x5350) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax), 0x5350 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CDAC6; /* jne: not equal / not zero */

loc_003CDA09: ;
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDA19u); RECOMP_ABI_CALL(0x003C9D6Eu, sub_003C9D6E); /* call 0x003C9D6E */

loc_003CDA19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CDA3E; /* jl: less (signed <) */

loc_003CDA1D: ;
    PUSH32(esp, MEM32(ebp + -28));
    esi = MEM32(ebp + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDA28u); RECOMP_ABI_CALL(0x003C61E8u, sub_003C61E8); /* call 0x003C61E8 */

loc_003CDA28: ;
    ecx = MEM32(ebp + 0x14);
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
    edi = MEM32(ebp + 8);

loc_003CDA3E: ;
    MEM8(ebp + -13) = 0;
    MEM8(ebp + -21) = 0;
    MEM8(ebp + -29) = 0;
    SET_LO8(ebx, 1);

loc_003CDA4C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -52) = 0x41E7DC;
    MEM32(ebp + -48) = eax;
    MEM32(ebp + -44) = eax;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebp + -52;
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDA69u); RECOMP_ABI_CALL(0x003CC457u, sub_003CC457); /* call 0x003CC457 */

loc_003CDA69: ;
    MEM32(ebp + -36) = MEM32(ebp + -36) & 0;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(ebp + 0x1B)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1B), 0 (8-bit) */
    esi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003CDB28; /* jne: not equal / not zero */

loc_003CDA79: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CDB28; /* jne: not equal / not zero */

loc_003CDA82: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDADF; /* je: equal / zero */

loc_003CDA86: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CDB12; /* jl: less (signed <) */

loc_003CDA8E: ;
    eax = ebp + -36;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDA9Au); RECOMP_ABI_CALL(0x003C9D6Eu, sub_003C9D6E); /* call 0x003C9D6E */

loc_003CDA9A: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + 0x30) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_003CDB12; /* jl: less (signed <) */

loc_003CDAA3: ;
    PUSH32(esp, MEM32(ebp + -36));
    esi = MEM32(ebp + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDAAEu); RECOMP_ABI_CALL(0x003C61E8u, sub_003C61E8); /* call 0x003C61E8 */

loc_003CDAAE: ;
    ecx = MEM32(ebp + 0x14);
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
    esi = MEM32(ebp + 0x30);
    goto loc_003CDB12;

loc_003CDAC6: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CDA3E; /* je: equal / zero */

loc_003CDACF: ;
    MEM8(edi + 1) = 1;
    MEM32(ebp + -20) = 0x101;
    goto loc_003CDA3E;

loc_003CDADF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -88) = eax;
    eax = MEM32(ebp + 0x14);
    MEM32(ebp + -92) = 0x1388;
    MEM32(ebp + -84) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003CDB12; /* jl: less (signed <) */

loc_003CDAF6: ;
    eax = ebp + -52;
    PUSH32(esp, eax);
    eax = ebp + -36;
    PUSH32(esp, eax);
    eax = ebp + -92;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x30));
    PUSH32(esp, MEM32(ebp + 0x2C));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDB10u); RECOMP_ABI_CALL(0x003E0F50u, sub_003E0F50); /* call 0x003E0F50 */

loc_003CDB10: ;
    esi = eax;

loc_003CDB12: ;
    _fa = (uint32_t)(MEM8(ebp + -21)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -21), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDB28; /* je: equal / zero */

loc_003CDB18: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CDB28; /* jl: less (signed <) */

loc_003CDB1C: ;
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDB28; /* je: equal / zero */

loc_003CDB23: ;
    ecx = MEM32(ebp + -36);
    MEM32(eax) = ecx;

loc_003CDB28: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ebp + -21)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -21), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CDD49; /* jne: not equal / not zero */

loc_003CDB36: ;
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDB42; /* je: equal / zero */

loc_003CDB3D: ;
    MEM32(eax) = ebx;
    edi = ebp + -28;

loc_003CDB42: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CDC24; /* jl: less (signed <) */

loc_003CDB4A: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1B)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1B), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CDBC9; /* jne: not equal / not zero */

loc_003CDB50: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CDBC9; /* jne: not equal / not zero */

loc_003CDB58: ;
    ecx = ebp + -1056;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDB63u); RECOMP_ABI_CALL(0x003DB3CCu, sub_003DB3CC); /* call 0x003DB3CC */

loc_003CDB63: ;
    esi = MEM32(ebp + -36);
    PUSH32(esp, esi);
    MEM8(ebp + -4) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDB70u); RECOMP_ABI_CALL(0x003C61E8u, sub_003C61E8); /* call 0x003C61E8 */

loc_003CDB70: ;
    ebx = eax;
    eax = ebp + -20;
    PUSH32(esp, eax);
    eax = ebp + -52;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDB8Bu); RECOMP_ABI_CALL(0x003C61F2u, sub_003C61F2); /* call 0x003C61F2 */

loc_003CDB8B: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = ebp + -1056;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDB98u); RECOMP_ABI_CALL(0x003DE043u, sub_003DE043); /* call 0x003DE043 */

loc_003CDB98: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CDBB8; /* jl: less (signed <) */

loc_003CDB9E: ;
    _fa = (uint32_t)(MEM32(ebp + -912)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -912), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDBAB; /* je: equal / zero */

loc_003CDBA7: ;
    MEM8(ebp + -19) = MEM8(ebp + -19) | 1;
    _fa = (uint32_t)(MEM8(ebp + -19)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_003CDBAB: ;
    _fa = (uint32_t)(MEM32(ebp + -908)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -908), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDBB8; /* je: equal / zero */

loc_003CDBB4: ;
    MEM8(ebp + -19) = MEM8(ebp + -19) | 2;
    _fa = (uint32_t)(MEM8(ebp + -19)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_003CDBB8: ;
    ecx = ebp + -1056;
    MEM8(ebp + -4) = 0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDBC7u); RECOMP_ABI_CALL(0x003DB44Eu, sub_003DB44E); /* call 0x003DB44E */

loc_003CDBC7: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CDBC9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CDC24; /* jl: less (signed <) */

loc_003CDBCD: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1B)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1B), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDC0B; /* je: equal / zero */

loc_003CDBD3: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDBDFu); RECOMP_ABI_CALL(0x003C9D6Eu, sub_003C9D6E); /* call 0x003C9D6E */

loc_003CDBDF: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(ebp + 0x30) = esi;
    if (CMP_L(_fas, _fbs)) goto loc_003CDC24; /* jl: less (signed <) */

loc_003CDBE8: ;
    PUSH32(esp, MEM32(ebp + -28));
    esi = MEM32(ebp + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDBF3u); RECOMP_ABI_CALL(0x003C61E8u, sub_003C61E8); /* call 0x003C61E8 */

loc_003CDBF3: ;
    ecx = MEM32(ebp + 0x14);
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
    esi = MEM32(ebp + 0x30);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CDC0B: ;
    _fa = (uint32_t)(MEM8(ebp + -13)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -13), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDC24; /* je: equal / zero */

loc_003CDC11: ;
    _fa = (uint32_t)(MEM8(ebp + -29)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -29), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CDC24; /* jne: not equal / not zero */

loc_003CDC17: ;
    PUSH32(esp, MEM32(ebp + -28));
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDC22u); RECOMP_ABI_CALL(0x003CBAE0u, sub_003CBAE0); /* call 0x003CBAE0 */

loc_003CDC22: ;
    esi = eax;

loc_003CDC24: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ebp + -37)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -37), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDC6C; /* je: equal / zero */

loc_003CDC2C: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDC38u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003CDC38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDC46; /* je: equal / zero */

loc_003CDC3C: ;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = ebx;
    goto loc_003CDC48;

loc_003CDC46: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CDC48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003CDC53; /* jne: not equal / not zero */

loc_003CDC4E: ;
    esi = 0x8007000Eu;

loc_003CDC53: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CDD08; /* jl: less (signed <) */

loc_003CDC5B: ;
    PUSH32(esp, 0x4E20);
    ecx = eax;
    MEM32(eax + 8) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDC6Au); RECOMP_ABI_CALL(0x003C9DDDu, sub_003C9DDD); /* call 0x003C9DDD */

loc_003CDC6A: ;
    esi = eax;

loc_003CDC6C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CDD08; /* jl: less (signed <) */

loc_003CDC74: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDC8D; /* je: equal / zero */

loc_003CDC78: ;
    PUSH32(esp, 0x3E21D0);
    PUSH32(esp, 0x3E254C);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDC88u); RECOMP_ABI_CALL(0x003C9E5Bu, sub_003C9E5B); /* call 0x003C9E5B */

loc_003CDC88: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = eax;

loc_003CDC8D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CDD08; /* jl: less (signed <) */

loc_003CDC91: ;
    eax = MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDCD1; /* je: equal / zero */

loc_003CDC98: ;
    ecx = MEM32(ebp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDCD1; /* je: equal / zero */

loc_003CDC9F: ;
    _fa = (uint32_t)(MEM8(ebp + -13)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -13), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDCD1; /* je: equal / zero */

loc_003CDCA5: ;
    PUSH32(esp, eax);
    MEM32(ecx) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDCADu); RECOMP_ABI_CALL(0x003C61DDu, sub_003C61DD); /* call 0x003C61DD */

loc_003CDCAD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDCD1; /* je: equal / zero */

loc_003CDCB1: ;
    esi = MEM32(ebp + -28);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDCBAu); RECOMP_ABI_CALL(0x003C61E8u, sub_003C61E8); /* call 0x003C61E8 */

loc_003CDCBA: ;
    PUSH32(esp, esi);
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDCC2u); RECOMP_ABI_CALL(0x003C61F2u, sub_003C61F2); /* call 0x003C61F2 */

loc_003CDCC2: ;
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDCCDu); RECOMP_ABI_CALL(0x003CB9F0u, sub_003CB9F0); /* call 0x003CB9F0 */

loc_003CDCCD: ;
    esi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CDCD1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CDD08; /* jl: less (signed <) */

loc_003CDCD5: ;
    _fa = (uint32_t)(MEM8(ebp + -13)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -13), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CDD08; /* jne: not equal / not zero */

loc_003CDCDB: ;
    PUSH32(esp, MEM32(ebp + -60));
    ecx = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + -56));
    eax = ebp + -52;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -76));
    PUSH32(esp, MEM32(ebp + -64));
    PUSH32(esp, MEM32(ebp + -72));
    PUSH32(esp, MEM32(ebp + -68));
    PUSH32(esp, MEM32(ebp + -80));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDD06u); RECOMP_ABI_CALL(0x003CD848u, sub_003CD848); /* call 0x003CD848 */

loc_003CDD06: ;
    esi = eax;

loc_003CDD08: ;
    _fa = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -36), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDD18; /* je: equal / zero */

loc_003CDD0D: ;
    PUSH32(esp, MEM32(ebp + -36));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDD15u); RECOMP_ABI_CALL(0x003C9D39u, sub_003C9D39); /* call 0x003C9D39 */

loc_003CDD15: ;
    MEM32(ebp + -36) = ebx;

loc_003CDD18: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDD28; /* je: equal / zero */

loc_003CDD1D: ;
    PUSH32(esp, MEM32(ebp + -28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDD25u); RECOMP_ABI_CALL(0x003C9D39u, sub_003C9D39); /* call 0x003C9D39 */

loc_003CDD25: ;
    MEM32(ebp + -28) = ebx;

loc_003CDD28: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CDD3C; /* jl: less (signed <) */

loc_003CDD2C: ;
    _fa = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x28), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDD3C; /* je: equal / zero */

loc_003CDD31: ;
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDD3Au); RECOMP_ABI_CALL(0x003CBA90u, sub_003CBA90); /* call 0x003CBA90 */

loc_003CDD3A: ;
    esi = eax;

loc_003CDD3C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDD49; /* je: equal / zero */

loc_003CDD40: ;
    PUSH32(esp, 1);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDD49u); RECOMP_ABI_CALL(0x003CBA6Cu, sub_003CBA6C); /* call 0x003CBA6C */

loc_003CDD49: ;
    _fa = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x24), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDD5F; /* je: equal / zero */

loc_003CDD4E: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + -48));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDD59u); RECOMP_ABI_CALL(0x003CBA90u, sub_003CBA90); /* call 0x003CBA90 */

loc_003CDD59: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CDD6F; /* jl: less (signed <) */

loc_003CDD5D: ;
    esi = eax;

loc_003CDD5F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CDD6F; /* jl: less (signed <) */

loc_003CDD63: ;
    eax = MEM32(ebp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDD6F; /* je: equal / zero */

loc_003CDD6A: ;
    ecx = MEM32(ebp + -20);
    MEM32(eax) = ecx;

loc_003CDD6F: ;
    ecx = MEM32(ebp + -48);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    MEM32(ebp + -52) = 0x41E7DC;
    if (CMP_EQ(_fa, _fb)) goto loc_003CDD84; /* je: equal / zero */

loc_003CDD7D: ;
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDD84u); RECOMP_ABI_CALL(0x003CBA6Cu, sub_003CBA6C); /* call 0x003CBA6C */

loc_003CDD84: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 52; return; /* ret 48 */

}

/**
 * sub_003CDD97
 * Original: 0x003CDD97 - 0x003CDDCB (52 bytes, 19 insns)
 * Category: game_render
 * CC: cdecl, 11 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CDD97(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CDD97: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(ebp + 0x30));
    eax = ebp + -16;
    PUSH32(esp, MEM32(ebp + 0x2C));
    PUSH32(esp, MEM32(ebp + 0x28));
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDDC7u); RECOMP_ABI_CALL(0x003CD8BFu, sub_003CD8BF); /* call 0x003CD8BF */

loc_003CDDC7: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 48; return; /* ret 44 */

}

/**
 * sub_003CDDCB
 * Original: 0x003CDDCB - 0x003CDDF2 (39 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDDCB(void)
{

loc_003CDDCB: ;
    eax = ecx;
    SET_LO8(ecx, MEM8(esp + 4));
    MEM8(eax + 4) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(eax + 5) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0xC));
    MEM8(eax + 6) = LO8(ecx);
    SET_LO8(ecx, MEM8(esp + 0x10));
    MEM32(eax) = 0x41E80C;
    MEM8(eax + 7) = LO8(ecx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003CDDF9
 * Original: 0x003CDDF9 - 0x003CDE26 (45 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDDF9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003CDDF9: ;
    SET_LO8(eax, MEM8(ecx + 4));
    SET_LO8(edx, MEM8(ecx + 5));
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(edx, MEM8(ecx + 6));
    _cf = (int)((LO8(edx)) != 0);
    SET_LO8(edx, (uint32_t)(-(int32_t)LO8(edx)));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    edx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ecx + 7)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 7), LO8(edx) (8-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_003CDE26
 * Original: 0x003CDE26 - 0x003CDE43 (29 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDE26(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CDE26: ;
    eax = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CDE2A: ;
    PUSH32(esp, 8);
    POP32(esp, edx);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esp + 4), edx (32-bit) */
    SET_LO8(edx, (TEST_NZ(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(eax + ecx + 4) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CDE2A; /* jle: less or equal (signed <=) */

loc_003CDE40: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CDE43
 * Original: 0x003CDE43 - 0x003CDEA2 (95 bytes, 42 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CDE43(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CDE43: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ecx + 7)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 7), LO8(eax) (8-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003CDE59; /* jne: not equal / not zero */

loc_003CDE51: ;
    _fa = (uint32_t)(MEM8(ebp + 0x13)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x13), LO8(eax) (8-bit) */
    MEM8(ebp + -4) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003CDE5D; /* je: equal / zero */

loc_003CDE59: ;
    MEM8(ebp + -4) = 1;

loc_003CDE5D: ;
    _fa = (uint32_t)(MEM8(ecx + 6)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 6), LO8(eax) (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_003CDE6C; /* jne: not equal / not zero */

loc_003CDE63: ;
    _fa = (uint32_t)(MEM8(ebp + 0x12)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x12), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CDE6C; /* jne: not equal / not zero */

loc_003CDE68: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003CDE6E;

loc_003CDE6C: ;
    SET_LO8(ebx, 1);

loc_003CDE6E: ;
    _fa = (uint32_t)(MEM8(ecx + 5)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 5), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CDE7C; /* jne: not equal / not zero */

loc_003CDE73: ;
    _fa = (uint32_t)(MEM8(ebp + 0x11)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x11), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CDE7C; /* jne: not equal / not zero */

loc_003CDE78: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003CDE7E;

loc_003CDE7C: ;
    SET_LO8(edx, 1);

loc_003CDE7E: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 4), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CDE88; /* jne: not equal / not zero */

loc_003CDE83: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDE8C; /* je: equal / zero */

loc_003CDE88: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, 1);

loc_003CDE8C: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDE9Au); RECOMP_ABI_CALL(0x003CDDCBu, sub_003CDDCB); /* call 0x003CDDCB */

loc_003CDE9A: ;
    eax = MEM32(ebp + 8);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003CDEA2
 * Original: 0x003CDEA2 - 0x003CDEFF (93 bytes, 41 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CDEA2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CDEA2: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ecx + 7)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 7), LO8(eax) (8-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003CDEB9; /* je: equal / zero */

loc_003CDEB0: ;
    _fa = (uint32_t)(MEM8(ebp + 0x13)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x13), LO8(eax) (8-bit) */
    MEM8(ebp + -4) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_003CDEBC; /* jne: not equal / not zero */

loc_003CDEB9: ;
    MEM8(ebp + -4) = LO8(eax);

loc_003CDEBC: ;
    _fa = (uint32_t)(MEM8(ecx + 6)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 6), LO8(eax) (8-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003CDECB; /* je: equal / zero */

loc_003CDEC2: ;
    _fa = (uint32_t)(MEM8(ebp + 0x12)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x12), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDECB; /* je: equal / zero */

loc_003CDEC7: ;
    SET_LO8(ebx, 1);
    goto loc_003CDECD;

loc_003CDECB: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003CDECD: ;
    _fa = (uint32_t)(MEM8(ecx + 5)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 5), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDEDB; /* je: equal / zero */

loc_003CDED2: ;
    _fa = (uint32_t)(MEM8(ebp + 0x11)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x11), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDEDB; /* je: equal / zero */

loc_003CDED7: ;
    SET_LO8(edx, 1);
    goto loc_003CDEDD;

loc_003CDEDB: ;
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003CDEDD: ;
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 4), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDEE9; /* je: equal / zero */

loc_003CDEE2: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDEE9; /* je: equal / zero */

loc_003CDEE7: ;
    SET_LO8(eax, 1);

loc_003CDEE9: ;
    PUSH32(esp, MEM32(ebp + -4));
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDEF7u); RECOMP_ABI_CALL(0x003CDDCBu, sub_003CDDCB); /* call 0x003CDDCB */

loc_003CDEF7: ;
    eax = MEM32(ebp + 8);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003CDEFF
 * Original: 0x003CDEFF - 0x003CDF33 (52 bytes, 22 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CDEFF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CDEFF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(ecx + 7)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 7), LO8(eax) (8-bit) */
    MEM32(ebp + -4) = eax;
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(MEM8(ecx + 6)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 6), LO8(eax) (8-bit) */
    PUSH32(esp, edx);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(MEM8(ecx + 5)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 5), LO8(eax) (8-bit) */
    PUSH32(esp, edx);
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(MEM8(ecx + 4)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 4), LO8(eax) (8-bit) */
    ecx = MEM32(ebp + 8);
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CDF2Cu); RECOMP_ABI_CALL(0x003CDDCBu, sub_003CDDCB); /* call 0x003CDDCB */

loc_003CDF2C: ;
    eax = MEM32(ebp + 8);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CDF33
 * Original: 0x003CDF33 - 0x003CDF4C (25 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDF33(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CDF33: ;
    eax = ecx;
    MEM32(eax) = 0x41E810;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = eax + 4;

loc_003CDF40: ;
    MEM32(ecx) = edx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CDF40; /* jle: less or equal (signed <=) */

loc_003CDF4B: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003CDF4C
 * Original: 0x003CDF4C - 0x003CDF73 (39 bytes, 11 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDF4C(void)
{

loc_003CDF4C: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(eax) = 0x41E810;
    MEM32(eax + 0x10) = ecx;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003CDF7A
 * Original: 0x003CDF7A - 0x003CDF99 (31 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDF7A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CDF7A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ecx + 4;

loc_003CDF7F: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDF95; /* je: equal / zero */

loc_003CDF87: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CDF7F; /* jle: less or equal (signed <=) */

loc_003CDF90: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003CDF92: ;
    esp += 8; return; /* ret 4 */

loc_003CDF95: ;
    SET_LO8(eax, 1);
    goto loc_003CDF92;

}

/**
 * sub_003CDF99
 * Original: 0x003CDF99 - 0x003CDFBB (34 bytes, 19 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDF99(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CDF99: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CDF9F: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003CDFA7u); RECOMP_ABI_CALL(0x003CDF7Au, sub_003CDF7A); /* call 0x003CDF7A */

loc_003CDFA7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDFB7; /* je: equal / zero */

loc_003CDFAB: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CDF9F; /* jle: less or equal (signed <=) */

loc_003CDFB1: ;
    PUSH32(esp, 4);
    POP32(esp, eax);

loc_003CDFB4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003CDFB7: ;
    eax = esi;
    goto loc_003CDFB4;

}

/**
 * sub_003CDFBB
 * Original: 0x003CDFBB - 0x003CDFF6 (59 bytes, 28 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDFBB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CDFBB: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CDFEB; /* jle: less or equal (signed <=) */

loc_003CDFC7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDFE6; /* je: equal / zero */

loc_003CDFCC: ;
    edx = MEM32(ecx + eax * 4 + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDFE6; /* je: equal / zero */

loc_003CDFD5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CDFDE; /* jne: not equal / not zero */

loc_003CDFDA: ;
    PUSH32(esp, edi);
    POP32(esp, esi);
    goto loc_003CDFE2;

loc_003CDFDE: ;
    esi = MEM32(ecx + edi * 4 + 4);

loc_003CDFE2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CDFF2; /* je: equal / zero */

loc_003CDFE6: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CDFC7; /* jl: less (signed <) */

loc_003CDFEB: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003CDFED: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003CDFF2: ;
    SET_LO8(eax, 1);
    goto loc_003CDFED;

}

/**
 * sub_003CDFF6
 * Original: 0x003CDFF6 - 0x003CE018 (34 bytes, 19 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CDFF6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CDFF6: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CDFFC: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003CE004u); RECOMP_ABI_CALL(0x003CDFBBu, sub_003CDFBB); /* call 0x003CDFBB */

loc_003CE004: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE014; /* jne: not equal / not zero */

loc_003CE008: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CDFFC; /* jle: less or equal (signed <=) */

loc_003CE00E: ;
    PUSH32(esp, 4);
    POP32(esp, eax);

loc_003CE011: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003CE014: ;
    eax = esi;
    goto loc_003CE011;

}

/**
 * sub_003CE018
 * Original: 0x003CE018 - 0x003CE033 (27 bytes, 10 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE018(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE018: ;
    PUSH32(esp, esi);
    esi = ecx;
    goto loc_003CE025;

loc_003CE01D: ;
    MEM32(esi + eax * 4 + 4) = 4;

loc_003CE025: ;
    ecx = esi;
    PUSH32(esp, 0x003CE02Cu); RECOMP_ABI_CALL(0x003CDFF6u, sub_003CDFF6); /* call 0x003CDFF6 */

loc_003CE02C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE01D; /* jne: not equal / not zero */

loc_003CE031: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CE033
 * Original: 0x003CE033 - 0x003CE053 (32 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE033(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE033: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE04D; /* je: equal / zero */

loc_003CE03C: ;
    ecx = MEM32(ecx + eax * 4 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE04D; /* je: equal / zero */

loc_003CE044: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE04D; /* je: equal / zero */

loc_003CE049: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003CE050;

loc_003CE04D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003CE050: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CE053
 * Original: 0x003CE053 - 0x003CE075 (34 bytes, 19 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE053(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE053: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CE059: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003CE061u); RECOMP_ABI_CALL(0x003CE033u, sub_003CE033); /* call 0x003CE033 */

loc_003CE061: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE071; /* je: equal / zero */

loc_003CE065: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CE059; /* jle: less or equal (signed <=) */

loc_003CE06B: ;
    PUSH32(esp, 4);
    POP32(esp, eax);

loc_003CE06E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003CE071: ;
    eax = esi;
    goto loc_003CE06E;

}

/**
 * sub_003CE075
 * Original: 0x003CE075 - 0x003CE096 (33 bytes, 15 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE075(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE075: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CE077: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE080; /* jne: not equal / not zero */

loc_003CE07C: ;
    PUSH32(esp, eax);
    POP32(esp, edx);
    goto loc_003CE084;

loc_003CE080: ;
    edx = MEM32(ecx + eax * 4 + 4);

loc_003CE084: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE093; /* je: equal / zero */

loc_003CE08A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CE077; /* jle: less or equal (signed <=) */

loc_003CE090: ;
    PUSH32(esp, 4);
    POP32(esp, eax);

loc_003CE093: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CE096
 * Original: 0x003CE096 - 0x003CE0B7 (33 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE096(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE096: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CE09C: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003CE0A4u); RECOMP_ABI_CALL(0x003CDF7Au, sub_003CDF7A); /* call 0x003CDF7A */

loc_003CE0A4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE0B3; /* je: equal / zero */

loc_003CE0A8: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CE09C; /* jle: less or equal (signed <=) */

loc_003CE0AE: ;
    SET_LO8(eax, 1);

loc_003CE0B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003CE0B3: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003CE0B0;

}

/**
 * sub_003CE0B7
 * Original: 0x003CE0B7 - 0x003CE0F8 (65 bytes, 27 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CE0B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE0B7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, 3);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CE0C9u); RECOMP_ABI_CALL(0x003CE075u, sub_003CE075); /* call 0x003CE075 */

loc_003CE0C9: ;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CE0D3u); RECOMP_ABI_CALL(0x003CE075u, sub_003CE075); /* call 0x003CE075 */

loc_003CE0D3: ;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CE0DDu); RECOMP_ABI_CALL(0x003CE075u, sub_003CE075); /* call 0x003CE075 */

loc_003CE0DD: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CE0E7u); RECOMP_ABI_CALL(0x003CE075u, sub_003CE075); /* call 0x003CE075 */

loc_003CE0E7: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CE0F0u); RECOMP_ABI_CALL(0x003CDF4Cu, sub_003CDF4C); /* call 0x003CDF4C */

loc_003CE0F0: ;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CE0F8
 * Original: 0x003CE0F8 - 0x003CE126 (46 bytes, 20 insns)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE0F8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE0F8: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);

loc_003CE0FB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE116; /* je: equal / zero */

loc_003CE100: ;
    eax = MEM32(ecx + edx * 4 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE116; /* je: equal / zero */

loc_003CE109: ;
    esi = MEM32(esp + edx * 4 + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE116; /* je: equal / zero */

loc_003CE112: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE122; /* jne: not equal / not zero */

loc_003CE116: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CE0FB; /* jle: less or equal (signed <=) */

loc_003CE11C: ;
    SET_LO8(eax, 1);

loc_003CE11E: ;
    POP32(esp, esi);
    esp += 24; return; /* ret 20 */

loc_003CE122: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003CE11E;

}

/**
 * sub_003CE126
 * Original: 0x003CE126 - 0x003CE142 (28 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE126(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE126: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE13C; /* je: equal / zero */

loc_003CE12E: ;
    edx = MEM32(eax + 0x34);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE139; /* je: equal / zero */

loc_003CE135: ;
    MEM32(edx + 0x30) = MEM32(edx + 0x30) & 0;
    _fa = (uint32_t)(MEM32(edx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003CE139: ;
    MEM32(eax + 0x34) = ecx;

loc_003CE13C: ;
    MEM32(ecx + 0x30) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CE142
 * Original: 0x003CE142 - 0x003CE166 (36 bytes, 14 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE142(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE142: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE160; /* je: equal / zero */

loc_003CE148: ;
    ecx = MEM32(ecx + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE15C; /* je: equal / zero */

loc_003CE14F: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x003CE158u); RECOMP_ABI_CALL(0x003CE142u, sub_003CE142); /* call 0x003CE142 */

loc_003CE158: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE160; /* jne: not equal / not zero */

loc_003CE15C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003CE163;

loc_003CE160: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003CE163: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CE166
 * Original: 0x003CE166 - 0x003CE18A (36 bytes, 12 insns)
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003CE166(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE166: ;
    eax = MEM32(esp + 4);
    eax = eax * 4 + 0x20;
    goto loc_003CE17A;

loc_003CE173: ;
    ecx = MEM32(ecx + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE185; /* je: equal / zero */

loc_003CE17A: ;
    _fa = (uint32_t)(MEM32(eax + ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE173; /* je: equal / zero */

loc_003CE180: ;
    eax = MEM32(eax + ecx);
    goto loc_003CE187;

loc_003CE185: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CE187: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CE18A
 * Original: 0x003CE18A - 0x003CE1AD (35 bytes, 18 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CE18A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE18A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(eax) = 0x41E810;
    esi = ecx + 0x1C;
    edi = eax + 4;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CE1AD
 * Original: 0x003CE1AD - 0x003CE1CD (32 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE1AD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE1AD: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = ecx;
    PUSH32(esp, 4);
    edx = eax + 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ecx);

loc_003CE1BD: ;
    edi = MEM32(esi + edx);
    MEM32(edx) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003CE1BD; /* jne: not equal / not zero */

loc_003CE1C8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CE1CD
 * Original: 0x003CE1CD - 0x003CE1EA (29 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE1CD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE1CD: ;
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2C), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE1D8; /* je: equal / zero */

loc_003CE1D3: ;
    ecx = MEM32(ecx + 0x38);
    goto loc_003CE1DB;

loc_003CE1D8: ;
    ecx = MEM32(ecx + 0x3C);

loc_003CE1DB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE1E4; /* je: equal / zero */

loc_003CE1DF: ;
    ecx = MEM32(ecx + 8);
    goto loc_003CE1E7;

loc_003CE1E4: ;
    PUSH32(esp, 0xF);
    POP32(esp, ecx);

loc_003CE1E7: ;
    eax = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_003CE1EA
 * Original: 0x003CE1EA - 0x003CE205 (27 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CE1EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE1EA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x41E80C;
    ecx = MEM32(ecx + 0x18);
    MEM32(eax + 4) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CE205
 * Original: 0x003CE205 - 0x003CE220 (27 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CE205(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE205: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x41E80C;
    ecx = MEM32(ecx + 0x20);
    MEM32(eax + 4) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CE220
 * Original: 0x003CE220 - 0x003CE23B (27 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CE220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE220: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x41E80C;
    ecx = MEM32(ecx + 0x28);
    MEM32(eax + 4) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CE23B
 * Original: 0x003CE23B - 0x003CE25C (33 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE23B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE23B: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax + 0x20)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x20), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE256; /* jne: not equal / not zero */

loc_003CE248: ;
    _fa = (uint32_t)(MEM8(ecx + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x10), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE252; /* jne: not equal / not zero */

loc_003CE24D: ;
    _fa = (uint32_t)(MEM8(eax + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x18), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE256; /* jne: not equal / not zero */

loc_003CE252: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003CE259;

loc_003CE256: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003CE259: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CE25C
 * Original: 0x003CE25C - 0x003CE27D (33 bytes, 14 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE25C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE25C: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax + 0x28)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x28), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE277; /* jne: not equal / not zero */

loc_003CE269: ;
    _fa = (uint32_t)(MEM8(ecx + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x10), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE273; /* je: equal / zero */

loc_003CE26E: ;
    _fa = (uint32_t)(MEM8(eax + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x18), LO8(edx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE277; /* jne: not equal / not zero */

loc_003CE273: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003CE27A;

loc_003CE277: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003CE27A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CE27D
 * Original: 0x003CE27D - 0x003CE29B (30 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE27D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE27D: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE297; /* je: equal / zero */

loc_003CE285: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE297; /* je: equal / zero */

loc_003CE28A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CE294; /* jl: less (signed <) */

loc_003CE28F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CE297; /* jle: less or equal (signed <=) */

loc_003CE294: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_003CE297: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_003CE29B
 * Original: 0x003CE29B - 0x003CE2AF (20 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE29B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE29B: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE2AB; /* je: equal / zero */

loc_003CE2A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE2AB; /* je: equal / zero */

loc_003CE2A8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_003CE2AB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_003CE2AF
 * Original: 0x003CE2AF - 0x003CE2CE (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003CE2AF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE2AF: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE2BD; /* jne: not equal / not zero */

loc_003CE2B7: ;
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x30), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE2C7; /* je: equal / zero */

loc_003CE2BD: ;
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x30), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE2CB; /* jne: not equal / not zero */

loc_003CE2C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE2CB; /* jne: not equal / not zero */

loc_003CE2C7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_003CE2CB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_003CE2CE
 * Original: 0x003CE2CE - 0x003CE2EC (30 bytes, 16 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE2CE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE2CE: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    eax = ecx;
    PUSH32(esp, 4);
    edx = eax + 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);

loc_003CE2DE: ;
    SET_LO8(ecx, MEM8(esi + edx));
    MEM8(edx) = LO8(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003CE2DE; /* jne: not equal / not zero */

loc_003CE2E7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CE2EC
 * Original: 0x003CE2EC - 0x003CE303 (23 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CE2EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003CE2EC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x42A14C);
    eax = ebp + -1;
    PUSH32(esp, eax);
    MEM8(ebp + -1) = 0x21;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CE302u); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_003CE302: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003CE303
 * Original: 0x003CE303 - 0x003CE32A (39 bytes, 17 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE303(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003CE303: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x40);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x40);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_003CE31A; /* jge: greater or equal (signed >=) */

loc_003CE316: ;
    SET_LO8(eax, 1);
    goto loc_003CE326;

loc_003CE31A: ;
    if (CMP_LE(_fas, _fbs)) goto loc_003CE320; /* jle: less or equal (signed <=) */

loc_003CE31C: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003CE326;

loc_003CE320: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003CE326: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CE32A
 * Original: 0x003CE32A - 0x003CE33F (21 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003CE32A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE32A: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE33C; /* je: equal / zero */

loc_003CE331: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x3E46F4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x3E46F4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE33E; /* jne: not equal / not zero */

loc_003CE33C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CE33E: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003CE33F
 * Original: 0x003CE33F - 0x003CE393 (84 bytes, 38 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE33F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE33F: ;
    eax = MEM32(esp + 4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003CE388; /* je: equal / zero */

loc_003CE349: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003CE36E; /* je: equal / zero */

loc_003CE34C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003CE353; /* je: equal / zero */

loc_003CE34F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003CE390;

loc_003CE353: ;
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x30), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE369; /* jne: not equal / not zero */

loc_003CE358: ;
    ecx = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE369; /* je: equal / zero */

loc_003CE360: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE369; /* je: equal / zero */

loc_003CE365: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003CE390;

loc_003CE369: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003CE390;

loc_003CE36E: ;
    ecx = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE365; /* je: equal / zero */

loc_003CE375: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE365; /* je: equal / zero */

loc_003CE37A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE365; /* je: equal / zero */

loc_003CE37F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE390; /* jne: not equal / not zero */

loc_003CE386: ;
    goto loc_003CE365;

loc_003CE388: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2C), edx (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */

loc_003CE390: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CE393
 * Original: 0x003CE393 - 0x003CE503 (368 bytes, 138 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CE393(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE393: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    if (CMP_G(_fas, _fbs)) goto loc_003CE427; /* jg: greater (signed >) */

loc_003CE3A9: ;
    if (CMP_EQ(_fa, _fb)) goto loc_003CE417; /* je: equal / zero */

loc_003CE3AB: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003CE3C3; /* je: equal / zero */

loc_003CE3B0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003CE40E; /* je: equal / zero */

loc_003CE3B3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003CE3F7; /* je: equal / zero */

loc_003CE3B7: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003CE400; /* je: equal / zero */

loc_003CE3BA: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE400; /* je: equal / zero */

loc_003CE3BE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE400; /* je: equal / zero */

loc_003CE3C3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE45F; /* jne: not equal / not zero */

loc_003CE3CC: ;
    eax = MEM32(esi + 0x30);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003CE45F; /* je: equal / zero */

loc_003CE3D8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003CE4F6; /* je: equal / zero */

loc_003CE3DF: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003CE4C8; /* je: equal / zero */

loc_003CE3E8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003CE4A0; /* je: equal / zero */

loc_003CE3EF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */

loc_003CE3F1: ;
    if (CMP_NE(_fa, _fb)) goto loc_003CE45F; /* jne: not equal / not zero */

loc_003CE3F3: ;
    SET_LO8(eax, 1);
    goto loc_003CE461;

loc_003CE3F7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE400; /* je: equal / zero */

loc_003CE3FB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE45F; /* jne: not equal / not zero */

loc_003CE400: ;
    ecx = esi;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CE408u); RECOMP_ABI_CALL(0x003CE23Bu, sub_003CE23B); /* call 0x003CE23B */

loc_003CE408: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE3C3; /* je: equal / zero */

loc_003CE40C: ;
    goto loc_003CE3F3;

loc_003CE40E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE3C3; /* jne: not equal / not zero */

loc_003CE412: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    goto loc_003CE454;

loc_003CE417: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE420; /* je: equal / zero */

loc_003CE41B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE3C3; /* jne: not equal / not zero */

loc_003CE420: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003CE3C3; /* jge: greater or equal (signed >=) */

loc_003CE425: ;
    goto loc_003CE3F3;

loc_003CE427: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CE3BA; /* jl: less (signed <) */

loc_003CE42C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CE48A; /* jle: less or equal (signed <=) */

loc_003CE431: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE448; /* je: equal / zero */

loc_003CE436: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE3BA; /* jne: not equal / not zero */

loc_003CE43F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE3C3; /* jne: not equal / not zero */

loc_003CE443: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    goto loc_003CE3F1;

loc_003CE448: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE472; /* jne: not equal / not zero */

loc_003CE44C: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE468; /* jne: not equal / not zero */

loc_003CE452: ;
    PUSH32(esp, 1);

loc_003CE454: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CE45Bu); RECOMP_ABI_CALL(0x003CE23Bu, sub_003CE23B); /* call 0x003CE23B */

loc_003CE45B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE3F3; /* jne: not equal / not zero */

loc_003CE45F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003CE461: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

loc_003CE468: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE45F; /* jne: not equal / not zero */

loc_003CE46E: ;
    PUSH32(esp, 2);
    goto loc_003CE454;

loc_003CE472: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE3C3; /* jne: not equal / not zero */

loc_003CE47B: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE452; /* je: equal / zero */

loc_003CE480: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE45F; /* jne: not equal / not zero */

loc_003CE486: ;
    PUSH32(esp, 3);
    goto loc_003CE454;

loc_003CE48A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE3F3; /* je: equal / zero */

loc_003CE492: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE3C3; /* jne: not equal / not zero */

loc_003CE49B: ;
    goto loc_003CE3F3;

loc_003CE4A0: ;
    PUSH32(esp, 2);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CE4A9u); RECOMP_ABI_CALL(0x003CE25Cu, sub_003CE25C); /* call 0x003CE25C */

loc_003CE4A9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE4B6; /* je: equal / zero */

loc_003CE4AD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE3F3; /* jne: not equal / not zero */

loc_003CE4B6: ;
    PUSH32(esp, 1);

loc_003CE4B8: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CE4BFu); RECOMP_ABI_CALL(0x003CE25Cu, sub_003CE25C); /* call 0x003CE25C */

loc_003CE4BF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE45F; /* je: equal / zero */

loc_003CE4C3: ;
    goto loc_003CE3EF;

loc_003CE4C8: ;
    PUSH32(esp, 0);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CE4D1u); RECOMP_ABI_CALL(0x003CE25Cu, sub_003CE25C); /* call 0x003CE25C */

loc_003CE4D1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE4DD; /* je: equal / zero */

loc_003CE4D5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE3F3; /* je: equal / zero */

loc_003CE4DD: ;
    PUSH32(esp, 1);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CE4E6u); RECOMP_ABI_CALL(0x003CE25Cu, sub_003CE25C); /* call 0x003CE25C */

loc_003CE4E6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE4F2; /* je: equal / zero */

loc_003CE4EA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE3F3; /* je: equal / zero */

loc_003CE4F2: ;
    PUSH32(esp, 2);
    goto loc_003CE4B8;

loc_003CE4F6: ;
    PUSH32(esp, ebx);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CE4FEu); RECOMP_ABI_CALL(0x003CE25Cu, sub_003CE25C); /* call 0x003CE25C */

loc_003CE4FE: ;
    goto loc_003CE45B;

}

/**
 * sub_003CE503
 * Original: 0x003CE503 - 0x003CE54D (74 bytes, 34 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CE503(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE503: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CE51Au); RECOMP_ABI_CALL(0x003CE393u, sub_003CE393); /* call 0x003CE393 */

loc_003CE51A: ;
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 2);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CE525u); RECOMP_ABI_CALL(0x003CE393u, sub_003CE393); /* call 0x003CE393 */

loc_003CE525: ;
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CE530u); RECOMP_ABI_CALL(0x003CE393u, sub_003CE393); /* call 0x003CE393 */

loc_003CE530: ;
    ecx = esi;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CE53Bu); RECOMP_ABI_CALL(0x003CE393u, sub_003CE393); /* call 0x003CE393 */

loc_003CE53B: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CE544u); RECOMP_ABI_CALL(0x003CDDCBu, sub_003CDDCB); /* call 0x003CDDCB */

loc_003CE544: ;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CE54D
 * Original: 0x003CE54D - 0x003CE5A1 (84 bytes, 39 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE54D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CE54D: ;
    PUSH32(esp, ecx);
    MEM32(esp) = MEM32(esp) & 0;
    _fa = (uint32_t)(MEM32(esp)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebp = ecx;
    PUSH32(esp, edi);
    ebx = ebp + 4;

loc_003CE55B: ;
    eax = MEM32(ebx);
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE587; /* je: equal / zero */

loc_003CE564: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = eax + 0x20;

loc_003CE569: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = ebp;
    PUSH32(esp, 0x003CE575u); RECOMP_ABI_CALL(0x003CE393u, sub_003CE393); /* call 0x003CE393 */

loc_003CE575: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE57E; /* je: equal / zero */

loc_003CE579: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE59D; /* je: equal / zero */

loc_003CE57E: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CE569; /* jle: less or equal (signed <=) */

loc_003CE587: ;
    MEM32(esp + 0x10) = MEM32(esp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CE55B; /* jle: less or equal (signed <=) */

loc_003CE595: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003CE597: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_003CE59D: ;
    SET_LO8(eax, 1);
    goto loc_003CE597;

}

/**
 * sub_003CE5A1
 * Original: 0x003CE5A1 - 0x003CE74C (427 bytes, 156 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CE5A1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE5A1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x38) (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003CE6FD; /* jne: not equal / not zero */

loc_003CE5B3: ;
    edx = MEM32(ecx + 0x2C);
    PUSH32(esp, 4);
    POP32(esp, eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003CE69E; /* jg: greater (signed >) */

loc_003CE5C1: ;
    if (CMP_EQ(_fa, _fb)) goto loc_003CE63D; /* je: equal / zero */

loc_003CE5C3: ;
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003CE748; /* je: equal / zero */

loc_003CE5CC: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003CE618; /* je: equal / zero */

loc_003CE5CF: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003CE6B6; /* jne: not equal / not zero */

loc_003CE5D7: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE5E2; /* jne: not equal / not zero */

loc_003CE5DE: ;
    ebx = eax;
    goto loc_003CE5E9;

loc_003CE5E2: ;
    edx = MEM32(ecx + 4);
    ebx = MEM32(edx + edi * 4 + 0x1C);

loc_003CE5E9: ;
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE5F7; /* jne: not equal / not zero */

loc_003CE5F0: ;
    edx = eax;
    goto loc_003CE687;

loc_003CE5F7: ;
    edx = MEM32(ecx + 4);
    goto loc_003CE683;

loc_003CE5FF: ;
    edx = MEM32(ecx + 0xC);
    edi = MEM32(edx + edi * 4 + 0x1C);

loc_003CE606: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE611; /* je: equal / zero */

loc_003CE60A: ;
    eax = MEM32(ecx + 0xC);

loc_003CE60D: ;
    eax = MEM32(eax + esi * 4 + 0x1C);

loc_003CE611: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    goto loc_003CE743;

loc_003CE618: ;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE623; /* jne: not equal / not zero */

loc_003CE61F: ;
    esi = eax;
    goto loc_003CE62A;

loc_003CE623: ;
    esi = MEM32(ecx + 4);
    esi = MEM32(esi + edx * 4 + 0x1C);

loc_003CE62A: ;
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE741; /* je: equal / zero */

loc_003CE635: ;
    eax = MEM32(ecx + 4);
    goto loc_003CE73D;

loc_003CE63D: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE648; /* jne: not equal / not zero */

loc_003CE644: ;
    ebx = eax;
    goto loc_003CE64F;

loc_003CE648: ;
    edx = MEM32(ecx + 4);
    ebx = MEM32(edx + edi * 4 + 0x1C);

loc_003CE64F: ;
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE65A; /* jne: not equal / not zero */

loc_003CE656: ;
    edx = eax;
    goto loc_003CE661;

loc_003CE65A: ;
    edx = MEM32(ecx + 4);
    edx = MEM32(edx + esi * 4 + 0x1C);

loc_003CE661: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE715; /* jne: not equal / not zero */

loc_003CE669: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE671; /* jne: not equal / not zero */

loc_003CE66D: ;
    ebx = eax;
    goto loc_003CE678;

loc_003CE671: ;
    edx = MEM32(ecx + 8);
    ebx = MEM32(edx + edi * 4 + 0x1C);

loc_003CE678: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE5F0; /* je: equal / zero */

loc_003CE680: ;
    edx = MEM32(ecx + 8);

loc_003CE683: ;
    edx = MEM32(edx + esi * 4 + 0x1C);

loc_003CE687: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE715; /* jne: not equal / not zero */

loc_003CE68F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE5FF; /* jne: not equal / not zero */

loc_003CE697: ;
    edi = eax;
    goto loc_003CE606;

loc_003CE69E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CE6B6; /* jl: less (signed <) */

loc_003CE6A3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 7 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CE748; /* jle: less or equal (signed <=) */

loc_003CE6AC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE715; /* je: equal / zero */

loc_003CE6B1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xD (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE715; /* je: equal / zero */

loc_003CE6B6: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE6C1; /* jne: not equal / not zero */

loc_003CE6BD: ;
    ebx = eax;
    goto loc_003CE6C8;

loc_003CE6C1: ;
    edx = MEM32(ecx + 4);
    ebx = MEM32(edx + edi * 4 + 0x1C);

loc_003CE6C8: ;
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE6D3; /* jne: not equal / not zero */

loc_003CE6CF: ;
    edx = eax;
    goto loc_003CE6DA;

loc_003CE6D3: ;
    edx = MEM32(ecx + 4);
    edx = MEM32(edx + esi * 4 + 0x1C);

loc_003CE6DA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE715; /* jne: not equal / not zero */

loc_003CE6DE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE6E6; /* jne: not equal / not zero */

loc_003CE6E2: ;
    edi = eax;
    goto loc_003CE6ED;

loc_003CE6E6: ;
    edx = MEM32(ecx + 8);
    edi = MEM32(edx + edi * 4 + 0x1C);

loc_003CE6ED: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE611; /* je: equal / zero */

loc_003CE6F5: ;
    eax = MEM32(ecx + 8);
    goto loc_003CE60D;

loc_003CE6FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x3C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE715; /* jne: not equal / not zero */

loc_003CE702: ;
    eax = MEM32(ecx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE748; /* je: equal / zero */

loc_003CE709: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE71E; /* je: equal / zero */

loc_003CE70E: ;
    if (CMP_LE(_fas, _fbs)) goto loc_003CE715; /* jle: less or equal (signed <=) */

loc_003CE710: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CE748; /* jle: less or equal (signed <=) */

loc_003CE715: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003CE717: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_003CE71E: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, 4);
    POP32(esp, eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE72C; /* jne: not equal / not zero */

loc_003CE728: ;
    esi = eax;
    goto loc_003CE733;

loc_003CE72C: ;
    esi = MEM32(ecx + 0xC);
    esi = MEM32(esi + edx * 4 + 0x1C);

loc_003CE733: ;
    edx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE741; /* je: equal / zero */

loc_003CE73A: ;
    eax = MEM32(ecx + 0xC);

loc_003CE73D: ;
    eax = MEM32(eax + edx * 4 + 0x1C);

loc_003CE741: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */

loc_003CE743: ;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    goto loc_003CE717;

loc_003CE748: ;
    SET_LO8(eax, 1);
    goto loc_003CE717;

}

/**
 * sub_003CE74C
 * Original: 0x003CE74C - 0x003CE7A5 (89 bytes, 34 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CE74C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE74C: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x38) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE76C; /* jne: not equal / not zero */

loc_003CE755: ;
    _fa = (uint32_t)(MEM32(ecx + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x2C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE76C; /* jne: not equal / not zero */

loc_003CE75B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x34), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE767; /* je: equal / zero */

loc_003CE762: ;
    _fa = (uint32_t)(MEM8(ecx + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x10), LO8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE7A0; /* je: equal / zero */

loc_003CE767: ;
    ecx = MEM32(ecx + 4);
    goto loc_003CE793;

loc_003CE76C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x3C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE7A0; /* jne: not equal / not zero */

loc_003CE771: ;
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x30), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE7A0; /* jne: not equal / not zero */

loc_003CE777: ;
    eax = MEM32(ecx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE7A0; /* je: equal / zero */

loc_003CE77F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE7A0; /* je: equal / zero */

loc_003CE784: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x34), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE790; /* je: equal / zero */

loc_003CE78B: ;
    _fa = (uint32_t)(MEM8(ecx + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x10), LO8(eax) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE7A0; /* jne: not equal / not zero */

loc_003CE790: ;
    ecx = MEM32(ecx + 0xC);

loc_003CE793: ;
    _fa = (uint32_t)(MEM8(ecx + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x14), LO8(eax) (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ecx + 0x14) = LO8(eax);
    SET_LO8(eax, 1);
    goto loc_003CE7A2;

loc_003CE7A0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003CE7A2: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CE7A5
 * Original: 0x003CE7A5 - 0x003CE97B (470 bytes, 162 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CE7A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE7A5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x38) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003CE8B8; /* jne: not equal / not zero */

loc_003CE7B9: ;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE7C5; /* je: equal / zero */

loc_003CE7BF: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE7DC; /* je: equal / zero */

loc_003CE7C5: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 5 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CE81B; /* jl: less (signed <) */

loc_003CE7CD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 7 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CE7E5; /* jle: less or equal (signed <=) */

loc_003CE7D2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE7DC; /* je: equal / zero */

loc_003CE7D7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE81B; /* jne: not equal / not zero */

loc_003CE7DC: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003CE7DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

loc_003CE7E5: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE974; /* jne: not equal / not zero */

loc_003CE7EF: ;
    eax = MEM32(ebp + 0xC);
    ecx = eax + esi + 0x20;
    eax = MEM32(ebp + 0x10);
    SET_LO8(edx, MEM8(ecx));
    eax = eax + esi + 0x20;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE974; /* je: equal / zero */

loc_003CE807: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ecx) = LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */

loc_003CE811: ;
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(eax) = LO8(ecx);
    goto loc_003CE974;

loc_003CE81B: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CE822u); RECOMP_ABI_CALL(0x003CE29Bu, sub_003CE29B); /* call 0x003CE29B */

loc_003CE822: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE82C; /* je: equal / zero */

loc_003CE826: ;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE7DC; /* jne: not equal / not zero */

loc_003CE82C: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE974; /* jne: not equal / not zero */

loc_003CE836: ;
    eax = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 0x10);
    edi = eax + esi + 0x20;
    SET_LO8(ecx, MEM8(edi));
    eax = ebx + esi + 0x20;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE859; /* je: equal / zero */

loc_003CE84A: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(edi) = LO8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0 (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(eax) = LO8(ecx);

loc_003CE859: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = esi + 4;

loc_003CE860: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CE86Au); RECOMP_ABI_CALL(0x003CE33Fu, sub_003CE33F); /* call 0x003CE33F */

loc_003CE86A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE8A7; /* je: equal / zero */

loc_003CE86E: ;
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE87A; /* je: equal / zero */

loc_003CE874: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE8A7; /* je: equal / zero */

loc_003CE87A: ;
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, 4);
    POP32(esp, eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE888; /* jne: not equal / not zero */

loc_003CE884: ;
    ecx = eax;
    goto loc_003CE88E;

loc_003CE888: ;
    ecx = MEM32(edi);
    ecx = MEM32(ecx + edx * 4 + 0x1C);

loc_003CE88E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE898; /* je: equal / zero */

loc_003CE892: ;
    eax = MEM32(edi);
    eax = MEM32(eax + ebx * 4 + 0x1C);

loc_003CE898: ;
    ebx = MEM32(edi);
    MEM32(ebx + edx * 4 + 0x1C) = eax;
    eax = MEM32(edi);
    ebx = MEM32(ebp + 0x10);
    MEM32(eax + ebx * 4 + 0x1C) = ecx;

loc_003CE8A7: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CE860; /* jle: less or equal (signed <=) */

loc_003CE8B3: ;
    goto loc_003CE974;

loc_003CE8B8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x3C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE7DC; /* jne: not equal / not zero */

loc_003CE8C1: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE8D1; /* je: equal / zero */

loc_003CE8C8: ;
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE7DC; /* jne: not equal / not zero */

loc_003CE8D1: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE913; /* je: equal / zero */

loc_003CE8D9: ;
    if (CMP_LE(_fas, _fbs)) goto loc_003CE7DC; /* jle: less or equal (signed <=) */

loc_003CE8DF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003CE7DC; /* jg: greater (signed >) */

loc_003CE8E8: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE974; /* jne: not equal / not zero */

loc_003CE8F1: ;
    eax = MEM32(ebp + 0xC);
    ecx = eax + esi + 0x28;
    eax = MEM32(ebp + 0x10);
    SET_LO8(edx, MEM8(ecx));
    eax = eax + esi + 0x28;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE974; /* je: equal / zero */

loc_003CE905: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ebx) (8-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ecx) = LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    goto loc_003CE811;

loc_003CE913: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CE91Au); RECOMP_ABI_CALL(0x003CE29Bu, sub_003CE29B); /* call 0x003CE29B */

loc_003CE91A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE7DC; /* jne: not equal / not zero */

loc_003CE922: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), LO8(ebx) (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE974; /* jne: not equal / not zero */

loc_003CE927: ;
    edx = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 0x10);
    SET_LO8(ecx, MEM8(edx + esi + 0x28));
    eax = edi + esi + 0x28;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(MEM8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), MEM8(eax) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE949; /* je: equal / zero */

loc_003CE939: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), LO8(ebx) (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(edx + esi + 0x28) = LO8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(eax) = LO8(ecx);

loc_003CE949: ;
    PUSH32(esp, 4);
    POP32(esp, eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CE954; /* jne: not equal / not zero */

loc_003CE950: ;
    ecx = eax;
    goto loc_003CE95B;

loc_003CE954: ;
    ecx = MEM32(esi + 0xC);
    ecx = MEM32(ecx + edx * 4 + 0x1C);

loc_003CE95B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CE966; /* je: equal / zero */

loc_003CE95F: ;
    eax = MEM32(esi + 0xC);
    eax = MEM32(eax + edi * 4 + 0x1C);

loc_003CE966: ;
    ebx = MEM32(esi + 0xC);
    MEM32(ebx + edx * 4 + 0x1C) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(eax + edi * 4 + 0x1C) = ecx;

loc_003CE974: ;
    SET_LO8(eax, 1);
    goto loc_003CE7DE;

}

/**
 * sub_003CE97B
 * Original: 0x003CE97B - 0x003CEA63 (232 bytes, 87 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CE97B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CE97B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CEA5F; /* jle: less or equal (signed <=) */

loc_003CE98E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xF);
    MEM32(ebp + -4) = 2;
    ecx = eax + 0x14;
    esi = 0xF00000;
    POP32(esp, ebx);

loc_003CE9A3: ;
    edi = MEM32(ecx + -16);
    edi = edi & esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEA46; /* jne: not equal / not zero */

loc_003CE9B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -20;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    eax = MEM32(ebp + -4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003CE9ED; /* jge: greater or equal (signed >=) */

loc_003CE9C1: ;
    eax = MEM32(ecx + -4);
    eax = eax >> 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebp + eax + -20) = 1;
    eax = MEM32(ecx + 4);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebp + eax + -20) = 1;
    eax = MEM32(ecx);
    edi = eax;
    edi = edi >> 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebp + edi + -20) = 1;
    MEM8(ebp + eax + -20) = 1;

loc_003CE9ED: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003CEA1F; /* jge: greater or equal (signed >=) */

loc_003CE9F2: ;
    eax = MEM32(ecx + 8);
    eax = eax >> 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebp + eax + -20) = 1;
    eax = MEM32(ecx + 0x10);
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebp + eax + -20) = 1;
    eax = MEM32(ecx + 0xC);
    edx = eax;
    edx = edx >> 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebp + edx + -20) = 1;
    MEM8(ebp + eax + -20) = 1;

loc_003CEA1F: ;
    _fa = (uint32_t)(MEM8(ebp + -9)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -9), 0 (8-bit) */
    PUSH32(esp, 0xB);
    POP32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003CEA34; /* je: equal / zero */

loc_003CEA28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CEA34; /* jle: less or equal (signed <=) */

loc_003CEA2C: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + eax + -20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + eax + -20), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEA28; /* jne: not equal / not zero */

loc_003CEA34: ;
    edx = MEM32(ecx + -16);
    eax = eax << 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx + -16) = eax;
    eax = MEM32(ebp + 8);

loc_003CEA46: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) + 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(ebp + -4);
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xFFFFFFFEu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003CE9A3; /* jl: less (signed <) */

loc_003CEA5C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003CEA5F: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CEA63
 * Original: 0x003CEA63 - 0x003CEA8C (41 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CEA63(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CEA63: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEA88; /* je: equal / zero */

loc_003CEA6C: ;
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x003CEA78u); RECOMP_ABI_CALL(0x003CEA63u, sub_003CEA63); /* call 0x003CEA63 */

loc_003CEA78: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x003CEA80u); RECOMP_ABI_CALL(0x003CEA63u, sub_003CEA63); /* call 0x003CEA63 */

loc_003CEA80: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003CEA88u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CEA86u); } /* indirect call */
    }

loc_003CEA88: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CEA8C
 * Original: 0x003CEA8C - 0x003CEABA (46 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CEA8C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CEA8C: ;
    eax = ecx;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    esi = MEM32(edx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEAAC; /* je: equal / zero */

loc_003CEA98: ;
    edx = esi;
    esi = MEM32(edx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEA98; /* jne: not equal / not zero */

loc_003CEAA1: ;
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003CEAA5: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEAB3; /* jne: not equal / not zero */

loc_003CEAAA: ;
    edx = esi;

loc_003CEAAC: ;
    esi = MEM32(edx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEAA5; /* jne: not equal / not zero */

loc_003CEAB3: ;
    ecx = MEM32(edx + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CEABA
 * Original: 0x003CEABA - 0x003CEAE3 (41 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CEABA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CEABA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEADF; /* je: equal / zero */

loc_003CEAC3: ;
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x003CEACFu); RECOMP_ABI_CALL(0x003CEABAu, sub_003CEABA); /* call 0x003CEABA */

loc_003CEACF: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x003CEAD7u); RECOMP_ABI_CALL(0x003CEABAu, sub_003CEABA); /* call 0x003CEABA */

loc_003CEAD7: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003CEADFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CEADDu); } /* indirect call */
    }

loc_003CEADF: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CEAE3
 * Original: 0x003CEAE3 - 0x003CEB15 (50 bytes, 21 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CEAE3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CEAE3: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 4);
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEAF7; /* jne: not equal / not zero */

loc_003CEAF1: ;
    eax = MEM32(eax + 0xC);
    MEM32(esi + 4) = eax;

loc_003CEAF7: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEB04; /* jne: not equal / not zero */

loc_003CEAFE: ;
    eax = MEM32(eax + 8);
    MEM32(esi + 8) = eax;

loc_003CEB04: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEB0E; /* je: equal / zero */

loc_003CEB08: ;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003CEB0Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CEB0Cu); } /* indirect call */
    }

loc_003CEB0E: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) - 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CEB15
 * Original: 0x003CEB15 - 0x003CEB5D (72 bytes, 32 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CEB15(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CEB15: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003CEB51; /* je: equal / zero */

loc_003CEB1F: ;
    ebx = ecx + 4;

loc_003CEB22: ;
    edi = MEM32(esi + 4);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x14));
    ecx = ebx;
    PUSH32(esp, 0x003CEB31u); RECOMP_ABI_CALL(0x003CE303u, sub_003CE303); /* call 0x003CE303 */

loc_003CEB31: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEB3A; /* je: equal / zero */

loc_003CEB35: ;
    esi = MEM32(esi + 0xC);
    goto loc_003CEB4D;

loc_003CEB3A: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = ebx;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003CEB46u); RECOMP_ABI_CALL(0x003CE303u, sub_003CE303); /* call 0x003CE303 */

loc_003CEB46: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEB59; /* je: equal / zero */

loc_003CEB4A: ;
    esi = MEM32(esi + 0x10);

loc_003CEB4D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEB22; /* jne: not equal / not zero */

loc_003CEB51: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CEB53: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003CEB59: ;
    eax = esi;
    goto loc_003CEB53;

}

/**
 * sub_003CEB5D
 * Original: 0x003CEB5D - 0x003CEB86 (41 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CEB5D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CEB5D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEB82; /* je: equal / zero */

loc_003CEB66: ;
    PUSH32(esp, MEM32(esi + 0x10));
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x003CEB72u); RECOMP_ABI_CALL(0x003CEB5Du, sub_003CEB5D); /* call 0x003CEB5D */

loc_003CEB72: ;
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 0x003CEB7Au); RECOMP_ABI_CALL(0x003CEB5Du, sub_003CEB5D); /* call 0x003CEB5D */

loc_003CEB7A: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003CEB82u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CEB80u); } /* indirect call */
    }

loc_003CEB82: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CEB86
 * Original: 0x003CEB86 - 0x003CEBB4 (46 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CEB86(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CEB86: ;
    edx = MEM32(esp + 0xC);
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(eax) = 0x41E820;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_003CEBAA; /* je: equal / zero */

loc_003CEBA7: ;
    MEM32(ecx + 0xC) = eax;

loc_003CEBAA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEBB1; /* je: equal / zero */

loc_003CEBAE: ;
    MEM32(edx + 8) = eax;

loc_003CEBB1: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003CEBB4
 * Original: 0x003CEBB4 - 0x003CEBD8 (36 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CEBB4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CEBB4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003CEBBCu); RECOMP_ABI_CALL(0x003CEBD8u, sub_003CEBD8); /* call 0x003CEBD8 */

loc_003CEBBC: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003CEBD2; /* je: equal / zero */

loc_003CEBC3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEBD2; /* je: equal / zero */

loc_003CEBC7: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CEBD2u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003CEBD2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CEBD8
 * Original: 0x003CEBD8 - 0x003CEBF9 (33 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CEBD8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CEBD8: ;
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ecx) = 0x41E820;
    if (CMP_EQ(_fa, _fb)) goto loc_003CEBEB; /* je: equal / zero */

loc_003CEBE5: ;
    edx = MEM32(ecx + 0xC);
    MEM32(eax + 0xC) = edx;

loc_003CEBEB: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEBF8; /* je: equal / zero */

loc_003CEBF2: ;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 8) = ecx;

loc_003CEBF8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003CEBF9
 * Original: 0x003CEBF9 - 0x003CEC22 (41 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CEBF9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CEBF9: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEC1E; /* je: equal / zero */

loc_003CEC02: ;
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x003CEC0Eu); RECOMP_ABI_CALL(0x003CEBF9u, sub_003CEBF9); /* call 0x003CEBF9 */

loc_003CEC0E: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x003CEC16u); RECOMP_ABI_CALL(0x003CEBF9u, sub_003CEBF9); /* call 0x003CEBF9 */

loc_003CEC16: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003CEC1Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CEC1Cu); } /* indirect call */
    }

loc_003CEC1E: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CEC22
 * Original: 0x003CEC22 - 0x003CEC4B (41 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CEC22(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CEC22: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEC47; /* je: equal / zero */

loc_003CEC2B: ;
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x003CEC37u); RECOMP_ABI_CALL(0x003CEC22u, sub_003CEC22); /* call 0x003CEC22 */

loc_003CEC37: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x003CEC3Fu); RECOMP_ABI_CALL(0x003CEC22u, sub_003CEC22); /* call 0x003CEC22 */

loc_003CEC3F: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003CEC47u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CEC45u); } /* indirect call */
    }

loc_003CEC47: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CEC4B
 * Original: 0x003CEC4B - 0x003CEC88 (61 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CEC4B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CEC4B: ;
    eax = ecx;
    edx = MEM32(eax);
    ecx = MEM32(edx + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003CEC68; /* je: equal / zero */

loc_003CEC57: ;
    edx = ecx;
    goto loc_003CEC5D;

loc_003CEC5B: ;
    edx = esi;

loc_003CEC5D: ;
    esi = MEM32(edx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEC5B; /* jne: not equal / not zero */

loc_003CEC64: ;
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003CEC68: ;
    esi = MEM32(edx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEC73; /* jne: not equal / not zero */

loc_003CEC6F: ;
    MEM32(eax) = MEM32(eax) & esi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003CEC73: ;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEC81; /* jne: not equal / not zero */

loc_003CEC78: ;
    edx = esi;
    esi = MEM32(edx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEC73; /* jne: not equal / not zero */

loc_003CEC81: ;
    ecx = MEM32(edx + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CEC88
 * Original: 0x003CEC88 - 0x003CECB1 (41 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CEC88(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CEC88: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CECAD; /* je: equal / zero */

loc_003CEC91: ;
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x003CEC9Du); RECOMP_ABI_CALL(0x003CEC88u, sub_003CEC88); /* call 0x003CEC88 */

loc_003CEC9D: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x003CECA5u); RECOMP_ABI_CALL(0x003CEC88u, sub_003CEC88); /* call 0x003CEC88 */

loc_003CECA5: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003CECADu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CECABu); } /* indirect call */
    }

loc_003CECAD: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CECB1
 * Original: 0x003CECB1 - 0x003CECDA (41 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CECB1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CECB1: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CECD6; /* je: equal / zero */

loc_003CECBA: ;
    PUSH32(esp, MEM32(esi + 0xC));
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x003CECC6u); RECOMP_ABI_CALL(0x003CECB1u, sub_003CECB1); /* call 0x003CECB1 */

loc_003CECC6: ;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x003CECCEu); RECOMP_ABI_CALL(0x003CECB1u, sub_003CECB1); /* call 0x003CECB1 */

loc_003CECCE: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003CECD6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003CECD4u); } /* indirect call */
    }

loc_003CECD6: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CECDA
 * Original: 0x003CECDA - 0x003CECF2 (24 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CECDA(void)
{

loc_003CECDA: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    MEM32(esi) = 0x41E80C;
    PUSH32(esp, 0x003CECECu); RECOMP_ABI_CALL(0x003CDE26u, sub_003CDE26); /* call 0x003CDE26 */

loc_003CECEC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CECF2
 * Original: 0x003CECF2 - 0x003CED12 (32 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CECF2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CECF2: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 8);
    POP32(esp, eax);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = esi;
    MEM32(esi) = 0x41E80C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CED0Cu); RECOMP_ABI_CALL(0x003CDE26u, sub_003CDE26); /* call 0x003CDE26 */

loc_003CED0C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CED12
 * Original: 0x003CED12 - 0x003CED33 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CED12(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CED12: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x41E80C;
    if (TEST_Z(_fa, _fb)) goto loc_003CED2D; /* je: equal / zero */

loc_003CED22: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CED2Du); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003CED2D: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CED33
 * Original: 0x003CED33 - 0x003CED72 (63 bytes, 27 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CED33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CED33: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0xF);
    ecx = ebp + -8;
    MEM32(ebp + -4) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CED4Bu); RECOMP_ABI_CALL(0x003CDE26u, sub_003CDE26); /* call 0x003CDE26 */

loc_003CED4B: ;
    PUSH32(esp, esi);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CED53u); RECOMP_ABI_CALL(0x003CDF7Au, sub_003CDF7A); /* call 0x003CDF7A */

loc_003CED53: ;
    MEM8(ebp + esi + -4) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CED4B; /* jle: less or equal (signed <=) */

loc_003CED5D: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    POP32(esp, edi);
    MEM32(eax) = 0x41E80C;
    MEM32(eax + 4) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CED72
 * Original: 0x003CED72 - 0x003CED93 (33 bytes, 18 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CED72(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CED72: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CED78: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003CED80u); RECOMP_ABI_CALL(0x003CE033u, sub_003CE033); /* call 0x003CE033 */

loc_003CED80: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CED8F; /* je: equal / zero */

loc_003CED84: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CED78; /* jle: less or equal (signed <=) */

loc_003CED8A: ;
    SET_LO8(eax, 1);

loc_003CED8C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003CED8F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003CED8C;

}

/**
 * sub_003CED93
 * Original: 0x003CED93 - 0x003CEE14 (129 bytes, 58 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CED93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CED93: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CEDA9u); RECOMP_ABI_CALL(0x003CDF33u, sub_003CDF33); /* call 0x003CDF33 */

loc_003CEDA9: ;
    PUSH32(esp, 4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edx);

loc_003CEDAE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEDBA; /* je: equal / zero */

loc_003CEDB2: ;
    eax = MEM32(esi + edi * 4 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEDF1; /* jne: not equal / not zero */

loc_003CEDBA: ;
    eax = edi;

loc_003CEDBC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEDCA; /* je: equal / zero */

loc_003CEDC0: ;
    _fa = (uint32_t)(MEM32(esi + eax * 4 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax * 4 + 4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEDCD; /* jne: not equal / not zero */

loc_003CEDC6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CEDCD; /* jle: less or equal (signed <=) */

loc_003CEDCA: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_003CEDBC;

loc_003CEDCD: ;
    ecx = esi + eax * 4 + 4;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEDE7; /* jne: not equal / not zero */

loc_003CEDD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEDEF; /* je: equal / zero */

loc_003CEDD9: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEDE7; /* jne: not equal / not zero */

loc_003CEDDD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003CEDE7; /* jge: greater or equal (signed >=) */

loc_003CEDE2: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003CEDD5;

loc_003CEDE7: ;
    eax = MEM32(esi + eax * 4 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEDF1; /* jne: not equal / not zero */

loc_003CEDEF: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CEDF1: ;
    MEM32(ebp + edi * 4 + -20) = eax;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CEDAE; /* jle: less or equal (signed <=) */

loc_003CEDFB: ;
    eax = MEM32(ebp + 8);
    edi = eax + 4;
    esi = ebp + -20;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, edi);
    MEM32(eax) = 0x41E810;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CEE14
 * Original: 0x003CEE14 - 0x003CEE66 (82 bytes, 36 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CEE14(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CEE14: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CEE2Au); RECOMP_ABI_CALL(0x003CDF33u, sub_003CDF33); /* call 0x003CDF33 */

loc_003CEE2A: ;
    PUSH32(esp, 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edx);

loc_003CEE2F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEE3B; /* je: equal / zero */

loc_003CEE33: ;
    eax = MEM32(esi + ecx * 4 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEE3F; /* jne: not equal / not zero */

loc_003CEE3B: ;
    eax = edx;
    goto loc_003CEE43;

loc_003CEE3F: ;
    eax = MEM32(ebp + eax * 4 + 0x10);

loc_003CEE43: ;
    MEM32(ebp + ecx * 4 + -20) = eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CEE2F; /* jle: less or equal (signed <=) */

loc_003CEE4D: ;
    eax = MEM32(ebp + 8);
    edi = eax + 4;
    esi = ebp + -20;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, edi);
    MEM32(eax) = 0x41E810;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003CEE66
 * Original: 0x003CEE66 - 0x003CEE87 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CEE66(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CEE66: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x41E810;
    if (TEST_Z(_fa, _fb)) goto loc_003CEE81; /* je: equal / zero */

loc_003CEE76: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CEE81u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003CEE81: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CEE87
 * Original: 0x003CEE87 - 0x003CEED5 (78 bytes, 34 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CEE87(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CEE87: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEE96; /* jne: not equal / not zero */

loc_003CEE92: ;
    SET_LO8(eax, 1);
    goto loc_003CEED1;

loc_003CEE96: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEECF; /* je: equal / zero */

loc_003CEE9A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEECF; /* je: equal / zero */

loc_003CEE9E: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEECB; /* jne: not equal / not zero */

loc_003CEEA4: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEECB; /* jne: not equal / not zero */

loc_003CEEAA: ;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEECB; /* jne: not equal / not zero */

loc_003CEEB2: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003CEEB8u); RECOMP_ABI_CALL(0x003CE32Au, sub_003CE32A); /* call 0x003CE32A */

loc_003CEEB8: ;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x003CEEC1u); RECOMP_ABI_CALL(0x003CE32Au, sub_003CE32A); /* call 0x003CE32A */

loc_003CEEC1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003CEECB; /* jne: not equal / not zero */

loc_003CEEC6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003CEED1;

loc_003CEECB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003CEED1;

loc_003CEECF: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003CEED1: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CEED5
 * Original: 0x003CEED5 - 0x003CEEF1 (28 bytes, 10 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CEED5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CEED5: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEEEB; /* je: equal / zero */

loc_003CEEDD: ;
    edx = MEM32(eax + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEEE8; /* je: equal / zero */

loc_003CEEE4: ;
    MEM32(edx + 0x34) = MEM32(edx + 0x34) & 0;
    _fa = (uint32_t)(MEM32(edx + 0x34)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003CEEE8: ;
    MEM32(eax + 0x30) = ecx;

loc_003CEEEB: ;
    MEM32(ecx + 0x34) = eax;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CEEF1
 * Original: 0x003CEEF1 - 0x003CEF27 (54 bytes, 21 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003CEEF1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CEEF1: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEF01; /* jne: not equal / not zero */

loc_003CEEF7: ;
    _fa = (uint32_t)(MEM32(ecx + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x34), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEF01; /* jne: not equal / not zero */

loc_003CEEFD: ;
    SET_LO8(eax, 1);
    goto loc_003CEF24;

loc_003CEF01: ;
    ecx = MEM32(ecx + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEF22; /* je: equal / zero */

loc_003CEF08: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4 + 0x20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEF22; /* jne: not equal / not zero */

loc_003CEF13: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CEF19u); RECOMP_ABI_CALL(0x003D1563u, sub_003D1563); /* call 0x003D1563 */

loc_003CEF19: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEF22; /* je: equal / zero */

loc_003CEF1D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003CEF24;

loc_003CEF22: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CEF24: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CEF27
 * Original: 0x003CEF27 - 0x003CEF4D (38 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003CEF27(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CEF27: ;
    ecx = MEM32(ecx + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEF48; /* je: equal / zero */

loc_003CEF2E: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4 + 0x20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEF43; /* jne: not equal / not zero */

loc_003CEF39: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CEF3Fu); RECOMP_ABI_CALL(0x003CEF27u, sub_003CEF27); /* call 0x003CEF27 */

loc_003CEF3F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEF48; /* je: equal / zero */

loc_003CEF43: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003CEF4A;

loc_003CEF48: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CEF4A: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CEF4D
 * Original: 0x003CEF4D - 0x003CEF73 (38 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003CEF4D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CEF4D: ;
    ecx = MEM32(ecx + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEF6E; /* je: equal / zero */

loc_003CEF54: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + eax * 4 + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + eax * 4 + 0x20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CEF69; /* jne: not equal / not zero */

loc_003CEF5F: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CEF65u); RECOMP_ABI_CALL(0x003CEF4Du, sub_003CEF4D); /* call 0x003CEF4D */

loc_003CEF65: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CEF6E; /* je: equal / zero */

loc_003CEF69: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003CEF70;

loc_003CEF6E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CEF70: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CEF73
 * Original: 0x003CEF73 - 0x003CEFB5 (66 bytes, 26 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CEF73(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CEF73: ;
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
    PUSH32(esp, 0xF);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CEF89u); RECOMP_ABI_CALL(0x003CDE26u, sub_003CDE26); /* call 0x003CDE26 */

loc_003CEF89: ;
    eax = esi + 0x20;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);

loc_003CEF8F: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM8(ebp + ecx + -4) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CEF8F; /* jle: less or equal (signed <=) */

loc_003CEFA2: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    MEM32(eax) = 0x41E80C;
    MEM32(eax + 4) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CEFB5
 * Original: 0x003CEFB5 - 0x003CEFE6 (49 bytes, 23 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CEFB5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CEFB5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CEFCBu); RECOMP_ABI_CALL(0x003CE1ADu, sub_003CE1AD); /* call 0x003CE1AD */

loc_003CEFCB: ;
    ecx = eax;
    eax = MEM32(ebp + 8);
    MEM32(eax) = 0x41E810;
    esi = ecx + 4;
    edi = eax + 4;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003CEFE6
 * Original: 0x003CEFE6 - 0x003CF095 (175 bytes, 64 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CEFE6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CEFE6: ;
    eax = 0x367D77;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CEFF0u); RECOMP_ABI_CALL(0x00349EA0u, sub_00349EA0); /* call 0x00349EA0 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003CEFF0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(ebp + -16) = ebx;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -16) = eax;
    edi = 0x41E80C;
    if (CMP_EQ(_fa, _fb)) goto loc_003CF038; /* je: equal / zero */

loc_003CF00F: ;
    eax = MEM32(esi + 0x18);
    MEM32(ebp + -24) = edi;
    MEM32(ebp + -20) = eax;
    MEM8(ebp + -4) = 1;

loc_003CF01C: ;
    _fa = (uint32_t)(MEM8(ebp + ebx + -20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + ebx + -20), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF02E; /* je: equal / zero */

loc_003CF023: ;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF02Eu); RECOMP_ABI_CALL(0x003D06D2u, sub_003D06D2); /* call 0x003D06D2 */

loc_003CF02E: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CF01C; /* jle: less or equal (signed <=) */

loc_003CF034: ;
    MEM8(ebp + -4) = 0;

loc_003CF038: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + -24) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003CF069; /* je: equal / zero */

loc_003CF042: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -20) = eax;
    MEM8(ebp + -4) = 2;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CF04E: ;
    _fa = (uint32_t)(MEM8(ebp + edi + -20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + edi + -20), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF05E; /* je: equal / zero */

loc_003CF055: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF05Eu); RECOMP_ABI_CALL(0x003D06D2u, sub_003D06D2); /* call 0x003D06D2 */

loc_003CF05E: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CF04E; /* jle: less or equal (signed <=) */

loc_003CF064: ;
    eax = ebp + 0xC;
    goto loc_003CF076;

loc_003CF069: ;
    PUSH32(esp, 0);
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF073u); RECOMP_ABI_CALL(0x003CDE26u, sub_003CDE26); /* call 0x003CDE26 */

loc_003CF073: ;
    eax = ebp + -24;

loc_003CF076: ;
    PUSH32(esp, eax);
    ecx = esi + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF07Fu); RECOMP_ABI_CALL(0x003CE2CEu, sub_003CE2CE); /* call 0x003CE2CE */

loc_003CF07F: ;
    ecx = MEM32(ebp + -12);
    MEM32(esi + 0x34) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003CF095
 * Original: 0x003CF095 - 0x003CF144 (175 bytes, 64 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CF095(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CF095: ;
    eax = 0x367D77;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF09Fu); RECOMP_ABI_CALL(0x00349EA0u, sub_00349EA0); /* call 0x00349EA0 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003CF09F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(ebp + -16) = ebx;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -16) = eax;
    edi = 0x41E80C;
    if (CMP_EQ(_fa, _fb)) goto loc_003CF0E7; /* je: equal / zero */

loc_003CF0BE: ;
    eax = MEM32(esi + 0x20);
    MEM32(ebp + -24) = edi;
    MEM32(ebp + -20) = eax;
    MEM8(ebp + -4) = 1;

loc_003CF0CB: ;
    _fa = (uint32_t)(MEM8(ebp + ebx + -20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + ebx + -20), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF0DD; /* je: equal / zero */

loc_003CF0D2: ;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF0DDu); RECOMP_ABI_CALL(0x003D06D2u, sub_003D06D2); /* call 0x003D06D2 */

loc_003CF0DD: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CF0CB; /* jle: less or equal (signed <=) */

loc_003CF0E3: ;
    MEM8(ebp + -4) = 0;

loc_003CF0E7: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + -24) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003CF118; /* je: equal / zero */

loc_003CF0F1: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -20) = eax;
    MEM8(ebp + -4) = 2;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CF0FD: ;
    _fa = (uint32_t)(MEM8(ebp + edi + -20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + edi + -20), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF10D; /* je: equal / zero */

loc_003CF104: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF10Du); RECOMP_ABI_CALL(0x003D06D2u, sub_003D06D2); /* call 0x003D06D2 */

loc_003CF10D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CF0FD; /* jle: less or equal (signed <=) */

loc_003CF113: ;
    eax = ebp + 0xC;
    goto loc_003CF125;

loc_003CF118: ;
    PUSH32(esp, 0);
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF122u); RECOMP_ABI_CALL(0x003CDE26u, sub_003CDE26); /* call 0x003CDE26 */

loc_003CF122: ;
    eax = ebp + -24;

loc_003CF125: ;
    PUSH32(esp, eax);
    ecx = esi + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF12Eu); RECOMP_ABI_CALL(0x003CE2CEu, sub_003CE2CE); /* call 0x003CE2CE */

loc_003CF12E: ;
    ecx = MEM32(ebp + -12);
    MEM32(esi + 0x38) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003CF144
 * Original: 0x003CF144 - 0x003CF1F3 (175 bytes, 64 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CF144(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CF144: ;
    eax = 0x367D77;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF14Eu); RECOMP_ABI_CALL(0x00349EA0u, sub_00349EA0); /* call 0x00349EA0 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003CF14E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(ebp + -16) = ebx;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp + -4) = ebx;
    MEM32(ebp + -16) = eax;
    edi = 0x41E80C;
    if (CMP_EQ(_fa, _fb)) goto loc_003CF196; /* je: equal / zero */

loc_003CF16D: ;
    eax = MEM32(esi + 0x28);
    MEM32(ebp + -24) = edi;
    MEM32(ebp + -20) = eax;
    MEM8(ebp + -4) = 1;

loc_003CF17A: ;
    _fa = (uint32_t)(MEM8(ebp + ebx + -20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + ebx + -20), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF18C; /* je: equal / zero */

loc_003CF181: ;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, 0);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF18Cu); RECOMP_ABI_CALL(0x003D06D2u, sub_003D06D2); /* call 0x003D06D2 */

loc_003CF18C: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CF17A; /* jle: less or equal (signed <=) */

loc_003CF192: ;
    MEM8(ebp + -4) = 0;

loc_003CF196: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + -24) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003CF1C7; /* je: equal / zero */

loc_003CF1A0: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -20) = eax;
    MEM8(ebp + -4) = 2;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CF1AC: ;
    _fa = (uint32_t)(MEM8(ebp + edi + -20)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + edi + -20), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF1BC; /* je: equal / zero */

loc_003CF1B3: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF1BCu); RECOMP_ABI_CALL(0x003D06D2u, sub_003D06D2); /* call 0x003D06D2 */

loc_003CF1BC: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CF1AC; /* jle: less or equal (signed <=) */

loc_003CF1C2: ;
    eax = ebp + 0xC;
    goto loc_003CF1D4;

loc_003CF1C7: ;
    PUSH32(esp, 0);
    ecx = ebp + -24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF1D1u); RECOMP_ABI_CALL(0x003CDE26u, sub_003CDE26); /* call 0x003CDE26 */

loc_003CF1D1: ;
    eax = ebp + -24;

loc_003CF1D4: ;
    PUSH32(esp, eax);
    ecx = esi + 0x24;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF1DDu); RECOMP_ABI_CALL(0x003CE2CEu, sub_003CE2CE); /* call 0x003CE2CE */

loc_003CF1DD: ;
    ecx = MEM32(ebp + -12);
    MEM32(esi + 0x3C) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003CF1F3
 * Original: 0x003CF1F3 - 0x003CF226 (51 bytes, 21 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CF1F3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CF1F3: ;
    edx = MEM32(esp + 4);
    eax = ecx;
    ecx = MEM32(eax + edx * 4 + 0x20);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + esi * 4 + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + esi * 4 + 0x20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF20C; /* je: equal / zero */

loc_003CF208: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003CF222;

loc_003CF20C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF208; /* je: equal / zero */

loc_003CF210: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF208; /* je: equal / zero */

loc_003CF215: ;
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CF21Du); RECOMP_ABI_CALL(0x003CE5A1u, sub_003CE5A1); /* call 0x003CE5A1 */

loc_003CF21D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */

loc_003CF222: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CF226
 * Original: 0x003CF226 - 0x003CF249 (35 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CF226(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CF226: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CF239; /* jne: not equal / not zero */

loc_003CF22E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), eax (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    goto loc_003CF246;

loc_003CF239: ;
    PUSH32(esp, MEM32(esp + 4));
    ecx = MEM32(ecx + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003CF246u); RECOMP_ABI_CALL(0x003CE393u, sub_003CE393); /* call 0x003CE393 */

loc_003CF246: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CF249
 * Original: 0x003CF249 - 0x003CF295 (76 bytes, 29 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CF249(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CF249: ;
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
    PUSH32(esp, 0);
    ecx = ebp + -8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF25Fu); RECOMP_ABI_CALL(0x003CDE26u, sub_003CDE26); /* call 0x003CDE26 */

loc_003CF25F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CF261: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF27B; /* je: equal / zero */

loc_003CF266: ;
    ecx = MEM32(esi + eax * 4 + 0x1C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF27B; /* je: equal / zero */

loc_003CF26F: ;
    _fa = (uint32_t)(MEM8(ebp + eax + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + eax + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF27B; /* je: equal / zero */

loc_003CF276: ;
    MEM8(ebp + ecx + -4) = 1;

loc_003CF27B: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CF261; /* jle: less or equal (signed <=) */

loc_003CF281: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    MEM32(eax) = 0x41E80C;
    MEM32(eax + 4) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003CF295
 * Original: 0x003CF295 - 0x003CF608 (883 bytes, 310 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CF295(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CF295: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -8) = MEM32(ebp + -8) & 0;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = MEM32(esi + 0x30);
    eax = MEM32(esi + 0x2C);
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(ebp + -20);
    edi = edi << 0x19;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0x1FFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi + 4;
    edi = edi & 0xFE01FFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -28) = MEM32(ebp + -28) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = eax;
    MEM32(ebp + -4) = 3;

loc_003CF2D5: ;
    eax = MEM32(ebx);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF30A; /* je: equal / zero */

loc_003CF2DE: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CF30A; /* jne: not equal / not zero */

loc_003CF2E4: ;
    eax = MEM32(ecx + 8);
    eax = eax << 0x11;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x1FE0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi ^ eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF2F8u); RECOMP_ABI_CALL(0x003CE32Au, sub_003CE32A); /* call 0x003CE32A */

loc_003CF2F8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx ^ MEM32(ebp + -28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -28) = MEM32(ebp + -28) ^ ecx;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CF30A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003CF2D5; /* jne: not equal / not zero */

loc_003CF312: ;
    eax = esi + 4;
    PUSH32(esp, 3);
    edi = edi & 0xFFFE1FFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = eax;
    POP32(esp, edx);

loc_003CF320: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF33E; /* je: equal / zero */

loc_003CF329: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CF33E; /* jne: not equal / not zero */

loc_003CF32F: ;
    eax = MEM32(eax + 8);
    eax = eax << 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0x1E000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi ^ eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CF33E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003CF320; /* jne: not equal / not zero */

loc_003CF344: ;
    eax = esi + 4;
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -8) = 3;
    ebx = 0x41E810;

loc_003CF356: ;
    eax = ebp + -68;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF364u); RECOMP_ABI_CALL(0x003CE18Au, sub_003CE18A); /* call 0x003CE18A */

loc_003CF364: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = esp;
    MEM32(ebp + -12) = esp;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF374u); RECOMP_ABI_CALL(0x003CED93u, sub_003CED93); /* call 0x003CED93 */

loc_003CF374: ;
    eax = ebp + -48;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    ecx = MEM32(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF382u); RECOMP_ABI_CALL(0x003CEFB5u, sub_003CEFB5); /* call 0x003CEFB5 */

loc_003CF382: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -48) = ebx;
    MEM32(ebp + -68) = ebx;
    if ((_fa != 0)) goto loc_003CF356; /* jne: not equal / not zero */

loc_003CF391: ;
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF3A0; /* je: equal / zero */

loc_003CF39B: ;
    eax = MEM32(edx + 8);
    goto loc_003CF3A2;

loc_003CF3A0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CF3A2: ;
    eax = eax ^ edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi ^ eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF3B4; /* je: equal / zero */

loc_003CF3AD: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CF3B7; /* jne: not equal / not zero */

loc_003CF3B4: ;
    PUSH32(esp, 2);
    POP32(esp, eax);

loc_003CF3B7: ;
    eax = eax << 0x1C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x30000000;
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -24) = MEM32(ebp + -24) ^ eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + -24), edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003CF3E2; /* jne: not equal / not zero */

loc_003CF3CC: ;
    eax = MEM32(ebp + -24);
    eax = eax & 0xDFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x10000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi & 0xFFFFFFFCu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -24) = eax;
    edi = edi | 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003CF3E2: ;
    edx = MEM32(ecx + 0x1C);
    ebx = MEM32(ecx + 0x20);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x14));
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -8) = ebx;
    ebx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0x28);
    ebx = ebx & 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = MEM32(ebp + -8);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esi + 8);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi & 0xFFFFE00Fu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -20) = eax;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF439; /* je: equal / zero */

loc_003CF434: ;
    edx = MEM32(eax + 8);
    goto loc_003CF43B;

loc_003CF439: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CF43B: ;
    edx = edx << 0xF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx ^ MEM32(ebp + -24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x78000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -24) = MEM32(ebp + -24) ^ edx;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF455; /* je: equal / zero */

loc_003CF44E: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CF458; /* jne: not equal / not zero */

loc_003CF455: ;
    PUSH32(esp, 2);
    POP32(esp, eax);

loc_003CF458: ;
    eax = eax << 0xD;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0x6000;
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -24) = MEM32(ebp + -24) ^ eax;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + -24), edx (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003CF47D; /* jne: not equal / not zero */

loc_003CF46D: ;
    eax = MEM32(ebp + -24);
    eax = eax & 0xFFFE3FFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x62000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -24) = eax;

loc_003CF47D: ;
    edx = MEM32(ecx + 0x1C);
    edi = MEM32(ecx + 0x20);
    ebx = MEM32(ecx + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x14));
    ecx = MEM32(ecx + 0x28);
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx & 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebp + -24);
    ecx = ecx & 0xF007FFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 0x13;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF4CE; /* je: equal / zero */

loc_003CF4C9: ;
    edi = MEM32(edx + 8);
    goto loc_003CF4D0;

loc_003CF4CE: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CF4D0: ;
    edi = edi ^ eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = edi & 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax ^ edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebp + -24) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003CF4E5; /* je: equal / zero */

loc_003CF4DE: ;
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CF4E8; /* jne: not equal / not zero */

loc_003CF4E5: ;
    PUSH32(esp, 2);
    POP32(esp, edx);

loc_003CF4E8: ;
    edx = edx << 0x1C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx ^ MEM32(ebp + -28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x30000000;
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -28) = MEM32(ebp + -28) ^ edx;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebp + -28), edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003CF518; /* jne: not equal / not zero */

loc_003CF4FD: ;
    edx = MEM32(ebp + -28);
    edx = edx & 0xDFFFFFFFu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | 0x10000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -28) = edx;
    MEM32(ebp + -24) = eax;

loc_003CF518: ;
    edi = MEM32(ecx + 0x1C);
    edx = MEM32(ecx + 0x20);
    ebx = MEM32(ecx + 0x24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(ecx + 0x14));
    ecx = MEM32(ecx + 0x28);
    edi = edi & 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx & 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebp + -24);
    ecx = ecx & 0xFFFFE00Fu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi + 0x14;
    MEM32(ebp + -24) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF565u); RECOMP_ABI_CALL(0x003CDDF9u, sub_003CDDF9); /* call 0x003CDDF9 */

loc_003CF565: ;
    ebx = MEM32(ebp + -28);
    eax = eax << 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax ^ ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 0xF000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = ebx ^ eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), 0xD (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CF590; /* jne: not equal / not zero */

loc_003CF57A: ;
    PUSH32(esp, 0);
    ecx = ebp + -16;
    MEM32(ebp + -16) = 0x41E80C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF58Bu); RECOMP_ABI_CALL(0x003CDE26u, sub_003CDE26); /* call 0x003CDE26 */

loc_003CF58B: ;
    ecx = ebp + -16;
    goto loc_003CF593;

loc_003CF590: ;
    ecx = esi + 0x1C;

loc_003CF593: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF598u); RECOMP_ABI_CALL(0x003CDDF9u, sub_003CDDF9); /* call 0x003CDDF9 */

loc_003CF598: ;
    ecx = esi + 0x24;
    edi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF5A2u); RECOMP_ABI_CALL(0x003CDDF9u, sub_003CDDF9); /* call 0x003CDDF9 */

loc_003CF5A2: ;
    edi = edi & 0xF;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi << 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, MEM8(esi + 0x10));
    edi = edi << 0xE;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 0xF0F0FFFBu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = edi | eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x34);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = edi | ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF5D1; /* je: equal / zero */

loc_003CF5CC: ;
    ebx = MEM32(eax + 8);
    goto loc_003CF5D3;

loc_003CF5D1: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CF5D3: ;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF5DAu); RECOMP_ABI_CALL(0x003CE1CDu, sub_003CE1CD); /* call 0x003CE1CD */

loc_003CF5DA: ;
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 0x11;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx & 0x1FF;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = edi & 0xFF0FF007u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + 8);
    esi = ebp + -28;
    edi = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CF608
 * Original: 0x003CF608 - 0x003CF75B (339 bytes, 130 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CF608(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CF608: ;
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
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, 0xF);
    ecx = ebp + -12;
    MEM32(ebp + -12) = 0x41E80C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF625u); RECOMP_ABI_CALL(0x003CDE26u, sub_003CDE26); /* call 0x003CDE26 */

loc_003CF625: ;
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CF6C2; /* jne: not equal / not zero */

loc_003CF632: ;
    edi = MEM32(esi + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + 0xC) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ebp + 0xC) = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF652u); RECOMP_ABI_CALL(0x003CE503u, sub_003CE503); /* call 0x003CE503 */

loc_003CF652: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    ebx = ecx + eax * 4 + 4;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF667u); RECOMP_ABI_CALL(0x003CF249u, sub_003CF249); /* call 0x003CF249 */

loc_003CF667: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF672u); RECOMP_ABI_CALL(0x003CE1EAu, sub_003CE1EA); /* call 0x003CE1EA */

loc_003CF672: ;
    ecx = ebp + -28;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF67Du); RECOMP_ABI_CALL(0x003CDEA2u, sub_003CDEA2); /* call 0x003CDEA2 */

loc_003CF67D: ;
    PUSH32(esp, eax);
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF686u); RECOMP_ABI_CALL(0x003CE2CEu, sub_003CE2CE); /* call 0x003CE2CE */

loc_003CF686: ;
    goto loc_003CF6B6;

loc_003CF688: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF6C2; /* je: equal / zero */

loc_003CF68C: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF757; /* je: equal / zero */

loc_003CF697: ;
    edi = MEM32(edi + 0x34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF6B6; /* je: equal / zero */

loc_003CF69E: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi + 0x20;

loc_003CF6A3: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF6AD; /* je: equal / zero */

loc_003CF6A8: ;
    MEM8(ebp + ecx + -8) = 0;

loc_003CF6AD: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CF6A3; /* jle: less or equal (signed <=) */

loc_003CF6B6: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF6BEu); RECOMP_ABI_CALL(0x003CDDF9u, sub_003CDDF9); /* call 0x003CDDF9 */

loc_003CF6BE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CF688; /* jne: not equal / not zero */

loc_003CF6C2: ;
    edi = MEM32(esi + 0x38);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + 0xC) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ebp + 0xC) = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF6E2u); RECOMP_ABI_CALL(0x003CE503u, sub_003CE503); /* call 0x003CE503 */

loc_003CF6E2: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + 8);
    ebx = eax + ecx * 4 + 4;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF6F7u); RECOMP_ABI_CALL(0x003CF249u, sub_003CF249); /* call 0x003CF249 */

loc_003CF6F7: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF702u); RECOMP_ABI_CALL(0x003CE205u, sub_003CE205); /* call 0x003CE205 */

loc_003CF702: ;
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF70Du); RECOMP_ABI_CALL(0x003CDEA2u, sub_003CDEA2); /* call 0x003CDEA2 */

loc_003CF70D: ;
    PUSH32(esp, eax);
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF716u); RECOMP_ABI_CALL(0x003CE2CEu, sub_003CE2CE); /* call 0x003CE2CE */

loc_003CF716: ;
    goto loc_003CF742;

loc_003CF718: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF74E; /* je: equal / zero */

loc_003CF71C: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF757; /* je: equal / zero */

loc_003CF723: ;
    edi = MEM32(edi + 0x34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF742; /* je: equal / zero */

loc_003CF72A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi + 0x20;

loc_003CF72F: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF739; /* je: equal / zero */

loc_003CF734: ;
    MEM8(ebp + ecx + -8) = 0;

loc_003CF739: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CF72F; /* jle: less or equal (signed <=) */

loc_003CF742: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF74Au); RECOMP_ABI_CALL(0x003CDDF9u, sub_003CDDF9); /* call 0x003CDDF9 */

loc_003CF74A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CF718; /* jne: not equal / not zero */

loc_003CF74E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003CF750: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_003CF757: ;
    SET_LO8(eax, 1);
    goto loc_003CF750;

}

/**
 * sub_003CF75B
 * Original: 0x003CF75B - 0x003CF8AE (339 bytes, 130 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CF75B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CF75B: ;
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
    MEM32(ebp + -4) = ecx;
    PUSH32(esp, 0xF);
    ecx = ebp + -12;
    MEM32(ebp + -12) = 0x41E80C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF778u); RECOMP_ABI_CALL(0x003CDE26u, sub_003CDE26); /* call 0x003CDE26 */

loc_003CF778: ;
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF815; /* je: equal / zero */

loc_003CF785: ;
    edi = MEM32(esi + 0x34);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + 0xC) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ebp + 0xC) = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF7A5u); RECOMP_ABI_CALL(0x003CE503u, sub_003CE503); /* call 0x003CE503 */

loc_003CF7A5: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -4);
    ebx = ecx + eax * 4 + 4;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF7BAu); RECOMP_ABI_CALL(0x003CF249u, sub_003CF249); /* call 0x003CF249 */

loc_003CF7BA: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF7C5u); RECOMP_ABI_CALL(0x003CE1EAu, sub_003CE1EA); /* call 0x003CE1EA */

loc_003CF7C5: ;
    ecx = ebp + -28;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF7D0u); RECOMP_ABI_CALL(0x003CDEA2u, sub_003CDEA2); /* call 0x003CDEA2 */

loc_003CF7D0: ;
    PUSH32(esp, eax);
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF7D9u); RECOMP_ABI_CALL(0x003CE2CEu, sub_003CE2CE); /* call 0x003CE2CE */

loc_003CF7D9: ;
    goto loc_003CF809;

loc_003CF7DB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF815; /* je: equal / zero */

loc_003CF7DF: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF8AA; /* je: equal / zero */

loc_003CF7EA: ;
    edi = MEM32(edi + 0x34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF809; /* je: equal / zero */

loc_003CF7F1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi + 0x20;

loc_003CF7F6: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF800; /* je: equal / zero */

loc_003CF7FB: ;
    MEM8(ebp + ecx + -8) = 0;

loc_003CF800: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CF7F6; /* jle: less or equal (signed <=) */

loc_003CF809: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF811u); RECOMP_ABI_CALL(0x003CDDF9u, sub_003CDDF9); /* call 0x003CDDF9 */

loc_003CF811: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CF7DB; /* jne: not equal / not zero */

loc_003CF815: ;
    edi = MEM32(esi + 0x3C);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + 0xC) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ebp + 0xC) = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + -4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF835u); RECOMP_ABI_CALL(0x003CE503u, sub_003CE503); /* call 0x003CE503 */

loc_003CF835: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + 8);
    ebx = eax + ecx * 4 + 4;
    eax = MEM32(ebp + 0xC);
    ecx = MEM32(ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF84Au); RECOMP_ABI_CALL(0x003CF249u, sub_003CF249); /* call 0x003CF249 */

loc_003CF84A: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF855u); RECOMP_ABI_CALL(0x003CE220u, sub_003CE220); /* call 0x003CE220 */

loc_003CF855: ;
    ecx = ebp + -20;
    PUSH32(esp, ecx);
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF860u); RECOMP_ABI_CALL(0x003CDEA2u, sub_003CDEA2); /* call 0x003CDEA2 */

loc_003CF860: ;
    PUSH32(esp, eax);
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF869u); RECOMP_ABI_CALL(0x003CE2CEu, sub_003CE2CE); /* call 0x003CE2CE */

loc_003CF869: ;
    goto loc_003CF895;

loc_003CF86B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF8A1; /* je: equal / zero */

loc_003CF86F: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF8AA; /* je: equal / zero */

loc_003CF876: ;
    edi = MEM32(edi + 0x34);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF895; /* je: equal / zero */

loc_003CF87D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edi + 0x20;

loc_003CF882: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF88C; /* je: equal / zero */

loc_003CF887: ;
    MEM8(ebp + ecx + -8) = 0;

loc_003CF88C: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CF882; /* jle: less or equal (signed <=) */

loc_003CF895: ;
    ecx = ebp + -12;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF89Du); RECOMP_ABI_CALL(0x003CDDF9u, sub_003CDDF9); /* call 0x003CDDF9 */

loc_003CF89D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CF86B; /* jne: not equal / not zero */

loc_003CF8A1: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003CF8A3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12; return; /* ret 8 */

loc_003CF8AA: ;
    SET_LO8(eax, 1);
    goto loc_003CF8A3;

}

/**
 * sub_003CF8AE
 * Original: 0x003CF8AE - 0x003CF929 (123 bytes, 55 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CF8AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003CF8AE: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    SET_LO8(ebx, 1);
    PUSH32(esp, edi);
    edi = ecx;
    MEM8(esp + 0x13) = LO8(ebx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CF8C1: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003CF8CAu); RECOMP_ABI_CALL(0x003CF608u, sub_003CF608); /* call 0x003CF608 */

loc_003CF8CA: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF8EC; /* je: equal / zero */

loc_003CF8CE: ;
    ecx = ebp;
    PUSH32(esp, 0x003CF8D5u); RECOMP_ABI_CALL(0x003CE27Du, sub_003CE27D); /* call 0x003CE27D */

loc_003CF8D5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CF8DF; /* jne: not equal / not zero */

loc_003CF8D9: ;
    _fa = (uint32_t)(MEM32(ebp + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x30), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF8EC; /* je: equal / zero */

loc_003CF8DF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CF8EA; /* jne: not equal / not zero */

loc_003CF8E4: ;
    _fa = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x30), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF8EC; /* je: equal / zero */

loc_003CF8EA: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003CF8EC: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003CF8F5u); RECOMP_ABI_CALL(0x003CF75Bu, sub_003CF75B); /* call 0x003CF75B */

loc_003CF8F5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF909; /* je: equal / zero */

loc_003CF8F9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CF904; /* jne: not equal / not zero */

loc_003CF8FE: ;
    _fa = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x30), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF909; /* je: equal / zero */

loc_003CF904: ;
    MEM8(esp + 0x13) = 0;

loc_003CF909: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CF8C1; /* jle: less or equal (signed <=) */

loc_003CF90F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003CF923; /* je: equal / zero */

loc_003CF917: ;
    _fa = (uint32_t)(MEM8(esp + 3)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + 3), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF923; /* je: equal / zero */

loc_003CF91E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003CF925;

loc_003CF923: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CF925: ;
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CF929
 * Original: 0x003CF929 - 0x003CF9A7 (126 bytes, 51 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CF929(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CF929: ;
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
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CF9A1; /* jne: not equal / not zero */

loc_003CF939: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CF9A1; /* jne: not equal / not zero */

loc_003CF941: ;
    PUSH32(esp, edi);
    edi = esi + 0x24;
    PUSH32(esp, edi);
    ecx = esi + 0x1C;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x30) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF954u); RECOMP_ABI_CALL(0x003CE2CEu, sub_003CE2CE); /* call 0x003CE2CE */

loc_003CF954: ;
    PUSH32(esp, ebx);
    ecx = ebp + -8;
    MEM32(ebp + -8) = 0x41E80C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF964u); RECOMP_ABI_CALL(0x003CDE26u, sub_003CDE26); /* call 0x003CDE26 */

loc_003CF964: ;
    eax = ebp + -8;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CF96Fu); RECOMP_ABI_CALL(0x003CE2CEu, sub_003CE2CE); /* call 0x003CE2CE */

loc_003CF96F: ;
    eax = MEM32(esi + 0x3C);
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), LO8(ebx) (8-bit) */
    ecx = MEM32(esi + 0xC);
    MEM32(esi + 0x38) = eax;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi + 0x10) = LO8(eax);
    eax = MEM32(esi + 4);
    MEM32(esi + 0xC) = eax;
    eax = ecx;
    MEM32(esi + 0x3C) = ebx;
    MEM32(esi + 4) = ecx;
    MEM32(eax + 0xC) = ebx;
    eax = MEM32(esi + 0xC);
    MEM32(eax + 0xC) = 2;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    goto loc_003CF9A3;

loc_003CF9A1: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003CF9A3: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003CF9A7
 * Original: 0x003CF9A7 - 0x003CFAA7 (256 bytes, 97 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003CF9A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CF9A7: ;
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
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), ebx (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003CFAA0; /* jne: not equal / not zero */

loc_003CF9BD: ;
    _fa = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x2C), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CFAA0; /* jne: not equal / not zero */

loc_003CF9C7: ;
    _fa = (uint32_t)(MEM8(0x3E46F3)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3E46F3), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CFA3E; /* je: equal / zero */

loc_003CF9CF: ;
    ecx = MEM32(esi + 0x38);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CFA3E; /* je: equal / zero */

loc_003CF9D6: ;
    MEM8(ebp + -1) = LO8(ebx);

loc_003CF9D9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CFA05; /* je: equal / zero */

loc_003CF9DD: ;
    PUSH32(esp, 4);
    edi = ecx + 0x20;
    POP32(esp, eax);

loc_003CF9E3: ;
    edx = MEM32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF9F7; /* je: equal / zero */

loc_003CF9E9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CF9F7; /* je: equal / zero */

loc_003CF9EE: ;
    _fa = (uint32_t)(MEM32(edx + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x3C), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CF9F7; /* jne: not equal / not zero */

loc_003CF9F3: ;
    MEM8(ebp + -1) = 1;

loc_003CF9F7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003CF9E3; /* jne: not equal / not zero */

loc_003CF9FD: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), LO8(ebx) (8-bit) */
    ecx = MEM32(ecx + 0x30);
    if (CMP_EQ(_fa, _fb)) goto loc_003CF9D9; /* je: equal / zero */

loc_003CFA05: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), LO8(ebx) (8-bit) */
    eax = MEM32(esi + 0x38);
    if (CMP_NE(_fa, _fb)) goto loc_003CFA3E; /* jne: not equal / not zero */

loc_003CFA0D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CFA39; /* je: equal / zero */

loc_003CFA11: ;
    PUSH32(esp, 4);
    edx = eax + 0x20;
    POP32(esp, edi);

loc_003CFA17: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CFA2B; /* je: equal / zero */

loc_003CFA1D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CFA2B; /* je: equal / zero */

loc_003CFA22: ;
    _fa = (uint32_t)(MEM32(ecx + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x3C), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CFA2B; /* jne: not equal / not zero */

loc_003CFA27: ;
    MEM8(ebp + -1) = 1;

loc_003CFA2B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003CFA17; /* jne: not equal / not zero */

loc_003CFA31: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), LO8(ebx) (8-bit) */
    eax = MEM32(eax + 0x34);
    if (CMP_EQ(_fa, _fb)) goto loc_003CFA0D; /* je: equal / zero */

loc_003CFA39: ;
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CFAA0; /* je: equal / zero */

loc_003CFA3E: ;
    edi = esi + 0x1C;
    PUSH32(esp, edi);
    ecx = esi + 0x24;
    MEM32(esi + 0x30) = 1;
    MEM32(esi + 0x2C) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CFA54u); RECOMP_ABI_CALL(0x003CE2CEu, sub_003CE2CE); /* call 0x003CE2CE */

loc_003CFA54: ;
    PUSH32(esp, ebx);
    ecx = ebp + -12;
    MEM32(ebp + -12) = 0x41E80C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CFA64u); RECOMP_ABI_CALL(0x003CDE26u, sub_003CDE26); /* call 0x003CDE26 */

loc_003CFA64: ;
    eax = ebp + -12;
    PUSH32(esp, eax);
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003CFA6Fu); RECOMP_ABI_CALL(0x003CE2CEu, sub_003CE2CE); /* call 0x003CE2CE */

loc_003CFA6F: ;
    eax = MEM32(esi + 0x38);
    _fa = (uint32_t)(MEM8(esi + 0x10)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x10), LO8(ebx) (8-bit) */
    ecx = MEM32(esi + 0xC);
    MEM32(esi + 0x3C) = eax;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(esi + 0x10) = LO8(eax);
    eax = MEM32(esi + 4);
    MEM32(esi + 0xC) = eax;
    eax = ecx;
    MEM32(esi + 0x38) = ebx;
    MEM32(esi + 4) = ecx;
    MEM32(eax + 0xC) = ebx;
    eax = MEM32(esi + 0xC);
    MEM32(eax + 0xC) = 2;
    SET_LO8(eax, 1);
    goto loc_003CFAA2;

loc_003CFAA0: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003CFAA2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003CFAA7
 * Original: 0x003CFAA7 - 0x003CFABC (21 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFAA7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFAA7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x003CFAB2u); RECOMP_ABI_CALL(0x003CEA63u, sub_003CEA63); /* call 0x003CEA63 */

loc_003CFAB2: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CFABC
 * Original: 0x003CFABC - 0x003CFAD7 (27 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFABC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFABC: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CFACE; /* jne: not equal / not zero */

loc_003CFAC3: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

loc_003CFACC: ;
    ecx = eax;

loc_003CFACE: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CFACC; /* jne: not equal / not zero */

loc_003CFAD5: ;
    goto loc_003CFAC3;

}

/**
 * sub_003CFAD7
 * Original: 0x003CFAD7 - 0x003CFAEC (21 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFAD7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFAD7: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x003CFAE2u); RECOMP_ABI_CALL(0x003CEABAu, sub_003CEABA); /* call 0x003CEABA */

loc_003CFAE2: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CFAEC
 * Original: 0x003CFAEC - 0x003CFB26 (58 bytes, 21 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFAEC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFAEC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x10);
    esi = ecx;
    PUSH32(esp, 0x003CFAFBu); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003CFAFB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CFB11; /* je: equal / zero */

loc_003CFAFF: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + 8));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x003CFB0Fu); RECOMP_ABI_CALL(0x003CEB86u, sub_003CEB86); /* call 0x003CEB86 */

loc_003CFB0F: ;
    goto loc_003CFB13;

loc_003CFB11: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CFB13: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    MEM32(esi + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003CFB1F; /* jne: not equal / not zero */

loc_003CFB1C: ;
    MEM32(esi + 4) = eax;

loc_003CFB1F: ;
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CFB26
 * Original: 0x003CFB26 - 0x003CFB41 (27 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFB26(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFB26: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CFB38; /* jne: not equal / not zero */

loc_003CFB2D: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 8; return; /* ret 4 */

loc_003CFB36: ;
    ecx = eax;

loc_003CFB38: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CFB36; /* jne: not equal / not zero */

loc_003CFB3F: ;
    goto loc_003CFB2D;

}

/**
 * sub_003CFB41
 * Original: 0x003CFB41 - 0x003CFB56 (21 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFB41(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFB41: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x003CFB4Cu); RECOMP_ABI_CALL(0x003CEB5Du, sub_003CEB5D); /* call 0x003CEB5D */

loc_003CFB4C: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CFB56
 * Original: 0x003CFB56 - 0x003CFB6B (21 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFB56(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFB56: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x003CFB61u); RECOMP_ABI_CALL(0x003CEBF9u, sub_003CEBF9); /* call 0x003CEBF9 */

loc_003CFB61: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CFB6B
 * Original: 0x003CFB6B - 0x003CFB93 (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFB6B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFB6B: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x41E85C;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CFB93
 * Original: 0x003CFB93 - 0x003CFBB4 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFB93(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFB93: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x41E85C;
    if (TEST_Z(_fa, _fb)) goto loc_003CFBAE; /* je: equal / zero */

loc_003CFBA3: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CFBAEu); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003CFBAE: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CFBB4
 * Original: 0x003CFBB4 - 0x003CFBC9 (21 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFBB4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFBB4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x003CFBBFu); RECOMP_ABI_CALL(0x003CEC22u, sub_003CEC22); /* call 0x003CEC22 */

loc_003CFBBF: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CFBC9
 * Original: 0x003CFBC9 - 0x003CFBF1 (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFBC9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFBC9: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x41E860;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CFBF1
 * Original: 0x003CFBF1 - 0x003CFC12 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFBF1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFBF1: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x41E860;
    if (TEST_Z(_fa, _fb)) goto loc_003CFC0C; /* je: equal / zero */

loc_003CFC01: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CFC0Cu); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003CFC0C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CFC12
 * Original: 0x003CFC12 - 0x003CFC3A (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFC12(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFC12: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x41E864;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CFC3A
 * Original: 0x003CFC3A - 0x003CFC5B (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFC3A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFC3A: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x41E864;
    if (TEST_Z(_fa, _fb)) goto loc_003CFC55; /* je: equal / zero */

loc_003CFC4A: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CFC55u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003CFC55: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CFC5B
 * Original: 0x003CFC5B - 0x003CFC83 (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFC5B(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFC5B: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x41E868;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CFC83
 * Original: 0x003CFC83 - 0x003CFCA4 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFC83(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFC83: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x41E868;
    if (TEST_Z(_fa, _fb)) goto loc_003CFC9E; /* je: equal / zero */

loc_003CFC93: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CFC9Eu); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003CFC9E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CFCA4
 * Original: 0x003CFCA4 - 0x003CFCB9 (21 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFCA4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFCA4: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x003CFCAFu); RECOMP_ABI_CALL(0x003CEC88u, sub_003CEC88); /* call 0x003CEC88 */

loc_003CFCAF: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CFCB9
 * Original: 0x003CFCB9 - 0x003CFCF2 (57 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFCB9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFCB9: ;
    eax = ecx;
    edx = MEM32(eax);
    ecx = MEM32(edx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003CFCD6; /* je: equal / zero */

loc_003CFCC5: ;
    edx = ecx;
    goto loc_003CFCCB;

loc_003CFCC9: ;
    edx = esi;

loc_003CFCCB: ;
    esi = MEM32(edx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CFCC9; /* jne: not equal / not zero */

loc_003CFCD2: ;
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003CFCD6: ;
    esi = MEM32(edx + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CFCE6; /* jne: not equal / not zero */

loc_003CFCDD: ;
    MEM32(eax) = MEM32(eax) & esi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003CFCE1: ;
    edx = esi;
    esi = MEM32(edx + 8);

loc_003CFCE6: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CFCE1; /* je: equal / zero */

loc_003CFCEB: ;
    ecx = MEM32(edx + 8);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CFCF2
 * Original: 0x003CFCF2 - 0x003CFD11 (31 bytes, 12 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFCF2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFCF2: ;
    eax = MEM32(ecx + 8);
    goto loc_003CFD0A;

loc_003CFCF7: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esp + 4) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003CFD05; /* jle: less or equal (signed <=) */

loc_003CFD00: ;
    eax = MEM32(eax + 0x10);
    goto loc_003CFD0A;

loc_003CFD05: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003CFD0E; /* jge: greater or equal (signed >=) */

loc_003CFD07: ;
    eax = MEM32(eax + 0x14);

loc_003CFD0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CFCF7; /* jne: not equal / not zero */

loc_003CFD0E: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CFD11
 * Original: 0x003CFD11 - 0x003CFD4E (61 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFD11(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFD11: ;
    eax = ecx;
    edx = MEM32(eax);
    ecx = MEM32(edx + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003CFD2E; /* je: equal / zero */

loc_003CFD1D: ;
    edx = ecx;
    goto loc_003CFD23;

loc_003CFD21: ;
    edx = esi;

loc_003CFD23: ;
    esi = MEM32(edx + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CFD21; /* jne: not equal / not zero */

loc_003CFD2A: ;
    MEM32(eax) = edx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003CFD2E: ;
    esi = MEM32(edx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CFD39; /* jne: not equal / not zero */

loc_003CFD35: ;
    MEM32(eax) = MEM32(eax) & esi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003CFD39: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CFD47; /* jne: not equal / not zero */

loc_003CFD3E: ;
    edx = esi;
    esi = MEM32(edx + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CFD39; /* jne: not equal / not zero */

loc_003CFD47: ;
    ecx = MEM32(edx + 0xC);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CFD4E
 * Original: 0x003CFD4E - 0x003CFD63 (21 bytes, 8 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFD4E(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFD4E: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, 0x003CFD59u); RECOMP_ABI_CALL(0x003CECB1u, sub_003CECB1); /* call 0x003CECB1 */

loc_003CFD59: ;
    MEM32(esi + 8) = MEM32(esi + 8) & 0;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CFD63
 * Original: 0x003CFD63 - 0x003CFD8B (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFD63(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFD63: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x41E86C;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CFD8B
 * Original: 0x003CFD8B - 0x003CFDAC (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFD8B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFD8B: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x41E86C;
    if (TEST_Z(_fa, _fb)) goto loc_003CFDA6; /* je: equal / zero */

loc_003CFD9B: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CFDA6u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003CFDA6: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CFDAC
 * Original: 0x003CFDAC - 0x003CFDD4 (40 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFDAC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFDAC: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax) = 0x41E870;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0x14) = 1;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003CFDD4
 * Original: 0x003CFDD4 - 0x003CFDF5 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFDD4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFDD4: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x41E870;
    if (TEST_Z(_fa, _fb)) goto loc_003CFDEF; /* je: equal / zero */

loc_003CFDE4: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CFDEFu); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003CFDEF: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CFDF5
 * Original: 0x003CFDF5 - 0x003CFE24 (47 bytes, 12 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFDF5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFDF5: ;
    eax = ecx;
    ecx = MEM32(esp + 4);
    MEM32(eax + 0x10) = MEM32(eax + 0x10) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x14) = MEM32(eax + 0x14) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax) = 0x41E874;
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x18) = 1;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003CFE24
 * Original: 0x003CFE24 - 0x003CFE45 (33 bytes, 11 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFE24(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFE24: ;
    _fa = (uint32_t)(MEM8(esp + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 4), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x41E874;
    if (TEST_Z(_fa, _fb)) goto loc_003CFE3F; /* je: equal / zero */

loc_003CFE34: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003CFE3Fu); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003CFE3F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003CFE45
 * Original: 0x003CFE45 - 0x003CFE7D (56 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFE45(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFE45: ;
    edx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003CFE52; /* je: equal / zero */

loc_003CFE4D: ;
    esi = MEM32(edx + 0x14);
    goto loc_003CFE54;

loc_003CFE52: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CFE54: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CFE60; /* je: equal / zero */

loc_003CFE5B: ;
    ecx = MEM32(eax + 0x14);
    goto loc_003CFE62;

loc_003CFE60: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CFE62: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    POP32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_003CFE70; /* jle: less or equal (signed <=) */

loc_003CFE67: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CFE79; /* je: equal / zero */

loc_003CFE6B: ;
    eax = MEM32(edx + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_003CFE70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CFE79; /* je: equal / zero */

loc_003CFE74: ;
    eax = MEM32(eax + 0x14);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_003CFE79: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_003CFE7D
 * Original: 0x003CFE7D - 0x003CFE9E (33 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFE7D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFE7D: ;
    PUSH32(esp, esi);
    esi = ecx;
    goto loc_003CFE98;

loc_003CFE82: ;
    ecx = esi;
    PUSH32(esp, 0x003CFE89u); RECOMP_ABI_CALL(0x003CFE45u, sub_003CFE45); /* call 0x003CFE45 */

loc_003CFE89: ;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x14), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CFE96; /* je: equal / zero */

loc_003CFE8E: ;
    MEM32(esi + 0x14) = eax;
    esi = MEM32(esi + 8);
    goto loc_003CFE98;

loc_003CFE96: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CFE98: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CFE82; /* jne: not equal / not zero */

loc_003CFE9C: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CFE9E
 * Original: 0x003CFE9E - 0x003CFED6 (56 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFE9E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFE9E: ;
    edx = MEM32(ecx + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003CFEAB; /* je: equal / zero */

loc_003CFEA6: ;
    esi = MEM32(edx + 0x18);
    goto loc_003CFEAD;

loc_003CFEAB: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CFEAD: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CFEB9; /* je: equal / zero */

loc_003CFEB4: ;
    ecx = MEM32(eax + 0x18);
    goto loc_003CFEBB;

loc_003CFEB9: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CFEBB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    POP32(esp, esi);
    if (CMP_LE(_fas, _fbs)) goto loc_003CFEC9; /* jle: less or equal (signed <=) */

loc_003CFEC0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CFED2; /* je: equal / zero */

loc_003CFEC4: ;
    eax = MEM32(edx + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_003CFEC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CFED2; /* je: equal / zero */

loc_003CFECD: ;
    eax = MEM32(eax + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_003CFED2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_003CFED6
 * Original: 0x003CFED6 - 0x003CFEF7 (33 bytes, 15 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFED6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFED6: ;
    PUSH32(esp, esi);
    esi = ecx;
    goto loc_003CFEF1;

loc_003CFEDB: ;
    ecx = esi;
    PUSH32(esp, 0x003CFEE2u); RECOMP_ABI_CALL(0x003CFE9Eu, sub_003CFE9E); /* call 0x003CFE9E */

loc_003CFEE2: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003CFEEF; /* je: equal / zero */

loc_003CFEE7: ;
    MEM32(esi + 0x18) = eax;
    esi = MEM32(esi + 0xC);
    goto loc_003CFEF1;

loc_003CFEEF: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003CFEF1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CFEDB; /* jne: not equal / not zero */

loc_003CFEF5: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CFEF7
 * Original: 0x003CFEF7 - 0x003CFF42 (75 bytes, 30 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFEF7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFEF7: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    ecx = MEM32(edi + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003CFF0E; /* je: equal / zero */

loc_003CFF0B: ;
    MEM32(ecx + 8) = esi;

loc_003CFF0E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = edi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003CFF2B; /* je: equal / zero */

loc_003CFF1B: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CFF23; /* jne: not equal / not zero */

loc_003CFF20: ;
    MEM32(eax + 0xC) = edi;

loc_003CFF23: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CFF2B; /* jne: not equal / not zero */

loc_003CFF28: ;
    MEM32(eax + 0x10) = edi;

loc_003CFF2B: ;
    ecx = esi;
    PUSH32(esp, 0x003CFF32u); RECOMP_ABI_CALL(0x003CFE45u, sub_003CFE45); /* call 0x003CFE45 */

loc_003CFF32: ;
    ecx = edi;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x003CFF3Cu); RECOMP_ABI_CALL(0x003CFE45u, sub_003CFE45); /* call 0x003CFE45 */

loc_003CFF3C: ;
    MEM32(edi + 0x14) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CFF42
 * Original: 0x003CFF42 - 0x003CFF8D (75 bytes, 30 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFF42(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFF42: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0xC);
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0xC) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003CFF59; /* je: equal / zero */

loc_003CFF56: ;
    MEM32(ecx + 8) = esi;

loc_003CFF59: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = edi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003CFF76; /* je: equal / zero */

loc_003CFF66: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CFF6E; /* jne: not equal / not zero */

loc_003CFF6B: ;
    MEM32(eax + 0xC) = edi;

loc_003CFF6E: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CFF76; /* jne: not equal / not zero */

loc_003CFF73: ;
    MEM32(eax + 0x10) = edi;

loc_003CFF76: ;
    ecx = esi;
    PUSH32(esp, 0x003CFF7Du); RECOMP_ABI_CALL(0x003CFE45u, sub_003CFE45); /* call 0x003CFE45 */

loc_003CFF7D: ;
    ecx = edi;
    MEM32(esi + 0x14) = eax;
    PUSH32(esp, 0x003CFF87u); RECOMP_ABI_CALL(0x003CFE45u, sub_003CFE45); /* call 0x003CFE45 */

loc_003CFF87: ;
    MEM32(edi + 0x14) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CFF8D
 * Original: 0x003CFF8D - 0x003CFFD8 (75 bytes, 30 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFF8D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFF8D: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x14);
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x14) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003CFFA4; /* je: equal / zero */

loc_003CFFA1: ;
    MEM32(ecx + 0xC) = esi;

loc_003CFFA4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xC) = edi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003CFFC1; /* je: equal / zero */

loc_003CFFB1: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CFFB9; /* jne: not equal / not zero */

loc_003CFFB6: ;
    MEM32(eax + 0x10) = edi;

loc_003CFFB9: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003CFFC1; /* jne: not equal / not zero */

loc_003CFFBE: ;
    MEM32(eax + 0x14) = edi;

loc_003CFFC1: ;
    ecx = esi;
    PUSH32(esp, 0x003CFFC8u); RECOMP_ABI_CALL(0x003CFE9Eu, sub_003CFE9E); /* call 0x003CFE9E */

loc_003CFFC8: ;
    ecx = edi;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x003CFFD2u); RECOMP_ABI_CALL(0x003CFE9Eu, sub_003CFE9E); /* call 0x003CFE9E */

loc_003CFFD2: ;
    MEM32(edi + 0x18) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003CFFD8
 * Original: 0x003CFFD8 - 0x003D0023 (75 bytes, 30 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003CFFD8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003CFFD8: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x10);
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003CFFEF; /* je: equal / zero */

loc_003CFFEC: ;
    MEM32(ecx + 0xC) = esi;

loc_003CFFEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0xC) = edi;
    MEM32(edi + 0x14) = esi;
    MEM32(edi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003D000C; /* je: equal / zero */

loc_003CFFFC: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0004; /* jne: not equal / not zero */

loc_003D0001: ;
    MEM32(eax + 0x10) = edi;

loc_003D0004: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D000C; /* jne: not equal / not zero */

loc_003D0009: ;
    MEM32(eax + 0x14) = edi;

loc_003D000C: ;
    ecx = esi;
    PUSH32(esp, 0x003D0013u); RECOMP_ABI_CALL(0x003CFE9Eu, sub_003CFE9E); /* call 0x003CFE9E */

loc_003D0013: ;
    ecx = edi;
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, 0x003D001Du); RECOMP_ABI_CALL(0x003CFE9Eu, sub_003CFE9E); /* call 0x003CFE9E */

loc_003D001D: ;
    MEM32(edi + 0x18) = eax;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003D0023
 * Original: 0x003D0023 - 0x003D003D (26 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0023(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D0023: ;
    PUSH32(esp, MEM32(0x3E4710));
    PUSH32(esp, 0x003D002Eu); RECOMP_ABI_CALL(0x003CEA63u, sub_003CEA63); /* call 0x003CEA63 */

loc_003D002E: ;
    MEM32(0x3E4710) = MEM32(0x3E4710) & 0;
    _fa = (uint32_t)(MEM32(0x3E4710)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x3E4714) = MEM32(0x3E4714) & 0;
    _fa = (uint32_t)(MEM32(0x3E4714)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_003D003D
 * Original: 0x003D003D - 0x003D0073 (54 bytes, 26 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D003D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D003D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D0043: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D004C; /* jne: not equal / not zero */

loc_003D0048: ;
    PUSH32(esp, esi);
    POP32(esp, eax);
    goto loc_003D0050;

loc_003D004C: ;
    eax = MEM32(edi + esi * 4 + 0x1C);

loc_003D0050: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0062; /* jne: not equal / not zero */

loc_003D0056: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003D005Eu); RECOMP_ABI_CALL(0x003CF226u, sub_003CF226); /* call 0x003CF226 */

loc_003D005E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D006F; /* jne: not equal / not zero */

loc_003D0062: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D0043; /* jle: less or equal (signed <=) */

loc_003D0068: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003D006A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003D006F: ;
    SET_LO8(eax, 1);
    goto loc_003D006A;

}

/**
 * sub_003D0073
 * Original: 0x003D0073 - 0x003D008D (26 bytes, 5 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0073(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D0073: ;
    PUSH32(esp, MEM32(0x3E4720));
    PUSH32(esp, 0x003D007Eu); RECOMP_ABI_CALL(0x003CEABAu, sub_003CEABA); /* call 0x003CEABA */

loc_003D007E: ;
    MEM32(0x3E4720) = MEM32(0x3E4720) & 0;
    _fa = (uint32_t)(MEM32(0x3E4720)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x3E4724) = MEM32(0x3E4724) & 0;
    _fa = (uint32_t)(MEM32(0x3E4724)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_003D008D
 * Original: 0x003D008D - 0x003D00B0 (35 bytes, 14 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003D008D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003D008D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -4) = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax) = 0x41E80C;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D00ACu); RECOMP_ABI_CALL(0x003CEFE6u, sub_003CEFE6); /* call 0x003CEFE6 */

loc_003D00AC: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D008E
 * Original: 0x003D008E - 0x003D00B0 (34 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D008E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D008E: ;
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -4) = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax) = 0x41E80C;
    edx = MEM32(ecx + 0x18);
    MEM32(eax + 4) = edx;
    PUSH32(esp, 0x003D00ACu); RECOMP_ABI_CALL(0x003CEFE6u, sub_003CEFE6); /* call 0x003CEFE6 */

loc_003D00AC: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D00B0
 * Original: 0x003D00B0 - 0x003D00D3 (35 bytes, 14 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003D00B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003D00B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -4) = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax) = 0x41E80C;
    edx = MEM32(ecx + 0x20);
    MEM32(eax + 4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D00CFu); RECOMP_ABI_CALL(0x003CF095u, sub_003CF095); /* call 0x003CF095 */

loc_003D00CF: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D00D3
 * Original: 0x003D00D3 - 0x003D00F6 (35 bytes, 14 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003D00D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003D00D3: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -4) = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax) = 0x41E80C;
    edx = MEM32(ecx + 0x28);
    MEM32(eax + 4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D00F2u); RECOMP_ABI_CALL(0x003CF144u, sub_003CF144); /* call 0x003CF144 */

loc_003D00F2: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D00F6
 * Original: 0x003D00F6 - 0x003D016B (117 bytes, 49 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D00F6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D00F6: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x20);
    ebx = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);

loc_003D0100: ;
    _fa = (uint32_t)(MEM8(esp + edi + 0x18)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + edi + 0x18), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0134; /* je: equal / zero */

loc_003D0107: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    eax = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_003D0134; /* je: equal / zero */

loc_003D010D: ;
    _fa = (uint32_t)(MEM32(esi + eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D011A; /* jne: not equal / not zero */

loc_003D0113: ;
    eax = MEM32(eax + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D010D; /* jne: not equal / not zero */

loc_003D011A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0134; /* je: equal / zero */

loc_003D011E: ;
    eax = MEM32(esi + eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0134; /* je: equal / zero */

loc_003D0126: ;
    ecx = MEM32(esp + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003D0130u); RECOMP_ABI_CALL(0x003CEB15u, sub_003CEB15); /* call 0x003CEB15 */

loc_003D0130: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D015F; /* je: equal / zero */

loc_003D0134: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x2C (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D0100; /* jle: less or equal (signed <=) */

loc_003D013D: ;
    ecx = ebx;
    PUSH32(esp, 0x003D0144u); RECOMP_ABI_CALL(0x003CE32Au, sub_003CE32A); /* call 0x003CE32A */

loc_003D0144: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0163; /* je: equal / zero */

loc_003D0148: ;
    ecx = ebx;
    PUSH32(esp, 0x003D014Fu); RECOMP_ABI_CALL(0x003CE32Au, sub_003CE32A); /* call 0x003CE32A */

loc_003D014F: ;
    PUSH32(esp, MEM32(eax + 0x20));
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, 0x003D015Bu); RECOMP_ABI_CALL(0x003CEB15u, sub_003CEB15); /* call 0x003CEB15 */

loc_003D015B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0163; /* jne: not equal / not zero */

loc_003D015F: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003D0165;

loc_003D0163: ;
    SET_LO8(eax, 1);

loc_003D0165: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003D016B
 * Original: 0x003D016B - 0x003D0195 (42 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D016B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D016B: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D0171: ;
    _fa = (uint32_t)(MEM8(esp + esi + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esp + esi + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0184; /* je: equal / zero */

loc_003D0178: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003D0180u); RECOMP_ABI_CALL(0x003D003Du, sub_003D003D); /* call 0x003D003D */

loc_003D0180: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0191; /* jne: not equal / not zero */

loc_003D0184: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D0171; /* jle: less or equal (signed <=) */

loc_003D018A: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003D018C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

loc_003D0191: ;
    SET_LO8(eax, 1);
    goto loc_003D018C;

}

/**
 * sub_003D0195
 * Original: 0x003D0195 - 0x003D01DA (69 bytes, 29 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003D0195(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D0195: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D01D3; /* je: equal / zero */

loc_003D01A1: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ebp + 0x14) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + 0x14) = esp;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(eax) = 0x41E80C;
    MEM32(eax + 4) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D01C6u); RECOMP_ABI_CALL(0x003CF249u, sub_003CF249); /* call 0x003CF249 */

loc_003D01C6: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(esi + 0x10);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D01D1u); RECOMP_ABI_CALL(0x003D00F6u, sub_003D00F6); /* call 0x003D00F6 */

loc_003D01D1: ;
    goto loc_003D01D5;

loc_003D01D3: ;
    SET_LO8(eax, 1);

loc_003D01D5: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003D01DA
 * Original: 0x003D01DA - 0x003D0230 (86 bytes, 37 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D01DA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D01DA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = edi + 4;

loc_003D01E4: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003D01F0u); RECOMP_ABI_CALL(0x003CF608u, sub_003CF608); /* call 0x003CF608 */

loc_003D01F0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D022C; /* jne: not equal / not zero */

loc_003D01F4: ;
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = edi;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003D0200u); RECOMP_ABI_CALL(0x003CF75Bu, sub_003CF75B); /* call 0x003CF75B */

loc_003D0200: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D022C; /* jne: not equal / not zero */

loc_003D0204: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D021B; /* je: equal / zero */

loc_003D020D: ;
    PUSH32(esp, 0x003D0212u); RECOMP_ABI_CALL(0x003CE32Au, sub_003CE32A); /* call 0x003CE32A */

loc_003D0212: ;
    ecx = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x38) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D022C; /* je: equal / zero */

loc_003D021B: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D01E4; /* jle: less or equal (signed <=) */

loc_003D0224: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003D0226: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_003D022C: ;
    SET_LO8(eax, 1);
    goto loc_003D0226;

}

/**
 * sub_003D0230
 * Original: 0x003D0230 - 0x003D027E (78 bytes, 36 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003D0230(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003D0230: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    edi = ecx;
    PUSH32(esp, 0x003D023Eu); RECOMP_ABI_CALL(0x003D01DAu, sub_003D01DA); /* call 0x003D01DA */

loc_003D023E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0275; /* je: equal / zero */

loc_003D0242: ;
    _fa = (uint32_t)(MEM32(ebp + 0x2C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x2C), 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003D0266; /* jne: not equal / not zero */

loc_003D024A: ;
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = edi + 4;

loc_003D024F: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 0x10);
    PUSH32(esp, 0x003D0259u); RECOMP_ABI_CALL(0x003CE32Au, sub_003CE32A); /* call 0x003CE32A */

loc_003D0259: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003D027A; /* jne: not equal / not zero */

loc_003D025D: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_003D024F; /* jle: less or equal (signed <=) */

loc_003D0266: ;
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x003D026Eu); RECOMP_ABI_CALL(0x003CF8AEu, sub_003CF8AE); /* call 0x003CF8AE */

loc_003D026E: ;
    _cf = (int)((LO8(eax)) != 0);
    SET_LO8(eax, (uint32_t)(-(int32_t)LO8(eax)));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003D0273: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003D0275: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

loc_003D027A: ;
    SET_LO8(eax, 1);
    goto loc_003D0273;

}

/**
 * sub_003D027E
 * Original: 0x003D027E - 0x003D0328 (170 bytes, 63 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D027E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D027E: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x34) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D02BB; /* jne: not equal / not zero */

loc_003D028B: ;
    eax = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax + esi + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + esi + 0x18), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D02A5; /* je: equal / zero */

loc_003D0297: ;
    PUSH32(esp, ebx);
    MEM8(eax + esi + 0x18) = LO8(ebx);
    ecx = MEM32(esi + 0x34);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003D02A5u); RECOMP_ABI_CALL(0x003D06D2u, sub_003D06D2); /* call 0x003D06D2 */

loc_003D02A5: ;
    ecx = esi + 0x14;
    PUSH32(esp, 0x003D02ADu); RECOMP_ABI_CALL(0x003CDDF9u, sub_003CDDF9); /* call 0x003CDDF9 */

loc_003D02AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0323; /* jne: not equal / not zero */

loc_003D02B1: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x003D02B9u); RECOMP_ABI_CALL(0x003D008Du, sub_003D008D); /* call 0x003D008D */

loc_003D02B9: ;
    goto loc_003D0323;

loc_003D02BB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x38) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D02F0; /* jne: not equal / not zero */

loc_003D02C0: ;
    eax = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax + esi + 0x20)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + esi + 0x20), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D02DA; /* je: equal / zero */

loc_003D02CC: ;
    PUSH32(esp, ebx);
    MEM8(eax + esi + 0x20) = LO8(ebx);
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003D02DAu); RECOMP_ABI_CALL(0x003D06D2u, sub_003D06D2); /* call 0x003D06D2 */

loc_003D02DA: ;
    ecx = esi + 0x1C;
    PUSH32(esp, 0x003D02E2u); RECOMP_ABI_CALL(0x003CDDF9u, sub_003CDDF9); /* call 0x003CDDF9 */

loc_003D02E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0323; /* jne: not equal / not zero */

loc_003D02E6: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x003D02EEu); RECOMP_ABI_CALL(0x003D00B0u, sub_003D00B0); /* call 0x003D00B0 */

loc_003D02EE: ;
    goto loc_003D0323;

loc_003D02F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x3C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0323; /* jne: not equal / not zero */

loc_003D02F5: ;
    eax = MEM32(esp + 0xC);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax + esi + 0x28)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + esi + 0x28), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D030F; /* je: equal / zero */

loc_003D0301: ;
    PUSH32(esp, ebx);
    MEM8(eax + esi + 0x28) = LO8(ebx);
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003D030Fu); RECOMP_ABI_CALL(0x003D06D2u, sub_003D06D2); /* call 0x003D06D2 */

loc_003D030F: ;
    ecx = esi + 0x24;
    PUSH32(esp, 0x003D0317u); RECOMP_ABI_CALL(0x003CDDF9u, sub_003CDDF9); /* call 0x003CDDF9 */

loc_003D0317: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0323; /* jne: not equal / not zero */

loc_003D031B: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x003D0323u); RECOMP_ABI_CALL(0x003D00D3u, sub_003D00D3); /* call 0x003D00D3 */

loc_003D0323: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003D0333
 * Original: 0x003D0333 - 0x003D0350 (29 bytes, 11 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0333(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D0333: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x41E844;
    goto loc_003D0348;

loc_003D033E: ;
    PUSH32(esp, MEM32(esi + 8));
    ecx = esi;
    PUSH32(esp, 0x003D0348u); RECOMP_ABI_CALL(0x003CEAE3u, sub_003CEAE3); /* call 0x003CEAE3 */

loc_003D0348: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D033E; /* jne: not equal / not zero */

loc_003D034E: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003D0366
 * Original: 0x003D0366 - 0x003D038C (38 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0366(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D0366: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x41E824;
    PUSH32(esp, 0x003D0374u); RECOMP_ABI_CALL(0x003CFB56u, sub_003CFB56); /* call 0x003CFB56 */

loc_003D0374: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003D0386; /* je: equal / zero */

loc_003D037B: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003D0386u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003D0386: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D038C
 * Original: 0x003D038C - 0x003D03B2 (38 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D038C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D038C: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x41E82C;
    PUSH32(esp, 0x003D039Au); RECOMP_ABI_CALL(0x003CFAA7u, sub_003CFAA7); /* call 0x003CFAA7 */

loc_003D039A: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003D03AC; /* je: equal / zero */

loc_003D03A1: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003D03ACu); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003D03AC: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D03B2
 * Original: 0x003D03B2 - 0x003D03D8 (38 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D03B2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D03B2: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x41E834;
    PUSH32(esp, 0x003D03C0u); RECOMP_ABI_CALL(0x003CFBB4u, sub_003CFBB4); /* call 0x003CFBB4 */

loc_003D03C0: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003D03D2; /* je: equal / zero */

loc_003D03C7: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003D03D2u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003D03D2: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D03D8
 * Original: 0x003D03D8 - 0x003D03FE (38 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D03D8(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D03D8: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x41E83C;
    PUSH32(esp, 0x003D03E6u); RECOMP_ABI_CALL(0x003CFAD7u, sub_003CFAD7); /* call 0x003CFAD7 */

loc_003D03E6: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003D03F8; /* je: equal / zero */

loc_003D03ED: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003D03F8u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003D03F8: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D03FE
 * Original: 0x003D03FE - 0x003D0422 (36 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D03FE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D03FE: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003D0406u); RECOMP_ABI_CALL(0x003D0333u, sub_003D0333); /* call 0x003D0333 */

loc_003D0406: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003D041C; /* je: equal / zero */

loc_003D040D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D041C; /* je: equal / zero */

loc_003D0411: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003D041Cu); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003D041C: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D0422
 * Original: 0x003D0422 - 0x003D0448 (38 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0422(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D0422: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x41E84C;
    PUSH32(esp, 0x003D0430u); RECOMP_ABI_CALL(0x003CFCA4u, sub_003CFCA4); /* call 0x003CFCA4 */

loc_003D0430: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003D0442; /* je: equal / zero */

loc_003D0437: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003D0442u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003D0442: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D0448
 * Original: 0x003D0448 - 0x003D046E (38 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0448(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D0448: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x41E854;
    PUSH32(esp, 0x003D0456u); RECOMP_ABI_CALL(0x003CFB41u, sub_003CFB41); /* call 0x003CFB41 */

loc_003D0456: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003D0468; /* je: equal / zero */

loc_003D045D: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003D0468u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003D0468: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D046E
 * Original: 0x003D046E - 0x003D0494 (38 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D046E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D046E: ;
    PUSH32(esp, esi);
    esi = ecx;
    MEM32(esi) = 0x41E818;
    PUSH32(esp, 0x003D047Cu); RECOMP_ABI_CALL(0x003CFD4Eu, sub_003CFD4E); /* call 0x003CFD4E */

loc_003D047C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003D048E; /* je: equal / zero */

loc_003D0483: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003D048Eu); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003D048E: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D0494
 * Original: 0x003D0494 - 0x003D04A9 (21 bytes, 10 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003D0494(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003D0494: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -4));
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D04A5u); RECOMP_ABI_CALL(0x003CFCF2u, sub_003CFCF2); /* call 0x003CFCF2 */

loc_003D04A5: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D04A9
 * Original: 0x003D04A9 - 0x003D055F (182 bytes, 79 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D04A9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D04A9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;

loc_003D04AE: ;
    eax = MEM32(edi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = MEM32(edi + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_003D04BD; /* je: equal / zero */

loc_003D04B8: ;
    esi = MEM32(eax + 0x14);
    goto loc_003D04BF;

loc_003D04BD: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D04BF: ;
    ecx = MEM32(edi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D04CB; /* je: equal / zero */

loc_003D04C6: ;
    edx = MEM32(ecx + 0x14);
    goto loc_003D04CD;

loc_003D04CB: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D04CD: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D0502; /* jle: less or equal (signed <=) */

loc_003D04D2: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D04DE; /* je: equal / zero */

loc_003D04D9: ;
    edx = MEM32(ecx + 0x14);
    goto loc_003D04E0;

loc_003D04DE: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D04E0: ;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D04EC; /* je: equal / zero */

loc_003D04E7: ;
    ecx = MEM32(ecx + 0x14);
    goto loc_003D04EE;

loc_003D04EC: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D04EE: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003D04F9; /* jge: greater or equal (signed >=) */

loc_003D04F2: ;
    ecx = eax;
    PUSH32(esp, 0x003D04F9u); RECOMP_ABI_CALL(0x003CFEF7u, sub_003CFEF7); /* call 0x003CFEF7 */

loc_003D04F9: ;
    ecx = edi;
    PUSH32(esp, 0x003D0500u); RECOMP_ABI_CALL(0x003CFF42u, sub_003CFF42); /* call 0x003CFF42 */

loc_003D0500: ;
    goto loc_003D0549;

loc_003D0502: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D050B; /* je: equal / zero */

loc_003D0506: ;
    edx = MEM32(ecx + 0x14);
    goto loc_003D050D;

loc_003D050B: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D050D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0516; /* je: equal / zero */

loc_003D0511: ;
    eax = MEM32(eax + 0x14);
    goto loc_003D0518;

loc_003D0516: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D0518: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D0549; /* jle: less or equal (signed <=) */

loc_003D051D: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0529; /* je: equal / zero */

loc_003D0524: ;
    edx = MEM32(eax + 0x14);
    goto loc_003D052B;

loc_003D0529: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D052B: ;
    eax = MEM32(ecx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0537; /* je: equal / zero */

loc_003D0532: ;
    eax = MEM32(eax + 0x14);
    goto loc_003D0539;

loc_003D0537: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D0539: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003D0542; /* jge: greater or equal (signed >=) */

loc_003D053D: ;
    PUSH32(esp, 0x003D0542u); RECOMP_ABI_CALL(0x003CFF42u, sub_003CFF42); /* call 0x003CFF42 */

loc_003D0542: ;
    ecx = edi;
    PUSH32(esp, 0x003D0549u); RECOMP_ABI_CALL(0x003CFEF7u, sub_003CFEF7); /* call 0x003CFEF7 */

loc_003D0549: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D055B; /* je: equal / zero */

loc_003D054D: ;
    ecx = ebx;
    PUSH32(esp, 0x003D0554u); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D0554: ;
    edi = ebx;
    goto loc_003D04AE;

loc_003D055B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003D055F
 * Original: 0x003D055F - 0x003D0615 (182 bytes, 79 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D055F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D055F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;

loc_003D0564: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ebx = MEM32(edi + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_003D0573; /* je: equal / zero */

loc_003D056E: ;
    esi = MEM32(eax + 0x18);
    goto loc_003D0575;

loc_003D0573: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D0575: ;
    ecx = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0581; /* je: equal / zero */

loc_003D057C: ;
    edx = MEM32(ecx + 0x18);
    goto loc_003D0583;

loc_003D0581: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D0583: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D05B8; /* jle: less or equal (signed <=) */

loc_003D0588: ;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0594; /* je: equal / zero */

loc_003D058F: ;
    edx = MEM32(ecx + 0x18);
    goto loc_003D0596;

loc_003D0594: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D0596: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D05A2; /* je: equal / zero */

loc_003D059D: ;
    ecx = MEM32(ecx + 0x18);
    goto loc_003D05A4;

loc_003D05A2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D05A4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003D05AF; /* jge: greater or equal (signed >=) */

loc_003D05A8: ;
    ecx = eax;
    PUSH32(esp, 0x003D05AFu); RECOMP_ABI_CALL(0x003CFF8Du, sub_003CFF8D); /* call 0x003CFF8D */

loc_003D05AF: ;
    ecx = edi;
    PUSH32(esp, 0x003D05B6u); RECOMP_ABI_CALL(0x003CFFD8u, sub_003CFFD8); /* call 0x003CFFD8 */

loc_003D05B6: ;
    goto loc_003D05FF;

loc_003D05B8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D05C1; /* je: equal / zero */

loc_003D05BC: ;
    edx = MEM32(ecx + 0x18);
    goto loc_003D05C3;

loc_003D05C1: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D05C3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D05CC; /* je: equal / zero */

loc_003D05C7: ;
    eax = MEM32(eax + 0x18);
    goto loc_003D05CE;

loc_003D05CC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D05CE: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D05FF; /* jle: less or equal (signed <=) */

loc_003D05D3: ;
    eax = MEM32(ecx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D05DF; /* je: equal / zero */

loc_003D05DA: ;
    edx = MEM32(eax + 0x18);
    goto loc_003D05E1;

loc_003D05DF: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D05E1: ;
    eax = MEM32(ecx + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D05ED; /* je: equal / zero */

loc_003D05E8: ;
    eax = MEM32(eax + 0x18);
    goto loc_003D05EF;

loc_003D05ED: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D05EF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003D05F8; /* jge: greater or equal (signed >=) */

loc_003D05F3: ;
    PUSH32(esp, 0x003D05F8u); RECOMP_ABI_CALL(0x003CFFD8u, sub_003CFFD8); /* call 0x003CFFD8 */

loc_003D05F8: ;
    ecx = edi;
    PUSH32(esp, 0x003D05FFu); RECOMP_ABI_CALL(0x003CFF8Du, sub_003CFF8D); /* call 0x003CFF8D */

loc_003D05FF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0611; /* je: equal / zero */

loc_003D0603: ;
    ecx = ebx;
    PUSH32(esp, 0x003D060Au); RECOMP_ABI_CALL(0x003CFED6u, sub_003CFED6); /* call 0x003CFED6 */

loc_003D060A: ;
    edi = ebx;
    goto loc_003D0564;

loc_003D0611: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003D0615
 * Original: 0x003D0615 - 0x003D0628 (19 bytes, 6 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0615(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D0615: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(0x3E4700) = eax;
    MEM32(0x3E4704) = eax;
    PUSH32(esp, 0x003D0627u); RECOMP_ABI_CALL(0x003CEBF9u, sub_003CEBF9); /* call 0x003CEBF9 */

loc_003D0627: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003D0628
 * Original: 0x003D0628 - 0x003D0643 (27 bytes, 12 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0628(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D0628: ;
    PUSH32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x1C), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0641; /* je: equal / zero */

loc_003D0630: ;
    eax = esp;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x003D063Cu); RECOMP_ABI_CALL(0x003CFABCu, sub_003CFABC); /* call 0x003CFABC */

loc_003D063C: ;
    eax = MEM32(eax);
    eax = MEM32(eax + 4);

loc_003D0641: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003D0643
 * Original: 0x003D0643 - 0x003D0696 (83 bytes, 31 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003D0643(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D0643: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D064Du); RECOMP_ABI_CALL(0x003D0023u, sub_003D0023); /* call 0x003D0023 */

loc_003D064D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0652u); RECOMP_ABI_CALL(0x003D0073u, sub_003D0073); /* call 0x003D0073 */

loc_003D0652: ;
    eax = ebp + -4;
    esi = 0x3E46F8;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0662u); RECOMP_ABI_CALL(0x003CFABCu, sub_003CFABC); /* call 0x003CFABC */

loc_003D0662: ;
    _fa = (uint32_t)(MEM32(0x3E4704)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3E4704), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0693; /* je: equal / zero */

loc_003D066B: ;
    eax = MEM32(ebp + -4);

loc_003D066E: ;
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D067D; /* je: equal / zero */

loc_003D0675: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x003D067Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003D067Bu); } /* indirect call */
    }

loc_003D067D: ;
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0688u); RECOMP_ABI_CALL(0x003CFABCu, sub_003CFABC); /* call 0x003CFABC */

loc_003D0688: ;
    _fa = (uint32_t)(MEM32(0x3E4704)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3E4704), 0 (32-bit) */
    eax = MEM32(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003D066E; /* jne: not equal / not zero */

loc_003D0693: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003D0696
 * Original: 0x003D0696 - 0x003D06D2 (60 bytes, 23 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003D0696(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D0696: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = ebp + -4;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D06A6u); RECOMP_ABI_CALL(0x003CFABCu, sub_003CFABC); /* call 0x003CFABC */

loc_003D06A6: ;
    goto loc_003D06C2;

loc_003D06A8: ;
    eax = MEM32(ebp + -4);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = MEM32(eax + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D06B6u); RECOMP_ABI_CALL(0x003D003Du, sub_003D003D); /* call 0x003D003D */

loc_003D06B6: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D06CE; /* jne: not equal / not zero */

loc_003D06BA: ;
    ecx = ebp + -4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D06C2u); RECOMP_ABI_CALL(0x003CEC4Bu, sub_003CEC4B); /* call 0x003CEC4B */

loc_003D06C2: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D06A8; /* jne: not equal / not zero */

loc_003D06C8: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003D06CA: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

loc_003D06CE: ;
    SET_LO8(eax, 1);
    goto loc_003D06CA;

}

/**
 * sub_003D06D2
 * Original: 0x003D06D2 - 0x003D06F9 (39 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D06D2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D06D2: ;
    edx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = ecx + edx * 4 + 0x20;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D06EF; /* je: equal / zero */

loc_003D06E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D06EF; /* je: equal / zero */

loc_003D06E6: ;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    ecx = eax;
    PUSH32(esp, 0x003D06EFu); RECOMP_ABI_CALL(0x003D027Eu, sub_003D027E); /* call 0x003D027E */

loc_003D06EF: ;
    eax = MEM32(esp + 0xC);
    MEM32(esi) = eax;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003D06F9
 * Original: 0x003D06F9 - 0x003D07A9 (176 bytes, 70 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003D06F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D06F9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D070Eu); RECOMP_ABI_CALL(0x003CF1F3u, sub_003CF1F3); /* call 0x003CF1F3 */

loc_003D070E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D07A2; /* je: equal / zero */

loc_003D0716: ;
    eax = MEM32(esi + 0x34);
    goto loc_003D072C;

loc_003D071B: ;
    _fa = (uint32_t)(MEM32(eax + ebx * 4 + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + ebx * 4 + 0x20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D073B; /* jne: not equal / not zero */

loc_003D0722: ;
    _fa = (uint32_t)(MEM32(eax + edi * 4 + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + edi * 4 + 0x20), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0732; /* jne: not equal / not zero */

loc_003D0729: ;
    eax = MEM32(eax + 0x34);

loc_003D072C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D071B; /* jne: not equal / not zero */

loc_003D0730: ;
    goto loc_003D073B;

loc_003D0732: ;
    eax = edi;
    edi = ebx;
    ebx = eax;
    MEM32(ebp + 0xC) = ebx;

loc_003D073B: ;
    ecx = MEM32(esi + edi * 4 + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D074B; /* je: equal / zero */

loc_003D0744: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D074Bu); RECOMP_ABI_CALL(0x003D027Eu, sub_003D027E); /* call 0x003D027E */

loc_003D074B: ;
    ebx = ebx * 4 + 0x20;

loc_003D0752: ;
    _fa = (uint32_t)(MEM32(ebx + esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + esi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D07A0; /* jne: not equal / not zero */

loc_003D0758: ;
    eax = ebp + 8;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0764u); RECOMP_ABI_CALL(0x003CFABCu, sub_003CFABC); /* call 0x003CFABC */

loc_003D0764: ;
    goto loc_003D0792;

loc_003D0766: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D0768: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0771; /* jne: not equal / not zero */

loc_003D076D: ;
    PUSH32(esp, eax);
    POP32(esp, edx);
    goto loc_003D0778;

loc_003D0771: ;
    edx = MEM32(ecx + 4);
    edx = MEM32(edx + eax * 4 + 0x1C);

loc_003D0778: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0784; /* jne: not equal / not zero */

loc_003D077D: ;
    edx = MEM32(ecx + 4);
    MEM32(edx + eax * 4 + 0x1C) = edi;

loc_003D0784: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D0768; /* jle: less or equal (signed <=) */

loc_003D078A: ;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0792u); RECOMP_ABI_CALL(0x003CEA8Cu, sub_003CEA8C); /* call 0x003CEA8C */

loc_003D0792: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0766; /* jne: not equal / not zero */

loc_003D0799: ;
    esi = MEM32(esi + 0x34);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0752; /* jne: not equal / not zero */

loc_003D07A0: ;
    SET_LO8(eax, 1);

loc_003D07A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003D0771
 * Original: 0x003D0771 - 0x003D07A9 (56 bytes, 23 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0771(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D0771: ;
    edx = MEM32(ecx + 4);
    edx = MEM32(edx + eax * 4 + 0x1C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0784; /* jne: not equal / not zero */

loc_003D077D: ;
    edx = MEM32(ecx + 4);
    MEM32(edx + eax * 4 + 0x1C) = edi;

loc_003D0784: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) { g_seh_ebp = ebp; sub_003D0768(); return; } /* jle: less or equal (signed <=) */

loc_003D078A: ;
    ecx = ebp + 8;
    PUSH32(esp, 0x003D0792u); RECOMP_ABI_CALL(0x003CEA8Cu, sub_003CEA8C); /* call 0x003CEA8C */

loc_003D0792: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_003D0766(); return; } /* jne: not equal / not zero */

loc_003D0799: ;
    esi = MEM32(esi + 0x34);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_003D0752(); return; } /* jne: not equal / not zero */

loc_003D07A0: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003D079E
 * Original: 0x003D079E - 0x003D07A9 (11 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D079E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D079E: ;
    if (_flags /* jne: not equal / not zero */) { g_seh_ebp = ebp; sub_003D0752(); return; }

loc_003D07A0: ;
    SET_LO8(eax, 1);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003D07A9
 * Original: 0x003D07A9 - 0x003D0909 (352 bytes, 131 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D07A9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D07A9: ;
    eax = 0x367F7A;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D07B3u); RECOMP_ABI_CALL(0x00349EA0u, sub_00349EA0); /* call 0x00349EA0 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003D07B3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + 0xC;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D07C7u); RECOMP_ABI_CALL(0x003CDDF9u, sub_003CDDF9); /* call 0x003CDDF9 */

loc_003D07C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D08F6; /* je: equal / zero */

loc_003D07CF: ;
    eax = ebp + -20;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    MEM8(ebp + -13) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D07DFu); RECOMP_ABI_CALL(0x003CFABCu, sub_003CFABC); /* call 0x003CFABC */

loc_003D07DF: ;
    ebx = 0x41E80C;
    goto loc_003D0859;

loc_003D07E6: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    eax = esp;
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(edi + 4);
    MEM32(ebp + -24) = esp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D07FDu); RECOMP_ABI_CALL(0x003D016Bu, sub_003D016B); /* call 0x003D016B */

loc_003D07FD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0851; /* je: equal / zero */

loc_003D0801: ;
    edi = MEM32(edi + 4);
    ecx = MEM32(ebp + 8);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D080Du); RECOMP_ABI_CALL(0x003D2260u, sub_003D2260); /* call 0x003D2260 */

loc_003D080D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0814; /* jne: not equal / not zero */

loc_003D0811: ;
    MEM8(ebp + -13) = LO8(eax);

loc_003D0814: ;
    _fa = (uint32_t)(MEM8(ebp + -13)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -13), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0851; /* jne: not equal / not zero */

loc_003D081A: ;
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D08F2; /* je: equal / zero */

loc_003D0825: ;
    PUSH32(esp, 3);
    ecx = eax + 4;
    POP32(esp, edx);

loc_003D082B: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0835; /* jne: not equal / not zero */

loc_003D0831: ;
    MEM8(ebp + -13) = 1;

loc_003D0835: ;
    eax = MEM32(eax + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0841; /* jne: not equal / not zero */

loc_003D083D: ;
    MEM8(ebp + -13) = 1;

loc_003D0841: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003D082B; /* jne: not equal / not zero */

loc_003D0847: ;
    _fa = (uint32_t)(MEM8(ebp + -13)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -13), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D08F2; /* je: equal / zero */

loc_003D0851: ;
    ecx = ebp + -20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0859u); RECOMP_ABI_CALL(0x003CEC4Bu, sub_003CEC4B); /* call 0x003CEC4B */

loc_003D0859: ;
    edi = MEM32(ebp + -20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D07E6; /* jne: not equal / not zero */

loc_003D0860: ;
    _fa = (uint32_t)(MEM8(ebp + 0x18)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x18), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D08A8; /* je: equal / zero */

loc_003D0866: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x30), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D08A8; /* je: equal / zero */

loc_003D086D: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi + 0x20;

loc_003D0872: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D087B; /* je: equal / zero */

loc_003D0876: ;
    MEM8(ebp + ecx + 0x10) = 0;

loc_003D087B: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D0872; /* jle: less or equal (signed <=) */

loc_003D0884: ;
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    eax = esp;
    MEM32(ebp + 0x18) = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esi + 0x30);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D08A4u); RECOMP_ABI_CALL(0x003D07A9u, sub_003D07A9); /* call 0x003D07A9 */

loc_003D08A4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D08F2; /* je: equal / zero */

loc_003D08A8: ;
    _fa = (uint32_t)(MEM8(ebp + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x1C), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D08F6; /* je: equal / zero */

loc_003D08AE: ;
    eax = MEM32(esi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D08F6; /* je: equal / zero */

loc_003D08B5: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003D08BA: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D08C4; /* je: equal / zero */

loc_003D08BF: ;
    MEM8(ebp + ecx + 0x10) = 0;

loc_003D08C4: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D08BA; /* jle: less or equal (signed <=) */

loc_003D08CD: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x10);
    eax = esp;
    MEM32(ebp + 0x18) = esp;
    PUSH32(esp, MEM32(ebp + 8));
    MEM32(eax) = ebx;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(esi + 0x34);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D08EEu); RECOMP_ABI_CALL(0x003D07A9u, sub_003D07A9); /* call 0x003D07A9 */

loc_003D08EE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D08F6; /* jne: not equal / not zero */

loc_003D08F2: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003D08F8;

loc_003D08F6: ;
    SET_LO8(eax, 1);

loc_003D08F8: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003D0909
 * Original: 0x003D0909 - 0x003D0980 (119 bytes, 42 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0909(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D0909: ;
    eax = 0x367D89;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0913u); RECOMP_ABI_CALL(0x00349EA0u, sub_00349EA0); /* call 0x00349EA0 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003D0913: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -20) = MEM32(ebp + -20) & 0;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = ecx;
    edi = 0x41E80C;
    PUSH32(esp, 0);
    ecx = ebp + -28;
    MEM32(ebp + -28) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0931u); RECOMP_ABI_CALL(0x003CDE26u, sub_003CDE26); /* call 0x003CDE26 */

loc_003D0931: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D0937: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ebp + -20) = esp;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D094Bu); RECOMP_ABI_CALL(0x003CECF2u, sub_003CECF2); /* call 0x003CECF2 */

loc_003D094B: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = MEM32(ebp + -16);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0956u); RECOMP_ABI_CALL(0x003D07A9u, sub_003D07A9); /* call 0x003D07A9 */

loc_003D0956: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM8(ebp + esi + -24) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D0937; /* jle: less or equal (signed <=) */

loc_003D0965: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + -24);
    MEM32(eax) = edi;
    MEM32(eax + 4) = ecx;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003D0980
 * Original: 0x003D0980 - 0x003D0B2A (426 bytes, 157 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003D0980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D0980: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x10), 0 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003D099D; /* je: equal / zero */

loc_003D098E: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D099D; /* je: equal / zero */

loc_003D0995: ;
    MEM8(ebp + 0x14) = 1;
    esi = eax;
    goto loc_003D098E;

loc_003D099D: ;
    eax = MEM32(ebp + 8);
    ebx = MEM32(esi + eax * 4 + 0x20);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    edx = MEM32(ebp + 0xC);
    edi = MEM32(esi + edx * 4 + 0x20);
    if (CMP_EQ(_fa, _fb)) goto loc_003D09D1; /* je: equal / zero */

loc_003D09B0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D09D1; /* je: equal / zero */

loc_003D09B5: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D09D8; /* je: equal / zero */

loc_003D09BB: ;
    ecx = MEM32(esi + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D09D8; /* je: equal / zero */

loc_003D09C2: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D09CDu); RECOMP_ABI_CALL(0x003D0980u, sub_003D0980); /* call 0x003D0980 */

loc_003D09CD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D09D8; /* jne: not equal / not zero */

loc_003D09D1: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003D0B23;

loc_003D09D8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    MEM8(ebp + 0x13) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_003D0A05; /* jne: not equal / not zero */

loc_003D09E0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D09FC; /* je: equal / zero */

loc_003D09E4: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D09F4u); RECOMP_ABI_CALL(0x003CE7A5u, sub_003CE7A5); /* call 0x003CE7A5 */

loc_003D09F4: ;
    MEM8(ebp + 0x13) = LO8(eax);
    goto loc_003D0A9C;

loc_003D09FC: ;
    MEM8(ebp + 0x13) = 1;
    goto loc_003D0A9C;

loc_003D0A05: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_003D0A36; /* jne: not equal / not zero */

loc_003D0A13: ;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0A1Au); RECOMP_ABI_CALL(0x003CE7A5u, sub_003CE7A5); /* call 0x003CE7A5 */

loc_003D0A1A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ebp + 0x13) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003D0B02; /* je: equal / zero */

loc_003D0A25: ;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + eax * 4 + 0x20) = ebx;
    eax = MEM32(ebp + 8);

loc_003D0A2F: ;
    MEM32(esi + eax * 4 + 0x20) = MEM32(esi + eax * 4 + 0x20) & 0;
    _fa = (uint32_t)(MEM32(esi + eax * 4 + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003D0A9C;

loc_003D0A36: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    ecx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_003D0A58; /* jne: not equal / not zero */

loc_003D0A3C: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0A41u); RECOMP_ABI_CALL(0x003CE7A5u, sub_003CE7A5); /* call 0x003CE7A5 */

loc_003D0A41: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ebp + 0x13) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003D0B02; /* je: equal / zero */

loc_003D0A4C: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + eax * 4 + 0x20) = edi;
    eax = MEM32(ebp + 0xC);
    goto loc_003D0A2F;

loc_003D0A58: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0A5Du); RECOMP_ABI_CALL(0x003CE7A5u, sub_003CE7A5); /* call 0x003CE7A5 */

loc_003D0A5D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0B02; /* je: equal / zero */

loc_003D0A65: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = ebx;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0A75u); RECOMP_ABI_CALL(0x003CE7A5u, sub_003CE7A5); /* call 0x003CE7A5 */

loc_003D0A75: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ebp + 0x13) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003D0A8C; /* je: equal / zero */

loc_003D0A7C: ;
    eax = MEM32(ebp + 8);
    MEM32(esi + eax * 4 + 0x20) = edi;
    eax = MEM32(ebp + 0xC);
    MEM32(esi + eax * 4 + 0x20) = ebx;
    goto loc_003D0A9C;

loc_003D0A8C: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0A9Cu); RECOMP_ABI_CALL(0x003CE7A5u, sub_003CE7A5); /* call 0x003CE7A5 */

loc_003D0A9C: ;
    _fa = (uint32_t)(MEM8(ebp + 0x13)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x13), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0B02; /* je: equal / zero */

loc_003D0AA2: ;
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    ecx = esi + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0AAEu); RECOMP_ABI_CALL(0x003CFABCu, sub_003CFABC); /* call 0x003CFABC */

loc_003D0AAE: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0B20; /* je: equal / zero */

loc_003D0AB4: ;
    PUSH32(esp, 4);
    POP32(esp, edi);

loc_003D0AB7: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(eax + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D0ABF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    edx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003D0AC9; /* je: equal / zero */

loc_003D0AC5: ;
    edx = MEM32(ecx + eax * 4 + 0x1C);

loc_003D0AC9: ;
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0AD9; /* jne: not equal / not zero */

loc_003D0AD0: ;
    edx = MEM32(ebp + 0xC);
    MEM32(ecx + eax * 4 + 0x1C) = edx;
    goto loc_003D0AEC;

loc_003D0AD9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    edx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003D0AE3; /* je: equal / zero */

loc_003D0ADF: ;
    edx = MEM32(ecx + eax * 4 + 0x1C);

loc_003D0AE3: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0AEC; /* jne: not equal / not zero */

loc_003D0AE8: ;
    MEM32(ecx + eax * 4 + 0x1C) = esi;

loc_003D0AEC: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D0ABF; /* jle: less or equal (signed <=) */

loc_003D0AF2: ;
    ecx = ebp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0AFAu); RECOMP_ABI_CALL(0x003CEA8Cu, sub_003CEA8C); /* call 0x003CEA8C */

loc_003D0AFA: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0AB7; /* jne: not equal / not zero */

loc_003D0B00: ;
    goto loc_003D0B20;

loc_003D0B02: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0B20; /* je: equal / zero */

loc_003D0B08: ;
    esi = MEM32(esi + 0x34);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0B20; /* je: equal / zero */

loc_003D0B0F: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0B20u); RECOMP_ABI_CALL(0x003D0980u, sub_003D0980); /* call 0x003D0980 */

loc_003D0B20: ;
    SET_LO8(eax, MEM8(ebp + 0x13));

loc_003D0B23: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003D0B2A
 * Original: 0x003D0B2A - 0x003D0D99 (623 bytes, 213 insns)
 * Category: game_render
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0B2A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D0B2A: ;
    eax = 0x367DAB;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0B34u); RECOMP_ABI_CALL(0x00349EA0u, sub_00349EA0); /* call 0x00349EA0 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003D0B34: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx;
    eax = MEM32(ebx + 4);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0B52; /* je: equal / zero */

loc_003D0B46: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0B52; /* je: equal / zero */

loc_003D0B4B: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003D0D86;

loc_003D0B52: ;
    PUSH32(esp, esi);
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0B5Bu); RECOMP_ABI_CALL(0x003CE018u, sub_003CE018); /* call 0x003CE018 */

loc_003D0B5B: ;
    ecx = ebp + -68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0B63u); RECOMP_ABI_CALL(0x003CDF33u, sub_003CDF33); /* call 0x003CDF33 */

loc_003D0B63: ;
    goto loc_003D0B8B;

loc_003D0B65: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0B6Au); RECOMP_ABI_CALL(0x003CDF99u, sub_003CDF99); /* call 0x003CDF99 */

loc_003D0B6A: ;
    PUSH32(esp, 4);
    ecx = ebp + 8;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0B76u); RECOMP_ABI_CALL(0x003CE075u, sub_003CE075); /* call 0x003CE075 */

loc_003D0B76: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0B7F; /* jne: not equal / not zero */

loc_003D0B7B: ;
    PUSH32(esp, eax);
    POP32(esp, ecx);
    goto loc_003D0B83;

loc_003D0B7F: ;
    ecx = MEM32(ebp + eax * 4 + 0xC);

loc_003D0B83: ;
    MEM32(ebp + esi * 4 + -64) = ecx;
    MEM32(ebp + eax * 4 + 0xC) = esi;

loc_003D0B8B: ;
    ecx = ebp + 8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0B93u); RECOMP_ABI_CALL(0x003CE096u, sub_003CE096); /* call 0x003CE096 */

loc_003D0B93: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ecx = ebp + 8;
    if (CMP_EQ(_fa, _fb)) goto loc_003D0B65; /* je: equal / zero */

loc_003D0B9A: ;
    PUSH32(esp, edi);
    eax = ebp + -48;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0BA4u); RECOMP_ABI_CALL(0x003CE0B7u, sub_003CE0B7); /* call 0x003CE0B7 */

loc_003D0BA4: ;
    MEM8(ebp + -4) = 2;
    goto loc_003D0D72;

loc_003D0BAD: ;
    ecx = ebp + -48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0BB5u); RECOMP_ABI_CALL(0x003CE053u, sub_003CE053); /* call 0x003CE053 */

loc_003D0BB5: ;
    edi = eax;
    PUSH32(esp, edi);
    ecx = ebp + -48;
    MEM32(ebp + -24) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0BC3u); RECOMP_ABI_CALL(0x003CE075u, sub_003CE075); /* call 0x003CE075 */

loc_003D0BC3: ;
    ecx = MEM32(ebx + 0x30);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    esi = eax;
    MEM32(ebp + -20) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_003D0BDF; /* je: equal / zero */

loc_003D0BCF: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0BDAu); RECOMP_ABI_CALL(0x003D0980u, sub_003D0980); /* call 0x003D0980 */

loc_003D0BDA: ;
    goto loc_003D0D5E;

loc_003D0BDF: ;
    edi = MEM32(ebx + edi * 4 + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    esi = MEM32(ebx + esi * 4 + 0x20);
    if (CMP_EQ(_fa, _fb)) goto loc_003D0D95; /* je: equal / zero */

loc_003D0BF0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0D95; /* je: equal / zero */

loc_003D0BF9: ;
    ecx = MEM32(ebx + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0C17; /* je: equal / zero */

loc_003D0C00: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -24));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0C0Fu); RECOMP_ABI_CALL(0x003D0980u, sub_003D0980); /* call 0x003D0980 */

loc_003D0C0F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0D95; /* je: equal / zero */

loc_003D0C17: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM8(ebp + -13) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_003D0C44; /* jne: not equal / not zero */

loc_003D0C1F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0C3B; /* je: equal / zero */

loc_003D0C23: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -20));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0C33u); RECOMP_ABI_CALL(0x003CE7A5u, sub_003CE7A5); /* call 0x003CE7A5 */

loc_003D0C33: ;
    MEM8(ebp + -13) = LO8(eax);
    goto loc_003D0CDB;

loc_003D0C3B: ;
    MEM8(ebp + -13) = 1;
    goto loc_003D0CDB;

loc_003D0C44: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_003D0C75; /* jne: not equal / not zero */

loc_003D0C52: ;
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0C59u); RECOMP_ABI_CALL(0x003CE7A5u, sub_003CE7A5); /* call 0x003CE7A5 */

loc_003D0C59: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003D0D3F; /* je: equal / zero */

loc_003D0C64: ;
    eax = MEM32(ebp + -20);
    MEM32(ebx + eax * 4 + 0x20) = edi;
    eax = MEM32(ebp + -24);

loc_003D0C6E: ;
    MEM32(ebx + eax * 4 + 0x20) = MEM32(ebx + eax * 4 + 0x20) & 0;
    _fa = (uint32_t)(MEM32(ebx + eax * 4 + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003D0CDB;

loc_003D0C75: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    ecx = esi;
    if (CMP_NE(_fa, _fb)) goto loc_003D0C97; /* jne: not equal / not zero */

loc_003D0C7B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0C80u); RECOMP_ABI_CALL(0x003CE7A5u, sub_003CE7A5); /* call 0x003CE7A5 */

loc_003D0C80: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003D0D3F; /* je: equal / zero */

loc_003D0C8B: ;
    eax = MEM32(ebp + -24);
    MEM32(ebx + eax * 4 + 0x20) = esi;
    eax = MEM32(ebp + -20);
    goto loc_003D0C6E;

loc_003D0C97: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0C9Cu); RECOMP_ABI_CALL(0x003CE7A5u, sub_003CE7A5); /* call 0x003CE7A5 */

loc_003D0C9C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0D3F; /* je: equal / zero */

loc_003D0CA4: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -20));
    ecx = edi;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0CB4u); RECOMP_ABI_CALL(0x003CE7A5u, sub_003CE7A5); /* call 0x003CE7A5 */

loc_003D0CB4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    MEM8(ebp + -13) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003D0CCB; /* je: equal / zero */

loc_003D0CBB: ;
    eax = MEM32(ebp + -24);
    MEM32(ebx + eax * 4 + 0x20) = esi;
    eax = MEM32(ebp + -20);
    MEM32(ebx + eax * 4 + 0x20) = edi;
    goto loc_003D0CDB;

loc_003D0CCB: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -20));
    ecx = esi;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0CDBu); RECOMP_ABI_CALL(0x003CE7A5u, sub_003CE7A5); /* call 0x003CE7A5 */

loc_003D0CDB: ;
    _fa = (uint32_t)(MEM8(ebp + -13)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -13), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0D3F; /* je: equal / zero */

loc_003D0CE1: ;
    eax = ebp + -28;
    PUSH32(esp, eax);
    ecx = ebx + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0CEDu); RECOMP_ABI_CALL(0x003CFABCu, sub_003CFABC); /* call 0x003CFABC */

loc_003D0CED: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0D55; /* je: equal / zero */

loc_003D0CF3: ;
    edi = MEM32(ebp + -24);

loc_003D0CF6: ;
    eax = MEM32(ebp + -28);
    ecx = MEM32(eax + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D0CFE: ;
    PUSH32(esp, 4);
    POP32(esp, edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    esi = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_003D0D0B; /* je: equal / zero */

loc_003D0D07: ;
    esi = MEM32(ecx + eax * 4 + 0x1C);

loc_003D0D0B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0D18; /* jne: not equal / not zero */

loc_003D0D0F: ;
    edx = MEM32(ebp + -20);
    MEM32(ecx + eax * 4 + 0x1C) = edx;
    goto loc_003D0D29;

loc_003D0D18: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0D20; /* je: equal / zero */

loc_003D0D1C: ;
    edx = MEM32(ecx + eax * 4 + 0x1C);

loc_003D0D20: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0D29; /* jne: not equal / not zero */

loc_003D0D25: ;
    MEM32(ecx + eax * 4 + 0x1C) = edi;

loc_003D0D29: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D0CFE; /* jle: less or equal (signed <=) */

loc_003D0D2F: ;
    ecx = ebp + -28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0D37u); RECOMP_ABI_CALL(0x003CEA8Cu, sub_003CEA8C); /* call 0x003CEA8C */

loc_003D0D37: ;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -28), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0CF6; /* jne: not equal / not zero */

loc_003D0D3D: ;
    goto loc_003D0D55;

loc_003D0D3F: ;
    ecx = MEM32(ebx + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0D55; /* je: equal / zero */

loc_003D0D46: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, MEM32(ebp + -24));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0D55u); RECOMP_ABI_CALL(0x003D0980u, sub_003D0980); /* call 0x003D0980 */

loc_003D0D55: ;
    SET_LO8(eax, MEM8(ebp + -13));
    edi = MEM32(ebp + -24);
    esi = MEM32(ebp + -20);

loc_003D0D5E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0D95; /* je: equal / zero */

loc_003D0D62: ;
    ecx = ebp + esi * 4 + -44;
    esi = MEM32(ecx);
    eax = ebp + edi * 4 + -44;
    edx = MEM32(eax);
    MEM32(eax) = esi;
    MEM32(ecx) = edx;

loc_003D0D72: ;
    ecx = ebp + -48;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0D7Au); RECOMP_ABI_CALL(0x003CED72u, sub_003CED72); /* call 0x003CED72 */

loc_003D0D7A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0BAD; /* je: equal / zero */

loc_003D0D82: ;
    SET_LO8(eax, 1);

loc_003D0D84: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003D0D86: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

loc_003D0D95: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003D0D84;

}

/**
 * sub_003D0D99
 * Original: 0x003D0D99 - 0x003D0E1C (131 bytes, 54 insns)
 * Category: game_render
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0D99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D0D99: ;
    eax = 0x367DBD;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0DA3u); RECOMP_ABI_CALL(0x00349EA0u, sub_00349EA0); /* call 0x00349EA0 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003D0DA3: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = edi;

loc_003D0DAF: ;
    _fa = (uint32_t)(MEM8(ebp + edi + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + edi + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0DFF; /* je: equal / zero */

loc_003D0DB6: ;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0DBFu); RECOMP_ABI_CALL(0x003CE166u, sub_003CE166); /* call 0x003CE166 */

loc_003D0DBF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0DFF; /* je: equal / zero */

loc_003D0DC3: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D0DC7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003D0DFB; /* jg: greater (signed >) */

loc_003D0DCC: ;
    _fa = (uint32_t)(MEM8(ebp + esi + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + esi + 0xC), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0DF6; /* jne: not equal / not zero */

loc_003D0DD3: ;
    ecx = MEM32(ebp + -16);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0DDCu); RECOMP_ABI_CALL(0x003CE166u, sub_003CE166); /* call 0x003CE166 */

loc_003D0DDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0DF6; /* jne: not equal / not zero */

loc_003D0DE0: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = MEM32(ebp + -16);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0DF0u); RECOMP_ABI_CALL(0x003D0980u, sub_003D0980); /* call 0x003D0980 */

loc_003D0DF0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0DF6; /* je: equal / zero */

loc_003D0DF4: ;
    SET_LO8(ebx, 1);

loc_003D0DF6: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0DC7; /* je: equal / zero */

loc_003D0DFB: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0E18; /* je: equal / zero */

loc_003D0DFF: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D0DAF; /* jle: less or equal (signed <=) */

loc_003D0E05: ;
    SET_LO8(eax, 1);

loc_003D0E07: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

loc_003D0E18: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003D0E07;

}

/**
 * sub_003D0E1C
 * Original: 0x003D0E1C - 0x003D0E3B (31 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0E1C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D0E1C: ;
    eax = ecx;
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0xC) = MEM32(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x10) = 0x41E814;
    MEM32(eax) = 0x41E87C;
    MEM32(eax + 0x10) = 0x41E878;
    esp += 4; return; /* ret */

}

/**
 * sub_003D0E3B
 * Original: 0x003D0E3B - 0x003D0E46 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0E3B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D0E3B: ;
    MEM32(ecx) = 0x41E854;
    g_seh_ebp = ebp; sub_003CFB41(); return; /* tail jmp 0x003CFB41 */

}

/**
 * sub_003D0E46
 * Original: 0x003D0E46 - 0x003D0E6A (36 bytes, 13 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0E46(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D0E46: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x003D0E4Eu); RECOMP_ABI_CALL(0x003D0E3Bu, sub_003D0E3B); /* call 0x003D0E3B */

loc_003D0E4E: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003D0E64; /* je: equal / zero */

loc_003D0E55: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0E64; /* je: equal / zero */

loc_003D0E59: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003D0E64u); RECOMP_ABI_CALL(0x00015180u, sub_00015180); /* call 0x00015180 */

loc_003D0E64: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D0E6A
 * Original: 0x003D0E6A - 0x003D0EC6 (92 bytes, 41 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003D0E6A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D0E6A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    MEM32(ebx) = MEM32(ebx) & 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ecx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    MEM32(ebp + 8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003D0EB6; /* je: equal / zero */

loc_003D0E84: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_003D0E8B;

loc_003D0E88: ;
    eax = MEM32(ebp + 8);

loc_003D0E8B: ;
    ecx = ebp + -16;
    PUSH32(esp, ecx);
    ecx = MEM32(eax + 4);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0E97u); RECOMP_ABI_CALL(0x003CF295u, sub_003CF295); /* call 0x003CF295 */

loc_003D0E97: ;
    ecx = MEM32(ebx);
    ecx = ecx + ecx * 2;
    esi = eax;
    eax = MEM32(ebp + 8);
    edi = ebx + ecx * 4 + 4;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(ebx) = MEM32(ebx) + 1;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(eax + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003D0E88; /* jne: not equal / not zero */

loc_003D0EB4: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003D0EB6: ;
    ecx = MEM32(ebp + -4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0EBFu); RECOMP_ABI_CALL(0x003CE97Bu, sub_003CE97B); /* call 0x003CE97B */

loc_003D0EBF: ;
    SET_LO8(eax, 1);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D0EC6
 * Original: 0x003D0EC6 - 0x003D0EEE (40 bytes, 17 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003D0EC6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_003D0EC6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    eax = ebp + 8;
    PUSH32(esp, eax);
    esi = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0ED8u); RECOMP_ABI_CALL(0x003D0EEEu, sub_003D0EEE); /* call 0x003D0EEE */

loc_003D0ED8: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0xC);
    MEM32(ebp + 8) = ecx;
    PUSH32(esp, eax);
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D0EE9u); RECOMP_ABI_CALL(0x003CEAE3u, sub_003CEAE3); /* call 0x003CEAE3 */

loc_003D0EE9: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D0EEE
 * Original: 0x003D0EEE - 0x003D0F0C (30 bytes, 11 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0EEE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D0EEE: ;
    ecx = MEM32(ecx + 4);
    goto loc_003D0EFF;

loc_003D0EF3: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0F03; /* je: equal / zero */

loc_003D0EFC: ;
    ecx = MEM32(ecx + 0xC);

loc_003D0EFF: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0EF3; /* jne: not equal / not zero */

loc_003D0F03: ;
    eax = MEM32(esp + 4);
    MEM32(eax) = ecx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003D0F0C
 * Original: 0x003D0F0C - 0x003D0F39 (45 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0F0C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D0F0C: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x003D0F18u); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D0F18: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x003D0F21u); RECOMP_ABI_CALL(0x003D04A9u, sub_003D04A9); /* call 0x003D04A9 */

loc_003D0F21: ;
    eax = esi + 8;
    POP32(esp, esi);
    goto loc_003D0F2E;

loc_003D0F27: ;
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 8);
    MEM32(eax) = ecx;

loc_003D0F2E: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0F27; /* jne: not equal / not zero */

loc_003D0F36: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D0F39
 * Original: 0x003D0F39 - 0x003D0FFE (197 bytes, 76 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0F39(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D0F39: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0F49; /* je: equal / zero */

loc_003D0F44: ;
    edx = MEM32(edi + 0x14);
    goto loc_003D0F4B;

loc_003D0F49: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D0F4B: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0F58; /* je: equal / zero */

loc_003D0F53: ;
    eax = MEM32(esi + 0x14);
    goto loc_003D0F5A;

loc_003D0F58: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D0F5A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_003D0F67; /* jne: not equal / not zero */

loc_003D0F65: ;
    ebx = esi;

loc_003D0F67: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0F72; /* jne: not equal / not zero */

loc_003D0F6B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003D0FF8;

loc_003D0F72: ;
    MEM32(ebx + 8) = MEM32(ebx + 8) & 0;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0FAC; /* je: equal / zero */

loc_003D0F7A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0FE6; /* je: equal / zero */

loc_003D0F7E: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x003D0F8Au); RECOMP_ABI_CALL(0x003D0F39u, sub_003D0F39); /* call 0x003D0F39 */

loc_003D0F8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003D0F94; /* je: equal / zero */

loc_003D0F91: ;
    MEM32(eax + 8) = esi;

loc_003D0F94: ;
    MEM32(edi + 0xC) = esi;
    ecx = edi;
    MEM32(esi + 8) = edi;
    PUSH32(esp, 0x003D0FA1u); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D0FA1: ;
    ecx = esi;
    PUSH32(esp, 0x003D0FA8u); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D0FA8: ;
    ecx = esi;
    goto loc_003D0FDC;

loc_003D0FAC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D0FE6; /* je: equal / zero */

loc_003D0FB0: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, 0x003D0FBCu); RECOMP_ABI_CALL(0x003D0F39u, sub_003D0F39); /* call 0x003D0F39 */

loc_003D0FBC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003D0FC6; /* je: equal / zero */

loc_003D0FC3: ;
    MEM32(eax + 8) = edi;

loc_003D0FC6: ;
    MEM32(esi + 0x10) = edi;
    ecx = esi;
    MEM32(edi + 8) = esi;
    PUSH32(esp, 0x003D0FD3u); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D0FD3: ;
    ecx = edi;
    PUSH32(esp, 0x003D0FDAu); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D0FDA: ;
    ecx = edi;

loc_003D0FDC: ;
    PUSH32(esp, 0x003D0FE1u); RECOMP_ABI_CALL(0x003D04A9u, sub_003D04A9); /* call 0x003D04A9 */

loc_003D0FE1: ;
    goto loc_003D0FE6;

loc_003D0FE3: ;
    ebx = MEM32(ebx + 8);

loc_003D0FE6: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D0FE3; /* jne: not equal / not zero */

loc_003D0FEC: ;
    ecx = ebx;
    PUSH32(esp, 0x003D0FF3u); RECOMP_ABI_CALL(0x003CFE45u, sub_003CFE45); /* call 0x003CFE45 */

loc_003D0FF3: ;
    MEM32(ebx + 0x14) = eax;
    eax = ebx;

loc_003D0FF8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003D0FFE
 * Original: 0x003D0FFE - 0x003D10C3 (197 bytes, 76 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D0FFE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D0FFE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D100E; /* je: equal / zero */

loc_003D1009: ;
    edx = MEM32(edi + 0x14);
    goto loc_003D1010;

loc_003D100E: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D1010: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D101D; /* je: equal / zero */

loc_003D1018: ;
    eax = MEM32(esi + 0x14);
    goto loc_003D101F;

loc_003D101D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D101F: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_003D102C; /* jne: not equal / not zero */

loc_003D102A: ;
    ebx = esi;

loc_003D102C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1037; /* jne: not equal / not zero */

loc_003D1030: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003D10BD;

loc_003D1037: ;
    MEM32(ebx + 8) = MEM32(ebx + 8) & 0;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1071; /* je: equal / zero */

loc_003D103F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D10AB; /* je: equal / zero */

loc_003D1043: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x003D104Fu); RECOMP_ABI_CALL(0x003D0FFEu, sub_003D0FFE); /* call 0x003D0FFE */

loc_003D104F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003D1059; /* je: equal / zero */

loc_003D1056: ;
    MEM32(eax + 8) = esi;

loc_003D1059: ;
    MEM32(edi + 0xC) = esi;
    ecx = edi;
    MEM32(esi + 8) = edi;
    PUSH32(esp, 0x003D1066u); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D1066: ;
    ecx = esi;
    PUSH32(esp, 0x003D106Du); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D106D: ;
    ecx = esi;
    goto loc_003D10A1;

loc_003D1071: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D10AB; /* je: equal / zero */

loc_003D1075: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, 0x003D1081u); RECOMP_ABI_CALL(0x003D0FFEu, sub_003D0FFE); /* call 0x003D0FFE */

loc_003D1081: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003D108B; /* je: equal / zero */

loc_003D1088: ;
    MEM32(eax + 8) = edi;

loc_003D108B: ;
    MEM32(esi + 0x10) = edi;
    ecx = esi;
    MEM32(edi + 8) = esi;
    PUSH32(esp, 0x003D1098u); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D1098: ;
    ecx = edi;
    PUSH32(esp, 0x003D109Fu); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D109F: ;
    ecx = edi;

loc_003D10A1: ;
    PUSH32(esp, 0x003D10A6u); RECOMP_ABI_CALL(0x003D04A9u, sub_003D04A9); /* call 0x003D04A9 */

loc_003D10A6: ;
    goto loc_003D10AB;

loc_003D10A8: ;
    ebx = MEM32(ebx + 8);

loc_003D10AB: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D10A8; /* jne: not equal / not zero */

loc_003D10B1: ;
    ecx = ebx;
    PUSH32(esp, 0x003D10B8u); RECOMP_ABI_CALL(0x003CFE45u, sub_003CFE45); /* call 0x003CFE45 */

loc_003D10B8: ;
    MEM32(ebx + 0x14) = eax;
    eax = ebx;

loc_003D10BD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003D10C3
 * Original: 0x003D10C3 - 0x003D1188 (197 bytes, 76 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D10C3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D10C3: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D10D3; /* je: equal / zero */

loc_003D10CE: ;
    edx = MEM32(edi + 0x14);
    goto loc_003D10D5;

loc_003D10D3: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D10D5: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D10E2; /* je: equal / zero */

loc_003D10DD: ;
    eax = MEM32(esi + 0x14);
    goto loc_003D10E4;

loc_003D10E2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D10E4: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_003D10F1; /* jne: not equal / not zero */

loc_003D10EF: ;
    ebx = esi;

loc_003D10F1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D10FC; /* jne: not equal / not zero */

loc_003D10F5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003D1182;

loc_003D10FC: ;
    MEM32(ebx + 8) = MEM32(ebx + 8) & 0;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1136; /* je: equal / zero */

loc_003D1104: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1170; /* je: equal / zero */

loc_003D1108: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x003D1114u); RECOMP_ABI_CALL(0x003D10C3u, sub_003D10C3); /* call 0x003D10C3 */

loc_003D1114: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003D111E; /* je: equal / zero */

loc_003D111B: ;
    MEM32(eax + 8) = esi;

loc_003D111E: ;
    MEM32(edi + 0xC) = esi;
    ecx = edi;
    MEM32(esi + 8) = edi;
    PUSH32(esp, 0x003D112Bu); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D112B: ;
    ecx = esi;
    PUSH32(esp, 0x003D1132u); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D1132: ;
    ecx = esi;
    goto loc_003D1166;

loc_003D1136: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1170; /* je: equal / zero */

loc_003D113A: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, 0x003D1146u); RECOMP_ABI_CALL(0x003D10C3u, sub_003D10C3); /* call 0x003D10C3 */

loc_003D1146: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003D1150; /* je: equal / zero */

loc_003D114D: ;
    MEM32(eax + 8) = edi;

loc_003D1150: ;
    MEM32(esi + 0x10) = edi;
    ecx = esi;
    MEM32(edi + 8) = esi;
    PUSH32(esp, 0x003D115Du); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D115D: ;
    ecx = edi;
    PUSH32(esp, 0x003D1164u); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D1164: ;
    ecx = edi;

loc_003D1166: ;
    PUSH32(esp, 0x003D116Bu); RECOMP_ABI_CALL(0x003D04A9u, sub_003D04A9); /* call 0x003D04A9 */

loc_003D116B: ;
    goto loc_003D1170;

loc_003D116D: ;
    ebx = MEM32(ebx + 8);

loc_003D1170: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D116D; /* jne: not equal / not zero */

loc_003D1176: ;
    ecx = ebx;
    PUSH32(esp, 0x003D117Du); RECOMP_ABI_CALL(0x003CFE45u, sub_003CFE45); /* call 0x003CFE45 */

loc_003D117D: ;
    MEM32(ebx + 0x14) = eax;
    eax = ebx;

loc_003D1182: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003D1188
 * Original: 0x003D1188 - 0x003D124D (197 bytes, 76 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1188(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D1188: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1198; /* je: equal / zero */

loc_003D1193: ;
    edx = MEM32(edi + 0x14);
    goto loc_003D119A;

loc_003D1198: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D119A: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D11A7; /* je: equal / zero */

loc_003D11A2: ;
    eax = MEM32(esi + 0x14);
    goto loc_003D11A9;

loc_003D11A7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D11A9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_003D11B6; /* jne: not equal / not zero */

loc_003D11B4: ;
    ebx = esi;

loc_003D11B6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D11C1; /* jne: not equal / not zero */

loc_003D11BA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003D1247;

loc_003D11C1: ;
    MEM32(ebx + 8) = MEM32(ebx + 8) & 0;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D11FB; /* je: equal / zero */

loc_003D11C9: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1235; /* je: equal / zero */

loc_003D11CD: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x003D11D9u); RECOMP_ABI_CALL(0x003D1188u, sub_003D1188); /* call 0x003D1188 */

loc_003D11D9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003D11E3; /* je: equal / zero */

loc_003D11E0: ;
    MEM32(eax + 8) = esi;

loc_003D11E3: ;
    MEM32(edi + 0xC) = esi;
    ecx = edi;
    MEM32(esi + 8) = edi;
    PUSH32(esp, 0x003D11F0u); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D11F0: ;
    ecx = esi;
    PUSH32(esp, 0x003D11F7u); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D11F7: ;
    ecx = esi;
    goto loc_003D122B;

loc_003D11FB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1235; /* je: equal / zero */

loc_003D11FF: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, 0x003D120Bu); RECOMP_ABI_CALL(0x003D1188u, sub_003D1188); /* call 0x003D1188 */

loc_003D120B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003D1215; /* je: equal / zero */

loc_003D1212: ;
    MEM32(eax + 8) = edi;

loc_003D1215: ;
    MEM32(esi + 0x10) = edi;
    ecx = esi;
    MEM32(edi + 8) = esi;
    PUSH32(esp, 0x003D1222u); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D1222: ;
    ecx = edi;
    PUSH32(esp, 0x003D1229u); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D1229: ;
    ecx = edi;

loc_003D122B: ;
    PUSH32(esp, 0x003D1230u); RECOMP_ABI_CALL(0x003D04A9u, sub_003D04A9); /* call 0x003D04A9 */

loc_003D1230: ;
    goto loc_003D1235;

loc_003D1232: ;
    ebx = MEM32(ebx + 8);

loc_003D1235: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1232; /* jne: not equal / not zero */

loc_003D123B: ;
    ecx = ebx;
    PUSH32(esp, 0x003D1242u); RECOMP_ABI_CALL(0x003CFE45u, sub_003CFE45); /* call 0x003CFE45 */

loc_003D1242: ;
    MEM32(ebx + 0x14) = eax;
    eax = ebx;

loc_003D1247: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003D124D
 * Original: 0x003D124D - 0x003D1312 (197 bytes, 76 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D124D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D124D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D125D; /* je: equal / zero */

loc_003D1258: ;
    edx = MEM32(edi + 0x14);
    goto loc_003D125F;

loc_003D125D: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D125F: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D126C; /* je: equal / zero */

loc_003D1267: ;
    eax = MEM32(esi + 0x14);
    goto loc_003D126E;

loc_003D126C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D126E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_003D127B; /* jne: not equal / not zero */

loc_003D1279: ;
    ebx = esi;

loc_003D127B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1286; /* jne: not equal / not zero */

loc_003D127F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003D130C;

loc_003D1286: ;
    MEM32(ebx + 8) = MEM32(ebx + 8) & 0;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D12C0; /* je: equal / zero */

loc_003D128E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D12FA; /* je: equal / zero */

loc_003D1292: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x003D129Eu); RECOMP_ABI_CALL(0x003D124Du, sub_003D124D); /* call 0x003D124D */

loc_003D129E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003D12A8; /* je: equal / zero */

loc_003D12A5: ;
    MEM32(eax + 8) = esi;

loc_003D12A8: ;
    MEM32(edi + 0xC) = esi;
    ecx = edi;
    MEM32(esi + 8) = edi;
    PUSH32(esp, 0x003D12B5u); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D12B5: ;
    ecx = esi;
    PUSH32(esp, 0x003D12BCu); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D12BC: ;
    ecx = esi;
    goto loc_003D12F0;

loc_003D12C0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D12FA; /* je: equal / zero */

loc_003D12C4: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, 0x003D12D0u); RECOMP_ABI_CALL(0x003D124Du, sub_003D124D); /* call 0x003D124D */

loc_003D12D0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003D12DA; /* je: equal / zero */

loc_003D12D7: ;
    MEM32(eax + 8) = edi;

loc_003D12DA: ;
    MEM32(esi + 0x10) = edi;
    ecx = esi;
    MEM32(edi + 8) = esi;
    PUSH32(esp, 0x003D12E7u); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D12E7: ;
    ecx = edi;
    PUSH32(esp, 0x003D12EEu); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D12EE: ;
    ecx = edi;

loc_003D12F0: ;
    PUSH32(esp, 0x003D12F5u); RECOMP_ABI_CALL(0x003D04A9u, sub_003D04A9); /* call 0x003D04A9 */

loc_003D12F5: ;
    goto loc_003D12FA;

loc_003D12F7: ;
    ebx = MEM32(ebx + 8);

loc_003D12FA: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D12F7; /* jne: not equal / not zero */

loc_003D1300: ;
    ecx = ebx;
    PUSH32(esp, 0x003D1307u); RECOMP_ABI_CALL(0x003CFE45u, sub_003CFE45); /* call 0x003CFE45 */

loc_003D1307: ;
    MEM32(ebx + 0x14) = eax;
    eax = ebx;

loc_003D130C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003D1312
 * Original: 0x003D1312 - 0x003D133F (45 bytes, 16 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1312(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D1312: ;
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x003D131Eu); RECOMP_ABI_CALL(0x003CFED6u, sub_003CFED6); /* call 0x003CFED6 */

loc_003D131E: ;
    ecx = MEM32(esp + 8);
    PUSH32(esp, 0x003D1327u); RECOMP_ABI_CALL(0x003D055Fu, sub_003D055F); /* call 0x003D055F */

loc_003D1327: ;
    eax = esi + 8;
    POP32(esp, esi);
    goto loc_003D1334;

loc_003D132D: ;
    ecx = MEM32(eax);
    ecx = MEM32(ecx + 0xC);
    MEM32(eax) = ecx;

loc_003D1334: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D132D; /* jne: not equal / not zero */

loc_003D133C: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D133F
 * Original: 0x003D133F - 0x003D1404 (197 bytes, 76 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D133F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D133F: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D134F; /* je: equal / zero */

loc_003D134A: ;
    edx = MEM32(edi + 0x18);
    goto loc_003D1351;

loc_003D134F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D1351: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D135E; /* je: equal / zero */

loc_003D1359: ;
    eax = MEM32(esi + 0x18);
    goto loc_003D1360;

loc_003D135E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D1360: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_003D136D; /* jne: not equal / not zero */

loc_003D136B: ;
    ebx = esi;

loc_003D136D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1378; /* jne: not equal / not zero */

loc_003D1371: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003D13FE;

loc_003D1378: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) & 0;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D13B2; /* je: equal / zero */

loc_003D1380: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D13EC; /* je: equal / zero */

loc_003D1384: ;
    PUSH32(esp, MEM32(edi + 0x10));
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, esi);
    PUSH32(esp, 0x003D1390u); RECOMP_ABI_CALL(0x003D133Fu, sub_003D133F); /* call 0x003D133F */

loc_003D1390: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003D139A; /* je: equal / zero */

loc_003D1397: ;
    MEM32(eax + 0xC) = esi;

loc_003D139A: ;
    MEM32(edi + 0x10) = esi;
    ecx = edi;
    MEM32(esi + 0xC) = edi;
    PUSH32(esp, 0x003D13A7u); RECOMP_ABI_CALL(0x003CFED6u, sub_003CFED6); /* call 0x003CFED6 */

loc_003D13A7: ;
    ecx = esi;
    PUSH32(esp, 0x003D13AEu); RECOMP_ABI_CALL(0x003CFED6u, sub_003CFED6); /* call 0x003CFED6 */

loc_003D13AE: ;
    ecx = esi;
    goto loc_003D13E2;

loc_003D13B2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D13EC; /* je: equal / zero */

loc_003D13B6: ;
    PUSH32(esp, MEM32(edi + 0x10));
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, 0x003D13C2u); RECOMP_ABI_CALL(0x003D133Fu, sub_003D133F); /* call 0x003D133F */

loc_003D13C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003D13CC; /* je: equal / zero */

loc_003D13C9: ;
    MEM32(eax + 0xC) = edi;

loc_003D13CC: ;
    MEM32(esi + 0x14) = edi;
    ecx = esi;
    MEM32(edi + 0xC) = esi;
    PUSH32(esp, 0x003D13D9u); RECOMP_ABI_CALL(0x003CFED6u, sub_003CFED6); /* call 0x003CFED6 */

loc_003D13D9: ;
    ecx = edi;
    PUSH32(esp, 0x003D13E0u); RECOMP_ABI_CALL(0x003CFED6u, sub_003CFED6); /* call 0x003CFED6 */

loc_003D13E0: ;
    ecx = edi;

loc_003D13E2: ;
    PUSH32(esp, 0x003D13E7u); RECOMP_ABI_CALL(0x003D055Fu, sub_003D055F); /* call 0x003D055F */

loc_003D13E7: ;
    goto loc_003D13EC;

loc_003D13E9: ;
    ebx = MEM32(ebx + 0xC);

loc_003D13EC: ;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0xC), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D13E9; /* jne: not equal / not zero */

loc_003D13F2: ;
    ecx = ebx;
    PUSH32(esp, 0x003D13F9u); RECOMP_ABI_CALL(0x003CFE9Eu, sub_003CFE9E); /* call 0x003CFE9E */

loc_003D13F9: ;
    MEM32(ebx + 0x18) = eax;
    eax = ebx;

loc_003D13FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003D1404
 * Original: 0x003D1404 - 0x003D149E (154 bytes, 67 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003D1404(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D1404: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003D1414; /* jne: not equal / not zero */

loc_003D1413: ;
    /* int3: debug-trap slide byte, stepped over */

loc_003D1414: ;
    eax = MEM32(esi + 4);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D1457; /* jle: less or equal (signed <=) */

loc_003D141E: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1460; /* jne: not equal / not zero */

loc_003D1425: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1431u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003D1431: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1443; /* je: equal / zero */

loc_003D1435: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = eax;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1441u); RECOMP_ABI_CALL(0x003CFDF5u, sub_003CFDF5); /* call 0x003CFDF5 */

loc_003D1441: ;
    goto loc_003D1445;

loc_003D1443: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D1445: ;
    MEM32(esi + 0x10) = eax;

loc_003D1448: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003D144B: ;
    PUSH32(esp, esi);
    ecx = edi;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1455u); RECOMP_ABI_CALL(0x003D1312u, sub_003D1312); /* call 0x003D1312 */

loc_003D1455: ;
    goto loc_003D1495;

loc_003D1457: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003D1493; /* jge: greater or equal (signed >=) */

loc_003D1459: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D146E; /* je: equal / zero */

loc_003D1460: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = edi;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D146Cu); RECOMP_ABI_CALL(0x003D1404u, sub_003D1404); /* call 0x003D1404 */

loc_003D146C: ;
    goto loc_003D144B;

loc_003D146E: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x1C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D147Au); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003D147A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D148C; /* je: equal / zero */

loc_003D147E: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 0xC));
    ecx = eax;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D148Au); RECOMP_ABI_CALL(0x003CFDF5u, sub_003CFDF5); /* call 0x003CFDF5 */

loc_003D148A: ;
    goto loc_003D148E;

loc_003D148C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D148E: ;
    MEM32(esi + 0x14) = eax;
    goto loc_003D1448;

loc_003D1493: ;
    ebx = esi;

loc_003D1495: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003D149E
 * Original: 0x003D149E - 0x003D1563 (197 bytes, 76 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D149E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D149E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D14AE; /* je: equal / zero */

loc_003D14A9: ;
    edx = MEM32(edi + 0x14);
    goto loc_003D14B0;

loc_003D14AE: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D14B0: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D14BD; /* je: equal / zero */

loc_003D14B8: ;
    eax = MEM32(esi + 0x14);
    goto loc_003D14BF;

loc_003D14BD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D14BF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = edi;
    if (CMP_NE(_fa, _fb)) goto loc_003D14CC; /* jne: not equal / not zero */

loc_003D14CA: ;
    ebx = esi;

loc_003D14CC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D14D7; /* jne: not equal / not zero */

loc_003D14D0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003D155D;

loc_003D14D7: ;
    MEM32(ebx + 8) = MEM32(ebx + 8) & 0;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1511; /* je: equal / zero */

loc_003D14DF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D154B; /* je: equal / zero */

loc_003D14E3: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x003D14EFu); RECOMP_ABI_CALL(0x003D149Eu, sub_003D149E); /* call 0x003D149E */

loc_003D14EF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003D14F9; /* je: equal / zero */

loc_003D14F6: ;
    MEM32(eax + 8) = esi;

loc_003D14F9: ;
    MEM32(edi + 0xC) = esi;
    ecx = edi;
    MEM32(esi + 8) = edi;
    PUSH32(esp, 0x003D1506u); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D1506: ;
    ecx = esi;
    PUSH32(esp, 0x003D150Du); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D150D: ;
    ecx = esi;
    goto loc_003D1541;

loc_003D1511: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D154B; /* je: equal / zero */

loc_003D1515: ;
    PUSH32(esp, MEM32(edi + 0xC));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, edi);
    PUSH32(esp, 0x003D1521u); RECOMP_ABI_CALL(0x003D149Eu, sub_003D149E); /* call 0x003D149E */

loc_003D1521: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(edi + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003D152B; /* je: equal / zero */

loc_003D1528: ;
    MEM32(eax + 8) = edi;

loc_003D152B: ;
    MEM32(esi + 0x10) = edi;
    ecx = esi;
    MEM32(edi + 8) = esi;
    PUSH32(esp, 0x003D1538u); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D1538: ;
    ecx = edi;
    PUSH32(esp, 0x003D153Fu); RECOMP_ABI_CALL(0x003CFE7Du, sub_003CFE7D); /* call 0x003CFE7D */

loc_003D153F: ;
    ecx = edi;

loc_003D1541: ;
    PUSH32(esp, 0x003D1546u); RECOMP_ABI_CALL(0x003D04A9u, sub_003D04A9); /* call 0x003D04A9 */

loc_003D1546: ;
    goto loc_003D154B;

loc_003D1548: ;
    ebx = MEM32(ebx + 8);

loc_003D154B: ;
    _fa = (uint32_t)(MEM32(ebx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1548; /* jne: not equal / not zero */

loc_003D1551: ;
    ecx = ebx;
    PUSH32(esp, 0x003D1558u); RECOMP_ABI_CALL(0x003CFE45u, sub_003CFE45); /* call 0x003CFE45 */

loc_003D1558: ;
    MEM32(ebx + 0x14) = eax;
    eax = ebx;

loc_003D155D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003D1563
 * Original: 0x003D1563 - 0x003D158D (42 bytes, 17 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1563(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D1563: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x003D156Fu); RECOMP_ABI_CALL(0x003D0696u, sub_003D0696); /* call 0x003D0696 */

loc_003D156F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1586; /* jne: not equal / not zero */

loc_003D1573: ;
    PUSH32(esp, MEM32(esp + 8));
    ecx = esi;
    PUSH32(esp, 0x003D157Eu); RECOMP_ABI_CALL(0x003CEEF1u, sub_003CEEF1); /* call 0x003CEEF1 */

loc_003D157E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1586; /* jne: not equal / not zero */

loc_003D1582: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003D1589;

loc_003D1586: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003D1589: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D158D
 * Original: 0x003D158D - 0x003D15C9 (60 bytes, 22 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D158D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D158D: ;
    eax = 0x367DBD;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1597u); RECOMP_ABI_CALL(0x00349EA0u, sub_00349EA0); /* call 0x00349EA0 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003D1597: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D15A1: ;
    _fa = (uint32_t)(MEM8(ebp + esi + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + esi + 0xC), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D15B3; /* je: equal / zero */

loc_003D15A8: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = edi;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D15B3u); RECOMP_ABI_CALL(0x003D06D2u, sub_003D06D2); /* call 0x003D06D2 */

loc_003D15B3: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D15A1; /* jle: less or equal (signed <=) */

loc_003D15B9: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003D15C9
 * Original: 0x003D15C9 - 0x003D15F6 (45 bytes, 25 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D15C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D15C9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebp = ecx;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D15D1: ;
    edi = esi + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    ebx = edi;
    if (CMP_G(_fas, _fbs)) goto loc_003D15EA; /* jg: greater (signed >) */

loc_003D15DB: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ecx = ebp;
    PUSH32(esp, 0x003D15E4u); RECOMP_ABI_CALL(0x003D06F9u, sub_003D06F9); /* call 0x003D06F9 */

loc_003D15E4: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D15DB; /* jle: less or equal (signed <=) */

loc_003D15EA: ;
    esi = edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D15D1; /* jle: less or equal (signed <=) */

loc_003D15F1: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_003D15F6
 * Original: 0x003D15F6 - 0x003D1642 (76 bytes, 37 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D15F6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D15F6: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ecx;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1605; /* je: equal / zero */

loc_003D1601: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003D163B;

loc_003D1605: ;
    _fa = (uint32_t)(MEM32(esi + 0x38)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x38), edi (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_003D1620; /* je: equal / zero */

loc_003D160B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D160D: ;
    ecx = MEM32(esi + 0x38);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003D1616u); RECOMP_ABI_CALL(0x003D1563u, sub_003D1563); /* call 0x003D1563 */

loc_003D1616: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D163E; /* jne: not equal / not zero */

loc_003D161A: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D160D; /* jle: less or equal (signed <=) */

loc_003D1620: ;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3C), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1638; /* je: equal / zero */

loc_003D1625: ;
    ecx = MEM32(esi + 0x3C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003D162Eu); RECOMP_ABI_CALL(0x003D1563u, sub_003D1563); /* call 0x003D1563 */

loc_003D162E: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D163E; /* jne: not equal / not zero */

loc_003D1632: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D1625; /* jle: less or equal (signed <=) */

loc_003D1638: ;
    SET_LO8(eax, 1);

loc_003D163A: ;
    POP32(esp, ebx);

loc_003D163B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_003D163E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003D163A;

}

/**
 * sub_003D1642
 * Original: 0x003D1642 - 0x003D16AF (109 bytes, 50 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1642(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D1642: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 4 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003D168A; /* jne: not equal / not zero */

loc_003D164D: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = esi + 0x20;

loc_003D1652: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D167B; /* jne: not equal / not zero */

loc_003D1657: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003D165Fu); RECOMP_ABI_CALL(0x003D1563u, sub_003D1563); /* call 0x003D1563 */

loc_003D165F: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D16AB; /* jne: not equal / not zero */

loc_003D1663: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003D166Bu); RECOMP_ABI_CALL(0x003CEF27u, sub_003CEF27); /* call 0x003CEF27 */

loc_003D166B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D167B; /* jne: not equal / not zero */

loc_003D166F: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x003D1677u); RECOMP_ABI_CALL(0x003CEF4Du, sub_003CEF4D); /* call 0x003CEF4D */

loc_003D1677: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D16AB; /* jne: not equal / not zero */

loc_003D167B: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D1652; /* jle: less or equal (signed <=) */

loc_003D1684: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003D1686: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003D168A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = esi + 0x20;

loc_003D168F: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D16A0; /* jne: not equal / not zero */

loc_003D1694: ;
    PUSH32(esp, ebx);
    ecx = esi;
    PUSH32(esp, 0x003D169Cu); RECOMP_ABI_CALL(0x003D1563u, sub_003D1563); /* call 0x003D1563 */

loc_003D169C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D16AB; /* jne: not equal / not zero */

loc_003D16A0: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D168F; /* jle: less or equal (signed <=) */

loc_003D16A9: ;
    goto loc_003D1684;

loc_003D16AB: ;
    SET_LO8(eax, 1);
    goto loc_003D1686;

}

/**
 * sub_003D16AF
 * Original: 0x003D16AF - 0x003D1775 (198 bytes, 77 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D16AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D16AF: ;
    eax = 0x367DCF;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D16B9u); RECOMP_ABI_CALL(0x00349EA0u, sub_00349EA0); /* call 0x00349EA0 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003D16B9: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -20) = ecx;
    edi = MEM32(ecx + 0x30);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = MEM32(ebp + 0x1C);
    esi = 0x41E80C;
    if (CMP_EQ(_fa, _fb)) goto loc_003D172D; /* je: equal / zero */

loc_003D16D4: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + -16) = esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    ecx = edi;
    MEM32(eax) = esi;
    MEM32(eax + 4) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D16F1u); RECOMP_ABI_CALL(0x003D07A9u, sub_003D07A9); /* call 0x003D07A9 */

loc_003D16F1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D175E; /* je: equal / zero */

loc_003D16F5: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003D16FC: ;
    eax = MEM32(ebp + -16);
    _fa = (uint32_t)(MEM8(ebp + eax + 0x1C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + eax + 0x1C), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D171E; /* je: equal / zero */

loc_003D1706: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D171E; /* je: equal / zero */

loc_003D170C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D171E; /* je: equal / zero */

loc_003D1711: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D171Au); RECOMP_ABI_CALL(0x003CEB15u, sub_003CEB15); /* call 0x003CEB15 */

loc_003D171A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D175E; /* je: equal / zero */

loc_003D171E: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) + 1;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 3 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D16FC; /* jle: less or equal (signed <=) */

loc_003D172A: ;
    ecx = MEM32(ebp + -20);

loc_003D172D: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1762; /* jne: not equal / not zero */

loc_003D1733: ;
    ecx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ecx + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x50), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1762; /* je: equal / zero */

loc_003D173C: ;
    PUSH32(esp, 1);
    PUSH32(esp, 1);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = esp;
    MEM32(ebp + 0x14) = esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(eax) = esi;
    MEM32(eax + 4) = ebx;
    ecx = MEM32(ecx + 0x50);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D175Au); RECOMP_ABI_CALL(0x003D07A9u, sub_003D07A9); /* call 0x003D07A9 */

loc_003D175A: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1762; /* jne: not equal / not zero */

loc_003D175E: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_003D1764;

loc_003D1762: ;
    SET_LO8(eax, 1);

loc_003D1764: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003D1775
 * Original: 0x003D1775 - 0x003D1811 (156 bytes, 65 insns)
 * Category: game_render
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1775(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003D1775: ;
    eax = 0x36809E;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D177Fu); RECOMP_ABI_CALL(0x00349EA0u, sub_00349EA0); /* call 0x00349EA0 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003D177F: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_003D17FA; /* je: equal / zero */

loc_003D1791: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x14);
    eax = esp;
    MEM32(eax + 4) = ecx;
    esi = 0x41E80C;
    ecx = edi;
    MEM32(ebp + -16) = esp;
    MEM32(eax) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D17AEu); RECOMP_ABI_CALL(0x003D0D99u, sub_003D0D99); /* call 0x003D0D99 */

loc_003D17AE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D17FE; /* je: equal / zero */

loc_003D17B2: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x1C);
    eax = esp;
    MEM32(eax) = esi;
    esi = MEM32(ebp + 8);
    MEM32(eax + 4) = ecx;
    ecx = esi;
    MEM32(ebp + -16) = esp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D17CDu); RECOMP_ABI_CALL(0x003D0D99u, sub_003D0D99); /* call 0x003D0D99 */

loc_003D17CD: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D17FE; /* je: equal / zero */

loc_003D17D1: ;
    _fa = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x30), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D17FE; /* jne: not equal / not zero */

loc_003D17D7: ;
    eax = MEM32(edi + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D17E4; /* je: equal / zero */

loc_003D17DE: ;
    _fa = (uint32_t)(MEM32(esi + 0x34)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x34), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D17FE; /* jne: not equal / not zero */

loc_003D17E4: ;
    _fa = (uint32_t)(MEM8(ebp + 0xC)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0xC), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D17FA; /* jne: not equal / not zero */

loc_003D17EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D17F4; /* jne: not equal / not zero */

loc_003D17EE: ;
    eax = MEM32(esi + 0x34);
    MEM32(edi + 0x34) = eax;

loc_003D17F4: ;
    MEM32(esi + 0x34) = edi;
    MEM32(edi + 0x30) = esi;

loc_003D17FA: ;
    SET_LO8(eax, LO8(ebx));
    goto loc_003D1800;

loc_003D17FE: ;
    SET_LO8(eax, 0); /* xor self */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_003D1800: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003D1811
 * Original: 0x003D1811 - 0x003D1845 (52 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003D1811(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D1811: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0xC (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D182F; /* jne: not equal / not zero */

loc_003D181C: ;
    PUSH32(esp, MEM32(ebp + -4));
    eax = 0x100;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D182Du); RECOMP_ABI_CALL(0x003CFCF2u, sub_003CFCF2); /* call 0x003CFCF2 */

loc_003D182D: ;
    goto loc_003D183A;

loc_003D182F: ;
    PUSH32(esp, MEM32(ebp + 8));
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D183Au); RECOMP_ABI_CALL(0x003D0494u, sub_003D0494); /* call 0x003D0494 */

loc_003D183A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1841; /* je: equal / zero */

loc_003D183E: ;
    eax = MEM32(eax + 8);

loc_003D1841: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003D1845
 * Original: 0x003D1845 - 0x003D1882 (61 bytes, 30 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003D1845(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D1845: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    esi = ecx;
    ecx = esp;
    MEM32(ebp + -4) = esp;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D185Cu); RECOMP_ABI_CALL(0x003CECDAu, sub_003CECDA); /* call 0x003CECDA */

loc_003D185C: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    ecx = esp;
    MEM32(ebp + -4) = esp;
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1869u); RECOMP_ABI_CALL(0x003CECDAu, sub_003CECDA); /* call 0x003CECDA */

loc_003D1869: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    PUSH32(esp, MEM32(esi + 0x50));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1877u); RECOMP_ABI_CALL(0x003D1775u, sub_003D1775); /* call 0x003D1775 */

loc_003D1877: ;
    MEM32(esi + 0x50) = edi;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D1882
 * Original: 0x003D1882 - 0x003D18CC (74 bytes, 33 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1882(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D1882: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ecx + 0x28;

loc_003D1889: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x003D1891u); RECOMP_ABI_CALL(0x003D0494u, sub_003D0494); /* call 0x003D0494 */

loc_003D1891: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D18BA; /* je: equal / zero */

loc_003D1895: ;
    ecx = MEM32(eax + 8);
    eax = ecx;
    goto loc_003D18A5;

loc_003D189C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D18C8; /* je: equal / zero */

loc_003D18A2: ;
    eax = MEM32(eax + 0x30);

loc_003D18A5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D189C; /* jne: not equal / not zero */

loc_003D18A9: ;
    eax = ecx;
    goto loc_003D18B6;

loc_003D18AD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0xC) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D18C8; /* je: equal / zero */

loc_003D18B3: ;
    eax = MEM32(eax + 0x34);

loc_003D18B6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D18AD; /* jne: not equal / not zero */

loc_003D18BA: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xC (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003D1889; /* jle: less or equal (signed <=) */

loc_003D18C0: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003D18C3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

loc_003D18C8: ;
    eax = esi;
    goto loc_003D18C3;

}

/**
 * sub_003D18CC
 * Original: 0x003D18CC - 0x003D193D (113 bytes, 49 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003D18CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D18CC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003D18DE; /* jne: not equal / not zero */

loc_003D18DA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003D1937;

loc_003D18DE: ;
    PUSH32(esp, edi);
    ecx = ebp + 8;
    MEM32(ebp + 8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D18EAu); RECOMP_ABI_CALL(0x003CEC4Bu, sub_003CEC4B); /* call 0x003CEC4B */

loc_003D18EA: ;
    PUSH32(esp, MEM32(esi + 0x10));
    edi = MEM32(esi + 8);
    PUSH32(esp, MEM32(esi + 0xC));
    eax = MEM32(eax);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1900u); RECOMP_ABI_CALL(0x003D0F39u, sub_003D0F39); /* call 0x003D0F39 */

loc_003D1900: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1925; /* je: equal / zero */

loc_003D1904: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D190B; /* je: equal / zero */

loc_003D1908: ;
    MEM32(eax + 8) = edi;

loc_003D190B: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1913; /* jne: not equal / not zero */

loc_003D1910: ;
    MEM32(edi + 0xC) = eax;

loc_003D1913: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D191B; /* jne: not equal / not zero */

loc_003D1918: ;
    MEM32(edi + 0x10) = eax;

loc_003D191B: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1923u); RECOMP_ABI_CALL(0x003D0F0Cu, sub_003D0F0C); /* call 0x003D0F0C */

loc_003D1923: ;
    goto loc_003D1928;

loc_003D1925: ;
    MEM32(ebx + 8) = eax;

loc_003D1928: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003D1930u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003D192Eu); } /* indirect call */
    }

loc_003D1930: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    POP32(esp, edi);

loc_003D1937: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D193D
 * Original: 0x003D193D - 0x003D19CC (143 bytes, 61 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D193D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003D193D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003D194B; /* jne: not equal / not zero */

loc_003D194A: ;
    /* int3: debug-trap slide byte, stepped over */

loc_003D194B: ;
    eax = MEM32(esi + 4);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003D198C; /* jbe: below or equal (unsigned <=) */

loc_003D1956: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003D1995; /* jne: not equal / not zero */

loc_003D195D: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x003D1969u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003D1969: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1978; /* je: equal / zero */

loc_003D196D: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x003D1976u); RECOMP_ABI_CALL(0x003CFB6Bu, sub_003CFB6B); /* call 0x003CFB6B */

loc_003D1976: ;
    goto loc_003D197A;

loc_003D1978: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D197A: ;
    MEM32(esi + 0xC) = eax;

loc_003D197D: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003D1980: ;
    PUSH32(esp, esi);
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x003D198Au); RECOMP_ABI_CALL(0x003D0F0Cu, sub_003D0F0C); /* call 0x003D0F0C */

loc_003D198A: ;
    goto loc_003D19C4;

loc_003D198C: ;
    if (CMP_AE(_fa, _fb)) goto loc_003D19C2; /* jae: above or equal (unsigned >=) */

loc_003D198E: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003D19A0; /* je: equal / zero */

loc_003D1995: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x003D199Eu); RECOMP_ABI_CALL(0x003D193Du, sub_003D193D); /* call 0x003D193D */

loc_003D199E: ;
    goto loc_003D1980;

loc_003D19A0: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x003D19ACu); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003D19AC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003D19BB; /* je: equal / zero */

loc_003D19B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x003D19B9u); RECOMP_ABI_CALL(0x003CFB6Bu, sub_003CFB6B); /* call 0x003CFB6B */

loc_003D19B9: ;
    goto loc_003D19BD;

loc_003D19BB: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D19BD: ;
    MEM32(esi + 0x10) = eax;
    goto loc_003D197D;

loc_003D19C2: ;
    ebx = esi;

loc_003D19C4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003D19CC
 * Original: 0x003D19CC - 0x003D1A3D (113 bytes, 49 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003D19CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D19CC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003D19DE; /* jne: not equal / not zero */

loc_003D19DA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003D1A37;

loc_003D19DE: ;
    PUSH32(esp, edi);
    ecx = ebp + 8;
    MEM32(ebp + 8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D19EAu); RECOMP_ABI_CALL(0x003CEC4Bu, sub_003CEC4B); /* call 0x003CEC4B */

loc_003D19EA: ;
    PUSH32(esp, MEM32(esi + 0x10));
    edi = MEM32(esi + 8);
    PUSH32(esp, MEM32(esi + 0xC));
    eax = MEM32(eax);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1A00u); RECOMP_ABI_CALL(0x003D0FFEu, sub_003D0FFE); /* call 0x003D0FFE */

loc_003D1A00: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1A25; /* je: equal / zero */

loc_003D1A04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1A0B; /* je: equal / zero */

loc_003D1A08: ;
    MEM32(eax + 8) = edi;

loc_003D1A0B: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1A13; /* jne: not equal / not zero */

loc_003D1A10: ;
    MEM32(edi + 0xC) = eax;

loc_003D1A13: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1A1B; /* jne: not equal / not zero */

loc_003D1A18: ;
    MEM32(edi + 0x10) = eax;

loc_003D1A1B: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1A23u); RECOMP_ABI_CALL(0x003D0F0Cu, sub_003D0F0C); /* call 0x003D0F0C */

loc_003D1A23: ;
    goto loc_003D1A28;

loc_003D1A25: ;
    MEM32(ebx + 8) = eax;

loc_003D1A28: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003D1A30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003D1A2Eu); } /* indirect call */
    }

loc_003D1A30: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    POP32(esp, edi);

loc_003D1A37: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D1A3D
 * Original: 0x003D1A3D - 0x003D1ACC (143 bytes, 61 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1A3D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003D1A3D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003D1A4B; /* jne: not equal / not zero */

loc_003D1A4A: ;
    /* int3: debug-trap slide byte, stepped over */

loc_003D1A4B: ;
    eax = MEM32(esi + 4);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003D1A8C; /* jbe: below or equal (unsigned <=) */

loc_003D1A56: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003D1A95; /* jne: not equal / not zero */

loc_003D1A5D: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x003D1A69u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003D1A69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1A78; /* je: equal / zero */

loc_003D1A6D: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x003D1A76u); RECOMP_ABI_CALL(0x003CFBC9u, sub_003CFBC9); /* call 0x003CFBC9 */

loc_003D1A76: ;
    goto loc_003D1A7A;

loc_003D1A78: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D1A7A: ;
    MEM32(esi + 0xC) = eax;

loc_003D1A7D: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003D1A80: ;
    PUSH32(esp, esi);
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x003D1A8Au); RECOMP_ABI_CALL(0x003D0F0Cu, sub_003D0F0C); /* call 0x003D0F0C */

loc_003D1A8A: ;
    goto loc_003D1AC4;

loc_003D1A8C: ;
    if (CMP_AE(_fa, _fb)) goto loc_003D1AC2; /* jae: above or equal (unsigned >=) */

loc_003D1A8E: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1AA0; /* je: equal / zero */

loc_003D1A95: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x003D1A9Eu); RECOMP_ABI_CALL(0x003D1A3Du, sub_003D1A3D); /* call 0x003D1A3D */

loc_003D1A9E: ;
    goto loc_003D1A80;

loc_003D1AA0: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x003D1AACu); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003D1AAC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1ABB; /* je: equal / zero */

loc_003D1AB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x003D1AB9u); RECOMP_ABI_CALL(0x003CFBC9u, sub_003CFBC9); /* call 0x003CFBC9 */

loc_003D1AB9: ;
    goto loc_003D1ABD;

loc_003D1ABB: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D1ABD: ;
    MEM32(esi + 0x10) = eax;
    goto loc_003D1A7D;

loc_003D1AC2: ;
    ebx = esi;

loc_003D1AC4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003D1ACC
 * Original: 0x003D1ACC - 0x003D1B3D (113 bytes, 49 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003D1ACC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D1ACC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003D1ADE; /* jne: not equal / not zero */

loc_003D1ADA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003D1B37;

loc_003D1ADE: ;
    PUSH32(esp, edi);
    ecx = ebp + 8;
    MEM32(ebp + 8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1AEAu); RECOMP_ABI_CALL(0x003CEC4Bu, sub_003CEC4B); /* call 0x003CEC4B */

loc_003D1AEA: ;
    PUSH32(esp, MEM32(esi + 0x10));
    edi = MEM32(esi + 8);
    PUSH32(esp, MEM32(esi + 0xC));
    eax = MEM32(eax);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1B00u); RECOMP_ABI_CALL(0x003D10C3u, sub_003D10C3); /* call 0x003D10C3 */

loc_003D1B00: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1B25; /* je: equal / zero */

loc_003D1B04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1B0B; /* je: equal / zero */

loc_003D1B08: ;
    MEM32(eax + 8) = edi;

loc_003D1B0B: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1B13; /* jne: not equal / not zero */

loc_003D1B10: ;
    MEM32(edi + 0xC) = eax;

loc_003D1B13: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1B1B; /* jne: not equal / not zero */

loc_003D1B18: ;
    MEM32(edi + 0x10) = eax;

loc_003D1B1B: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1B23u); RECOMP_ABI_CALL(0x003D0F0Cu, sub_003D0F0C); /* call 0x003D0F0C */

loc_003D1B23: ;
    goto loc_003D1B28;

loc_003D1B25: ;
    MEM32(ebx + 8) = eax;

loc_003D1B28: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003D1B30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003D1B2Eu); } /* indirect call */
    }

loc_003D1B30: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    POP32(esp, edi);

loc_003D1B37: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D1B3D
 * Original: 0x003D1B3D - 0x003D1BCC (143 bytes, 61 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1B3D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003D1B3D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003D1B4B; /* jne: not equal / not zero */

loc_003D1B4A: ;
    /* int3: debug-trap slide byte, stepped over */

loc_003D1B4B: ;
    eax = MEM32(esi + 4);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003D1B8C; /* jbe: below or equal (unsigned <=) */

loc_003D1B56: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003D1B95; /* jne: not equal / not zero */

loc_003D1B5D: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x003D1B69u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003D1B69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1B78; /* je: equal / zero */

loc_003D1B6D: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x003D1B76u); RECOMP_ABI_CALL(0x003CFC12u, sub_003CFC12); /* call 0x003CFC12 */

loc_003D1B76: ;
    goto loc_003D1B7A;

loc_003D1B78: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D1B7A: ;
    MEM32(esi + 0xC) = eax;

loc_003D1B7D: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003D1B80: ;
    PUSH32(esp, esi);
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x003D1B8Au); RECOMP_ABI_CALL(0x003D0F0Cu, sub_003D0F0C); /* call 0x003D0F0C */

loc_003D1B8A: ;
    goto loc_003D1BC4;

loc_003D1B8C: ;
    if (CMP_AE(_fa, _fb)) goto loc_003D1BC2; /* jae: above or equal (unsigned >=) */

loc_003D1B8E: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1BA0; /* je: equal / zero */

loc_003D1B95: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x003D1B9Eu); RECOMP_ABI_CALL(0x003D1B3Du, sub_003D1B3D); /* call 0x003D1B3D */

loc_003D1B9E: ;
    goto loc_003D1B80;

loc_003D1BA0: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x003D1BACu); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003D1BAC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1BBB; /* je: equal / zero */

loc_003D1BB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x003D1BB9u); RECOMP_ABI_CALL(0x003CFC12u, sub_003CFC12); /* call 0x003CFC12 */

loc_003D1BB9: ;
    goto loc_003D1BBD;

loc_003D1BBB: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D1BBD: ;
    MEM32(esi + 0x10) = eax;
    goto loc_003D1B7D;

loc_003D1BC2: ;
    ebx = esi;

loc_003D1BC4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003D1BCC
 * Original: 0x003D1BCC - 0x003D1C3D (113 bytes, 49 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003D1BCC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D1BCC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003D1BDE; /* jne: not equal / not zero */

loc_003D1BDA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003D1C37;

loc_003D1BDE: ;
    PUSH32(esp, edi);
    ecx = ebp + 8;
    MEM32(ebp + 8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1BEAu); RECOMP_ABI_CALL(0x003CEC4Bu, sub_003CEC4B); /* call 0x003CEC4B */

loc_003D1BEA: ;
    PUSH32(esp, MEM32(esi + 0x10));
    edi = MEM32(esi + 8);
    PUSH32(esp, MEM32(esi + 0xC));
    eax = MEM32(eax);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1C00u); RECOMP_ABI_CALL(0x003D1188u, sub_003D1188); /* call 0x003D1188 */

loc_003D1C00: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1C25; /* je: equal / zero */

loc_003D1C04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1C0B; /* je: equal / zero */

loc_003D1C08: ;
    MEM32(eax + 8) = edi;

loc_003D1C0B: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1C13; /* jne: not equal / not zero */

loc_003D1C10: ;
    MEM32(edi + 0xC) = eax;

loc_003D1C13: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1C1B; /* jne: not equal / not zero */

loc_003D1C18: ;
    MEM32(edi + 0x10) = eax;

loc_003D1C1B: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1C23u); RECOMP_ABI_CALL(0x003D0F0Cu, sub_003D0F0C); /* call 0x003D0F0C */

loc_003D1C23: ;
    goto loc_003D1C28;

loc_003D1C25: ;
    MEM32(ebx + 8) = eax;

loc_003D1C28: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003D1C30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003D1C2Eu); } /* indirect call */
    }

loc_003D1C30: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    POP32(esp, edi);

loc_003D1C37: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D1C3D
 * Original: 0x003D1C3D - 0x003D1CCC (143 bytes, 61 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1C3D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003D1C3D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003D1C4B; /* jne: not equal / not zero */

loc_003D1C4A: ;
    /* int3: debug-trap slide byte, stepped over */

loc_003D1C4B: ;
    eax = MEM32(esi + 4);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003D1C8C; /* jbe: below or equal (unsigned <=) */

loc_003D1C56: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003D1C95; /* jne: not equal / not zero */

loc_003D1C5D: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x003D1C69u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003D1C69: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1C78; /* je: equal / zero */

loc_003D1C6D: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x003D1C76u); RECOMP_ABI_CALL(0x003CFC5Bu, sub_003CFC5B); /* call 0x003CFC5B */

loc_003D1C76: ;
    goto loc_003D1C7A;

loc_003D1C78: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D1C7A: ;
    MEM32(esi + 0xC) = eax;

loc_003D1C7D: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003D1C80: ;
    PUSH32(esp, esi);
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x003D1C8Au); RECOMP_ABI_CALL(0x003D0F0Cu, sub_003D0F0C); /* call 0x003D0F0C */

loc_003D1C8A: ;
    goto loc_003D1CC4;

loc_003D1C8C: ;
    if (CMP_AE(_fa, _fb)) goto loc_003D1CC2; /* jae: above or equal (unsigned >=) */

loc_003D1C8E: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1CA0; /* je: equal / zero */

loc_003D1C95: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x003D1C9Eu); RECOMP_ABI_CALL(0x003D1C3Du, sub_003D1C3D); /* call 0x003D1C3D */

loc_003D1C9E: ;
    goto loc_003D1C80;

loc_003D1CA0: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x003D1CACu); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003D1CAC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1CBB; /* je: equal / zero */

loc_003D1CB0: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x003D1CB9u); RECOMP_ABI_CALL(0x003CFC5Bu, sub_003CFC5B); /* call 0x003CFC5B */

loc_003D1CB9: ;
    goto loc_003D1CBD;

loc_003D1CBB: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D1CBD: ;
    MEM32(esi + 0x10) = eax;
    goto loc_003D1C7D;

loc_003D1CC2: ;
    ebx = esi;

loc_003D1CC4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003D1CCC
 * Original: 0x003D1CCC - 0x003D1D3D (113 bytes, 49 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003D1CCC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D1CCC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003D1CDE; /* jne: not equal / not zero */

loc_003D1CDA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003D1D37;

loc_003D1CDE: ;
    PUSH32(esp, edi);
    ecx = ebp + 8;
    MEM32(ebp + 8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1CEAu); RECOMP_ABI_CALL(0x003CEC4Bu, sub_003CEC4B); /* call 0x003CEC4B */

loc_003D1CEA: ;
    PUSH32(esp, MEM32(esi + 0x10));
    edi = MEM32(esi + 8);
    PUSH32(esp, MEM32(esi + 0xC));
    eax = MEM32(eax);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1D00u); RECOMP_ABI_CALL(0x003D124Du, sub_003D124D); /* call 0x003D124D */

loc_003D1D00: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1D25; /* je: equal / zero */

loc_003D1D04: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1D0B; /* je: equal / zero */

loc_003D1D08: ;
    MEM32(eax + 8) = edi;

loc_003D1D0B: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1D13; /* jne: not equal / not zero */

loc_003D1D10: ;
    MEM32(edi + 0xC) = eax;

loc_003D1D13: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1D1B; /* jne: not equal / not zero */

loc_003D1D18: ;
    MEM32(edi + 0x10) = eax;

loc_003D1D1B: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1D23u); RECOMP_ABI_CALL(0x003D0F0Cu, sub_003D0F0C); /* call 0x003D0F0C */

loc_003D1D23: ;
    goto loc_003D1D28;

loc_003D1D25: ;
    MEM32(ebx + 8) = eax;

loc_003D1D28: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003D1D30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003D1D2Eu); } /* indirect call */
    }

loc_003D1D30: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    POP32(esp, edi);

loc_003D1D37: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D1D3D
 * Original: 0x003D1D3D - 0x003D1DEB (174 bytes, 72 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003D1D3D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D1D3D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003D1D4D; /* jne: not equal / not zero */

loc_003D1D4C: ;
    /* int3: debug-trap slide byte, stepped over */

loc_003D1D4D: ;
    ebx = MEM32(esi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi + 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1D5Cu); RECOMP_ABI_CALL(0x003CE303u, sub_003CE303); /* call 0x003CE303 */

loc_003D1D5C: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1D98; /* je: equal / zero */

loc_003D1D60: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1DAF; /* jne: not equal / not zero */

loc_003D1D67: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1D73u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003D1D73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1D84; /* je: equal / zero */

loc_003D1D77: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1D82u); RECOMP_ABI_CALL(0x003CFD63u, sub_003CFD63); /* call 0x003CFD63 */

loc_003D1D82: ;
    goto loc_003D1D86;

loc_003D1D84: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D1D86: ;
    MEM32(esi + 0xC) = eax;

loc_003D1D89: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003D1D8C: ;
    PUSH32(esp, esi);
    ecx = edi;
    ebx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1D96u); RECOMP_ABI_CALL(0x003D0F0Cu, sub_003D0F0C); /* call 0x003D0F0C */

loc_003D1D96: ;
    goto loc_003D1DE2;

loc_003D1D98: ;
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi + 4;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1DA4u); RECOMP_ABI_CALL(0x003CE303u, sub_003CE303); /* call 0x003CE303 */

loc_003D1DA4: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1DE0; /* je: equal / zero */

loc_003D1DA8: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1DBC; /* je: equal / zero */

loc_003D1DAF: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1DBAu); RECOMP_ABI_CALL(0x003D1D3Du, sub_003D1D3D); /* call 0x003D1D3D */

loc_003D1DBA: ;
    goto loc_003D1D8C;

loc_003D1DBC: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1DC8u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003D1DC8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1DD9; /* je: equal / zero */

loc_003D1DCC: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1DD7u); RECOMP_ABI_CALL(0x003CFD63u, sub_003CFD63); /* call 0x003CFD63 */

loc_003D1DD7: ;
    goto loc_003D1DDB;

loc_003D1DD9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D1DDB: ;
    MEM32(esi + 0x10) = eax;
    goto loc_003D1D89;

loc_003D1DE0: ;
    ebx = esi;

loc_003D1DE2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003D1DEB
 * Original: 0x003D1DEB - 0x003D1E5C (113 bytes, 49 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003D1DEB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D1DEB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003D1DFD; /* jne: not equal / not zero */

loc_003D1DF9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003D1E56;

loc_003D1DFD: ;
    PUSH32(esp, edi);
    ecx = ebp + 8;
    MEM32(ebp + 8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1E09u); RECOMP_ABI_CALL(0x003CFD11u, sub_003CFD11); /* call 0x003CFD11 */

loc_003D1E09: ;
    PUSH32(esp, MEM32(esi + 0x14));
    edi = MEM32(esi + 0xC);
    PUSH32(esp, MEM32(esi + 0x10));
    eax = MEM32(eax);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1E1Fu); RECOMP_ABI_CALL(0x003D133Fu, sub_003D133F); /* call 0x003D133F */

loc_003D1E1F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1E44; /* je: equal / zero */

loc_003D1E23: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1E2A; /* je: equal / zero */

loc_003D1E27: ;
    MEM32(eax + 0xC) = edi;

loc_003D1E2A: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1E32; /* jne: not equal / not zero */

loc_003D1E2F: ;
    MEM32(edi + 0x10) = eax;

loc_003D1E32: ;
    _fa = (uint32_t)(MEM32(edi + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x14), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1E3A; /* jne: not equal / not zero */

loc_003D1E37: ;
    MEM32(edi + 0x14) = eax;

loc_003D1E3A: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1E42u); RECOMP_ABI_CALL(0x003D1312u, sub_003D1312); /* call 0x003D1312 */

loc_003D1E42: ;
    goto loc_003D1E47;

loc_003D1E44: ;
    MEM32(ebx + 8) = eax;

loc_003D1E47: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003D1E4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003D1E4Du); } /* indirect call */
    }

loc_003D1E4F: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    POP32(esp, edi);

loc_003D1E56: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D1E5C
 * Original: 0x003D1E5C - 0x003D1EAB (79 bytes, 27 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1E5C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D1E5C: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1E97; /* jne: not equal / not zero */

loc_003D1E66: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x1C);
    MEM32(esi + 0xC) = 1;
    PUSH32(esp, 0x003D1E79u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003D1E79: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1E90; /* je: equal / zero */

loc_003D1E7D: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = eax;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x003D1E8Eu); RECOMP_ABI_CALL(0x003CFDF5u, sub_003CFDF5); /* call 0x003CFDF5 */

loc_003D1E8E: ;
    goto loc_003D1E92;

loc_003D1E90: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D1E92: ;
    MEM32(esi + 8) = eax;
    goto loc_003D1EA7;

loc_003D1E97: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    ecx = esi;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, 0x003D1EA7u); RECOMP_ABI_CALL(0x003D1404u, sub_003D1404); /* call 0x003D1404 */

loc_003D1EA7: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003D1EAB
 * Original: 0x003D1EAB - 0x003D1F1C (113 bytes, 49 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003D1EAB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D1EAB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ebx = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003D1EBD; /* jne: not equal / not zero */

loc_003D1EB9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003D1F16;

loc_003D1EBD: ;
    PUSH32(esp, edi);
    ecx = ebp + 8;
    MEM32(ebp + 8) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1EC9u); RECOMP_ABI_CALL(0x003CEC4Bu, sub_003CEC4B); /* call 0x003CEC4B */

loc_003D1EC9: ;
    PUSH32(esp, MEM32(esi + 0x10));
    edi = MEM32(esi + 8);
    PUSH32(esp, MEM32(esi + 0xC));
    eax = MEM32(eax);
    PUSH32(esp, edi);
    ecx = ebx;
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1EDFu); RECOMP_ABI_CALL(0x003D149Eu, sub_003D149E); /* call 0x003D149E */

loc_003D1EDF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1F04; /* je: equal / zero */

loc_003D1EE3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1EEA; /* je: equal / zero */

loc_003D1EE7: ;
    MEM32(eax + 8) = edi;

loc_003D1EEA: ;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0xC), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1EF2; /* jne: not equal / not zero */

loc_003D1EEF: ;
    MEM32(edi + 0xC) = eax;

loc_003D1EF2: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D1EFA; /* jne: not equal / not zero */

loc_003D1EF7: ;
    MEM32(edi + 0x10) = eax;

loc_003D1EFA: ;
    PUSH32(esp, edi);
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003D1F02u); RECOMP_ABI_CALL(0x003D0F0Cu, sub_003D0F0C); /* call 0x003D0F0C */

loc_003D1F02: ;
    goto loc_003D1F07;

loc_003D1F04: ;
    MEM32(ebx + 8) = eax;

loc_003D1F07: ;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 1);
    ecx = esi;
    { uint32_t _icall_target = MEM32(eax); PUSH32(esp, 0x003D1F0Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003D1F0Du); } /* indirect call */
    }

loc_003D1F0F: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) - 1;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = MEM32(ebp + 8);
    POP32(esp, edi);

loc_003D1F16: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D1F1C
 * Original: 0x003D1F1C - 0x003D1FAB (143 bytes, 61 insns)
 * Category: game_render
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1F1C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003D1F1C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003D1F2A; /* jne: not equal / not zero */

loc_003D1F29: ;
    /* int3: debug-trap slide byte, stepped over */

loc_003D1F2A: ;
    eax = MEM32(esi + 4);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003D1F6B; /* jbe: below or equal (unsigned <=) */

loc_003D1F35: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003D1F74; /* jne: not equal / not zero */

loc_003D1F3C: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x003D1F48u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003D1F48: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1F57; /* je: equal / zero */

loc_003D1F4C: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x003D1F55u); RECOMP_ABI_CALL(0x003CFDACu, sub_003CFDAC); /* call 0x003CFDAC */

loc_003D1F55: ;
    goto loc_003D1F59;

loc_003D1F57: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D1F59: ;
    MEM32(esi + 0xC) = eax;

loc_003D1F5C: ;
    MEM32(edi + 0xC) = MEM32(edi + 0xC) + 1;
    _fa = (uint32_t)(MEM32(edi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003D1F5F: ;
    PUSH32(esp, esi);
    ecx = edi;
    ebx = eax;
    PUSH32(esp, 0x003D1F69u); RECOMP_ABI_CALL(0x003D0F0Cu, sub_003D0F0C); /* call 0x003D0F0C */

loc_003D1F69: ;
    goto loc_003D1FA3;

loc_003D1F6B: ;
    if (CMP_AE(_fa, _fb)) goto loc_003D1FA1; /* jae: above or equal (unsigned >=) */

loc_003D1F6D: ;
    eax = MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1F7F; /* je: equal / zero */

loc_003D1F74: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    ecx = edi;
    PUSH32(esp, 0x003D1F7Du); RECOMP_ABI_CALL(0x003D1F1Cu, sub_003D1F1C); /* call 0x003D1F1C */

loc_003D1F7D: ;
    goto loc_003D1F5F;

loc_003D1F7F: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    PUSH32(esp, 0x003D1F8Bu); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003D1F8B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1F9A; /* je: equal / zero */

loc_003D1F8F: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ecx = eax;
    PUSH32(esp, 0x003D1F98u); RECOMP_ABI_CALL(0x003CFDACu, sub_003CFDAC); /* call 0x003CFDAC */

loc_003D1F98: ;
    goto loc_003D1F9C;

loc_003D1F9A: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D1F9C: ;
    MEM32(esi + 0x10) = eax;
    goto loc_003D1F5C;

loc_003D1FA1: ;
    ebx = esi;

loc_003D1FA3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003D1FAB
 * Original: 0x003D1FAB - 0x003D1FD7 (44 bytes, 20 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1FAB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D1FAB: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = ecx;
    goto loc_003D1FBC;

loc_003D1FB5: ;
    esi = MEM32(esi + 0x30);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D1FC8; /* je: equal / zero */

loc_003D1FBC: ;
    ecx = edi;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003D1FC4u); RECOMP_ABI_CALL(0x003D1882u, sub_003D1882); /* call 0x003D1882 */

loc_003D1FC4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003D1FB5; /* jl: less (signed <) */

loc_003D1FC8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    POP32(esp, edi);
    SET_LO8(eax, LO8(ecx));
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D1FD7
 * Original: 0x003D1FD7 - 0x003D201E (71 bytes, 25 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D1FD7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D1FD7: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D200E; /* jne: not equal / not zero */

loc_003D1FE1: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    MEM32(esi + 0xC) = 1;
    PUSH32(esp, 0x003D1FF4u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003D1FF4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D2007; /* je: equal / zero */

loc_003D1FF8: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, 0x003D2005u); RECOMP_ABI_CALL(0x003CFB6Bu, sub_003CFB6B); /* call 0x003CFB6B */

loc_003D2005: ;
    goto loc_003D2009;

loc_003D2007: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D2009: ;
    MEM32(esi + 8) = eax;
    goto loc_003D201A;

loc_003D200E: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 0x003D201Au); RECOMP_ABI_CALL(0x003D193Du, sub_003D193D); /* call 0x003D193D */

loc_003D201A: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D201E
 * Original: 0x003D201E - 0x003D2036 (24 bytes, 9 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D201E(void)
{

loc_003D201E: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x003D202Au); RECOMP_ABI_CALL(0x003D2260u, sub_003D2260); /* call 0x003D2260 */

loc_003D202A: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003D2032u); RECOMP_ABI_CALL(0x003D18CCu, sub_003D18CC); /* call 0x003D18CC */

loc_003D2032: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D2036
 * Original: 0x003D2036 - 0x003D207D (71 bytes, 25 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D2036(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D2036: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D206D; /* jne: not equal / not zero */

loc_003D2040: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    MEM32(esi + 0xC) = 1;
    PUSH32(esp, 0x003D2053u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003D2053: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D2066; /* je: equal / zero */

loc_003D2057: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, 0x003D2064u); RECOMP_ABI_CALL(0x003CFBC9u, sub_003CFBC9); /* call 0x003CFBC9 */

loc_003D2064: ;
    goto loc_003D2068;

loc_003D2066: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D2068: ;
    MEM32(esi + 8) = eax;
    goto loc_003D2079;

loc_003D206D: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 0x003D2079u); RECOMP_ABI_CALL(0x003D1A3Du, sub_003D1A3D); /* call 0x003D1A3D */

loc_003D2079: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D207D
 * Original: 0x003D207D - 0x003D2095 (24 bytes, 9 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D207D(void)
{

loc_003D207D: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x003D2089u); RECOMP_ABI_CALL(0x003D2260u, sub_003D2260); /* call 0x003D2260 */

loc_003D2089: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003D2091u); RECOMP_ABI_CALL(0x003D19CCu, sub_003D19CC); /* call 0x003D19CC */

loc_003D2091: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D2095
 * Original: 0x003D2095 - 0x003D20DC (71 bytes, 25 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D2095(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D2095: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D20CC; /* jne: not equal / not zero */

loc_003D209F: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    MEM32(esi + 0xC) = 1;
    PUSH32(esp, 0x003D20B2u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003D20B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D20C5; /* je: equal / zero */

loc_003D20B6: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, 0x003D20C3u); RECOMP_ABI_CALL(0x003CFC12u, sub_003CFC12); /* call 0x003CFC12 */

loc_003D20C3: ;
    goto loc_003D20C7;

loc_003D20C5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D20C7: ;
    MEM32(esi + 8) = eax;
    goto loc_003D20D8;

loc_003D20CC: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 0x003D20D8u); RECOMP_ABI_CALL(0x003D1B3Du, sub_003D1B3D); /* call 0x003D1B3D */

loc_003D20D8: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D20DC
 * Original: 0x003D20DC - 0x003D20F4 (24 bytes, 9 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D20DC(void)
{

loc_003D20DC: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x003D20E8u); RECOMP_ABI_CALL(0x003D2260u, sub_003D2260); /* call 0x003D2260 */

loc_003D20E8: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003D20F0u); RECOMP_ABI_CALL(0x003D1ACCu, sub_003D1ACC); /* call 0x003D1ACC */

loc_003D20F0: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D20F4
 * Original: 0x003D20F4 - 0x003D213B (71 bytes, 25 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D20F4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003D20F4: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003D212B; /* jne: not equal / not zero */

loc_003D20FE: ;
    PUSH32(esp, 0x24870000);
    PUSH32(esp, 0x18);
    MEM32(esi + 0xC) = 1;
    PUSH32(esp, 0x003D2111u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_003D2111: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003D2124; /* je: equal / zero */

loc_003D2115: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = eax;
    PUSH32(esp, 0x003D2122u); RECOMP_ABI_CALL(0x003CFC5Bu, sub_003CFC5B); /* call 0x003CFC5B */

loc_003D2122: ;
    goto loc_003D2126;

loc_003D2124: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003D2126: ;
    MEM32(esi + 8) = eax;
    goto loc_003D2137;

loc_003D212B: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    ecx = esi;
    PUSH32(esp, 0x003D2137u); RECOMP_ABI_CALL(0x003D1C3Du, sub_003D1C3D); /* call 0x003D1C3D */

loc_003D2137: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003D213B
 * Original: 0x003D213B - 0x003D2153 (24 bytes, 9 insns)
 * Category: game_render
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003D213B(void)
{

loc_003D213B: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x003D2147u); RECOMP_ABI_CALL(0x003D2260u, sub_003D2260); /* call 0x003D2260 */

loc_003D2147: ;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x003D214Fu); RECOMP_ABI_CALL(0x003D1BCCu, sub_003D1BCC); /* call 0x003D1BCC */

loc_003D214F: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}
