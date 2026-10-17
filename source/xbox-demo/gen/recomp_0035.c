/**
 * PoP SoT xbox-demo - Recompiled code chunk 35
 * Functions: 250 (0x00294350 - 0x00296C8B)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_00294350
 * Original: 0x00294350 - 0x0029437A (42 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00294350(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00294350: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0xA (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_00294366; /* jne: not equal / not zero */

loc_0029435C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00294366; /* jge: greater or equal (signed >=) */

loc_00294360: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA);
    goto loc_0029436B;

loc_00294366: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));

loc_0029436B: ;
    ecx = MEM32(ebp + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294373u); RECOMP_ABI_CALL(0x00294312u, sub_00294312); /* call 0x00294312 */

loc_00294373: ;
    eax = MEM32(ebp + 0xC);
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0029437C
 * Original: 0x0029437C - 0x00294386 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029437C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029437C: ;
    edx = 0x339F32;
    g_seh_ebp = ebp; sub_00295719(); return; /* tail jmp 0x00295719 */

}

/**
 * sub_002943AC
 * Original: 0x002943AC - 0x002944A4 (248 bytes, 97 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002943AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002943AC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + 0x10));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi;
    MEM32(ebp + 8) = eax;
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -4) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_002943D4; /* jne: not equal / not zero */

loc_002943CD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0029448B;

loc_002943D4: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM16(ebx + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x10C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebx + 0xC), 0x10C (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002943E8; /* je: equal / zero */

loc_002943E0: ;
    eax = MEM32(ebx + 0x18);
    MEM32(ebp + -8) = eax;
    goto loc_002943EF;

loc_002943E8: ;
    MEM32(ebp + -8) = 0x1000;

loc_002943EF: ;
    _fa = (uint32_t)(MEM16(ebx + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x10C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebx + 0xC), 0x10C (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029442C; /* je: equal / zero */

loc_002943F7: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029442C; /* je: equal / zero */

loc_002943FE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00294404; /* jae: above or equal (unsigned >=) */

loc_00294402: ;
    eax = edi;

loc_00294404: ;
    esi = MEM32(ebx);
    edi = MEM32(ebp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) - eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    edx = ecx;
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
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebx + 4) = MEM32(ebx + 4) - eax;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx) = MEM32(ebx) + eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ebp + -4);
    esi = MEM32(ebp + -12);
    goto loc_0029447F;

loc_0029442C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00294461; /* jb: below (unsigned <) */

loc_00294431: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00294442; /* je: equal / zero */

loc_00294439: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -8));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -8)); }
    eax = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00294442: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebx + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0029444Eu); RECOMP_ABI_CALL(0x0028BFEBu, sub_0028BFEB); /* call 0x0028BFEB */

loc_0029444E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029448F; /* je: equal / zero */

loc_00294455: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029449E; /* je: equal / zero */

loc_0029445A: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0029447C;

loc_00294461: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294467u); RECOMP_ABI_CALL(0x00295788u, sub_00295788); /* call 0x00295788 */

loc_00294467: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00294493; /* je: equal / zero */

loc_0029446D: ;
    ecx = MEM32(ebp + 8);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(eax);
    eax = MEM32(ebx + 0x18);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = eax;

loc_0029447C: ;
    MEM32(ebp + -4) = edi;

loc_0029447F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002943EF; /* jne: not equal / not zero */

loc_00294487: ;
    eax = MEM32(ebp + 0x10);

loc_0029448A: ;
    POP32(esp, ebx);

loc_0029448B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0029448F: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) | 0x10;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00294493: ;
    eax = esi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + 0xC)); }
    goto loc_0029448A;

loc_0029449E: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) | 0x20;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00294493;

}

/**
 * sub_002943B2
 * Original: 0x002943B2 - 0x002944A4 (242 bytes, 94 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002943B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002943B2: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    esi = (uint32_t)((int32_t)esi * (int32_t)MEM32(ebp + 0x10));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = esi;
    MEM32(ebp + 8) = eax;
    MEM32(ebp + -12) = esi;
    MEM32(ebp + -4) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_002943D4; /* jne: not equal / not zero */

loc_002943CD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0029448B;

loc_002943D4: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM16(ebx + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x10C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebx + 0xC), 0x10C (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002943E8; /* je: equal / zero */

loc_002943E0: ;
    eax = MEM32(ebx + 0x18);
    MEM32(ebp + -8) = eax;
    goto loc_002943EF;

loc_002943E8: ;
    MEM32(ebp + -8) = 0x1000;

loc_002943EF: ;
    _fa = (uint32_t)(MEM16(ebx + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x10C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebx + 0xC), 0x10C (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029442C; /* je: equal / zero */

loc_002943F7: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029442C; /* je: equal / zero */

loc_002943FE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00294404; /* jae: above or equal (unsigned >=) */

loc_00294402: ;
    eax = edi;

loc_00294404: ;
    esi = MEM32(ebx);
    edi = MEM32(ebp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) - eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    edx = ecx;
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
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebx + 4) = MEM32(ebx + 4) - eax;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx) = MEM32(ebx) + eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ebp + -4);
    esi = MEM32(ebp + -12);
    goto loc_0029447F;

loc_0029442C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00294461; /* jb: below (unsigned <) */

loc_00294431: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    eax = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00294442; /* je: equal / zero */

loc_00294439: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -8));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -8)); }
    eax = edi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00294442: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebx + 0x10));
    PUSH32(esp, 0x0029444Eu); RECOMP_ABI_CALL(0x0028BFEBu, sub_0028BFEB); /* call 0x0028BFEB */

loc_0029444E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029448F; /* je: equal / zero */

loc_00294455: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029449E; /* je: equal / zero */

loc_0029445A: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0029447C;

loc_00294461: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00294467u); RECOMP_ABI_CALL(0x00295788u, sub_00295788); /* call 0x00295788 */

loc_00294467: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00294493; /* je: equal / zero */

loc_0029446D: ;
    ecx = MEM32(ebp + 8);
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(eax);
    eax = MEM32(ebx + 0x18);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -8) = eax;

loc_0029447C: ;
    MEM32(ebp + -4) = edi;

loc_0029447F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002943EF; /* jne: not equal / not zero */

loc_00294487: ;
    eax = MEM32(ebp + 0x10);

loc_0029448A: ;
    POP32(esp, ebx);

loc_0029448B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0029448F: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) | 0x10;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00294493: ;
    eax = esi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + 0xC)); }
    goto loc_0029448A;

loc_0029449E: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) | 0x20;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00294493;

}

/**
 * sub_002944A4
 * Original: 0x002944A4 - 0x002944E6 (66 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002944A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002944A4: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x322B78);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002944B0u); RECOMP_ABI_CALL(0x0028A558u, sub_0028A558); /* call 0x0028A558 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_002944B0: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002944B8u); RECOMP_ABI_CALL(0x0028E43Du, sub_0028E43D); /* call 0x0028E43D */

loc_002944B8: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002944CEu); RECOMP_ABI_CALL(0x002943ACu, sub_002943AC); /* call 0x002943AC */

loc_002944CE: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002944DDu); RECOMP_ABI_CALL(0x002944E6u, sub_002944E6); /* call 0x002944E6 */

loc_002944DD: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002944E5u); RECOMP_ABI_CALL(0x0028A593u, sub_0028A593); /* call 0x0028A593 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_002944E5: ;
    esp += 4; return; /* ret */

}

/**
 * sub_002944E6
 * Original: 0x002944E6 - 0x002944F0 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002944E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002944E6: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x002944EEu); RECOMP_ABI_CALL(0x0028E48Fu, sub_0028E48F); /* call 0x0028E48F */

loc_002944EE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002944F0
 * Original: 0x002944F0 - 0x00294607 (279 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_002944F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_002944F0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 0x10));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = edi;
    MEM32(ebp + 8) = edx;
    MEM32(ebp + -12) = edi;
    MEM32(ebp + -4) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_00294518; /* jne: not equal / not zero */

loc_00294511: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_002945F8;

loc_00294518: ;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(MEM16(ebx + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x10C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(ebx + 0xC), 0x10C (16-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0029452C; /* je: equal / zero */

loc_00294524: ;
    eax = MEM32(ebx + 0x18);
    MEM32(ebp + -8) = eax;
    goto loc_00294538;

loc_0029452C: ;
    MEM32(ebp + -8) = 0x1000;
    goto loc_00294538;

loc_00294535: ;
    edx = MEM32(ebp + 8);

loc_00294538: ;
    ecx = MEM32(ebx + 0xC);
    ecx = ecx & 0x108;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00294574; /* je: equal / zero */

loc_00294543: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00294574; /* je: equal / zero */

loc_0029454A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00294550; /* jae: above or equal (unsigned >=) */

loc_0029454E: ;
    eax = esi;

loc_00294550: ;
    edi = MEM32(ebx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) - eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    esi = edx;
    edx = ecx;
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
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebx + 4) = MEM32(ebx + 4) - eax;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx) = MEM32(ebx) + eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(ebp + -12);
    goto loc_002945E9;

loc_00294574: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -8) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_002945C0; /* jb: below (unsigned <) */

loc_00294579: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00294588; /* je: equal / zero */

loc_0029457D: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294583u); RECOMP_ABI_CALL(0x0028F4F1u, sub_0028F4F1); /* call 0x0028F4F1 */

loc_00294583: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_002945FC; /* jne: not equal / not zero */

loc_00294588: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00294597; /* je: equal / zero */

loc_0029458E: ;
    eax = esi;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + -8));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + -8)); }
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00294597: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebx + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002945A3u); RECOMP_ABI_CALL(0x00290E7Bu, sub_00290E7B); /* call 0x00290E7B */

loc_002945A3: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002945B5; /* je: equal / zero */

loc_002945AB: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) - eax;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) + eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_002945E9; /* jae: above or equal (unsigned >=) */

loc_002945B5: ;
    MEM32(ebx + 0xC) = MEM32(ebx + 0xC) | 0x20;
    _fa = (uint32_t)(MEM32(ebx + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = edi;
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00294600;

loc_002945C0: ;
    eax = (uint32_t)(int32_t)SMEM8(edx);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002945CAu); RECOMP_ABI_CALL(0x0028CA6Cu, sub_0028CA6C); /* call 0x0028CA6C */

loc_002945CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_002945FC; /* je: equal / zero */

loc_002945D1: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) + 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebx + 0x18);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebp + -4) = esi;
    MEM32(ebp + -8) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_002945E9; /* jg: greater (signed >) */

loc_002945E2: ;
    MEM32(ebp + -8) = 1;

loc_002945E9: ;
    esi = MEM32(ebp + -4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00294535; /* jne: not equal / not zero */

loc_002945F4: ;
    eax = MEM32(ebp + 0x10);

loc_002945F7: ;
    POP32(esp, ebx);

loc_002945F8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_002945FC: ;
    eax = edi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00294600: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebp + 0xC));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebp + 0xC)); }
    goto loc_002945F7;

}

/**
 * sub_00294607
 * Original: 0x00294607 - 0x00294649 (66 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294607(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00294607: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x322B88);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294613u); RECOMP_ABI_CALL(0x0028A558u, sub_0028A558); /* call 0x0028A558 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00294613: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0029461Bu); RECOMP_ABI_CALL(0x0028E43Du, sub_0028E43D); /* call 0x0028E43D */

loc_0029461B: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294631u); RECOMP_ABI_CALL(0x002944F0u, sub_002944F0); /* call 0x002944F0 */

loc_00294631: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294640u); RECOMP_ABI_CALL(0x00294649u, sub_00294649); /* call 0x00294649 */

loc_00294640: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294648u); RECOMP_ABI_CALL(0x0028A593u, sub_0028A593); /* call 0x0028A593 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00294648: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00294649
 * Original: 0x00294649 - 0x00294653 (10 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294649(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00294649: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x00294651u); RECOMP_ABI_CALL(0x0028E48Fu, sub_0028E48F); /* call 0x0028E48F */

loc_00294651: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00294653
 * Original: 0x00294653 - 0x002947D3 (384 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00294653(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00294653: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00294666; /* jge: greater or equal (signed >=) */

loc_0029465F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00294798;

loc_00294666: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0029466Bu); RECOMP_ABI_CALL(0x00295C80u, sub_00295C80); /* call 0x00295C80 */

loc_0029466B: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3F480) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3F480 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_002946CC; /* jle: less or equal (signed <=) */

loc_00294674: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFC0B7F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7FFC0B7F (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_002946CC; /* jge: greater or equal (signed >=) */

loc_0029467B: ;
    _fb = (uint32_t)(MEM32(0x339F98)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x339F98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 8) = eax;
    eax = ebp + 8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0029468Du); RECOMP_ABI_CALL(0x00295D0Au, sub_00295D0A); /* call 0x00295D0A */

loc_0029468D: ;
    _fa = (uint32_t)(MEM32(0x339F9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x339F9C), 0 (32-bit) */
    POP32(esp, ecx);
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00294796; /* je: equal / zero */

loc_0029469D: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002946A3u); RECOMP_ABI_CALL(0x00295CCCu, sub_00295CCC); /* call 0x00295CCC */

loc_002946A3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00294796; /* je: equal / zero */

loc_002946AC: ;
    eax = MEM32(0x339FA0);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) - eax;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + 8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002946BDu); RECOMP_ABI_CALL(0x00295D0Au, sub_00295D0A); /* call 0x00295D0A */

loc_002946BD: ;
    esi = eax;
    POP32(esp, ecx);
    MEM32(esi + 0x20) = 1;
    goto loc_00294796;

loc_002946CC: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002946D2u); RECOMP_ABI_CALL(0x00295D0Au, sub_00295D0A); /* call 0x00295D0A */

loc_002946D2: ;
    _fa = (uint32_t)(MEM32(0x339F9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x339F9C), 0 (32-bit) */
    POP32(esp, ecx);
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00294706; /* je: equal / zero */

loc_002946DE: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002946E4u); RECOMP_ABI_CALL(0x00295CCCu, sub_00295CCC); /* call 0x00295CCC */

loc_002946E4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_00294706; /* je: equal / zero */

loc_002946E9: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(MEM32(0x339FA0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x339FA0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(0x339F98)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x339F98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 8) = eax;
    MEM32(esi + 0x20) = 1;
    eax = MEM32(ebp + 8);
    goto loc_00294711;

loc_00294706: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(MEM32(0x339F98)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x339F98);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 8) = eax;

loc_00294711: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x3C);
    POP32(esp, ecx);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = ecx;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esi) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00294727; /* jge: greater or equal (signed >=) */

loc_00294720: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) - ecx;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00294727: ;
    eax = MEM32(ebp + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = ecx;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    POP32(esp, ebx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esi + 4) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_00294749; /* jge: greater or equal (signed >=) */

loc_00294740: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x3C;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 4) = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) - ecx;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00294749: ;
    eax = MEM32(ebp + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    PUSH32(esp, 0x18);
    POP32(esp, ecx);
    _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esi + 8) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_0029476A; /* jge: greater or equal (signed >=) */

loc_00294762: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 8) = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + 8) = MEM32(ebp + 8) - ecx;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0029476A: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, 0x18);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebp + 8) = ecx;
    if (CMP_LE(_fas, _fbs)) goto loc_0029479B; /* jle: less or equal (signed <=) */

loc_0029477C: ;
    eax = MEM32(esi + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 7);
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esi + 0x18) = edx;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + eax;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00294790: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x1C) = MEM32(esi + 0x1C) + eax;
    _fa = (uint32_t)(MEM32(esi + 0x1C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00294796: ;
    eax = esi;

loc_00294798: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0029479B: ;
    if (CMP_GE(_fas, _fbs)) goto loc_00294796; /* jge: greater or equal (signed >=) */

loc_0029479D: ;
    eax = MEM32(esi + 0x18);
    eax = eax + ecx + 7;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 7);
    POP32(esp, ecx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    MEM32(esi + 0x18) = edx;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) + eax;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00294790; /* jg: greater (signed >) */

loc_002947BA: ;
    _fb = (uint32_t)(0x1F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x14) = MEM32(esi + 0x14) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x1C) = 0x16C;
    MEM32(esi + 0x10) = 0xB;
    goto loc_00294796;

}

/**
 * sub_002947D3
 * Original: 0x002947D3 - 0x00294815 (66 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002947D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002947D3: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x322B98);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002947DFu); RECOMP_ABI_CALL(0x0028A558u, sub_0028A558); /* call 0x0028A558 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_002947DF: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 8);
    eax = MEM32(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -28) = eax;
    goto loc_00294809;

    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000005u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000005u (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

loc_00294809: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294812u); RECOMP_ABI_CALL(0x0028A593u, sub_0028A593); /* call 0x0028A593 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00294812: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_002947F0
 * Original: 0x002947F0 - 0x00294815 (37 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002947F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002947F0: ;
    eax = MEM32(ebp + -20);
    eax = MEM32(eax);
    eax = MEM32(eax);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC0000005u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC0000005u (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    eax = ecx;
    esp += 4; return; /* ret */

    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294804
 * Original: 0x00294804 - 0x00294815 (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294804(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00294804: ;
    esp = MEM32(ebp + -24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x00294812u); RECOMP_ABI_CALL(0x0028A593u, sub_0028A593); /* call 0x0028A593 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00294812: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00294815
 * Original: 0x00294815 - 0x00294845 (48 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294815(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00294815: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFF (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00294823; /* jbe: below or equal (unsigned <=) */

loc_00294820: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00294823: ;
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00294837; /* jle: less or equal (signed <=) */

loc_0029482C: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00294834u); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_00294834: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00294837: ;
    ecx = MEM32(0x336CDC);
    eax = ZX8(MEM8(ecx + eax * 2));
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 4; return; /* ret */

}

/**
 * sub_00294845
 * Original: 0x00294845 - 0x00294877 (50 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294845(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00294845: ;
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    PUSH32(esp, esi);
    esi = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_0029485D; /* jle: less or equal (signed <=) */

loc_00294851: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00294859u); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_00294859: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00294869;

loc_0029485D: ;
    eax = MEM32(0x336CDC);
    eax = ZX8(MEM8(eax + esi * 2));
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00294869: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00294873; /* jne: not equal / not zero */

loc_0029486D: ;
    esi = esi & 0xFFFFFFDFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00294873: ;
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00294877
 * Original: 0x00294877 - 0x0029488D (22 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294877(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00294877: ;
    MEM32(edx + 4) = MEM32(edx + 4) - 1;
    _fa = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00294885; /* js: sign (negative) */

loc_0029487C: ;
    ecx = MEM32(edx);
    eax = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = ecx;
    esp += 4; return; /* ret */

loc_00294885: ;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0029488Bu); RECOMP_ABI_CALL(0x00295788u, sub_00295788); /* call 0x00295788 */

loc_0029488B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0029488D
 * Original: 0x0029488D - 0x0029540A (2941 bytes, 987 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029488D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029488D: ;
    PUSH32(esp, 0x1CC);
    PUSH32(esp, 0x322BA8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0029489Cu); RECOMP_ABI_CALL(0x0028A558u, sub_0028A558); /* call 0x0028A558 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0029489C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -96) = eax;
    MEM32(ebp + -112) = eax;
    MEM32(ebp + -84) = eax;
    MEM32(ebp + -48) = eax;
    MEM8(ebp + -49) = LO8(eax);
    MEM32(ebp + -32) = eax;
    MEM32(ebp + -88) = eax;

loc_002948B3: ;
    edi = MEM32(ebp + 0xC);

loc_002948B6: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002953DA; /* je: equal / zero */

loc_002948C0: ;
    eax = ZX8(LO8(eax));
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_002948D8; /* jle: less or equal (signed <=) */

loc_002948CC: ;
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002948D4u); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_002948D4: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_002948E5;

loc_002948D8: ;
    ecx = MEM32(0x336CDC);
    eax = ZX8(MEM8(ecx + eax * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_002948E5: ;
    _cf = 0; /* xor clears CF */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0029492D; /* je: equal / zero */

loc_002948EB: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002948EE: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002948F9u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_002948F9: ;
    esi = eax;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294901u); RECOMP_ABI_CALL(0x0028BB57u, sub_0028BB57); /* call 0x0028BB57 */

loc_00294901: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002948EE; /* jne: not equal / not zero */

loc_00294906: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294916; /* je: equal / zero */

loc_0029490B: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294914u); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_00294914: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00294916: ;
    edi = MEM32(ebp + 0xC);

loc_00294919: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(MEM8(edi));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294923u); RECOMP_ABI_CALL(0x0028BB57u, sub_0028BB57); /* call 0x0028BB57 */

loc_00294923: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00294919; /* jne: not equal / not zero */

loc_00294928: ;
    MEM32(ebp + 0xC) = edi;
    goto loc_002948B6;

loc_0029492D: ;
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x25) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x25 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00295356; /* jne: not equal / not zero */

loc_00294939: ;
    MEM32(ebp + -64) = esi;
    MEM8(ebp + -89) = 0;
    MEM32(ebp + -60) = esi;
    MEM32(ebp + -80) = esi;
    MEM32(ebp + -40) = esi;
    MEM8(ebp + -73) = 0;
    MEM8(ebp + -51) = 0;
    MEM8(ebp + -41) = 0;
    MEM8(ebp + -25) = 0;
    MEM8(ebp + -50) = 0;
    MEM8(ebp + -33) = 0;
    MEM8(ebp + -42) = 1;
    MEM32(ebp + -104) = esi;

loc_00294968: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ZX8(MEM8(edi));
    eax = ZX8(LO8(ebx));
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00294984; /* jle: less or equal (signed <=) */

loc_00294978: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294980u); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_00294980: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00294991;

loc_00294984: ;
    ecx = MEM32(0x336CDC);
    eax = ZX8(MEM8(ecx + eax * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00294991: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002949A4; /* je: equal / zero */

loc_00294995: ;
    MEM32(ebp + -80) = MEM32(ebp + -80) + 1;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi + esi * 4;
    esi = ebx + eax * 2 + -48;
    goto loc_00294A3E;

loc_002949A4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x4E (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00294A1C; /* jg: greater (signed >) */

loc_002949A9: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00294A3E; /* je: equal / zero */

loc_002949AF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2A (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294A17; /* je: equal / zero */

loc_002949B4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x46 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294A3E; /* je: equal / zero */

loc_002949BD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x49 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002949CC; /* je: equal / zero */

loc_002949C2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x4C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294A2B; /* jne: not equal / not zero */

loc_002949C7: ;
    MEM8(ebp + -42) = MEM8(ebp + -42) + 1;
    _fa = (uint32_t)(MEM8(ebp + -42)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    goto loc_00294A3E;

loc_002949CC: ;
    SET_LO8(ecx, MEM8(edi + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x36) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x36 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002949EB; /* jne: not equal / not zero */

loc_002949D4: ;
    eax = edi + 2;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x34) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x34 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002949EB; /* jne: not equal / not zero */

loc_002949DC: ;
    edi = eax;
    MEM32(ebp + -104) = MEM32(ebp + -104) + 1;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -72) = MEM32(ebp + -72) & 0;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -68) = MEM32(ebp + -68) & 0;
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00294A3E;

loc_002949EB: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x33) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x33 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002949FC; /* jne: not equal / not zero */

loc_002949F0: ;
    eax = edi + 2;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x32 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002949FC; /* jne: not equal / not zero */

loc_002949F8: ;
    edi = eax;
    goto loc_00294A3E;

loc_002949FC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x64) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x64 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294A3E; /* je: equal / zero */

loc_00294A01: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x69) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x69 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294A3E; /* je: equal / zero */

loc_00294A06: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x6F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x6F (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294A3E; /* je: equal / zero */

loc_00294A0B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x78) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x78 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294A3E; /* je: equal / zero */

loc_00294A10: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x58) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x58 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294A2B; /* jne: not equal / not zero */

loc_00294A15: ;
    goto loc_00294A3E;

loc_00294A17: ;
    MEM8(ebp + -41) = MEM8(ebp + -41) + 1;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    goto loc_00294A3E;

loc_00294A1C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x68) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x68 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294A38; /* je: equal / zero */

loc_00294A21: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x6C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294A30; /* je: equal / zero */

loc_00294A26: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x77) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x77 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294A33; /* je: equal / zero */

loc_00294A2B: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    goto loc_00294A3E;

loc_00294A30: ;
    MEM8(ebp + -42) = MEM8(ebp + -42) + 1;
    _fa = (uint32_t)(MEM8(ebp + -42)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00294A33: ;
    MEM8(ebp + -33) = MEM8(ebp + -33) + 1;
    _fa = (uint32_t)(MEM8(ebp + -33)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    goto loc_00294A3E;

loc_00294A38: ;
    MEM8(ebp + -42) = MEM8(ebp + -42) - 1;
    _fa = (uint32_t)(MEM8(ebp + -42)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(ebp + -33) = MEM8(ebp + -33) - 1;
    _fa = (uint32_t)(MEM8(ebp + -33)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */

loc_00294A3E: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294968; /* je: equal / zero */

loc_00294A48: ;
    MEM32(ebp + -40) = esi;
    MEM32(ebp + 0xC) = edi;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00294A68; /* jne: not equal / not zero */

loc_00294A54: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -124) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = eax;
    ebx = MEM32(eax + -4);
    MEM32(ebp + -84) = ebx;
    goto loc_00294A6B;

loc_00294A68: ;
    ebx = MEM32(ebp + -84);

loc_00294A6B: ;
    MEM8(ebp + -25) = 0;
    _fa = (uint32_t)(MEM8(ebp + -33)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -33), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00294A87; /* jne: not equal / not zero */

loc_00294A75: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x53) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x53 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294A83; /* je: equal / zero */

loc_00294A7B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x43) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x43 (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -33) = 0xFF;
    if (CMP_NE(_fa, _fb)) goto loc_00294A87; /* jne: not equal / not zero */

loc_00294A83: ;
    MEM8(ebp + -33) = 1;

loc_00294A87: ;
    eax = ZX8(MEM8(edi));
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -56) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6E (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294AC2; /* je: equal / zero */

loc_00294A95: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x63 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294B27; /* je: equal / zero */

loc_00294A9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294B27; /* je: equal / zero */

loc_00294AA7: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294AB2u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294AB2: ;
    esi = eax;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294ABAu); RECOMP_ABI_CALL(0x0028BB57u, sub_0028BB57); /* call 0x0028BB57 */

loc_00294ABA: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00294AA7; /* jne: not equal / not zero */

loc_00294ABF: ;
    MEM32(ebp + -48) = esi;

loc_00294AC2: ;
    esi = MEM32(ebp + 8);

loc_00294AC5: ;
    edx = MEM32(ebp + -80);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294AD6; /* je: equal / zero */

loc_00294ACC: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294E68; /* je: equal / zero */

loc_00294AD6: ;
    ecx = MEM32(ebp + -56);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00294E36; /* jg: greater (signed >) */

loc_00294AE2: ;
    if (CMP_EQ(_fa, _fb)) goto loc_002950B3; /* je: equal / zero */

loc_00294AE8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x63 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294D36; /* je: equal / zero */

loc_00294AF1: ;
    PUSH32(esp, 0x64);
    POP32(esp, eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002950B3; /* je: equal / zero */

loc_00294AFC: ;
    if (CMP_LE(_fas, _fbs)) goto loc_00294E60; /* jle: less or equal (signed <=) */

loc_00294B02: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x67) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x67 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00294B51; /* jle: less or equal (signed <=) */

loc_00294B07: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x69) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x69 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294B39; /* je: equal / zero */

loc_00294B0C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6E (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294E60; /* jne: not equal / not zero */

loc_00294B15: ;
    eax = MEM32(ebp + -32);
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0029532A; /* je: equal / zero */

loc_00294B22: ;
    goto loc_0029534A;

loc_00294B27: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = MEM32(ebp + 8);
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294B34u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294B34: ;
    MEM32(ebp + -48) = eax;
    goto loc_00294AC5;

loc_00294B39: ;
    MEM32(ebp + -56) = eax;

loc_00294B3C: ;
    ebx = MEM32(ebp + -48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294F9F; /* jne: not equal / not zero */

loc_00294B48: ;
    MEM8(ebp + -51) = 1;
    goto loc_00294FA4;

loc_00294B51: ;
    esi = ebp + -476;
    ebx = MEM32(ebp + -48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294B6D; /* jne: not equal / not zero */

loc_00294B5F: ;
    MEM8(ebp + -476) = LO8(ebx);
    esi = ebp + -475;
    goto loc_00294B72;

loc_00294B6D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294B89; /* jne: not equal / not zero */

loc_00294B72: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(ebp + 8);
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294B82u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294B82: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    goto loc_00294B8C;

loc_00294B89: ;
    edi = MEM32(ebp + 8);

loc_00294B8C: ;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294B9B; /* je: equal / zero */

loc_00294B92: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0x15D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00294BA2; /* jle: less or equal (signed <=) */

loc_00294B9B: ;
    MEM32(ebp + -40) = 0x15D;

loc_00294BA2: ;
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00294BB7; /* jle: less or equal (signed <=) */

loc_00294BAB: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294BB3u); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_00294BB3: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00294BC3;

loc_00294BB7: ;
    eax = MEM32(0x336CDC);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00294BC3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294BE8; /* je: equal / zero */

loc_00294BC7: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294BE8; /* je: equal / zero */

loc_00294BD1: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = LO8(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294BE1u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294BE1: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    goto loc_00294BA2;

loc_00294BE8: ;
    _fa = (uint32_t)(MEM8(0x336CE8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x336CE8), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294C54; /* jne: not equal / not zero */

loc_00294BF0: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294C54; /* je: equal / zero */

loc_00294BFA: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294C04u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294C04: ;
    ebx = eax;
    SET_LO8(eax, MEM8(0x336CE8));
    MEM8(esi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00294C0E: ;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00294C26; /* jle: less or equal (signed <=) */

loc_00294C1A: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294C22u); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_00294C22: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00294C32;

loc_00294C26: ;
    eax = MEM32(0x336CDC);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00294C32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294C54; /* je: equal / zero */

loc_00294C36: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294C54; /* je: equal / zero */

loc_00294C40: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = LO8(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294C50u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294C50: ;
    ebx = eax;
    goto loc_00294C0E;

loc_00294C54: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294CED; /* je: equal / zero */

loc_00294C5E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x65 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294C6C; /* je: equal / zero */

loc_00294C63: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x45) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x45 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294CED; /* jne: not equal / not zero */

loc_00294C6C: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294CED; /* je: equal / zero */

loc_00294C76: ;
    MEM8(esi) = 0x65;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294C84u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294C84: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294C93; /* jne: not equal / not zero */

loc_00294C8E: ;
    MEM8(esi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00294C98;

loc_00294C93: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294CB6; /* jne: not equal / not zero */

loc_00294C98: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00294CA7; /* jne: not equal / not zero */

loc_00294CA2: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -40) = MEM32(ebp + -40) & eax;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00294CB6;

loc_00294CA7: ;
    edx = edi;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294CB1u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294CB1: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;

loc_00294CB6: ;
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00294CCB; /* jle: less or equal (signed <=) */

loc_00294CBF: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294CC7u); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_00294CC7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00294CD7;

loc_00294CCB: ;
    eax = MEM32(0x336CDC);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00294CD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294CED; /* je: equal / zero */

loc_00294CDB: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294CED; /* je: equal / zero */

loc_00294CE5: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = LO8(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00294CA7;

loc_00294CED: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294CFE; /* je: equal / zero */

loc_00294CF5: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294CFCu); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_00294CFC: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00294CFE: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002953DA; /* je: equal / zero */

loc_00294D08: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0029534A; /* jne: not equal / not zero */

loc_00294D12: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = 0;
    eax = ebp + -476;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -84));
    eax = (uint32_t)(int32_t)SMEM8(ebp + -42);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3367F8); PUSH32(esp, 0x00294D2Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00294D28u); } /* indirect call */
    }

loc_00294D2E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0029534A;

loc_00294D36: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00294D44; /* jne: not equal / not zero */

loc_00294D3A: ;
    MEM32(ebp + -80) = 1;
    MEM32(ebp + -40) = MEM32(ebp + -40) + 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00294D44: ;
    _fa = (uint32_t)(MEM8(ebp + -33)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -33), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00294D4E; /* jle: less or equal (signed <=) */

loc_00294D4A: ;
    MEM8(ebp + -50) = 1;

loc_00294D4E: ;
    edi = MEM32(ebp + -84);
    ebx = edi;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294D69; /* je: equal / zero */

loc_00294D5C: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + -48));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294D67u); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_00294D67: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00294D69: ;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294D7D; /* je: equal / zero */

loc_00294D6F: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00295076; /* je: equal / zero */

loc_00294D7D: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294D88u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294D88: ;
    MEM32(ebp + -48) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295063; /* je: equal / zero */

loc_00294D94: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x63 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294DDD; /* je: equal / zero */

loc_00294D9A: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x73) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x73 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294DAF; /* jne: not equal / not zero */

loc_00294DA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00294DAA; /* jl: less (signed <) */

loc_00294DA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00294DAF; /* jle: less or equal (signed <=) */

loc_00294DAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294DDD; /* jne: not equal / not zero */

loc_00294DAF: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x7B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00295063; /* jne: not equal / not zero */

loc_00294DB9: ;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    if (((3) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((3) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((3) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = MEM32(ebp + -96);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + esi);
    esi = (uint32_t)(int32_t)SMEM8(ebp + -73);
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00295063; /* je: equal / zero */

loc_00294DDD: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0029505D; /* jne: not equal / not zero */

loc_00294DE7: ;
    _fa = (uint32_t)(MEM8(ebp + -50)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -50), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00295052; /* je: equal / zero */

loc_00294DF1: ;
    MEM8(ebp + -100) = LO8(eax);
    eax = ZX8(LO8(eax));
    ecx = MEM32(0x336CDC);
    _fa = (uint32_t)(MEM8(ecx + eax * 2 + 1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + eax * 2 + 1), 0x80 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00294E12; /* je: equal / zero */

loc_00294E04: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294E0Fu); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294E0F: ;
    MEM8(ebp + -99) = LO8(eax);

loc_00294E12: ;
    PUSH32(esp, MEM32(0x336CE4));
    eax = ebp + -100;
    PUSH32(esp, eax);
    eax = ebp + -108;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294E25u); RECOMP_ABI_CALL(0x0029111Au, sub_0029111A); /* call 0x0029111A */

loc_00294E25: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(eax, MEM16(ebp + -108));
    MEM16(edi) = LO16(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00295055;

loc_00294E36: ;
    eax = ecx;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x70));
    eax = eax - 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002950AF; /* je: equal / zero */

loc_00294E41: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00294D44; /* je: equal / zero */

loc_00294E4A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002950B3; /* je: equal / zero */

loc_00294E52: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00294B3C; /* je: equal / zero */

loc_00294E5B: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00294E89; /* je: equal / zero */

loc_00294E60: ;
    eax = ZX8(MEM8(edi));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -48) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294E71; /* je: equal / zero */

loc_00294E68: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    goto loc_002953AA;

loc_00294E71: ;
    MEM8(ebp + -49) = MEM8(ebp + -49) - 1;
    _fa = (uint32_t)(MEM8(ebp + -49)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0029534A; /* jne: not equal / not zero */

loc_00294E7E: ;
    eax = MEM32(ebp + -124);
    MEM32(ebp + 0x10) = eax;
    goto loc_0029534A;

loc_00294E89: ;
    _fa = (uint32_t)(MEM8(ebp + -33)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -33), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00294E93; /* jle: less or equal (signed <=) */

loc_00294E8F: ;
    MEM8(ebp + -50) = 1;

loc_00294E93: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    esi = edi;
    MEM32(ebp + -120) = esi;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x5E (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294EAB; /* jne: not equal / not zero */

loc_00294EA1: ;
    esi = edi + 1;
    MEM32(ebp + -120) = esi;
    MEM8(ebp + -73) = 0xFF;

loc_00294EAB: ;
    _fa = (uint32_t)(MEM32(ebp + -96)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -96), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00294EF8; /* jne: not equal / not zero */

loc_00294EB1: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x20);
    POP32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294EBDu); RECOMP_ABI_CALL(0x0028A870u, sub_0028A870); /* call 0x0028A870 */

loc_00294EBD: ;
    MEM32(ebp + -24) = esp;
    eax = esp;
    MEM32(ebp + -96) = eax;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00294EF8;

    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    POP32(esp, ecx);
    MEM32(ebp + -96) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00294EEA; /* jne: not equal / not zero */

loc_00294EE1: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002953DA;

loc_00294EEA: ;
    MEM32(ebp + -112) = 1;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = MEM32(ebp + -120);

loc_00294EF8: ;
    PUSH32(esp, 8);
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = MEM32(ebp + -96);
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x7B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294F18; /* jne: not equal / not zero */

loc_00294F0A: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x5D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294F18; /* jne: not equal / not zero */

loc_00294F0F: ;
    SET_LO8(edx, 0x5D);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebx + 0xB) = 0x20;
    goto loc_00294F7F;

loc_00294F18: ;
    SET_LO8(edx, MEM8(ebp + -89));
    goto loc_00294F7F;

loc_00294F1D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294F67; /* jne: not equal / not zero */

loc_00294F22: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294F67; /* je: equal / zero */

loc_00294F26: ;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294F67; /* je: equal / zero */

loc_00294F2D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00294F36; /* jae: above or equal (unsigned >=) */

loc_00294F32: ;
    SET_LO8(eax, LO8(ecx));
    goto loc_00294F3A;

loc_00294F36: ;
    SET_LO8(eax, LO8(edx));
    SET_LO8(edx, LO8(ecx));

loc_00294F3A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00294F63; /* ja: above (unsigned >) */

loc_00294F3E: ;
    edi = ZX8(LO8(edx));
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(LO8(edx)));
    SET_LO8(eax, LO8(eax) - LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -116) = eax;

loc_00294F4B: ;
    eax = edi;
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, 1);
    if (LO8(ecx)) _cf = (int)(((LO8(edx)) >> (8 - (LO8(ecx)))) & 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -116) = MEM32(ebp + -116) - 1;
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00294F4B; /* jne: not equal / not zero */

loc_00294F63: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00294F7F;

loc_00294F67: ;
    SET_LO8(edx, LO8(eax));
    ecx = ZX8(LO8(eax));
    eax = ecx;
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ebx, 1);
    if (LO8(ecx)) _cf = (int)(((LO8(ebx)) >> (8 - (LO8(ecx)))) & 1);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(ebx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ebx = MEM32(ebp + -96);

loc_00294F7F: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294F1D; /* jne: not equal / not zero */

loc_00294F85: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002953DA; /* je: equal / zero */

loc_00294F8D: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x7B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294D4E; /* jne: not equal / not zero */

loc_00294F97: ;
    MEM32(ebp + 0xC) = esi;
    goto loc_00294D4E;

loc_00294F9F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294FC2; /* jne: not equal / not zero */

loc_00294FA4: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00294FB3; /* jne: not equal / not zero */

loc_00294FA9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294FB3; /* je: equal / zero */

loc_00294FAD: ;
    MEM8(ebp + -25) = 1;
    goto loc_00294FC2;

loc_00294FB3: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294FBDu); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294FBD: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;

loc_00294FC2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x30 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002950E4; /* jne: not equal / not zero */

loc_00294FCB: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00294FD5u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294FD5: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x78) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x78 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295024; /* je: equal / zero */

loc_00294FDF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x58) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x58 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295024; /* je: equal / zero */

loc_00294FE4: ;
    MEM32(ebp + -60) = 1;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0029500B; /* je: equal / zero */

loc_00294FF1: ;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294FFF; /* je: equal / zero */

loc_00294FF7: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00294FFF; /* jne: not equal / not zero */

loc_00294FFC: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00294FFF: ;
    MEM32(ebp + -56) = 0x6F;
    goto loc_002950E4;

loc_0029500B: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0029501C; /* je: equal / zero */

loc_00295013: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0029501Au); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_0029501A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0029501C: ;
    PUSH32(esp, 0x30);
    POP32(esp, ebx);
    goto loc_002950E1;

loc_00295024: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0029502Eu); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_0029502E: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00295046; /* je: equal / zero */

loc_00295039: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebp + -40)) < (uint32_t)(2));
    MEM32(ebp + -40) = MEM32(ebp + -40) - 2;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00295046; /* jge: greater or equal (signed >=) */

loc_00295043: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00295046: ;
    MEM32(ebp + -56) = 0x78;
    goto loc_002950E4;

loc_00295052: ;
    MEM8(edi) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00295055: ;
    MEM32(ebp + -84) = edi;
    goto loc_00294D69;

loc_0029505D: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00294D69;

loc_00295063: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295076; /* je: equal / zero */

loc_0029506B: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295074u); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_00295074: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00295076: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002953DA; /* je: equal / zero */

loc_0029507E: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0029534A; /* jne: not equal / not zero */

loc_00295088: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x63 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0029534A; /* je: equal / zero */

loc_00295095: ;
    eax = MEM32(ebp + -84);
    _fa = (uint32_t)(MEM8(ebp + -50)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -50), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002950A7; /* je: equal / zero */

loc_0029509E: ;
    _cf = 0; /* logical op clears CF */
    MEM16(eax) = MEM16(eax) & 0;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    goto loc_0029534A;

loc_002950A7: ;
    MEM8(eax) = 0;
    goto loc_0029534A;

loc_002950AF: ;
    MEM8(ebp + -42) = 1;

loc_002950B3: ;
    ebx = MEM32(ebp + -48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002950C1; /* jne: not equal / not zero */

loc_002950BB: ;
    MEM8(ebp + -51) = 1;
    goto loc_002950C6;

loc_002950C1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002950E4; /* jne: not equal / not zero */

loc_002950C6: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002950D5; /* jne: not equal / not zero */

loc_002950CB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002950D5; /* je: equal / zero */

loc_002950CF: ;
    MEM8(ebp + -25) = 1;
    goto loc_002950E4;

loc_002950D5: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002950DFu); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_002950DF: ;
    ebx = eax;

loc_002950E1: ;
    MEM32(ebp + -48) = ebx;

loc_002950E4: ;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0029521B; /* je: equal / zero */

loc_002950EE: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002951F9; /* jne: not equal / not zero */

loc_002950F8: ;
    edi = 0x80;

loc_002950FD: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295165; /* je: equal / zero */

loc_00295103: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x70 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295165; /* je: equal / zero */

loc_00295109: ;
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0029511E; /* jle: less or equal (signed <=) */

loc_00295112: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0029511Au); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_0029511A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0029512A;

loc_0029511E: ;
    eax = MEM32(0x336CDC);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0029512A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002951A6; /* je: equal / zero */

loc_0029512E: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x6F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0029514E; /* jne: not equal / not zero */

loc_00295134: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x38 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_002951A6; /* jge: greater or equal (signed >=) */

loc_00295139: ;
    eax = MEM32(ebp + -72);
    ecx = MEM32(ebp + -68);
    { uint32_t _c = (uint32_t)(3) & 31u; if (_c && _c < 32u) { ecx = (ecx << _c) | (eax >> (32 - _c)); _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    if (3) _cf = (int)(((eax) >> (32 - (3))) & 1);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    goto loc_002951A9;

loc_0029514E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, MEM32(ebp + -68));
    PUSH32(esp, MEM32(ebp + -72));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0029515Du); RECOMP_ABI_CALL(0x0028A9A0u, sub_0028A9A0); /* call 0x0028A9A0 */

loc_0029515D: ;
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = edx;
    goto loc_002951A9;

loc_00295165: ;
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00295179; /* jle: less or equal (signed <=) */

loc_0029516E: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295175u); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_00295175: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00295184;

loc_00295179: ;
    eax = MEM32(0x336CDC);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00295184: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002951A6; /* je: equal / zero */

loc_00295188: ;
    eax = MEM32(ebp + -72);
    ecx = MEM32(ebp + -68);
    { uint32_t _c = (uint32_t)(4) & 31u; if (_c && _c < 32u) { ecx = (ecx << _c) | (eax >> (32 - _c)); _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002951A2u); RECOMP_ABI_CALL(0x00294845u, sub_00294845); /* call 0x00294845 */

loc_002951A2: ;
    ebx = eax;
    goto loc_002951A9;

loc_002951A6: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_002951A9: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002951DB; /* jne: not equal / not zero */

loc_002951AF: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx + -48;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -72)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -72) = MEM32(ebp + -72) + eax;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(ebp + -68)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + -68) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002951CD; /* je: equal / zero */

loc_002951C2: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002951CD; /* jne: not equal / not zero */

loc_002951C7: ;
    MEM8(ebp + -25) = 1;
    goto loc_002951EC;

loc_002951CD: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002951D7u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_002951D7: ;
    ebx = eax;
    goto loc_002951EC;

loc_002951DB: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002951EC; /* je: equal / zero */

loc_002951E3: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002951EAu); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_002951EA: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002951EC: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002950FD; /* je: equal / zero */

loc_002951F6: ;
    MEM32(ebp + -48) = ebx;

loc_002951F9: ;
    _fa = (uint32_t)(MEM8(ebp + -51)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -51), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00295307; /* je: equal / zero */

loc_00295203: ;
    eax = MEM32(ebp + -72);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = MEM32(ebp + -68);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    goto loc_00295307;

loc_0029521B: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002952FE; /* jne: not equal / not zero */

loc_00295225: ;
    edi = 0x80;

loc_0029522A: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295279; /* je: equal / zero */

loc_00295230: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x70 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295279; /* je: equal / zero */

loc_00295236: ;
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0029524B; /* jle: less or equal (signed <=) */

loc_0029523F: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295247u); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_00295247: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00295257;

loc_0029524B: ;
    eax = MEM32(0x336CDC);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00295257: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002952AB; /* je: equal / zero */

loc_0029525B: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x6F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0029526C; /* jne: not equal / not zero */

loc_00295261: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x38 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_002952AB; /* jge: greater or equal (signed >=) */

loc_00295266: ;
    if (3) _cf = (int)(((MEM32(ebp + -64)) >> (32 - (3))) & 1);
    MEM32(ebp + -64) = MEM32(ebp + -64) << 3;
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_002952AE;

loc_0029526C: ;
    eax = MEM32(ebp + -64);
    eax = eax + eax * 4;
    if (1) _cf = (int)(((eax) >> (32 - (1))) & 1);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -64) = eax;
    goto loc_002952AE;

loc_00295279: ;
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0029528D; /* jle: less or equal (signed <=) */

loc_00295282: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295289u); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_00295289: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00295298;

loc_0029528D: ;
    eax = MEM32(0x336CDC);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00295298: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002952AB; /* je: equal / zero */

loc_0029529C: ;
    if (4) _cf = (int)(((MEM32(ebp + -64)) >> (32 - (4))) & 1);
    MEM32(ebp + -64) = MEM32(ebp + -64) << 4;
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002952A7u); RECOMP_ABI_CALL(0x00294845u, sub_00294845); /* call 0x00294845 */

loc_002952A7: ;
    ebx = eax;
    goto loc_002952AE;

loc_002952AB: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_002952AE: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002952E0; /* jne: not equal / not zero */

loc_002952B4: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -64);
    eax = eax + ebx + -48;
    MEM32(ebp + -64) = eax;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002952D2; /* je: equal / zero */

loc_002952C7: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002952D2; /* jne: not equal / not zero */

loc_002952CC: ;
    MEM8(ebp + -25) = 1;
    goto loc_002952F1;

loc_002952D2: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002952DCu); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_002952DC: ;
    ebx = eax;
    goto loc_002952F1;

loc_002952E0: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002952F1; /* je: equal / zero */

loc_002952E8: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002952EFu); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_002952EF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002952F1: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0029522A; /* je: equal / zero */

loc_002952FB: ;
    MEM32(ebp + -48) = ebx;

loc_002952FE: ;
    _fa = (uint32_t)(MEM8(ebp + -51)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -51), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00295307; /* je: equal / zero */

loc_00295304: ;
    _cf = (int)((MEM32(ebp + -64)) != 0);
    MEM32(ebp + -64) = (uint32_t)(-(int32_t)MEM32(ebp + -64));
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00295307: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x46 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00295311; /* jne: not equal / not zero */

loc_0029530D: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -60) = MEM32(ebp + -60) & 0;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00295311: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002953DA; /* je: equal / zero */

loc_0029531B: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0029534A; /* jne: not equal / not zero */

loc_00295321: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = MEM32(ebp + -84);
    eax = MEM32(ebp + -64);

loc_0029532A: ;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0029533D; /* je: equal / zero */

loc_00295330: ;
    eax = MEM32(ebp + -72);
    MEM32(ebx) = eax;
    eax = MEM32(ebp + -68);
    MEM32(ebx + 4) = eax;
    goto loc_0029534A;

loc_0029533D: ;
    _fa = (uint32_t)(MEM8(ebp + -42)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -42), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00295347; /* je: equal / zero */

loc_00295343: ;
    MEM32(ebx) = eax;
    goto loc_0029534A;

loc_00295347: ;
    MEM16(ebx) = LO16(eax);

loc_0029534A: ;
    MEM8(ebp + -49) = MEM8(ebp + -49) + 1;
    _fa = (uint32_t)(MEM8(ebp + -49)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(ebp + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    goto loc_002953BE;

loc_00295356: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295361u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00295361: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    eax = ZX8(MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002953A7; /* jne: not equal / not zero */

loc_00295371: ;
    eax = ZX8(LO8(ebx));
    ecx = MEM32(0x336CDC);
    _fa = (uint32_t)(MEM8(ecx + eax * 2 + 1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + eax * 2 + 1), 0x80 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_002953BE; /* je: equal / zero */

loc_00295381: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0029538Cu); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_0029538C: ;
    ecx = ZX8(MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002953BB; /* je: equal / zero */

loc_00295397: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002953A7; /* je: equal / zero */

loc_0029539C: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002953A5u); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_002953A5: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002953A7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);

loc_002953AA: ;
    if (CMP_EQ(_fa, _fb)) goto loc_002953DA; /* je: equal / zero */

loc_002953AC: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + -48));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002953B7u); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_002953B7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_002953DA;

loc_002953BB: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002953BE: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002948B6; /* jne: not equal / not zero */

loc_002953C8: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x25) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x25 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002953DA; /* jne: not equal / not zero */

loc_002953CD: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x6E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0x6E (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002948B3; /* je: equal / zero */

loc_002953DA: ;
    _fa = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -112), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002953E9; /* jne: not equal / not zero */

loc_002953E0: ;
    PUSH32(esp, MEM32(ebp + -96));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002953E8u); RECOMP_ABI_CALL(0x0028BAA8u, sub_0028BAA8); /* call 0x0028BAA8 */

loc_002953E8: ;
    POP32(esp, ecx);

loc_002953E9: ;
    eax = MEM32(ebp + -88);
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002953FE; /* jne: not equal / not zero */

loc_002953F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002953FE; /* jne: not equal / not zero */

loc_002953F6: ;
    _fa = (uint32_t)(MEM8(ebp + -49)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -49), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002953FE; /* jne: not equal / not zero */

loc_002953FB: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002953FE: ;
    esp = ebp + -488;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295409u); RECOMP_ABI_CALL(0x0028A593u, sub_0028A593); /* call 0x0028A593 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00295409: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029494D
 * Original: 0x0029494D - 0x0029540A (2749 bytes, 921 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029494D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029494D: ;
    MEM8(ebp + -51) = 0;
    MEM8(ebp + -41) = 0;
    MEM8(ebp + -25) = 0;
    MEM8(ebp + -50) = 0;
    MEM8(ebp + -33) = 0;
    MEM8(ebp + -42) = 1;
    MEM32(ebp + -104) = esi;

loc_00294968: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = ZX8(MEM8(edi));
    eax = ZX8(LO8(ebx));
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00294984; /* jle: less or equal (signed <=) */

loc_00294978: ;
    PUSH32(esp, 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00294980u); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_00294980: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00294991;

loc_00294984: ;
    ecx = MEM32(0x336CDC);
    eax = ZX8(MEM8(ecx + eax * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00294991: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002949A4; /* je: equal / zero */

loc_00294995: ;
    MEM32(ebp + -80) = MEM32(ebp + -80) + 1;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = esi + esi * 4;
    esi = ebx + eax * 2 + -48;
    goto loc_00294A3E;

loc_002949A4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x4E (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00294A1C; /* jg: greater (signed >) */

loc_002949A9: ;
    if (CMP_EQ(_fa, _fb)) goto loc_00294A3E; /* je: equal / zero */

loc_002949AF: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2A (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294A17; /* je: equal / zero */

loc_002949B4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x46 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294A3E; /* je: equal / zero */

loc_002949BD: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x49) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x49 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002949CC; /* je: equal / zero */

loc_002949C2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x4C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294A2B; /* jne: not equal / not zero */

loc_002949C7: ;
    MEM8(ebp + -42) = MEM8(ebp + -42) + 1;
    _fa = (uint32_t)(MEM8(ebp + -42)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    goto loc_00294A3E;

loc_002949CC: ;
    SET_LO8(ecx, MEM8(edi + 1));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x36) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x36 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002949EB; /* jne: not equal / not zero */

loc_002949D4: ;
    eax = edi + 2;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x34) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x34 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002949EB; /* jne: not equal / not zero */

loc_002949DC: ;
    edi = eax;
    MEM32(ebp + -104) = MEM32(ebp + -104) + 1;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -72) = MEM32(ebp + -72) & 0;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -68) = MEM32(ebp + -68) & 0;
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00294A3E;

loc_002949EB: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x33) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x33 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002949FC; /* jne: not equal / not zero */

loc_002949F0: ;
    eax = edi + 2;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x32) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x32 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002949FC; /* jne: not equal / not zero */

loc_002949F8: ;
    edi = eax;
    goto loc_00294A3E;

loc_002949FC: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x64) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x64 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294A3E; /* je: equal / zero */

loc_00294A01: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x69) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x69 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294A3E; /* je: equal / zero */

loc_00294A06: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x6F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x6F (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294A3E; /* je: equal / zero */

loc_00294A0B: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x78) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x78 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294A3E; /* je: equal / zero */

loc_00294A10: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x58) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x58 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294A2B; /* jne: not equal / not zero */

loc_00294A15: ;
    goto loc_00294A3E;

loc_00294A17: ;
    MEM8(ebp + -41) = MEM8(ebp + -41) + 1;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    goto loc_00294A3E;

loc_00294A1C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x68) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x68 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294A38; /* je: equal / zero */

loc_00294A21: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x6C (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294A30; /* je: equal / zero */

loc_00294A26: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x77) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x77 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294A33; /* je: equal / zero */

loc_00294A2B: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    goto loc_00294A3E;

loc_00294A30: ;
    MEM8(ebp + -42) = MEM8(ebp + -42) + 1;
    _fa = (uint32_t)(MEM8(ebp + -42)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00294A33: ;
    MEM8(ebp + -33) = MEM8(ebp + -33) + 1;
    _fa = (uint32_t)(MEM8(ebp + -33)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    goto loc_00294A3E;

loc_00294A38: ;
    MEM8(ebp + -42) = MEM8(ebp + -42) - 1;
    _fa = (uint32_t)(MEM8(ebp + -42)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    MEM8(ebp + -33) = MEM8(ebp + -33) - 1;
    _fa = (uint32_t)(MEM8(ebp + -33)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */

loc_00294A3E: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294968; /* je: equal / zero */

loc_00294A48: ;
    MEM32(ebp + -40) = esi;
    MEM32(ebp + 0xC) = edi;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00294A68; /* jne: not equal / not zero */

loc_00294A54: ;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -124) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = eax;
    ebx = MEM32(eax + -4);
    MEM32(ebp + -84) = ebx;
    goto loc_00294A6B;

loc_00294A68: ;
    ebx = MEM32(ebp + -84);

loc_00294A6B: ;
    MEM8(ebp + -25) = 0;
    _fa = (uint32_t)(MEM8(ebp + -33)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -33), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00294A87; /* jne: not equal / not zero */

loc_00294A75: ;
    SET_LO8(eax, MEM8(edi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x53) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x53 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294A83; /* je: equal / zero */

loc_00294A7B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x43) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x43 (8-bit) */
    _cf = (int)(_fa < _fb);
    MEM8(ebp + -33) = 0xFF;
    if (CMP_NE(_fa, _fb)) goto loc_00294A87; /* jne: not equal / not zero */

loc_00294A83: ;
    MEM8(ebp + -33) = 1;

loc_00294A87: ;
    eax = ZX8(MEM8(edi));
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -56) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6E (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294AC2; /* je: equal / zero */

loc_00294A95: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x63 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294B27; /* je: equal / zero */

loc_00294A9E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x7B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294B27; /* je: equal / zero */

loc_00294AA7: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0x00294AB2u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294AB2: ;
    esi = eax;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00294ABAu); RECOMP_ABI_CALL(0x0028BB57u, sub_0028BB57); /* call 0x0028BB57 */

loc_00294ABA: ;
    POP32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00294AA7; /* jne: not equal / not zero */

loc_00294ABF: ;
    MEM32(ebp + -48) = esi;

loc_00294AC2: ;
    esi = MEM32(ebp + 8);

loc_00294AC5: ;
    edx = MEM32(ebp + -80);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294AD6; /* je: equal / zero */

loc_00294ACC: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294E68; /* je: equal / zero */

loc_00294AD6: ;
    ecx = MEM32(ebp + -56);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_G(_fas, _fbs)) goto loc_00294E36; /* jg: greater (signed >) */

loc_00294AE2: ;
    if (CMP_EQ(_fa, _fb)) goto loc_002950B3; /* je: equal / zero */

loc_00294AE8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x63 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294D36; /* je: equal / zero */

loc_00294AF1: ;
    PUSH32(esp, 0x64);
    POP32(esp, eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002950B3; /* je: equal / zero */

loc_00294AFC: ;
    if (CMP_LE(_fas, _fbs)) goto loc_00294E60; /* jle: less or equal (signed <=) */

loc_00294B02: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x67) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x67 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00294B51; /* jle: less or equal (signed <=) */

loc_00294B07: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x69) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x69 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294B39; /* je: equal / zero */

loc_00294B0C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x6E (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294E60; /* jne: not equal / not zero */

loc_00294B15: ;
    eax = MEM32(ebp + -32);
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0029532A; /* je: equal / zero */

loc_00294B22: ;
    goto loc_0029534A;

loc_00294B27: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi = MEM32(ebp + 8);
    edx = esi;
    PUSH32(esp, 0x00294B34u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294B34: ;
    MEM32(ebp + -48) = eax;
    goto loc_00294AC5;

loc_00294B39: ;
    MEM32(ebp + -56) = eax;

loc_00294B3C: ;
    ebx = MEM32(ebp + -48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294F9F; /* jne: not equal / not zero */

loc_00294B48: ;
    MEM8(ebp + -51) = 1;
    goto loc_00294FA4;

loc_00294B51: ;
    esi = ebp + -476;
    ebx = MEM32(ebp + -48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294B6D; /* jne: not equal / not zero */

loc_00294B5F: ;
    MEM8(ebp + -476) = LO8(ebx);
    esi = ebp + -475;
    goto loc_00294B72;

loc_00294B6D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294B89; /* jne: not equal / not zero */

loc_00294B72: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(ebp + 8);
    edx = edi;
    PUSH32(esp, 0x00294B82u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294B82: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    goto loc_00294B8C;

loc_00294B89: ;
    edi = MEM32(ebp + 8);

loc_00294B8C: ;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294B9B; /* je: equal / zero */

loc_00294B92: ;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 0x15D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00294BA2; /* jle: less or equal (signed <=) */

loc_00294B9B: ;
    MEM32(ebp + -40) = 0x15D;

loc_00294BA2: ;
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00294BB7; /* jle: less or equal (signed <=) */

loc_00294BAB: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00294BB3u); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_00294BB3: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00294BC3;

loc_00294BB7: ;
    eax = MEM32(0x336CDC);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00294BC3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294BE8; /* je: equal / zero */

loc_00294BC7: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294BE8; /* je: equal / zero */

loc_00294BD1: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = LO8(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edi;
    PUSH32(esp, 0x00294BE1u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294BE1: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    goto loc_00294BA2;

loc_00294BE8: ;
    _fa = (uint32_t)(MEM8(0x336CE8)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x336CE8), LO8(ebx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294C54; /* jne: not equal / not zero */

loc_00294BF0: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294C54; /* je: equal / zero */

loc_00294BFA: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edi;
    PUSH32(esp, 0x00294C04u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294C04: ;
    ebx = eax;
    SET_LO8(eax, MEM8(0x336CE8));
    MEM8(esi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00294C0E: ;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00294C26; /* jle: less or equal (signed <=) */

loc_00294C1A: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00294C22u); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_00294C22: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00294C32;

loc_00294C26: ;
    eax = MEM32(0x336CDC);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00294C32: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294C54; /* je: equal / zero */

loc_00294C36: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294C54; /* je: equal / zero */

loc_00294C40: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = LO8(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edi;
    PUSH32(esp, 0x00294C50u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294C50: ;
    ebx = eax;
    goto loc_00294C0E;

loc_00294C54: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294CED; /* je: equal / zero */

loc_00294C5E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x65) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x65 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294C6C; /* je: equal / zero */

loc_00294C63: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x45) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x45 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294CED; /* jne: not equal / not zero */

loc_00294C6C: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294CED; /* je: equal / zero */

loc_00294C76: ;
    MEM8(esi) = 0x65;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = edi;
    PUSH32(esp, 0x00294C84u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294C84: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294C93; /* jne: not equal / not zero */

loc_00294C8E: ;
    MEM8(esi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00294C98;

loc_00294C93: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294CB6; /* jne: not equal / not zero */

loc_00294C98: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00294CA7; /* jne: not equal / not zero */

loc_00294CA2: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -40) = MEM32(ebp + -40) & eax;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00294CB6;

loc_00294CA7: ;
    edx = edi;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x00294CB1u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294CB1: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;

loc_00294CB6: ;
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00294CCB; /* jle: less or equal (signed <=) */

loc_00294CBF: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00294CC7u); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_00294CC7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00294CD7;

loc_00294CCB: ;
    eax = MEM32(0x336CDC);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00294CD7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294CED; /* je: equal / zero */

loc_00294CDB: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294CED; /* je: equal / zero */

loc_00294CE5: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = LO8(ebx);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00294CA7;

loc_00294CED: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294CFE; /* je: equal / zero */

loc_00294CF5: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00294CFCu); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_00294CFC: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00294CFE: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002953DA; /* je: equal / zero */

loc_00294D08: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0029534A; /* jne: not equal / not zero */

loc_00294D12: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(esi) = 0;
    eax = ebp + -476;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -84));
    eax = (uint32_t)(int32_t)SMEM8(ebp + -42);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x3367F8); PUSH32(esp, 0x00294D2Eu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x00294D28u); } /* indirect call */
    }

loc_00294D2E: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0029534A;

loc_00294D36: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00294D44; /* jne: not equal / not zero */

loc_00294D3A: ;
    MEM32(ebp + -80) = 1;
    MEM32(ebp + -40) = MEM32(ebp + -40) + 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00294D44: ;
    _fa = (uint32_t)(MEM8(ebp + -33)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -33), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00294D4E; /* jle: less or equal (signed <=) */

loc_00294D4A: ;
    MEM8(ebp + -50) = 1;

loc_00294D4E: ;
    edi = MEM32(ebp + -84);
    ebx = edi;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294D69; /* je: equal / zero */

loc_00294D5C: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + -48));
    PUSH32(esp, 0x00294D67u); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_00294D67: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00294D69: ;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294D7D; /* je: equal / zero */

loc_00294D6F: ;
    eax = MEM32(ebp + -40);
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00295076; /* je: equal / zero */

loc_00294D7D: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0x00294D88u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294D88: ;
    MEM32(ebp + -48) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295063; /* je: equal / zero */

loc_00294D94: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x63 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294DDD; /* je: equal / zero */

loc_00294D9A: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x73) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x73 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294DAF; /* jne: not equal / not zero */

loc_00294DA0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 9 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00294DAA; /* jl: less (signed <) */

loc_00294DA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xD) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xD (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00294DAF; /* jle: less or equal (signed <=) */

loc_00294DAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294DDD; /* jne: not equal / not zero */

loc_00294DAF: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x7B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00295063; /* jne: not equal / not zero */

loc_00294DB9: ;
    ecx = eax;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (LO8(ecx)) _cf = (int)(((edx) >> (32 - (LO8(ecx)))) & 1);
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    if (((3) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(ecx)) >> ((((3) & 31u)) - 1)) & 1);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((3) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = MEM32(ebp + -96);
    ecx = (uint32_t)(int32_t)SMEM8(ecx + esi);
    esi = (uint32_t)(int32_t)SMEM8(ebp + -73);
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edx (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00295063; /* je: equal / zero */

loc_00294DDD: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0029505D; /* jne: not equal / not zero */

loc_00294DE7: ;
    _fa = (uint32_t)(MEM8(ebp + -50)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -50), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00295052; /* je: equal / zero */

loc_00294DF1: ;
    MEM8(ebp + -100) = LO8(eax);
    eax = ZX8(LO8(eax));
    ecx = MEM32(0x336CDC);
    _fa = (uint32_t)(MEM8(ecx + eax * 2 + 1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + eax * 2 + 1), 0x80 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00294E12; /* je: equal / zero */

loc_00294E04: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0x00294E0Fu); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294E0F: ;
    MEM8(ebp + -99) = LO8(eax);

loc_00294E12: ;
    PUSH32(esp, MEM32(0x336CE4));
    eax = ebp + -100;
    PUSH32(esp, eax);
    eax = ebp + -108;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00294E25u); RECOMP_ABI_CALL(0x0029111Au, sub_0029111A); /* call 0x0029111A */

loc_00294E25: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(eax, MEM16(ebp + -108));
    MEM16(edi) = LO16(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00295055;

loc_00294E36: ;
    eax = ecx;
    _fb = (uint32_t)(0x70) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0x70));
    eax = eax - 0x70;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_002950AF; /* je: equal / zero */

loc_00294E41: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00294D44; /* je: equal / zero */

loc_00294E4A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002950B3; /* je: equal / zero */

loc_00294E52: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00294B3C; /* je: equal / zero */

loc_00294E5B: ;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(3));
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00294E89; /* je: equal / zero */

loc_00294E60: ;
    eax = ZX8(MEM8(edi));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -48) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294E71; /* je: equal / zero */

loc_00294E68: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    goto loc_002953AA;

loc_00294E71: ;
    MEM8(ebp + -49) = MEM8(ebp + -49) - 1;
    _fa = (uint32_t)(MEM8(ebp + -49)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0029534A; /* jne: not equal / not zero */

loc_00294E7E: ;
    eax = MEM32(ebp + -124);
    MEM32(ebp + 0x10) = eax;
    goto loc_0029534A;

loc_00294E89: ;
    _fa = (uint32_t)(MEM8(ebp + -33)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -33), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_LE(_fas, _fbs)) goto loc_00294E93; /* jle: less or equal (signed <=) */

loc_00294E8F: ;
    MEM8(ebp + -50) = 1;

loc_00294E93: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    esi = edi;
    MEM32(ebp + -120) = esi;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x5E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x5E (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294EAB; /* jne: not equal / not zero */

loc_00294EA1: ;
    esi = edi + 1;
    MEM32(ebp + -120) = esi;
    MEM8(ebp + -73) = 0xFF;

loc_00294EAB: ;
    _fa = (uint32_t)(MEM32(ebp + -96)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -96), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00294EF8; /* jne: not equal / not zero */

loc_00294EB1: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x20);
    POP32(esp, eax);
    PUSH32(esp, 0x00294EBDu); RECOMP_ABI_CALL(0x0028A870u, sub_0028A870); /* call 0x0028A870 */

loc_00294EBD: ;
    MEM32(ebp + -24) = esp;
    eax = esp;
    MEM32(ebp + -96) = eax;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00294EF8;

    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    POP32(esp, ecx);
    MEM32(ebp + -96) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00294EEA; /* jne: not equal / not zero */

loc_00294EE1: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002953DA;

loc_00294EEA: ;
    MEM32(ebp + -112) = 1;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = MEM32(ebp + -120);

loc_00294EF8: ;
    PUSH32(esp, 8);
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = MEM32(ebp + -96);
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x7B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294F18; /* jne: not equal / not zero */

loc_00294F0A: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x5D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294F18; /* jne: not equal / not zero */

loc_00294F0F: ;
    SET_LO8(edx, 0x5D);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebx + 0xB) = 0x20;
    goto loc_00294F7F;

loc_00294F18: ;
    SET_LO8(edx, MEM8(ebp + -89));
    goto loc_00294F7F;

loc_00294F1D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294F67; /* jne: not equal / not zero */

loc_00294F22: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294F67; /* je: equal / zero */

loc_00294F26: ;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294F67; /* je: equal / zero */

loc_00294F2D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00294F36; /* jae: above or equal (unsigned >=) */

loc_00294F32: ;
    SET_LO8(eax, LO8(ecx));
    goto loc_00294F3A;

loc_00294F36: ;
    SET_LO8(eax, LO8(edx));
    SET_LO8(edx, LO8(ecx));

loc_00294F3A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00294F63; /* ja: above (unsigned >) */

loc_00294F3E: ;
    edi = ZX8(LO8(edx));
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(LO8(edx)));
    SET_LO8(eax, LO8(eax) - LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -116) = eax;

loc_00294F4B: ;
    eax = edi;
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, 1);
    if (LO8(ecx)) _cf = (int)(((LO8(edx)) >> (8 - (LO8(ecx)))) & 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -116) = MEM32(ebp + -116) - 1;
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00294F4B; /* jne: not equal / not zero */

loc_00294F63: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00294F7F;

loc_00294F67: ;
    SET_LO8(edx, LO8(eax));
    ecx = ZX8(LO8(eax));
    eax = ecx;
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ebx, 1);
    if (LO8(ecx)) _cf = (int)(((LO8(ebx)) >> (8 - (LO8(ecx)))) & 1);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(ebx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ebx = MEM32(ebp + -96);

loc_00294F7F: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294F1D; /* jne: not equal / not zero */

loc_00294F85: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002953DA; /* je: equal / zero */

loc_00294F8D: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x7B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294D4E; /* jne: not equal / not zero */

loc_00294F97: ;
    MEM32(ebp + 0xC) = esi;
    goto loc_00294D4E;

loc_00294F9F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294FC2; /* jne: not equal / not zero */

loc_00294FA4: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00294FB3; /* jne: not equal / not zero */

loc_00294FA9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294FB3; /* je: equal / zero */

loc_00294FAD: ;
    MEM8(ebp + -25) = 1;
    goto loc_00294FC2;

loc_00294FB3: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x00294FBDu); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294FBD: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;

loc_00294FC2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x30 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002950E4; /* jne: not equal / not zero */

loc_00294FCB: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x00294FD5u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294FD5: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x78) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x78 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295024; /* je: equal / zero */

loc_00294FDF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x58) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x58 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295024; /* je: equal / zero */

loc_00294FE4: ;
    MEM32(ebp + -60) = 1;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0029500B; /* je: equal / zero */

loc_00294FF1: ;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294FFF; /* je: equal / zero */

loc_00294FF7: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00294FFF; /* jne: not equal / not zero */

loc_00294FFC: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00294FFF: ;
    MEM32(ebp + -56) = 0x6F;
    goto loc_002950E4;

loc_0029500B: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0029501C; /* je: equal / zero */

loc_00295013: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0029501Au); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_0029501A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0029501C: ;
    PUSH32(esp, 0x30);
    POP32(esp, ebx);
    goto loc_002950E1;

loc_00295024: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x0029502Eu); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_0029502E: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00295046; /* je: equal / zero */

loc_00295039: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebp + -40)) < (uint32_t)(2));
    MEM32(ebp + -40) = MEM32(ebp + -40) - 2;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00295046; /* jge: greater or equal (signed >=) */

loc_00295043: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00295046: ;
    MEM32(ebp + -56) = 0x78;
    goto loc_002950E4;

loc_00295052: ;
    MEM8(edi) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00295055: ;
    MEM32(ebp + -84) = edi;
    goto loc_00294D69;

loc_0029505D: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00294D69;

loc_00295063: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295076; /* je: equal / zero */

loc_0029506B: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00295074u); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_00295074: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00295076: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002953DA; /* je: equal / zero */

loc_0029507E: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0029534A; /* jne: not equal / not zero */

loc_00295088: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x63 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0029534A; /* je: equal / zero */

loc_00295095: ;
    eax = MEM32(ebp + -84);
    _fa = (uint32_t)(MEM8(ebp + -50)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -50), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002950A7; /* je: equal / zero */

loc_0029509E: ;
    _cf = 0; /* logical op clears CF */
    MEM16(eax) = MEM16(eax) & 0;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    goto loc_0029534A;

loc_002950A7: ;
    MEM8(eax) = 0;
    goto loc_0029534A;

loc_002950AF: ;
    MEM8(ebp + -42) = 1;

loc_002950B3: ;
    ebx = MEM32(ebp + -48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002950C1; /* jne: not equal / not zero */

loc_002950BB: ;
    MEM8(ebp + -51) = 1;
    goto loc_002950C6;

loc_002950C1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002950E4; /* jne: not equal / not zero */

loc_002950C6: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002950D5; /* jne: not equal / not zero */

loc_002950CB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002950D5; /* je: equal / zero */

loc_002950CF: ;
    MEM8(ebp + -25) = 1;
    goto loc_002950E4;

loc_002950D5: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x002950DFu); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_002950DF: ;
    ebx = eax;

loc_002950E1: ;
    MEM32(ebp + -48) = ebx;

loc_002950E4: ;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0029521B; /* je: equal / zero */

loc_002950EE: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002951F9; /* jne: not equal / not zero */

loc_002950F8: ;
    edi = 0x80;

loc_002950FD: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295165; /* je: equal / zero */

loc_00295103: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x70 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295165; /* je: equal / zero */

loc_00295109: ;
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0029511E; /* jle: less or equal (signed <=) */

loc_00295112: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0029511Au); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_0029511A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0029512A;

loc_0029511E: ;
    eax = MEM32(0x336CDC);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0029512A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002951A6; /* je: equal / zero */

loc_0029512E: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x6F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0029514E; /* jne: not equal / not zero */

loc_00295134: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x38 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_002951A6; /* jge: greater or equal (signed >=) */

loc_00295139: ;
    eax = MEM32(ebp + -72);
    ecx = MEM32(ebp + -68);
    { uint32_t _c = (uint32_t)(3) & 31u; if (_c && _c < 32u) { ecx = (ecx << _c) | (eax >> (32 - _c)); _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    if (3) _cf = (int)(((eax) >> (32 - (3))) & 1);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    goto loc_002951A9;

loc_0029514E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, MEM32(ebp + -68));
    PUSH32(esp, MEM32(ebp + -72));
    PUSH32(esp, 0x0029515Du); RECOMP_ABI_CALL(0x0028A9A0u, sub_0028A9A0); /* call 0x0028A9A0 */

loc_0029515D: ;
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = edx;
    goto loc_002951A9;

loc_00295165: ;
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00295179; /* jle: less or equal (signed <=) */

loc_0029516E: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00295175u); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_00295175: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00295184;

loc_00295179: ;
    eax = MEM32(0x336CDC);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00295184: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002951A6; /* je: equal / zero */

loc_00295188: ;
    eax = MEM32(ebp + -72);
    ecx = MEM32(ebp + -68);
    { uint32_t _c = (uint32_t)(4) & 31u; if (_c && _c < 32u) { ecx = (ecx << _c) | (eax >> (32 - _c)); _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    eax = ebx;
    PUSH32(esp, 0x002951A2u); RECOMP_ABI_CALL(0x00294845u, sub_00294845); /* call 0x00294845 */

loc_002951A2: ;
    ebx = eax;
    goto loc_002951A9;

loc_002951A6: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_002951A9: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002951DB; /* jne: not equal / not zero */

loc_002951AF: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx + -48;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -72)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -72) = MEM32(ebp + -72) + eax;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(ebp + -68)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + -68) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002951CD; /* je: equal / zero */

loc_002951C2: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002951CD; /* jne: not equal / not zero */

loc_002951C7: ;
    MEM8(ebp + -25) = 1;
    goto loc_002951EC;

loc_002951CD: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x002951D7u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_002951D7: ;
    ebx = eax;
    goto loc_002951EC;

loc_002951DB: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002951EC; /* je: equal / zero */

loc_002951E3: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002951EAu); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_002951EA: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002951EC: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002950FD; /* je: equal / zero */

loc_002951F6: ;
    MEM32(ebp + -48) = ebx;

loc_002951F9: ;
    _fa = (uint32_t)(MEM8(ebp + -51)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -51), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00295307; /* je: equal / zero */

loc_00295203: ;
    eax = MEM32(ebp + -72);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = MEM32(ebp + -68);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    goto loc_00295307;

loc_0029521B: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002952FE; /* jne: not equal / not zero */

loc_00295225: ;
    edi = 0x80;

loc_0029522A: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295279; /* je: equal / zero */

loc_00295230: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x70 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295279; /* je: equal / zero */

loc_00295236: ;
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0029524B; /* jle: less or equal (signed <=) */

loc_0029523F: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00295247u); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_00295247: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00295257;

loc_0029524B: ;
    eax = MEM32(0x336CDC);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00295257: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002952AB; /* je: equal / zero */

loc_0029525B: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x6F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0029526C; /* jne: not equal / not zero */

loc_00295261: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x38 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_002952AB; /* jge: greater or equal (signed >=) */

loc_00295266: ;
    if (3) _cf = (int)(((MEM32(ebp + -64)) >> (32 - (3))) & 1);
    MEM32(ebp + -64) = MEM32(ebp + -64) << 3;
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_002952AE;

loc_0029526C: ;
    eax = MEM32(ebp + -64);
    eax = eax + eax * 4;
    if (1) _cf = (int)(((eax) >> (32 - (1))) & 1);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -64) = eax;
    goto loc_002952AE;

loc_00295279: ;
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0029528D; /* jle: less or equal (signed <=) */

loc_00295282: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00295289u); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_00295289: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00295298;

loc_0029528D: ;
    eax = MEM32(0x336CDC);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00295298: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002952AB; /* je: equal / zero */

loc_0029529C: ;
    if (4) _cf = (int)(((MEM32(ebp + -64)) >> (32 - (4))) & 1);
    MEM32(ebp + -64) = MEM32(ebp + -64) << 4;
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx;
    PUSH32(esp, 0x002952A7u); RECOMP_ABI_CALL(0x00294845u, sub_00294845); /* call 0x00294845 */

loc_002952A7: ;
    ebx = eax;
    goto loc_002952AE;

loc_002952AB: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_002952AE: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002952E0; /* jne: not equal / not zero */

loc_002952B4: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -64);
    eax = eax + ebx + -48;
    MEM32(ebp + -64) = eax;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002952D2; /* je: equal / zero */

loc_002952C7: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002952D2; /* jne: not equal / not zero */

loc_002952CC: ;
    MEM8(ebp + -25) = 1;
    goto loc_002952F1;

loc_002952D2: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x002952DCu); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_002952DC: ;
    ebx = eax;
    goto loc_002952F1;

loc_002952E0: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002952F1; /* je: equal / zero */

loc_002952E8: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002952EFu); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_002952EF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002952F1: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0029522A; /* je: equal / zero */

loc_002952FB: ;
    MEM32(ebp + -48) = ebx;

loc_002952FE: ;
    _fa = (uint32_t)(MEM8(ebp + -51)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -51), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00295307; /* je: equal / zero */

loc_00295304: ;
    _cf = (int)((MEM32(ebp + -64)) != 0);
    MEM32(ebp + -64) = (uint32_t)(-(int32_t)MEM32(ebp + -64));
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00295307: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x46 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00295311; /* jne: not equal / not zero */

loc_0029530D: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -60) = MEM32(ebp + -60) & 0;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00295311: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002953DA; /* je: equal / zero */

loc_0029531B: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0029534A; /* jne: not equal / not zero */

loc_00295321: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = MEM32(ebp + -84);
    eax = MEM32(ebp + -64);

loc_0029532A: ;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0029533D; /* je: equal / zero */

loc_00295330: ;
    eax = MEM32(ebp + -72);
    MEM32(ebx) = eax;
    eax = MEM32(ebp + -68);
    MEM32(ebx + 4) = eax;
    goto loc_0029534A;

loc_0029533D: ;
    _fa = (uint32_t)(MEM8(ebp + -42)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -42), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00295347; /* je: equal / zero */

loc_00295343: ;
    MEM32(ebx) = eax;
    goto loc_0029534A;

loc_00295347: ;
    MEM16(ebx) = LO16(eax);

loc_0029534A: ;
    MEM8(ebp + -49) = MEM8(ebp + -49) + 1;
    _fa = (uint32_t)(MEM8(ebp + -49)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(ebp + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    goto loc_002953BE;

    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0x00295361u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00295361: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    eax = ZX8(MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002953A7; /* jne: not equal / not zero */

loc_00295371: ;
    eax = ZX8(LO8(ebx));
    ecx = MEM32(0x336CDC);
    _fa = (uint32_t)(MEM8(ecx + eax * 2 + 1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + eax * 2 + 1), 0x80 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_002953BE; /* je: equal / zero */

loc_00295381: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0x0029538Cu); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_0029538C: ;
    ecx = ZX8(MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002953BB; /* je: equal / zero */

loc_00295397: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002953A7; /* je: equal / zero */

loc_0029539C: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0x002953A5u); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_002953A5: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002953A7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);

loc_002953AA: ;
    if (CMP_EQ(_fa, _fb)) goto loc_002953DA; /* je: equal / zero */

loc_002953AC: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + -48));
    PUSH32(esp, 0x002953B7u); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_002953B7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_002953DA;

loc_002953BB: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002953BE: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002948B6(); return; } /* jne: not equal / not zero */

loc_002953C8: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x25) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x25 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002953DA; /* jne: not equal / not zero */

loc_002953CD: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x6E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0x6E (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002948B3(); return; } /* je: equal / zero */

loc_002953DA: ;
    _fa = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -112), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002953E9; /* jne: not equal / not zero */

loc_002953E0: ;
    PUSH32(esp, MEM32(ebp + -96));
    PUSH32(esp, 0x002953E8u); RECOMP_ABI_CALL(0x0028BAA8u, sub_0028BAA8); /* call 0x0028BAA8 */

loc_002953E8: ;
    POP32(esp, ecx);

loc_002953E9: ;
    eax = MEM32(ebp + -88);
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002953FE; /* jne: not equal / not zero */

loc_002953F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002953FE; /* jne: not equal / not zero */

loc_002953F6: ;
    _fa = (uint32_t)(MEM8(ebp + -49)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -49), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002953FE; /* jne: not equal / not zero */

loc_002953FB: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002953FE: ;
    esp = ebp + -488;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x00295409u); RECOMP_ABI_CALL(0x0028A593u, sub_0028A593); /* call 0x0028A593 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00295409: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00294ECB
 * Original: 0x00294ECB - 0x0029540A (1343 bytes, 463 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294ECB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00294ECB: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    POP32(esp, ecx);
    MEM32(ebp + -96) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00294EEA; /* jne: not equal / not zero */

loc_00294EE1: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002953DA;

loc_00294EEA: ;
    MEM32(ebp + -112) = 1;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = MEM32(ebp + -120);
    PUSH32(esp, 8);
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = MEM32(ebp + -96);
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x7B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294F18; /* jne: not equal / not zero */

loc_00294F0A: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x5D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294F18; /* jne: not equal / not zero */

loc_00294F0F: ;
    SET_LO8(edx, 0x5D);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebx + 0xB) = 0x20;
    goto loc_00294F7F;

loc_00294F18: ;
    SET_LO8(edx, MEM8(ebp + -89));
    goto loc_00294F7F;

loc_00294F1D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294F67; /* jne: not equal / not zero */

loc_00294F22: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294F67; /* je: equal / zero */

loc_00294F26: ;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294F67; /* je: equal / zero */

loc_00294F2D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00294F36; /* jae: above or equal (unsigned >=) */

loc_00294F32: ;
    SET_LO8(eax, LO8(ecx));
    goto loc_00294F3A;

loc_00294F36: ;
    SET_LO8(eax, LO8(edx));
    SET_LO8(edx, LO8(ecx));

loc_00294F3A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00294F63; /* ja: above (unsigned >) */

loc_00294F3E: ;
    edi = ZX8(LO8(edx));
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(LO8(edx)));
    SET_LO8(eax, LO8(eax) - LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -116) = eax;

loc_00294F4B: ;
    eax = edi;
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, 1);
    if (LO8(ecx)) _cf = (int)(((LO8(edx)) >> (8 - (LO8(ecx)))) & 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -116) = MEM32(ebp + -116) - 1;
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00294F4B; /* jne: not equal / not zero */

loc_00294F63: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00294F7F;

loc_00294F67: ;
    SET_LO8(edx, LO8(eax));
    ecx = ZX8(LO8(eax));
    eax = ecx;
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ebx, 1);
    if (LO8(ecx)) _cf = (int)(((LO8(ebx)) >> (8 - (LO8(ecx)))) & 1);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(ebx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ebx = MEM32(ebp + -96);

loc_00294F7F: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294F1D; /* jne: not equal / not zero */

loc_00294F85: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002953DA; /* je: equal / zero */

loc_00294F8D: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x7B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00294D4E(); return; } /* jne: not equal / not zero */

loc_00294F97: ;
    MEM32(ebp + 0xC) = esi;
    g_seh_ebp = ebp; sub_00294D4E(); return; /* tail jmp 0x00294D4E */

    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294FC2; /* jne: not equal / not zero */

loc_00294FA4: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00294FB3; /* jne: not equal / not zero */

loc_00294FA9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294FB3; /* je: equal / zero */

loc_00294FAD: ;
    MEM8(ebp + -25) = 1;
    goto loc_00294FC2;

loc_00294FB3: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x00294FBDu); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294FBD: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;

loc_00294FC2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x30 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002950E4; /* jne: not equal / not zero */

loc_00294FCB: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x00294FD5u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294FD5: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x78) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x78 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295024; /* je: equal / zero */

loc_00294FDF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x58) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x58 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295024; /* je: equal / zero */

loc_00294FE4: ;
    MEM32(ebp + -60) = 1;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0029500B; /* je: equal / zero */

loc_00294FF1: ;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294FFF; /* je: equal / zero */

loc_00294FF7: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00294FFF; /* jne: not equal / not zero */

loc_00294FFC: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00294FFF: ;
    MEM32(ebp + -56) = 0x6F;
    goto loc_002950E4;

loc_0029500B: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0029501C; /* je: equal / zero */

loc_00295013: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0029501Au); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_0029501A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0029501C: ;
    PUSH32(esp, 0x30);
    POP32(esp, ebx);
    goto loc_002950E1;

loc_00295024: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x0029502Eu); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_0029502E: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00295046; /* je: equal / zero */

loc_00295039: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebp + -40)) < (uint32_t)(2));
    MEM32(ebp + -40) = MEM32(ebp + -40) - 2;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00295046; /* jge: greater or equal (signed >=) */

loc_00295043: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00295046: ;
    MEM32(ebp + -56) = 0x78;
    goto loc_002950E4;

    MEM8(edi) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -84) = edi;
    g_seh_ebp = ebp; sub_00294D69(); return; /* tail jmp 0x00294D69 */

    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_00294D69(); return; /* tail jmp 0x00294D69 */

    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295076; /* je: equal / zero */

loc_0029506B: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00295074u); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_00295074: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00295076: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002953DA; /* je: equal / zero */

loc_0029507E: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0029534A; /* jne: not equal / not zero */

loc_00295088: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x63 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0029534A; /* je: equal / zero */

loc_00295095: ;
    eax = MEM32(ebp + -84);
    _fa = (uint32_t)(MEM8(ebp + -50)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -50), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002950A7; /* je: equal / zero */

loc_0029509E: ;
    _cf = 0; /* logical op clears CF */
    MEM16(eax) = MEM16(eax) & 0;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    goto loc_0029534A;

loc_002950A7: ;
    MEM8(eax) = 0;
    goto loc_0029534A;

    MEM8(ebp + -42) = 1;
    ebx = MEM32(ebp + -48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002950C1; /* jne: not equal / not zero */

loc_002950BB: ;
    MEM8(ebp + -51) = 1;
    goto loc_002950C6;

loc_002950C1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002950E4; /* jne: not equal / not zero */

loc_002950C6: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002950D5; /* jne: not equal / not zero */

loc_002950CB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002950D5; /* je: equal / zero */

loc_002950CF: ;
    MEM8(ebp + -25) = 1;
    goto loc_002950E4;

loc_002950D5: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x002950DFu); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_002950DF: ;
    ebx = eax;

loc_002950E1: ;
    MEM32(ebp + -48) = ebx;

loc_002950E4: ;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0029521B; /* je: equal / zero */

loc_002950EE: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002951F9; /* jne: not equal / not zero */

loc_002950F8: ;
    edi = 0x80;

loc_002950FD: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295165; /* je: equal / zero */

loc_00295103: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x70 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295165; /* je: equal / zero */

loc_00295109: ;
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0029511E; /* jle: less or equal (signed <=) */

loc_00295112: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0029511Au); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_0029511A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0029512A;

loc_0029511E: ;
    eax = MEM32(0x336CDC);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0029512A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002951A6; /* je: equal / zero */

loc_0029512E: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x6F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0029514E; /* jne: not equal / not zero */

loc_00295134: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x38 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_002951A6; /* jge: greater or equal (signed >=) */

loc_00295139: ;
    eax = MEM32(ebp + -72);
    ecx = MEM32(ebp + -68);
    { uint32_t _c = (uint32_t)(3) & 31u; if (_c && _c < 32u) { ecx = (ecx << _c) | (eax >> (32 - _c)); _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    if (3) _cf = (int)(((eax) >> (32 - (3))) & 1);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    goto loc_002951A9;

loc_0029514E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, MEM32(ebp + -68));
    PUSH32(esp, MEM32(ebp + -72));
    PUSH32(esp, 0x0029515Du); RECOMP_ABI_CALL(0x0028A9A0u, sub_0028A9A0); /* call 0x0028A9A0 */

loc_0029515D: ;
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = edx;
    goto loc_002951A9;

loc_00295165: ;
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00295179; /* jle: less or equal (signed <=) */

loc_0029516E: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00295175u); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_00295175: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00295184;

loc_00295179: ;
    eax = MEM32(0x336CDC);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00295184: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002951A6; /* je: equal / zero */

loc_00295188: ;
    eax = MEM32(ebp + -72);
    ecx = MEM32(ebp + -68);
    { uint32_t _c = (uint32_t)(4) & 31u; if (_c && _c < 32u) { ecx = (ecx << _c) | (eax >> (32 - _c)); _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    eax = ebx;
    PUSH32(esp, 0x002951A2u); RECOMP_ABI_CALL(0x00294845u, sub_00294845); /* call 0x00294845 */

loc_002951A2: ;
    ebx = eax;
    goto loc_002951A9;

loc_002951A6: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_002951A9: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002951DB; /* jne: not equal / not zero */

loc_002951AF: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx + -48;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -72)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -72) = MEM32(ebp + -72) + eax;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(ebp + -68)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + -68) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002951CD; /* je: equal / zero */

loc_002951C2: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002951CD; /* jne: not equal / not zero */

loc_002951C7: ;
    MEM8(ebp + -25) = 1;
    goto loc_002951EC;

loc_002951CD: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x002951D7u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_002951D7: ;
    ebx = eax;
    goto loc_002951EC;

loc_002951DB: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002951EC; /* je: equal / zero */

loc_002951E3: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002951EAu); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_002951EA: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002951EC: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002950FD; /* je: equal / zero */

loc_002951F6: ;
    MEM32(ebp + -48) = ebx;

loc_002951F9: ;
    _fa = (uint32_t)(MEM8(ebp + -51)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -51), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00295307; /* je: equal / zero */

loc_00295203: ;
    eax = MEM32(ebp + -72);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = MEM32(ebp + -68);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    goto loc_00295307;

loc_0029521B: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002952FE; /* jne: not equal / not zero */

loc_00295225: ;
    edi = 0x80;

loc_0029522A: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295279; /* je: equal / zero */

loc_00295230: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x70 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295279; /* je: equal / zero */

loc_00295236: ;
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0029524B; /* jle: less or equal (signed <=) */

loc_0029523F: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00295247u); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_00295247: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00295257;

loc_0029524B: ;
    eax = MEM32(0x336CDC);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00295257: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002952AB; /* je: equal / zero */

loc_0029525B: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x6F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0029526C; /* jne: not equal / not zero */

loc_00295261: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x38 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_002952AB; /* jge: greater or equal (signed >=) */

loc_00295266: ;
    if (3) _cf = (int)(((MEM32(ebp + -64)) >> (32 - (3))) & 1);
    MEM32(ebp + -64) = MEM32(ebp + -64) << 3;
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_002952AE;

loc_0029526C: ;
    eax = MEM32(ebp + -64);
    eax = eax + eax * 4;
    if (1) _cf = (int)(((eax) >> (32 - (1))) & 1);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -64) = eax;
    goto loc_002952AE;

loc_00295279: ;
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0029528D; /* jle: less or equal (signed <=) */

loc_00295282: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00295289u); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_00295289: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00295298;

loc_0029528D: ;
    eax = MEM32(0x336CDC);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00295298: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002952AB; /* je: equal / zero */

loc_0029529C: ;
    if (4) _cf = (int)(((MEM32(ebp + -64)) >> (32 - (4))) & 1);
    MEM32(ebp + -64) = MEM32(ebp + -64) << 4;
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx;
    PUSH32(esp, 0x002952A7u); RECOMP_ABI_CALL(0x00294845u, sub_00294845); /* call 0x00294845 */

loc_002952A7: ;
    ebx = eax;
    goto loc_002952AE;

loc_002952AB: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_002952AE: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002952E0; /* jne: not equal / not zero */

loc_002952B4: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -64);
    eax = eax + ebx + -48;
    MEM32(ebp + -64) = eax;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002952D2; /* je: equal / zero */

loc_002952C7: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002952D2; /* jne: not equal / not zero */

loc_002952CC: ;
    MEM8(ebp + -25) = 1;
    goto loc_002952F1;

loc_002952D2: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x002952DCu); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_002952DC: ;
    ebx = eax;
    goto loc_002952F1;

loc_002952E0: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002952F1; /* je: equal / zero */

loc_002952E8: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002952EFu); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_002952EF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002952F1: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0029522A; /* je: equal / zero */

loc_002952FB: ;
    MEM32(ebp + -48) = ebx;

loc_002952FE: ;
    _fa = (uint32_t)(MEM8(ebp + -51)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -51), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00295307; /* je: equal / zero */

loc_00295304: ;
    _cf = (int)((MEM32(ebp + -64)) != 0);
    MEM32(ebp + -64) = (uint32_t)(-(int32_t)MEM32(ebp + -64));
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00295307: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x46 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00295311; /* jne: not equal / not zero */

loc_0029530D: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -60) = MEM32(ebp + -60) & 0;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00295311: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002953DA; /* je: equal / zero */

loc_0029531B: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0029534A; /* jne: not equal / not zero */

loc_00295321: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = MEM32(ebp + -84);
    eax = MEM32(ebp + -64);
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0029533D; /* je: equal / zero */

loc_00295330: ;
    eax = MEM32(ebp + -72);
    MEM32(ebx) = eax;
    eax = MEM32(ebp + -68);
    MEM32(ebx + 4) = eax;
    goto loc_0029534A;

loc_0029533D: ;
    _fa = (uint32_t)(MEM8(ebp + -42)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -42), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00295347; /* je: equal / zero */

loc_00295343: ;
    MEM32(ebx) = eax;
    goto loc_0029534A;

loc_00295347: ;
    MEM16(ebx) = LO16(eax);

loc_0029534A: ;
    MEM8(ebp + -49) = MEM8(ebp + -49) + 1;
    _fa = (uint32_t)(MEM8(ebp + -49)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(ebp + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    goto loc_002953BE;

    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0x00295361u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00295361: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    eax = ZX8(MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002953A7; /* jne: not equal / not zero */

loc_00295371: ;
    eax = ZX8(LO8(ebx));
    ecx = MEM32(0x336CDC);
    _fa = (uint32_t)(MEM8(ecx + eax * 2 + 1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + eax * 2 + 1), 0x80 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_002953BE; /* je: equal / zero */

loc_00295381: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0x0029538Cu); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_0029538C: ;
    ecx = ZX8(MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002953BB; /* je: equal / zero */

loc_00295397: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002953A7; /* je: equal / zero */

loc_0029539C: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0x002953A5u); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_002953A5: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002953A7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002953DA; /* je: equal / zero */

loc_002953AC: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + -48));
    PUSH32(esp, 0x002953B7u); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_002953B7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_002953DA;

loc_002953BB: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002953BE: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002948B6(); return; } /* jne: not equal / not zero */

loc_002953C8: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x25) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x25 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002953DA; /* jne: not equal / not zero */

loc_002953CD: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x6E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0x6E (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002948B3(); return; } /* je: equal / zero */

loc_002953DA: ;
    _fa = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -112), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002953E9; /* jne: not equal / not zero */

loc_002953E0: ;
    PUSH32(esp, MEM32(ebp + -96));
    PUSH32(esp, 0x002953E8u); RECOMP_ABI_CALL(0x0028BAA8u, sub_0028BAA8); /* call 0x0028BAA8 */

loc_002953E8: ;
    POP32(esp, ecx);

loc_002953E9: ;
    eax = MEM32(ebp + -88);
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002953FE; /* jne: not equal / not zero */

loc_002953F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002953FE; /* jne: not equal / not zero */

loc_002953F6: ;
    _fa = (uint32_t)(MEM8(ebp + -49)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -49), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002953FE; /* jne: not equal / not zero */

loc_002953FB: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002953FE: ;
    esp = ebp + -488;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x00295409u); RECOMP_ABI_CALL(0x0028A593u, sub_0028A593); /* call 0x0028A593 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00295409: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00294ECF
 * Original: 0x00294ECF - 0x0029540A (1339 bytes, 460 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00294ECF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00294ECF: ;
    esp = MEM32(ebp + -24);
    PUSH32(esp, 0x20);
    PUSH32(esp, 0x00294ED9u); RECOMP_ABI_CALL(0x0028BA96u, sub_0028BA96); /* call 0x0028BA96 */

loc_00294ED9: ;
    POP32(esp, ecx);
    MEM32(ebp + -96) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00294EEA; /* jne: not equal / not zero */

loc_00294EE1: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_002953DA;

loc_00294EEA: ;
    MEM32(ebp + -112) = 1;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    esi = MEM32(ebp + -120);
    PUSH32(esp, 8);
    POP32(esp, ecx);
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = MEM32(ebp + -96);
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x7B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294F18; /* jne: not equal / not zero */

loc_00294F0A: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0x5D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294F18; /* jne: not equal / not zero */

loc_00294F0F: ;
    SET_LO8(edx, 0x5D);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebx + 0xB) = 0x20;
    goto loc_00294F7F;

loc_00294F18: ;
    SET_LO8(edx, MEM8(ebp + -89));
    goto loc_00294F7F;

loc_00294F1D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x2D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294F67; /* jne: not equal / not zero */

loc_00294F22: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294F67; /* je: equal / zero */

loc_00294F26: ;
    SET_LO8(ecx, MEM8(esi));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x5D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00294F67; /* je: equal / zero */

loc_00294F2D: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(ecx) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00294F36; /* jae: above or equal (unsigned >=) */

loc_00294F32: ;
    SET_LO8(eax, LO8(ecx));
    goto loc_00294F3A;

loc_00294F36: ;
    SET_LO8(eax, LO8(edx));
    SET_LO8(edx, LO8(ecx));

loc_00294F3A: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00294F63; /* ja: above (unsigned >) */

loc_00294F3E: ;
    edi = ZX8(LO8(edx));
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(LO8(edx)));
    SET_LO8(eax, LO8(eax) - LO8(edx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    eax = ZX8(LO8(eax));
    MEM32(ebp + -116) = eax;

loc_00294F4B: ;
    eax = edi;
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(edx, 1);
    if (LO8(ecx)) _cf = (int)(((LO8(edx)) >> (8 - (LO8(ecx)))) & 1);
    SET_LO8(edx, LO8(edx) << LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -116) = MEM32(ebp + -116) - 1;
    _fa = (uint32_t)(MEM32(ebp + -116)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00294F4B; /* jne: not equal / not zero */

loc_00294F63: ;
    _cf = 0; /* xor clears CF */
    SET_LO8(edx, 0); /* xor self */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    goto loc_00294F7F;

loc_00294F67: ;
    SET_LO8(edx, LO8(eax));
    ecx = ZX8(LO8(eax));
    eax = ecx;
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(ebx)) >> 32) & 1);
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ebx, 1);
    if (LO8(ecx)) _cf = (int)(((LO8(ebx)) >> (8 - (LO8(ecx)))) & 1);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(ebx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ebx = MEM32(ebp + -96);

loc_00294F7F: ;
    SET_LO8(eax, MEM8(esi));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x5D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x5D (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294F1D; /* jne: not equal / not zero */

loc_00294F85: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002953DA; /* je: equal / zero */

loc_00294F8D: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x7B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00294D4E(); return; } /* jne: not equal / not zero */

loc_00294F97: ;
    MEM32(ebp + 0xC) = esi;
    g_seh_ebp = ebp; sub_00294D4E(); return; /* tail jmp 0x00294D4E */

    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00294FC2; /* jne: not equal / not zero */

loc_00294FA4: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00294FB3; /* jne: not equal / not zero */

loc_00294FA9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294FB3; /* je: equal / zero */

loc_00294FAD: ;
    MEM8(ebp + -25) = 1;
    goto loc_00294FC2;

loc_00294FB3: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x00294FBDu); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294FBD: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;

loc_00294FC2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x30 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002950E4; /* jne: not equal / not zero */

loc_00294FCB: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x00294FD5u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00294FD5: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x78) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x78 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295024; /* je: equal / zero */

loc_00294FDF: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0x58) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0x58 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295024; /* je: equal / zero */

loc_00294FE4: ;
    MEM32(ebp + -60) = 1;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0029500B; /* je: equal / zero */

loc_00294FF1: ;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00294FFF; /* je: equal / zero */

loc_00294FF7: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00294FFF; /* jne: not equal / not zero */

loc_00294FFC: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00294FFF: ;
    MEM32(ebp + -56) = 0x6F;
    goto loc_002950E4;

loc_0029500B: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0029501C; /* je: equal / zero */

loc_00295013: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0029501Au); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_0029501A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_0029501C: ;
    PUSH32(esp, 0x30);
    POP32(esp, ebx);
    goto loc_002950E1;

loc_00295024: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x0029502Eu); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_0029502E: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00295046; /* je: equal / zero */

loc_00295039: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(MEM32(ebp + -40)) < (uint32_t)(2));
    MEM32(ebp + -40) = MEM32(ebp + -40) - 2;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -40), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00295046; /* jge: greater or equal (signed >=) */

loc_00295043: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_00295046: ;
    MEM32(ebp + -56) = 0x78;
    goto loc_002950E4;

    MEM8(edi) = LO8(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -84) = edi;
    g_seh_ebp = ebp; sub_00294D69(); return; /* tail jmp 0x00294D69 */

    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_seh_ebp = ebp; sub_00294D69(); return; /* tail jmp 0x00294D69 */

    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295076; /* je: equal / zero */

loc_0029506B: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00295074u); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_00295074: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00295076: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002953DA; /* je: equal / zero */

loc_0029507E: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0029534A; /* jne: not equal / not zero */

loc_00295088: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x63) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x63 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0029534A; /* je: equal / zero */

loc_00295095: ;
    eax = MEM32(ebp + -84);
    _fa = (uint32_t)(MEM8(ebp + -50)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -50), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002950A7; /* je: equal / zero */

loc_0029509E: ;
    _cf = 0; /* logical op clears CF */
    MEM16(eax) = MEM16(eax) & 0;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    goto loc_0029534A;

loc_002950A7: ;
    MEM8(eax) = 0;
    goto loc_0029534A;

    MEM8(ebp + -42) = 1;
    ebx = MEM32(ebp + -48);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2D) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2D (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002950C1; /* jne: not equal / not zero */

loc_002950BB: ;
    MEM8(ebp + -51) = 1;
    goto loc_002950C6;

loc_002950C1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2B (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002950E4; /* jne: not equal / not zero */

loc_002950C6: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002950D5; /* jne: not equal / not zero */

loc_002950CB: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002950D5; /* je: equal / zero */

loc_002950CF: ;
    MEM8(ebp + -25) = 1;
    goto loc_002950E4;

loc_002950D5: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x002950DFu); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_002950DF: ;
    ebx = eax;

loc_002950E1: ;
    MEM32(ebp + -48) = ebx;

loc_002950E4: ;
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0029521B; /* je: equal / zero */

loc_002950EE: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002951F9; /* jne: not equal / not zero */

loc_002950F8: ;
    edi = 0x80;

loc_002950FD: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295165; /* je: equal / zero */

loc_00295103: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x70 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295165; /* je: equal / zero */

loc_00295109: ;
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0029511E; /* jle: less or equal (signed <=) */

loc_00295112: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0029511Au); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_0029511A: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_0029512A;

loc_0029511E: ;
    eax = MEM32(0x336CDC);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0029512A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002951A6; /* je: equal / zero */

loc_0029512E: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x6F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0029514E; /* jne: not equal / not zero */

loc_00295134: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x38 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_002951A6; /* jge: greater or equal (signed >=) */

loc_00295139: ;
    eax = MEM32(ebp + -72);
    ecx = MEM32(ebp + -68);
    { uint32_t _c = (uint32_t)(3) & 31u; if (_c && _c < 32u) { ecx = (ecx << _c) | (eax >> (32 - _c)); _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    if (3) _cf = (int)(((eax) >> (32 - (3))) & 1);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    goto loc_002951A9;

loc_0029514E: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0xA);
    PUSH32(esp, MEM32(ebp + -68));
    PUSH32(esp, MEM32(ebp + -72));
    PUSH32(esp, 0x0029515Du); RECOMP_ABI_CALL(0x0028A9A0u, sub_0028A9A0); /* call 0x0028A9A0 */

loc_0029515D: ;
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = edx;
    goto loc_002951A9;

loc_00295165: ;
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00295179; /* jle: less or equal (signed <=) */

loc_0029516E: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00295175u); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_00295175: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00295184;

loc_00295179: ;
    eax = MEM32(0x336CDC);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00295184: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002951A6; /* je: equal / zero */

loc_00295188: ;
    eax = MEM32(ebp + -72);
    ecx = MEM32(ebp + -68);
    { uint32_t _c = (uint32_t)(4) & 31u; if (_c && _c < 32u) { ecx = (ecx << _c) | (eax >> (32 - _c)); _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    eax = ebx;
    PUSH32(esp, 0x002951A2u); RECOMP_ABI_CALL(0x00294845u, sub_00294845); /* call 0x00294845 */

loc_002951A2: ;
    ebx = eax;
    goto loc_002951A9;

loc_002951A6: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_002951A9: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002951DB; /* jne: not equal / not zero */

loc_002951AF: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ebx + -48;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM32(ebp + -72)) + (uint64_t)(eax)) >> 32) & 1);
    MEM32(ebp + -72) = MEM32(ebp + -72) + eax;
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(ebp + -68)) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(ebp + -68) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002951CD; /* je: equal / zero */

loc_002951C2: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002951CD; /* jne: not equal / not zero */

loc_002951C7: ;
    MEM8(ebp + -25) = 1;
    goto loc_002951EC;

loc_002951CD: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x002951D7u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_002951D7: ;
    ebx = eax;
    goto loc_002951EC;

loc_002951DB: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002951EC; /* je: equal / zero */

loc_002951E3: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002951EAu); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_002951EA: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002951EC: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002950FD; /* je: equal / zero */

loc_002951F6: ;
    MEM32(ebp + -48) = ebx;

loc_002951F9: ;
    _fa = (uint32_t)(MEM8(ebp + -51)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -51), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00295307; /* je: equal / zero */

loc_00295203: ;
    eax = MEM32(ebp + -72);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = MEM32(ebp + -68);
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ebp + -72) = eax;
    MEM32(ebp + -68) = ecx;
    goto loc_00295307;

loc_0029521B: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002952FE; /* jne: not equal / not zero */

loc_00295225: ;
    edi = 0x80;

loc_0029522A: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x78) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x78 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295279; /* je: equal / zero */

loc_00295230: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x70) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x70 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295279; /* je: equal / zero */

loc_00295236: ;
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0029524B; /* jle: less or equal (signed <=) */

loc_0029523F: ;
    PUSH32(esp, 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00295247u); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_00295247: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00295257;

loc_0029524B: ;
    eax = MEM32(0x336CDC);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00295257: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002952AB; /* je: equal / zero */

loc_0029525B: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x6F (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0029526C; /* jne: not equal / not zero */

loc_00295261: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x38) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x38 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_002952AB; /* jge: greater or equal (signed >=) */

loc_00295266: ;
    if (3) _cf = (int)(((MEM32(ebp + -64)) >> (32 - (3))) & 1);
    MEM32(ebp + -64) = MEM32(ebp + -64) << 3;
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_002952AE;

loc_0029526C: ;
    eax = MEM32(ebp + -64);
    eax = eax + eax * 4;
    if (1) _cf = (int)(((eax) >> (32 - (1))) & 1);
    eax = eax << 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -64) = eax;
    goto loc_002952AE;

loc_00295279: ;
    _fa = (uint32_t)(MEM32(0x336CE4)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x336CE4), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_0029528D; /* jle: less or equal (signed <=) */

loc_00295282: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00295289u); RECOMP_ABI_CALL(0x0028F07Au, sub_0028F07A); /* call 0x0028F07A */

loc_00295289: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00295298;

loc_0029528D: ;
    eax = MEM32(0x336CDC);
    eax = ZX8(MEM8(eax + ebx * 2));
    _cf = 0; /* logical op clears CF */
    eax = eax & edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00295298: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002952AB; /* je: equal / zero */

loc_0029529C: ;
    if (4) _cf = (int)(((MEM32(ebp + -64)) >> (32 - (4))) & 1);
    MEM32(ebp + -64) = MEM32(ebp + -64) << 4;
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebx;
    PUSH32(esp, 0x002952A7u); RECOMP_ABI_CALL(0x00294845u, sub_00294845); /* call 0x00294845 */

loc_002952A7: ;
    ebx = eax;
    goto loc_002952AE;

loc_002952AB: ;
    MEM8(ebp + -25) = MEM8(ebp + -25) + 1;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */

loc_002952AE: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002952E0; /* jne: not equal / not zero */

loc_002952B4: ;
    MEM32(ebp + -60) = MEM32(ebp + -60) + 1;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = MEM32(ebp + -64);
    eax = eax + ebx + -48;
    MEM32(ebp + -64) = eax;
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -80), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002952D2; /* je: equal / zero */

loc_002952C7: ;
    MEM32(ebp + -40) = MEM32(ebp + -40) - 1;
    _fa = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_002952D2; /* jne: not equal / not zero */

loc_002952CC: ;
    MEM8(ebp + -25) = 1;
    goto loc_002952F1;

loc_002952D2: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = esi;
    PUSH32(esp, 0x002952DCu); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_002952DC: ;
    ebx = eax;
    goto loc_002952F1;

loc_002952E0: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002952F1; /* je: equal / zero */

loc_002952E8: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x002952EFu); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_002952EF: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002952F1: ;
    _fa = (uint32_t)(MEM8(ebp + -25)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -25), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0029522A; /* je: equal / zero */

loc_002952FB: ;
    MEM32(ebp + -48) = ebx;

loc_002952FE: ;
    _fa = (uint32_t)(MEM8(ebp + -51)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -51), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00295307; /* je: equal / zero */

loc_00295304: ;
    _cf = (int)((MEM32(ebp + -64)) != 0);
    MEM32(ebp + -64) = (uint32_t)(-(int32_t)MEM32(ebp + -64));
    _fa = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00295307: ;
    _fa = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x46) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -56), 0x46 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00295311; /* jne: not equal / not zero */

loc_0029530D: ;
    _cf = 0; /* logical op clears CF */
    MEM32(ebp + -60) = MEM32(ebp + -60) & 0;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00295311: ;
    _fa = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -60), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_002953DA; /* je: equal / zero */

loc_0029531B: ;
    _fa = (uint32_t)(MEM8(ebp + -41)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -41), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0029534A; /* jne: not equal / not zero */

loc_00295321: ;
    MEM32(ebp + -88) = MEM32(ebp + -88) + 1;
    _fa = (uint32_t)(MEM32(ebp + -88)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = MEM32(ebp + -84);
    eax = MEM32(ebp + -64);
    _fa = (uint32_t)(MEM32(ebp + -104)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -104), 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0029533D; /* je: equal / zero */

loc_00295330: ;
    eax = MEM32(ebp + -72);
    MEM32(ebx) = eax;
    eax = MEM32(ebp + -68);
    MEM32(ebx + 4) = eax;
    goto loc_0029534A;

loc_0029533D: ;
    _fa = (uint32_t)(MEM8(ebp + -42)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -42), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00295347; /* je: equal / zero */

loc_00295343: ;
    MEM32(ebx) = eax;
    goto loc_0029534A;

loc_00295347: ;
    MEM16(ebx) = LO16(eax);

loc_0029534A: ;
    MEM8(ebp + -49) = MEM8(ebp + -49) + 1;
    _fa = (uint32_t)(MEM8(ebp + -49)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    edi = MEM32(ebp + 0xC);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    goto loc_002953BE;

    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0x00295361u); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_00295361: ;
    ebx = eax;
    MEM32(ebp + -48) = ebx;
    eax = ZX8(MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002953A7; /* jne: not equal / not zero */

loc_00295371: ;
    eax = ZX8(LO8(ebx));
    ecx = MEM32(0x336CDC);
    _fa = (uint32_t)(MEM8(ecx + eax * 2 + 1)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + eax * 2 + 1), 0x80 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_002953BE; /* je: equal / zero */

loc_00295381: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(ebp + 8);
    PUSH32(esp, 0x0029538Cu); RECOMP_ABI_CALL(0x00294877u, sub_00294877); /* call 0x00294877 */

loc_0029538C: ;
    ecx = ZX8(MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002953BB; /* je: equal / zero */

loc_00295397: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002953A7; /* je: equal / zero */

loc_0029539C: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, eax);
    PUSH32(esp, 0x002953A5u); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_002953A5: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002953A7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_002953DA; /* je: equal / zero */

loc_002953AC: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + -48));
    PUSH32(esp, 0x002953B7u); RECOMP_ABI_CALL(0x00295E11u, sub_00295E11); /* call 0x00295E11 */

loc_002953B7: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_002953DA;

loc_002953BB: ;
    MEM32(ebp + -32) = MEM32(ebp + -32) - 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002953BE: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_002948B6(); return; } /* jne: not equal / not zero */

loc_002953C8: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(0x25) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi), 0x25 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002953DA; /* jne: not equal / not zero */

loc_002953CD: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(MEM8(eax + 1)) & 0xFFu; _fb = (uint32_t)(0x6E) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 1), 0x6E (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_002948B3(); return; } /* je: equal / zero */

loc_002953DA: ;
    _fa = (uint32_t)(MEM32(ebp + -112)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -112), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002953E9; /* jne: not equal / not zero */

loc_002953E0: ;
    PUSH32(esp, MEM32(ebp + -96));
    PUSH32(esp, 0x002953E8u); RECOMP_ABI_CALL(0x0028BAA8u, sub_0028BAA8); /* call 0x0028BAA8 */

loc_002953E8: ;
    POP32(esp, ecx);

loc_002953E9: ;
    eax = MEM32(ebp + -88);
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002953FE; /* jne: not equal / not zero */

loc_002953F2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_002953FE; /* jne: not equal / not zero */

loc_002953F6: ;
    _fa = (uint32_t)(MEM8(ebp + -49)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -49), LO8(eax) (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_002953FE; /* jne: not equal / not zero */

loc_002953FB: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_002953FE: ;
    esp = ebp + -488;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x00295409u); RECOMP_ABI_CALL(0x0028A593u, sub_0028A593); /* call 0x0028A593 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00295409: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0029540C
 * Original: 0x0029540C - 0x002954B4 (168 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029540C(void)
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

loc_0029540C: ;
    MEM8(ebp + -144) = 0xFF;
    PUSH32(esp, 0x00295418u); RECOMP_ABI_CALL(0x002954B4u, sub_002954B4); /* call 0x002954B4 */

loc_00295418: ;
    SET_LO8(ebx, LO8(ebx) | LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00295497; /* je: equal / zero */

loc_0029541C: ;
    PUSH32(esp, 0x00295421u); RECOMP_ABI_CALL(0x002954F7u, sub_002954F7); /* call 0x002954F7 */

loc_00295421: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    goto loc_00295473;

    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x339F28)); /* fld */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    /* wait - FPU sync */
    MEM16(ebp + -160) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [ebp - 0xa0] */
    /* wait - FPU sync */
    _fa = (uint32_t)(MEM8(ebp + -159)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -159), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002954A6; /* jne: not equal / not zero */

loc_00295442: ;
    PUSH32(esp, 0x00295447u); RECOMP_ABI_CALL(0x002954B4u, sub_002954B4); /* call 0x002954B4 */

loc_00295447: ;
    SET_LO8(ebx, LO8(ebx) | LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_002954A6; /* je: equal / zero */

loc_0029544B: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, 0x00295452u); RECOMP_ABI_CALL(0x002954E5u, sub_002954E5); /* call 0x002954E5 */

loc_00295452: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    PUSH32(esp, 0x00295459u); RECOMP_ABI_CALL(0x002954F7u, sub_002954F7); /* call 0x002954F7 */

loc_00295459: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_st1() = RECOMP_FP_PC(fp_top() / fp_st1()); fp_pop(); /* fdivrp st(1) */
    esp += 4; return; /* ret */

    SET_LO8(ebx, LO8(ebx) | LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_002954A1; /* je: equal / zero */

loc_0029546E: ;
    PUSH32(esp, 0x00295473u); RECOMP_ABI_CALL(0x002954E5u, sub_002954E5); /* call 0x002954E5 */

loc_00295473: ;
    fp_push(1.0); /* fld1 */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */
    g_seh_ebp = ebp; sub_0028FF3C(); return; /* tail jmp 0x0028FF3C */

    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x336E80)); /* fld */
    g_seh_ebp = ebp; sub_00290007(); return; /* tail jmp 0x00290007 */

    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x336E80)); /* fld */
    esp += 4; return; /* ret */

loc_00295497: ;
    PUSH32(esp, 0x0029549Cu); RECOMP_ABI_CALL(0x0028FD7Du, sub_0028FD7D); /* call 0x0028FD7D */

loc_0029549C: ;
    g_seh_ebp = ebp; sub_00290007(); return; /* tail jmp 0x00290007 */

loc_002954A1: ;
    g_seh_ebp = ebp; sub_0028FD7D(); return; /* tail jmp 0x0028FD7D */

loc_002954A6: ;
    MEM8(ebp + -144) = 8;
    PUSH32(esp, 0x002954B2u); RECOMP_ABI_CALL(0x0028FF51u, sub_0028FF51); /* call 0x0028FF51 */

loc_002954B2: ;
    goto loc_0029549C;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002954B4
 * Original: 0x002954B4 - 0x002954E5 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002954B4(void)
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

loc_002954B4: ;
    fp_push(1.44269504088896340736); /* fldl2e */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x002954BFu); RECOMP_ABI_CALL(0x0028FD9Au, sub_0028FD9A); /* call 0x0028FD9A */

loc_002954BF: ;
    SET_LO8(ebx, ~LO8(ebx));
    _fa = (uint32_t)(MEM8(ebp + -159)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -159), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_002954D3; /* je: equal / zero */

loc_002954CA: ;
    PUSH32(esp, 0x002954CFu); RECOMP_ABI_CALL(0x002954F7u, sub_002954F7); /* call 0x002954F7 */

loc_002954CF: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_pop(); /* fstp st(0) */

loc_002954D3: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002954E0; /* jne: not equal / not zero */

loc_002954D8: ;
    SET_HI8(ebx, ~HI8(ebx));
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */

loc_002954E0: ;
    g_seh_ebp = ebp; sub_0028FF3C(); return; /* tail jmp 0x0028FF3C */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002954E5
 * Original: 0x002954E5 - 0x002954F7 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002954E5(void)
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

loc_002954E5: ;
    PUSH32(esp, 0x002954EAu); RECOMP_ABI_CALL(0x002954F7u, sub_002954F7); /* call 0x002954F7 */

loc_002954EA: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    SET_HI8(ebx, HI8(ebx) | HI8(ebx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_002954F6; /* jne: not equal / not zero */

loc_002954F0: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); /* fadd st(1), st(0) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */

loc_002954F6: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002954F7
 * Original: 0x002954F7 - 0x00295508 (17 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002954F7(void)
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

loc_002954F7: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(1.0); /* fld1 */
    SET_HI8(ebx, HI8(ebx) | HI8(ebx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_00295505; /* jne: not equal / not zero */

loc_002954FF: ;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */

loc_00295505: ;
    fp_st1() = RECOMP_FP_PC(fp_top() / fp_st1()); fp_pop(); /* fdivrp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00295508
 * Original: 0x00295508 - 0x00295546 (62 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00295508(void)
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

loc_00295508: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xFFFFFD30u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xFFFFFD30u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    /* wait - FPU sync */
    MEM16(ebp + -164) = g_fp_control_word; /* fnstcw word ptr [ebp - 0xa4] */
    /* wait - FPU sync */
    _fa = (uint32_t)(MEM32(0x337194)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x337194), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00295537; /* je: equal / zero */

loc_00295523: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295528u); RECOMP_ABI_CALL(0x0028FEABu, sub_0028FEAB); /* call 0x0028FEAB */

loc_00295528: ;
    MEM8(ebp + -712) = MEM8(ebp + -712) | 3;
    _fa = (uint32_t)(MEM8(ebp + -712)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295534u); RECOMP_ABI_CALL(0x002955D2u, sub_002955D2); /* call 0x002955D2 */

loc_00295534: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00295537: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMD(ebp + -134) = fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMD(ebp + -126) = fp_top(); /* fst */
    goto loc_00295523;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00295546
 * Original: 0x00295546 - 0x00295583 (61 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00295546(void)
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

loc_00295546: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xFFFFFD30u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xFFFFFD30u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    /* wait - FPU sync */
    MEM16(ebp + -164) = g_fp_control_word; /* fnstcw word ptr [ebp - 0xa4] */
    _fa = (uint32_t)(MEM32(0x337194)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x337194), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029557B; /* je: equal / zero */

loc_00295560: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295565u); RECOMP_ABI_CALL(0x0028FE44u, sub_0028FE44); /* call 0x0028FE44 */

loc_00295565: ;
    MEM8(ebp + -712) = MEM8(ebp + -712) | 1;
    _fa = (uint32_t)(MEM8(ebp + -712)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ebp + -712) = MEM8(ebp + -712) & 0xFD;
    _fa = (uint32_t)(MEM8(ebp + -712)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295578u); RECOMP_ABI_CALL(0x002955D2u, sub_002955D2); /* call 0x002955D2 */

loc_00295578: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0029557B: ;
    MEMD(ebp + -134) = fp_top(); /* fst */
    goto loc_00295560;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00295583
 * Original: 0x00295583 - 0x002955CB (72 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00295583(void)
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

loc_00295583: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xFFFFFD30u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xFFFFFD30u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295598u); RECOMP_ABI_CALL(0x0029574Cu, sub_0029574C); /* call 0x0029574C */

loc_00295598: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002955A6u); RECOMP_ABI_CALL(0x0029574Cu, sub_0029574C); /* call 0x0029574C */

loc_002955A6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* wait - FPU sync */
    MEM16(ebp + -164) = g_fp_control_word; /* fnstcw word ptr [ebp - 0xa4] */
    MEM8(ebp + -712) = MEM8(ebp + -712) | 2;
    _fa = (uint32_t)(MEM8(ebp + -712)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ebp + -143) = 1;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002955C3u); RECOMP_ABI_CALL(0x0028FEABu, sub_0028FEAB); /* call 0x0028FEAB */

loc_002955C3: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002955C8u); RECOMP_ABI_CALL(0x002955CBu, sub_002955CB); /* call 0x002955CB */

loc_002955C8: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_002955CB
 * Original: 0x002955CB - 0x002955D2 (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002955CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002955CB: ;
    MEM8(ebp + -712) = MEM8(ebp + -712) & 0xFE;
    _fa = (uint32_t)(MEM8(ebp + -712)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_002955D2(); return; /* fallthrough 0x002955D2 */

}

/**
 * sub_002955D2
 * Original: 0x002955D2 - 0x00295719 (327 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002955D2(void)
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

loc_002955D2: ;
    _fa = (uint32_t)(MEM32(0x349EF8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x349EF8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029562A; /* jne: not equal / not zero */

loc_002955DB: ;
    MEMD(ebp + -720) = fp_top(); /* fst */
    SET_LO8(eax, MEM8(ebp + -144));
    SET_LO8(eax, LO8(eax) | LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00295605; /* je: equal / zero */

loc_002955EB: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029564A; /* je: equal / zero */

loc_002955EF: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFE (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00295632; /* je: equal / zero */

loc_002955F3: ;
    SET_LO8(eax, LO8(eax) | LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0029562A; /* je: equal / zero */

loc_002955F7: ;
    eax = SX8(LO8(eax));
    MEM32(ebp + -142) = eax;
    goto loc_002956B7;

loc_00295605: ;
    SET_LO16(eax, MEM16(ebp + -164));
    SET_LO16(eax, LO16(eax) & 0x20);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_0029562A; /* jne: not equal / not zero */

loc_00295612: ;
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    SET_LO16(eax, LO16(eax) & 0x20);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0029562A; /* je: equal / zero */

loc_0029561B: ;
    MEM32(ebp + -142) = 8;
    goto loc_002956B7;

loc_0029562A: ;
    g_fp_control_word = MEM16(ebp + -164); /* fldcw word ptr [ebp - 0xa4] */
    /* wait - FPU sync */
    esp += 4; return; /* ret */

loc_00295632: ;
    SET_LO16(eax, MEM16(ebp + -714));
    SET_LO16(eax, LO16(eax) & 0x7FF0);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    SET_LO16(eax, LO16(eax) | LO16(eax));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0029565D; /* je: equal / zero */

loc_00295642: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7FF0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7FF0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029568B; /* je: equal / zero */

loc_00295648: ;
    goto loc_00295605;

loc_0029564A: ;
    SET_LO16(eax, MEM16(ebp + -714));
    SET_LO16(eax, LO16(eax) & 0x7FF0);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7FF0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7FF0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029568B; /* je: equal / zero */

loc_0029565B: ;
    goto loc_00295605;

loc_0029565D: ;
    MEM32(ebp + -142) = 4;
    fp_push(MEMD(0x322BCC)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x322BBC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x322bbc] */
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    /* sahf - store AH to flags */
    if ((g_fp_cmp == 0 || g_fp_cmp == 1) /* sahf */) goto loc_002956B7; /* jae: above or equal (unsigned >=) */

loc_00295683: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x322BDC)); /* fmul qword ptr [0x322bdc] */
    goto loc_002956B7;

loc_0029568B: ;
    MEM32(ebp + -142) = 3;
    fp_push(MEMD(0x322BC4)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x322BB4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x322bb4] */
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    /* sahf - store AH to flags */
    if ((g_fp_cmp != 1) /* sahf */) goto loc_002956B7; /* jbe: below or equal (unsigned <=) */

loc_002956B1: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x322BD4)); /* fmul qword ptr [0x322bd4] */

loc_002956B7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = MEM32(ebp + -148);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -138) = ebx;
    _fa = (uint32_t)(MEM8(ebp + -712)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -712), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002956E9; /* jne: not equal / not zero */

loc_002956CF: ;
    g_df = 0; /* cld */
    esi = ebp + 8;
    edi = ebp + -134;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fa = (uint32_t)(MEM8(ebx + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0xC), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002956E9; /* je: equal / zero */

loc_002956E1: ;
    esi = ebp + 0x10;
    edi = ebp + -126;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_002956E9: ;
    MEMD(ebp + -118) = fp_top(); fp_pop(); /* fstp */
    eax = ebp + -142;
    ebx = ebp + -164;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ebx = MEM32(ebp + -148);
    SET_LO8(eax, MEM8(ebx + 0xE));
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029570Cu); RECOMP_ABI_CALL(0x00291FC3u, sub_00291FC3); /* call 0x00291FC3 */

loc_0029570C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    fp_push(MEMD(ebp + -118)); /* fld double */
    goto loc_0029562A;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00295642
 * Original: 0x00295642 - 0x00295719 (215 bytes, 68 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295642(void)
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

loc_00295642: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7FF0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7FF0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029568B; /* je: equal / zero */

loc_00295648: ;
    g_seh_ebp = ebp; sub_00295605(); return; /* tail jmp 0x00295605 */

    SET_LO16(eax, MEM16(ebp + -714));
    SET_LO16(eax, LO16(eax) & 0x7FF0);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7FF0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7FF0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029568B; /* je: equal / zero */

loc_0029565B: ;
    g_seh_ebp = ebp; sub_00295605(); return; /* tail jmp 0x00295605 */

    MEM32(ebp + -142) = 4;
    fp_push(MEMD(0x322BCC)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x322BBC)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x322bbc] */
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    /* sahf - store AH to flags */
    if ((g_fp_cmp == 0 || g_fp_cmp == 1) /* sahf */) goto loc_002956B7; /* jae: above or equal (unsigned >=) */

loc_00295683: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x322BDC)); /* fmul qword ptr [0x322bdc] */
    goto loc_002956B7;

loc_0029568B: ;
    MEM32(ebp + -142) = 3;
    fp_push(MEMD(0x322BC4)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x322BB4)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x322bb4] */
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    /* sahf - store AH to flags */
    if ((g_fp_cmp != 1) /* sahf */) goto loc_002956B7; /* jbe: below or equal (unsigned <=) */

loc_002956B1: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x322BD4)); /* fmul qword ptr [0x322bd4] */

loc_002956B7: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = MEM32(ebp + -148);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -138) = ebx;
    _fa = (uint32_t)(MEM8(ebp + -712)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -712), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_002956E9; /* jne: not equal / not zero */

loc_002956CF: ;
    g_df = 0; /* cld */
    esi = ebp + 8;
    edi = ebp + -134;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fa = (uint32_t)(MEM8(ebx + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0xC), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002956E9; /* je: equal / zero */

loc_002956E1: ;
    esi = ebp + 0x10;
    edi = ebp + -126;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_002956E9: ;
    MEMD(ebp + -118) = fp_top(); fp_pop(); /* fstp */
    eax = ebp + -142;
    ebx = ebp + -164;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ebx = MEM32(ebp + -148);
    SET_LO8(eax, MEM8(ebx + 0xE));
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0029570Cu); RECOMP_ABI_CALL(0x00291FC3u, sub_00291FC3); /* call 0x00291FC3 */

loc_0029570C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    fp_push(MEMD(ebp + -118)); /* fld double */
    g_seh_ebp = ebp; sub_0029562A(); return; /* tail jmp 0x0029562A */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00295719
 * Original: 0x00295719 - 0x0029574C (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00295719(void)
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

loc_00295719: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xFFFFFD30u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xFFFFFD30u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0029572Eu); RECOMP_ABI_CALL(0x0029574Cu, sub_0029574C); /* call 0x0029574C */

loc_0029572E: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* wait - FPU sync */
    MEM16(ebp + -164) = g_fp_control_word; /* fnstcw word ptr [ebp - 0xa4] */
    MEM8(ebp + -712) = MEM8(ebp + -712) & 0xFD;
    _fa = (uint32_t)(MEM8(ebp + -712)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295744u); RECOMP_ABI_CALL(0x0028FE44u, sub_0028FE44); /* call 0x0028FE44 */

loc_00295744: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295749u); RECOMP_ABI_CALL(0x002955CBu, sub_002955CB); /* call 0x002955CB */

loc_00295749: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0029574C
 * Original: 0x0029574C - 0x00295788 (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0029574C(void)
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

loc_0029574C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xFFFFFFF4u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xFFFFFFF4u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    SET_LO16(eax, MEM16(ebp + 0xE));
    SET_LO16(ebx, LO16(eax));
    SET_LO16(eax, LO16(eax) & 0x7FF0);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7FF0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7FF0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00295782; /* jne: not equal / not zero */

loc_00295764: ;
    SET_LO16(ebx, LO16(ebx) | 0x7FFF);
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(ebp + -2) = LO16(ebx);
    eax = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 8);
    { uint32_t _c = (uint32_t)(0xB) & 31u; if (_c && _c < 32u) { eax = (eax << _c) | (ebx >> (32 - _c)); _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    MEM32(ebp + -6) = eax;
    MEM32(ebp + -10) = ebx;
    fp_push(MEMF(ebp + -10)); /* fld */
    goto loc_00295785;

loc_00295782: ;
    fp_push(MEMD(ebp + 8)); /* fld double */

loc_00295785: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00295788
 * Original: 0x00295788 - 0x00295869 (225 bytes, 79 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295788(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00295788: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x83) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x83 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00295864; /* je: equal / zero */

loc_00295798: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00295864; /* jne: not equal / not zero */

loc_002957A0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_002957AF; /* je: equal / zero */

loc_002957A4: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;
    goto loc_00295864;

loc_002957AF: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x10C) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test LO16(eax), 0x10C (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 0xC) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_002957C4; /* jne: not equal / not zero */

loc_002957BB: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x002957C1u); RECOMP_ABI_CALL(0x00290F26u, sub_00290F26); /* call 0x00290F26 */

loc_002957C1: ;
    POP32(esp, ecx);
    goto loc_002957C9;

loc_002957C4: ;
    eax = MEM32(esi + 8);
    MEM32(esi) = eax;

loc_002957C9: ;
    PUSH32(esp, MEM32(esi + 0x18));
    PUSH32(esp, MEM32(esi + 8));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x002957D7u); RECOMP_ABI_CALL(0x0028BFEBu, sub_0028BFEB); /* call 0x0028BFEB */

loc_002957D7: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00295853; /* je: equal / zero */

loc_002957E1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00295853; /* je: equal / zero */

loc_002957E6: ;
    edx = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x82) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x82 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00295828; /* jne: not equal / not zero */

loc_002957EE: ;
    ecx = MEM32(esi + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_0029580E; /* je: equal / zero */

loc_002957F7: ;
    edi = ecx;
    if (((5) & 31u)) _cf = (int)(((uint32_t)((int32_t)(int32_t)(edi)) >> ((((5) & 31u)) - 1)) & 1);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((5) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = MEM32(edi * 4 + 0x6548A0);
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx + ecx * 4;
    edi = edi + ecx * 8;
    goto loc_00295813;

loc_0029580E: ;
    edi = 0x336E58;

loc_00295813: ;
    SET_LO8(ecx, MEM8(edi + 4));
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) & 0x82);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x82) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x82 (8-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_00295828; /* jne: not equal / not zero */

loc_0029581F: ;
    _cf = 0; /* logical op clears CF */
    edx = edx | 0x2000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = edx;

loc_00295828: ;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), 0x200 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00295845; /* jne: not equal / not zero */

loc_00295831: ;
    ecx = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 8 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00295845; /* je: equal / zero */

loc_00295839: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00295845; /* jne: not equal / not zero */

loc_0029583E: ;
    MEM32(esi + 0x18) = 0x1000;

loc_00295845: ;
    ecx = MEM32(esi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esi + 4) = eax;
    eax = ZX8(MEM8(ecx));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = ecx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00295853: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x10)) >> 32) & 1);
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 0xC) = MEM32(esi + 0xC) | eax;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _cf = 0; /* logical op clears CF */
    MEM32(esi + 4) = MEM32(esi + 4) & 0;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00295864: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00295869
 * Original: 0x00295869 - 0x00295938 (207 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295869(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00295869: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x322C28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295875u); RECOMP_ABI_CALL(0x0028A558u, sub_0028A558); /* call 0x0028A558 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00295875: ;
    PUSH32(esp, 7);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0029587Cu); RECOMP_ABI_CALL(0x0028E352u, sub_0028E352); /* call 0x0028E352 */

loc_0029587C: ;
    POP32(esp, ecx);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = esi;
    eax = MEM32(0x349F20);
    MEM32(ebp + -28) = eax;
    MEM32(0x34A1EC) = esi;
    edi = edi | 0xFFFFFFFFu;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(0x33A03C) = edi;
    MEM32(0x33A030) = edi;
    eax = MEM32(0x34A1F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002958B5; /* je: equal / zero */

loc_002958A8: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002958AEu); RECOMP_ABI_CALL(0x0028BAA8u, sub_0028BAA8); /* call 0x0028BAA8 */

loc_002958AE: ;
    POP32(esp, ecx);
    MEM32(0x34A1F0) = esi;

loc_002958B5: ;
    PUSH32(esp, 0x34A140);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x002958BFu); RECOMP_ABI_CALL(0x00293503u, sub_00293503); /* call 0x00293503 */

loc_002958BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00295926; /* je: equal / zero */

loc_002958C3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x34A1EC) = ecx;
    eax = MEM32(0x34A140);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    MEM32(0x339F98) = eax;
    _fa = (uint32_t)(MEM16(0x34A186)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x34A186), LO16(esi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002958F2; /* je: equal / zero */

loc_002958E2: ;
    edx = MEM32(0x34A194);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x3C);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x339F98) = eax;

loc_002958F2: ;
    _fa = (uint32_t)(MEM16(0x34A1DA)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x34A1DA), LO16(esi) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029591A; /* je: equal / zero */

loc_002958FB: ;
    eax = MEM32(0x34A1E8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0029591A; /* je: equal / zero */

loc_00295904: ;
    MEM32(0x339F9C) = ecx;
    _fb = (uint32_t)(MEM32(0x34A194)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(0x34A194);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    MEM32(0x339FA0) = eax;
    goto loc_00295926;

loc_0029591A: ;
    MEM32(0x339F9C) = esi;
    MEM32(0x339FA0) = esi;

loc_00295926: ;
    PUSH32(esp, edi);
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295930u); RECOMP_ABI_CALL(0x0028ADD2u, sub_0028ADD2); /* call 0x0028ADD2 */

loc_00295930: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295937u); RECOMP_ABI_CALL(0x0028A593u, sub_0028A593); /* call 0x0028A593 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00295937: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295938
 * Original: 0x00295938 - 0x00295941 (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295938(void)
{

loc_00295938: ;
    PUSH32(esp, 7);
    PUSH32(esp, 0x0029593Fu); RECOMP_ABI_CALL(0x0028E2A0u, sub_0028E2A0); /* call 0x0028E2A0 */

loc_0029593F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00295941
 * Original: 0x00295941 - 0x00295AF9 (440 bytes, 160 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00295941(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00295941: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    esi = eax;
    eax = edi;
    PUSH32(esp, 4);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00295A49; /* jne: not equal / not zero */

loc_00295960: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebp + -8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00295973; /* jne: not equal / not zero */

loc_00295967: ;
    eax = edi;
    PUSH32(esp, 0x64);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00295992; /* jne: not equal / not zero */

loc_00295973: ;
    eax = edi + 0x76C;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0x190;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00295992; /* je: equal / zero */

loc_00295985: ;
    eax = esi;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = MEM32(eax + 0x33A078);
    goto loc_0029599D;

loc_00295992: ;
    eax = esi;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = MEM32(eax + 0x33A044);

loc_0029599D: ;
    MEM32(ebp + 0xC) = eax;
    eax = edi + 0x12B;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = edi + -1;
    edi = 0x190;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    PUSH32(esp, 0x64);
    POP32(esp, edi);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 4);
    MEM32(ebp + -4) = eax;
    eax = ebx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    edx = MEM32(ebp + -4);
    POP32(esp, edi);
    PUSH32(esp, 7);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0x10);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ebx = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    edi = MEM32(ebp + 0x10);
    edx = edi;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x16D);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + eax + -25563;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    eax = MEM32(ebp + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)7);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x18) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00295A00; /* jg: greater (signed >) */

loc_002959FA: ;
    esi = esi + eax + -7;
    goto loc_00295A02;

loc_00295A00: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00295A02: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(5) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 5 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00295A7E; /* jne: not equal / not zero */

loc_00295A08: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00295A1A; /* jne: not equal / not zero */

loc_00295A0E: ;
    eax = edi;
    PUSH32(esp, 0x64);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00295A37; /* jne: not equal / not zero */

loc_00295A1A: ;
    eax = edi + 0x76C;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0x190;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00295A37; /* je: equal / zero */

loc_00295A2C: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x33A07C);
    goto loc_00295A40;

loc_00295A37: ;
    eax = MEM32(ebp + 0xC);
    eax = MEM32(eax + 0x33A048);

loc_00295A40: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00295A7E; /* jle: less or equal (signed <=) */

loc_00295A44: ;
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 7;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00295A7E;

loc_00295A49: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00295A59; /* jne: not equal / not zero */

loc_00295A4D: ;
    eax = edi;
    PUSH32(esp, 0x64);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    POP32(esp, ebx);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00295A74; /* jne: not equal / not zero */

loc_00295A59: ;
    eax = edi + 0x76C;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    ebx = 0x190;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00295A74; /* je: equal / zero */

loc_00295A6B: ;
    esi = MEM32(esi * 4 + 0x33A078);
    goto loc_00295A7B;

loc_00295A74: ;
    esi = MEM32(esi * 4 + 0x33A044);

loc_00295A7B: ;
    _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00295A7E: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    _fb = (uint32_t)(MEM32(ebp + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3C);
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00295AAD; /* jne: not equal / not zero */

loc_00295A8D: ;
    _fb = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x33A034) = esi;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3E8);
    _fb = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x33A030) = edi;
    MEM32(0x33A038) = ecx;
    goto loc_00295AF4;

loc_00295AAD: ;
    _fb = (uint32_t)(MEM32(0x339FA0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(0x339FA0);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x33A040) = esi;
    _fb = (uint32_t)(MEM32(ebp + 0x24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebp + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x3E8);
    _fb = (uint32_t)(MEM32(ebp + 0x28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x33A044) = ecx;
    if ((_fas >= 0)) goto loc_00295AD6; /* jns: not sign (positive) */

loc_00295ACD: ;
    _fb = (uint32_t)(0x5265C00) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5265C00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_00295AE2;

loc_00295AD6: ;
    eax = 0x5265C00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00295AEE; /* jl: less (signed <) */

loc_00295ADF: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00295AE2: ;
    MEM32(0x33A044) = ecx;
    MEM32(0x33A040) = esi;

loc_00295AEE: ;
    MEM32(0x33A03C) = edi;

loc_00295AF4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00295AF9
 * Original: 0x00295AF9 - 0x00295C80 (391 bytes, 147 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295AF9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00295AF9: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x339F9C)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x339F9C), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00295B08; /* jne: not equal / not zero */

loc_00295B04: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00295B08: ;
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x14);
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x33A030)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x33A030) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00295B24; /* jne: not equal / not zero */

loc_00295B18: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x33A03C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(0x33A03C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00295C10; /* je: equal / zero */

loc_00295B24: ;
    _fa = (uint32_t)(MEM32(0x34A1EC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x34A1EC), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00295BE4; /* je: equal / zero */

loc_00295B30: ;
    _fa = (uint32_t)(MEM16(0x34A1D8)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x34A1D8), LO16(esi) (16-bit) */
    eax = ZX16(MEM16(0x34A1E6));
    ecx = ZX16(MEM16(0x34A1E0));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(0x34A1E4));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(0x34A1E2));
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_00295B6D; /* jne: not equal / not zero */

loc_00295B58: ;
    eax = ZX16(MEM16(0x34A1DC));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(0x34A1DE));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    goto loc_00295B79;

loc_00295B6D: ;
    eax = ZX16(MEM16(0x34A1DE));
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, esi);

loc_00295B79: ;
    eax = ZX16(MEM16(0x34A1DA));
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00295B86u); RECOMP_ABI_CALL(0x00295941u, sub_00295941); /* call 0x00295941 */

loc_00295B86: ;
    eax = ZX16(MEM16(0x34A192));
    ecx = ZX16(MEM16(0x34A18C));
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(0x34A184)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(0x34A184), LO16(esi) (16-bit) */
    PUSH32(esp, eax);
    eax = ZX16(MEM16(0x34A190));
    PUSH32(esp, eax);
    eax = ZX16(MEM16(0x34A18E));
    PUSH32(esp, eax);
    if (CMP_NE(_fa, _fb)) goto loc_00295BD6; /* jne: not equal / not zero */

loc_00295BB1: ;
    eax = ZX16(MEM16(0x34A188));
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = ZX16(MEM16(0x34A18A));
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);

loc_00295BC4: ;
    eax = ZX16(MEM16(0x34A186));
    PUSH32(esp, esi);
    PUSH32(esp, 0x00295BD1u); RECOMP_ABI_CALL(0x00295941u, sub_00295941); /* call 0x00295941 */

loc_00295BD1: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00295C10;

loc_00295BD6: ;
    eax = ZX16(MEM16(0x34A18A));
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    goto loc_00295BC4;

loc_00295BE4: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, ebp);
    PUSH32(esp, 2);
    POP32(esp, ecx);
    PUSH32(esp, 4);
    POP32(esp, eax);
    PUSH32(esp, 0x00295BF8u); RECOMP_ABI_CALL(0x00295941u, sub_00295941); /* call 0x00295941 */

loc_00295BF8: ;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    PUSH32(esp, 5);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, 2);
    POP32(esp, ecx);
    PUSH32(esp, 0xA);
    POP32(esp, eax);
    PUSH32(esp, 0x00295C0Du); RECOMP_ABI_CALL(0x00295941u, sub_00295941); /* call 0x00295941 */

loc_00295C0D: ;
    _fb = (uint32_t)(0x48) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x48;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00295C10: ;
    edx = MEM32(0x33A034);
    eax = MEM32(0x33A040);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    ecx = MEM32(ebx + 0x1C);
    if (CMP_GE(_fas, _fbs)) goto loc_00295C3C; /* jge: greater or equal (signed >=) */

loc_00295C22: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00295C38; /* jl: less (signed <) */

loc_00295C26: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00295C38; /* jg: greater (signed >) */

loc_00295C2A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00295C4C; /* jle: less or equal (signed <=) */

loc_00295C2E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00295C4C; /* jge: greater or equal (signed >=) */

loc_00295C32: ;
    eax = ebp;

loc_00295C34: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00295C38: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00295C34;

loc_00295C3C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00295C32; /* jl: less (signed <) */

loc_00295C40: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00295C32; /* jg: greater (signed >) */

loc_00295C44: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00295C4C; /* jle: less or equal (signed <=) */

loc_00295C48: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00295C38; /* jl: less (signed <) */

loc_00295C4C: ;
    eax = MEM32(ebx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3E8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00295C73; /* jne: not equal / not zero */

loc_00295C64: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x33A038)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x33A038) (32-bit) */
    SET_LO8(ecx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */

loc_00295C6F: ;
    eax = ecx;
    goto loc_00295C34;

loc_00295C73: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x33A044)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x33A044) (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    goto loc_00295C6F;

}

/**
 * sub_00295C80
 * Original: 0x00295C80 - 0x00295CC3 (67 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00295C80: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x322C38);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295C8Cu); RECOMP_ABI_CALL(0x0028A558u, sub_0028A558); /* call 0x0028A558 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00295C8C: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(0x34A1F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x34A1F4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00295CBD; /* jne: not equal / not zero */

loc_00295C96: ;
    PUSH32(esp, 6);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295C9Du); RECOMP_ABI_CALL(0x0028E352u, sub_0028E352); /* call 0x0028E352 */

loc_00295C9D: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = esi;
    _fa = (uint32_t)(MEM32(0x34A1F4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x34A1F4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00295CB4; /* jne: not equal / not zero */

loc_00295CA9: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295CAEu); RECOMP_ABI_CALL(0x00295869u, sub_00295869); /* call 0x00295869 */

loc_00295CAE: ;
    MEM32(0x34A1F4) = MEM32(0x34A1F4) + 1;
    _fa = (uint32_t)(MEM32(0x34A1F4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00295CB4: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295CBDu); RECOMP_ABI_CALL(0x00295CC3u, sub_00295CC3); /* call 0x00295CC3 */

loc_00295CBD: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295CC2u); RECOMP_ABI_CALL(0x0028A593u, sub_0028A593); /* call 0x0028A593 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00295CC2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295CC3
 * Original: 0x00295CC3 - 0x00295CCC (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295CC3(void)
{

loc_00295CC3: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x00295CCAu); RECOMP_ABI_CALL(0x0028E2A0u, sub_0028E2A0); /* call 0x0028E2A0 */

loc_00295CCA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00295CCC
 * Original: 0x00295CCC - 0x00295D01 (53 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295CCC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00295CCC: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x322C48);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295CD8u); RECOMP_ABI_CALL(0x0028A558u, sub_0028A558); /* call 0x0028A558 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00295CD8: ;
    PUSH32(esp, 6);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295CDFu); RECOMP_ABI_CALL(0x0028E352u, sub_0028E352); /* call 0x0028E352 */

loc_00295CDF: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295CECu); RECOMP_ABI_CALL(0x00295AF9u, sub_00295AF9); /* call 0x00295AF9 */

loc_00295CEC: ;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295CF8u); RECOMP_ABI_CALL(0x00295D01u, sub_00295D01); /* call 0x00295D01 */

loc_00295CF8: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295D00u); RECOMP_ABI_CALL(0x0028A593u, sub_0028A593); /* call 0x0028A593 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00295D00: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00295D01
 * Original: 0x00295D01 - 0x00295D0A (9 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295D01(void)
{

loc_00295D01: ;
    PUSH32(esp, 6);
    PUSH32(esp, 0x00295D08u); RECOMP_ABI_CALL(0x0028E2A0u, sub_0028E2A0); /* call 0x0028E2A0 */

loc_00295D08: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00295D0A
 * Original: 0x00295D0A - 0x00295E11 (263 bytes, 105 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295D0A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00295D0A: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00295D1Au); RECOMP_ABI_CALL(0x0028E5AFu, sub_0028E5AF); /* call 0x0028E5AF */

loc_00295D1A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_00295D27; /* jge: greater or equal (signed >=) */

loc_00295D20: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00295E0D;

loc_00295D27: ;
    _fa = (uint32_t)(MEM32(edi + 0x44)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x44), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00295D41; /* jne: not equal / not zero */

loc_00295D2D: ;
    PUSH32(esp, 0x24);
    PUSH32(esp, 0x00295D34u); RECOMP_ABI_CALL(0x0028BA96u, sub_0028BA96); /* call 0x0028BA96 */

loc_00295D34: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    MEM32(edi + 0x44) = eax;
    ecx = 0x34A1F8;
    if (CMP_EQ(_fa, _fb)) goto loc_00295D44; /* je: equal / zero */

loc_00295D41: ;
    ecx = MEM32(edi + 0x44);

loc_00295D44: ;
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0x7861F80;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    edx = eax;
    edx = (uint32_t)((int32_t)edx * (int32_t)0xF879E080u);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = eax * 4 + 0x46;
    eax = 0x1E13380;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00295D83; /* jl: less (signed <) */

loc_00295D68: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00295D83; /* jl: less (signed <) */

loc_00295D6F: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0x1E28500;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00295D80; /* jl: less (signed <) */

loc_00295D7B: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00295D83;

loc_00295D80: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00295D83: ;
    eax = esi;
    MEM32(ecx + 0x14) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = 0x15180;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    edi = 0x33A048;
    MEM32(ecx + 0x1C) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xFFFEAE80u);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00295DA9; /* jne: not equal / not zero */

loc_00295DA4: ;
    edi = 0x33A07C;

loc_00295DA9: ;
    eax = MEM32(ecx + 0x1C);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(edi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 4), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00295DBC; /* jge: greater or equal (signed >=) */

loc_00295DB4: ;
    ebx = eax;

loc_00295DB6: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(edi + edx * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + edx * 4), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00295DB6; /* jl: less (signed <) */

loc_00295DBC: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + 0x10) = edx;
    _fb = (uint32_t)(MEM32(edi + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edi + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0x15180;
    MEM32(ecx + 0xC) = eax;
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    PUSH32(esp, 7);
    POP32(esp, edi);
    PUSH32(esp, 0x3C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = esi;
    edi = 0xE10;
    MEM32(ecx + 0x18) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    POP32(esp, edi);
    MEM32(ecx + 8) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0xFFFFF1F0u);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    MEM32(ecx + 4) = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 0x20) = MEM32(ecx + 0x20) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x20)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = esi;
    eax = ecx;

loc_00295E0D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00295E11
 * Original: 0x00295E11 - 0x00295E7D (108 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295E11(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00295E11: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00295E5D; /* je: equal / zero */

loc_00295E1C: ;
    esi = MEM32(esp + 0x10);
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00295E2F; /* jne: not equal / not zero */

loc_00295E27: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00295E5D; /* jns: not sign (positive) */

loc_00295E2B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00295E5D; /* jne: not equal / not zero */

loc_00295E2F: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00295E3C; /* jne: not equal / not zero */

loc_00295E35: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00295E3Bu); RECOMP_ABI_CALL(0x00290F26u, sub_00290F26); /* call 0x00290F26 */

loc_00295E3B: ;
    POP32(esp, ecx);

loc_00295E3C: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00295E4C; /* jne: not equal / not zero */

loc_00295E43: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00295E5D; /* jne: not equal / not zero */

loc_00295E49: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;

loc_00295E4C: ;
    MEM32(esi) = MEM32(esi) - 1;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0xC)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xC), 0x40 (8-bit) */
    eax = MEM32(esi);
    if (TEST_Z(_fa, _fb)) goto loc_00295E63; /* je: equal / zero */

loc_00295E56: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00295E65; /* je: equal / zero */

loc_00295E5A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;

loc_00295E5D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00295E60: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00295E63: ;
    MEM8(eax) = LO8(ebx);

loc_00295E65: ;
    eax = MEM32(esi + 0xC);
    MEM32(esi + 4) = MEM32(esi + 4) + 1;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0xFFFFFFEFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esi + 0xC) = eax;
    eax = ebx;
    eax = eax & 0xFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00295E60;

}

/**
 * sub_00295E7D
 * Original: 0x00295E7D - 0x00295EBF (66 bytes, 26 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00295E7D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00295E7D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0);
    PUSH32(esp, 4);
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, 9);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295E95u); RECOMP_ABI_CALL(0x00284E5Eu, sub_00284E5E); /* call 0x00284E5E */

loc_00295E95: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00295E9D; /* jge: greater or equal (signed >=) */

loc_00295E99: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00295E9D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295EA2u); RECOMP_ABI_CALL(0x002939D7u, sub_002939D7); /* call 0x002939D7 */

loc_00295EA2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00295EB3; /* je: equal / zero */

loc_00295EA7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00295EBA; /* jne: not equal / not zero */

loc_00295EAC: ;
    MEM16(ebp + -2) = MEM16(ebp + -2) & 0;
    _fa = (uint32_t)(MEM16(ebp + -2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    goto loc_00295EBA;

loc_00295EB3: ;
    MEM32(ebp + -4) = 1;

loc_00295EBA: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00295EBF
 * Original: 0x00295EBF - 0x00295EED (46 bytes, 19 insns)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00295EBF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00295EBF: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = ebp + 0xC;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    eax = ebp + 8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C8C0); PUSH32(esp, 0x00295ED8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00295ED2u); } /* indirect call */
    }

loc_00295ED8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00295EE1; /* jl: less (signed <) */

loc_00295EDC: ;
    eax = MEM32(ebp + 8);
    goto loc_00295EE9;

loc_00295EE1: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295EE7u); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_00295EE7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00295EE9: ;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00295EED
 * Original: 0x00295EED - 0x00295F29 (60 bytes, 24 insns)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00295EED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00295EED: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM8(ebp + 0x11)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x11), 0x80 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00295F03; /* je: equal / zero */

loc_00295EF6: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00295F03; /* je: equal / zero */

loc_00295EFC: ;
    PUSH32(esp, 0xC000000Du);
    goto loc_00295F1E;

loc_00295F03: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(0x31C8BC); PUSH32(esp, 0x00295F14u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00295F0Eu); } /* indirect call */
    }

loc_00295F14: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00295F1D; /* jl: less (signed <) */

loc_00295F18: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00295F25;

loc_00295F1D: ;
    PUSH32(esp, eax);

loc_00295F1E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295F23u); RECOMP_ABI_CALL(0x002804D3u, sub_002804D3); /* call 0x002804D3 */

loc_00295F23: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00295F25: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00295F29
 * Original: 0x00295F29 - 0x00295F59 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295F29(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00295F29: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x334108);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295F35u); RECOMP_ABI_CALL(0x0028A558u, sub_0028A558); /* call 0x0028A558 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00295F35: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295F42u); RECOMP_ABI_CALL(0x0029608Du, sub_0029608D); /* call 0x0029608D */

loc_00295F42: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00295F4D;

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00295F4D: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00295F58u); RECOMP_ABI_CALL(0x0028E1C9u, sub_0028E1C9); /* call 0x0028E1C9 */

loc_00295F58: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00295F46
 * Original: 0x00295F46 - 0x00295F59 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295F46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00295F46: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00295F4A
 * Original: 0x00295F4A - 0x00295F59 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295F4A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00295F4A: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 3);
    PUSH32(esp, 0x00295F58u); RECOMP_ABI_CALL(0x0028E1C9u, sub_0028E1C9); /* call 0x0028E1C9 */

loc_00295F58: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00295F59
 * Original: 0x00295F59 - 0x00295F67 (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295F59(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00295F59: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x336F0C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x336F0C) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00295F62; /* jne: not equal / not zero */

loc_00295F61: ;
    esp += 4; return; /* ret */

loc_00295F62: ;
    g_seh_ebp = ebp; sub_00295F29(); return; /* tail jmp 0x00295F29 */

}

/**
 * sub_00295F68
 * Original: 0x00295F68 - 0x00295F7C (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295F68(void)
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

loc_00295F68: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); /* fst */
    PUSH32(esp, 0x00295F73u); RECOMP_ABI_CALL(0x002900ECu, sub_002900EC); /* call 0x002900EC */

loc_00295F73: ;
    PUSH32(esp, 0x00295F78u); RECOMP_ABI_CALL(0x00295F85u, sub_00295F85); /* call 0x00295F85 */

loc_00295F78: ;
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
 * sub_00295F85
 * Original: 0x00295F85 - 0x00296033 (174 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00295F85(void)
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

loc_00295F85: ;
    PUSH32(esp, edx);
    /* wait - FPU sync */
    MEM16(esp) = g_fp_control_word; /* fnstcw word ptr [esp] */
    if (_flags /* je: equal / zero */) goto loc_00295FF9;

loc_00295F8C: ;
    _fa = (uint32_t)(MEM16(esp)) & 0xFFFFu; _fb = (uint32_t)(0x27F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp), 0x27F (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00295F99; /* je: equal / zero */

loc_00295F94: ;
    PUSH32(esp, 0x00295F99u); RECOMP_ABI_CALL(0x00290079u, sub_00290079); /* call 0x00290079 */

loc_00295F99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FF00000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00295FCB; /* jae: above or equal (unsigned >=) */

loc_00295FA0: ;
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */

loc_00295FAE: ;
    _fa = (uint32_t)(MEM32(0x349EF8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x349EF8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00290102(); return; } /* jne: not equal / not zero */

loc_00295FBB: ;
    edx = 0xE;
    ecx = 0x3449D8;
    g_seh_ebp = ebp; sub_0029010F(); return; /* tail jmp 0x0029010F */

loc_00295FCB: ;
    if (CMP_A(_fa, _fb)) goto loc_00296007; /* ja: above (unsigned >) */

loc_00295FCD: ;
    eax = MEM32(esp + 0xC);
    ecx = eax;
    eax = eax & 0xFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_00296007; /* jne: not equal / not zero */

loc_00295FDE: ;
    ecx = ecx & 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x336EE6)); /* fld */
    if ((_fa == 0)) goto loc_00295FAE; /* je: equal / zero */

loc_00295FEE: ;
    fp_top() = -fp_top(); /* fchs */
    goto loc_00295FAE;

loc_00295FF2: ;
    PUSH32(esp, 0x00295FF7u); RECOMP_ABI_CALL(0x00290090u, sub_00290090); /* call 0x00290090 */

loc_00295FF7: ;
    goto loc_00296014;

loc_00295FF9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00295FF2; /* jne: not equal / not zero */

loc_00296000: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00295FF2; /* jne: not equal / not zero */

loc_00296007: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x336EDC)); /* fld */
    eax = 1;

loc_00296014: ;
    _fa = (uint32_t)(MEM32(0x349EF8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x349EF8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00290102(); return; } /* jne: not equal / not zero */

loc_00296021: ;
    edx = 0xE;
    ecx = 0x3449D8;
    PUSH32(esp, 0x00296031u); RECOMP_ABI_CALL(0x00290027u, sub_00290027); /* call 0x00290027 */

loc_00296031: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00296033
 * Original: 0x00296033 - 0x0029608D (90 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00296033(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00296033: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00296049; /* je: equal / zero */

loc_00296042: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBB40E64Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBB40E64Eu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029608B; /* jne: not equal / not zero */

loc_00296049: ;
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00296053u); RECOMP_ABI_CALL(0x002930BFu, sub_002930BF); /* call 0x002930BF */

loc_00296053: ;
    esi = MEM32(ebp + -4);
    esi = esi ^ MEM32(ebp + -8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0029605Eu); RECOMP_ABI_CALL(0x0027FBEBu, sub_0027FBEB); /* call 0x0027FBEB */

loc_0029605E: ;
    esi = esi ^ eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00296065u); RECOMP_ABI_CALL(0x00293211u, sub_00293211); /* call 0x00293211 */

loc_00296065: ;
    esi = esi ^ eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00296070u); RECOMP_ABI_CALL(0x00293032u, sub_00293032); /* call 0x00293032 */

loc_00296070: ;
    eax = MEM32(ebp + -12);
    eax = eax ^ MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi ^ eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x336F0C) = esi;
    if ((_fa != 0)) goto loc_0029608A; /* jne: not equal / not zero */

loc_00296080: ;
    MEM32(0x336F0C) = 0xBB40E64Eu;

loc_0029608A: ;
    POP32(esp, esi);

loc_0029608B: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_0029608D
 * Original: 0x0029608D - 0x00296228 (411 bytes, 165 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029608D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029608D: ;
    PUSH32(esp, 0x11C);
    PUSH32(esp, 0x3342D8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0029609Cu); RECOMP_ABI_CALL(0x0028A558u, sub_0028A558); /* call 0x0028A558 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_0029609C: ;
    eax = MEM32(0x6544F0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_002960C5; /* je: equal / zero */

loc_002960A5: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = eax; PUSH32(esp, 0x002960B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x002960AFu); } /* indirect call */
    }

loc_002960B1: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_002960B3: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0029620E;

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_002960C5: ;
    eax = MEM32(ebp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002960E0; /* je: equal / zero */

loc_002960CB: ;
    MEM32(ebp + -32) = 0x3342B4;
    MEM32(ebp + -36) = 0x334200;
    ebx = 0xD4;
    goto loc_002960F3;

loc_002960E0: ;
    MEM32(ebp + -32) = 0x3341E0;
    MEM32(ebp + -36) = 0x334140;
    ebx = 0xB9;

loc_002960F3: ;
    MEM8(ebp + -40) = 0;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    esi = 0x334124;
    edi = ebp + -300;
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
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    eax = ebp + -300;
    MEM32(ebp + -28) = eax;
    edx = eax + 1;

loc_00296116: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00296116; /* jne: not equal / not zero */

loc_0029611D: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00296153; /* jbe: below or equal (unsigned <=) */

loc_00296127: ;
    eax = ebp + -300;
    edx = eax + 1;

loc_00296130: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00296130; /* jne: not equal / not zero */

loc_00296137: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + eax + -349;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 3);
    PUSH32(esp, 0x334120);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00296150u); RECOMP_ABI_CALL(0x0028A6F0u, sub_0028A6F0); /* call 0x0028A6F0 */

loc_00296150: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00296153: ;
    eax = MEM32(ebp + -28);
    ecx = eax + 1;

loc_00296159: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00296159; /* jne: not equal / not zero */

loc_00296160: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + ebx + 0xC;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00296171u); RECOMP_ABI_CALL(0x0028A870u, sub_0028A870); /* call 0x0028A870 */

loc_00296171: ;
    MEM32(ebp + -24) = esp;
    edx = esp;
    eax = MEM32(ebp + -32);
    esi = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0029617D: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(esi + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029617D; /* jne: not equal / not zero */

loc_00296187: ;
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0029618A: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029618A; /* jne: not equal / not zero */

loc_00296192: ;
    ebx = 0x32FE70;
    esi = ebx;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0029619F: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029619F; /* jne: not equal / not zero */

loc_002961A7: ;
    esi = 0x334114;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    eax = MEM32(ebp + -28);
    esi = eax;

loc_002961B5: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002961B5; /* jne: not equal / not zero */

loc_002961BC: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002961C1: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002961C1; /* jne: not equal / not zero */

loc_002961C9: ;
    ecx = eax;
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
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002961DA: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002961DA; /* jne: not equal / not zero */

loc_002961E2: ;
    esi = ebx;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    eax = MEM32(ebp + -36);
    esi = eax;

loc_002961EC: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002961EC; /* jne: not equal / not zero */

loc_002961F3: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002961F6: ;
    SET_LO8(ecx, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002961F6; /* jne: not equal / not zero */

loc_002961FE: ;
    edi = edx;
    ecx = eax;
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

loc_0029620E: ;
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00296215u); RECOMP_ABI_CALL(0x0028E1C9u, sub_0028E1C9); /* call 0x0028E1C9 */

loc_00296215: ;
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
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000172D0(); return; /* tail jmp 0x000172D0 */

}

/**
 * sub_002960BC
 * Original: 0x002960BC - 0x00296228 (364 bytes, 151 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002960BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002960BC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    eax = MEM32(ebp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002960E0; /* je: equal / zero */

loc_002960CB: ;
    MEM32(ebp + -32) = 0x3342B4;
    MEM32(ebp + -36) = 0x334200;
    ebx = 0xD4;
    goto loc_002960F3;

loc_002960E0: ;
    MEM32(ebp + -32) = 0x3341E0;
    MEM32(ebp + -36) = 0x334140;
    ebx = 0xB9;

loc_002960F3: ;
    MEM8(ebp + -40) = 0;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    esi = 0x334124;
    edi = ebp + -300;
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
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    eax = ebp + -300;
    MEM32(ebp + -28) = eax;
    edx = eax + 1;

loc_00296116: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00296116; /* jne: not equal / not zero */

loc_0029611D: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00296153; /* jbe: below or equal (unsigned <=) */

loc_00296127: ;
    eax = ebp + -300;
    edx = eax + 1;

loc_00296130: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00296130; /* jne: not equal / not zero */

loc_00296137: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + eax + -349;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 3);
    PUSH32(esp, 0x334120);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00296150u); RECOMP_ABI_CALL(0x0028A6F0u, sub_0028A6F0); /* call 0x0028A6F0 */

loc_00296150: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00296153: ;
    eax = MEM32(ebp + -28);
    ecx = eax + 1;

loc_00296159: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00296159; /* jne: not equal / not zero */

loc_00296160: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + ebx + 0xC;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x00296171u); RECOMP_ABI_CALL(0x0028A870u, sub_0028A870); /* call 0x0028A870 */

loc_00296171: ;
    MEM32(ebp + -24) = esp;
    edx = esp;
    eax = MEM32(ebp + -32);
    esi = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0029617D: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(esi + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029617D; /* jne: not equal / not zero */

loc_00296187: ;
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0029618A: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029618A; /* jne: not equal / not zero */

loc_00296192: ;
    ebx = 0x32FE70;
    esi = ebx;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0029619F: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029619F; /* jne: not equal / not zero */

loc_002961A7: ;
    esi = 0x334114;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    eax = MEM32(ebp + -28);
    esi = eax;

loc_002961B5: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002961B5; /* jne: not equal / not zero */

loc_002961BC: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002961C1: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002961C1; /* jne: not equal / not zero */

loc_002961C9: ;
    ecx = eax;
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
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002961DA: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002961DA; /* jne: not equal / not zero */

loc_002961E2: ;
    esi = ebx;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    eax = MEM32(ebp + -36);
    esi = eax;

loc_002961EC: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002961EC; /* jne: not equal / not zero */

loc_002961F3: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002961F6: ;
    SET_LO8(ecx, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002961F6; /* jne: not equal / not zero */

loc_002961FE: ;
    edi = edx;
    ecx = eax;
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
    PUSH32(esp, 3);
    PUSH32(esp, 0x00296215u); RECOMP_ABI_CALL(0x0028E1C9u, sub_0028E1C9); /* call 0x0028E1C9 */

loc_00296215: ;
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
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000172D0(); return; /* tail jmp 0x000172D0 */

}

/**
 * sub_002960C0
 * Original: 0x002960C0 - 0x00296228 (360 bytes, 148 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002960C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002960C0: ;
    esp = MEM32(ebp + -24);
    g_seh_ebp = ebp; sub_002960B3(); return; /* tail jmp 0x002960B3 */

    eax = MEM32(ebp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_002960E0; /* je: equal / zero */

loc_002960CB: ;
    MEM32(ebp + -32) = 0x3342B4;
    MEM32(ebp + -36) = 0x334200;
    ebx = 0xD4;
    goto loc_002960F3;

loc_002960E0: ;
    MEM32(ebp + -32) = 0x3341E0;
    MEM32(ebp + -36) = 0x334140;
    ebx = 0xB9;

loc_002960F3: ;
    MEM8(ebp + -40) = 0;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    esi = 0x334124;
    edi = ebp + -300;
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
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    eax = ebp + -300;
    MEM32(ebp + -28) = eax;
    edx = eax + 1;

loc_00296116: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00296116; /* jne: not equal / not zero */

loc_0029611D: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00296153; /* jbe: below or equal (unsigned <=) */

loc_00296127: ;
    eax = ebp + -300;
    edx = eax + 1;

loc_00296130: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00296130; /* jne: not equal / not zero */

loc_00296137: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + eax + -349;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 3);
    PUSH32(esp, 0x334120);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00296150u); RECOMP_ABI_CALL(0x0028A6F0u, sub_0028A6F0); /* call 0x0028A6F0 */

loc_00296150: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00296153: ;
    eax = MEM32(ebp + -28);
    ecx = eax + 1;

loc_00296159: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00296159; /* jne: not equal / not zero */

loc_00296160: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + ebx + 0xC;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x00296171u); RECOMP_ABI_CALL(0x0028A870u, sub_0028A870); /* call 0x0028A870 */

loc_00296171: ;
    MEM32(ebp + -24) = esp;
    edx = esp;
    eax = MEM32(ebp + -32);
    esi = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0029617D: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(esi + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029617D; /* jne: not equal / not zero */

loc_00296187: ;
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0029618A: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029618A; /* jne: not equal / not zero */

loc_00296192: ;
    ebx = 0x32FE70;
    esi = ebx;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0029619F: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0029619F; /* jne: not equal / not zero */

loc_002961A7: ;
    esi = 0x334114;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    eax = MEM32(ebp + -28);
    esi = eax;

loc_002961B5: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002961B5; /* jne: not equal / not zero */

loc_002961BC: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002961C1: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002961C1; /* jne: not equal / not zero */

loc_002961C9: ;
    ecx = eax;
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
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002961DA: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002961DA; /* jne: not equal / not zero */

loc_002961E2: ;
    esi = ebx;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    eax = MEM32(ebp + -36);
    esi = eax;

loc_002961EC: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002961EC; /* jne: not equal / not zero */

loc_002961F3: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_002961F6: ;
    SET_LO8(ecx, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_002961F6; /* jne: not equal / not zero */

loc_002961FE: ;
    edi = edx;
    ecx = eax;
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
    PUSH32(esp, 3);
    PUSH32(esp, 0x00296215u); RECOMP_ABI_CALL(0x0028E1C9u, sub_0028E1C9); /* call 0x0028E1C9 */

loc_00296215: ;
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
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000172D0(); return; /* tail jmp 0x000172D0 */

}

/**
 * sub_00296220
 * Original: 0x00296220 - 0x00296228 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296220(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296220: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000172D0(); return; /* tail jmp 0x000172D0 */

}

/**
 * sub_00296232
 * Original: 0x00296232 - 0x0029623A (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296232(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296232: ;
    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_002D0FAA(); return; /* tail jmp 0x002D0FAA */

}

/**
 * sub_0029623A
 * Original: 0x0029623A - 0x0029624F (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029623A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029623A: ;
    ecx = ebp + -1056;
    g_seh_ebp = ebp; sub_002DFFB6(); return; /* tail jmp 0x002DFFB6 */

    eax = 0x334398;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029624F
 * Original: 0x0029624F - 0x00296257 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029624F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029624F: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_00296257
 * Original: 0x00296257 - 0x0029625F (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296257(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296257: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_0029625F
 * Original: 0x0029625F - 0x00296271 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029625F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029625F: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x334400;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296271
 * Original: 0x00296271 - 0x00296283 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296271(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296271: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x334424;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296283
 * Original: 0x00296283 - 0x0029628B (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296283(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296283: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_002D2ADB(); return; /* tail jmp 0x002D2ADB */

}

/**
 * sub_0029628B
 * Original: 0x0029628B - 0x00296293 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029628B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029628B: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_002D2ADB(); return; /* tail jmp 0x002D2ADB */

}

/**
 * sub_00296293
 * Original: 0x00296293 - 0x002962A5 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296293(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296293: ;
    ecx = ebp + -48;
    g_seh_ebp = ebp; sub_002D2ADB(); return; /* tail jmp 0x002D2ADB */

    eax = 0x334458;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002962A5
 * Original: 0x002962A5 - 0x002962B7 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002962A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002962A5: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x33447C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002962B7
 * Original: 0x002962B7 - 0x002962C9 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002962B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002962B7: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x3344A0;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002962C9
 * Original: 0x002962C9 - 0x002962D1 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002962C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002962C9: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_002962D1
 * Original: 0x002962D1 - 0x002962E3 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002962D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002962D1: ;
    ecx = ebp + 0x10;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x334898;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002962E3
 * Original: 0x002962E3 - 0x002962EB (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002962E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002962E3: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_002D6DFF(); return; /* tail jmp 0x002D6DFF */

}

/**
 * sub_002962EB
 * Original: 0x002962EB - 0x00296300 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002962EB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002962EB: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D2ADB(); return; /* tail jmp 0x002D2ADB */

    eax = 0x33472C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296300
 * Original: 0x00296300 - 0x00296308 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296300: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_00296308
 * Original: 0x00296308 - 0x00296310 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296308(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296308: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_002D6DFF(); return; /* tail jmp 0x002D6DFF */

}

/**
 * sub_00296310
 * Original: 0x00296310 - 0x0029631B (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296310: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D4E94(); return; /* tail jmp 0x002D4E94 */

}

/**
 * sub_0029631B
 * Original: 0x0029631B - 0x00296325 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029631B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029631B: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x00296323u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_00296323: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296325
 * Original: 0x00296325 - 0x0029632F (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296325(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296325: ;
    eax = 0x3344DC;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029632F
 * Original: 0x0029632F - 0x00296339 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029632F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029632F: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x00296337u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_00296337: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296339
 * Original: 0x00296339 - 0x00296343 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296339(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296339: ;
    eax = 0x334500;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296343
 * Original: 0x00296343 - 0x00296355 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296343(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296343: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_002D4EBC(); return; /* tail jmp 0x002D4EBC */

    eax = 0x334524;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296355
 * Original: 0x00296355 - 0x0029635D (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296355(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296355: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_002D6DFF(); return; /* tail jmp 0x002D6DFF */

}

/**
 * sub_0029635D
 * Original: 0x0029635D - 0x00296368 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029635D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029635D: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_00296368
 * Original: 0x00296368 - 0x00296373 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296368(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296368: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_00296373
 * Original: 0x00296373 - 0x00296388 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296373(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296373: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x334560;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296388
 * Original: 0x00296388 - 0x00296392 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296388(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296388: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x00296390u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_00296390: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296392
 * Original: 0x00296392 - 0x0029639C (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296392(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296392: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x0029639Au); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_0029639A: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0029639C
 * Original: 0x0029639C - 0x002963A6 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029639C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029639C: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x002963A4u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002963A4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002963A6
 * Original: 0x002963A6 - 0x002963B0 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002963A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002963A6: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x002963AEu); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002963AE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002963B0
 * Original: 0x002963B0 - 0x002963BA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002963B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002963B0: ;
    eax = 0x33459C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002963BA
 * Original: 0x002963BA - 0x002963C4 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002963BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002963BA: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x002963C2u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002963C2: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002963C4
 * Original: 0x002963C4 - 0x002963CE (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002963C4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002963C4: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x002963CCu); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002963CC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002963CE
 * Original: 0x002963CE - 0x002963D8 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002963CE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002963CE: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x002963D6u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002963D6: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002963D8
 * Original: 0x002963D8 - 0x002963E2 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002963D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002963D8: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x002963E0u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002963E0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002963E2
 * Original: 0x002963E2 - 0x002963EC (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002963E2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002963E2: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x002963EAu); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002963EA: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002963EC
 * Original: 0x002963EC - 0x002963F6 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002963EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002963EC: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x002963F4u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002963F4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002963F6
 * Original: 0x002963F6 - 0x00296400 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002963F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002963F6: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x002963FEu); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002963FE: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296400
 * Original: 0x00296400 - 0x0029640A (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296400(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296400: ;
    eax = 0x3345F0;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029640A
 * Original: 0x0029640A - 0x00296412 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029640A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029640A: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_002D2ADB(); return; /* tail jmp 0x002D2ADB */

}

/**
 * sub_00296412
 * Original: 0x00296412 - 0x0029641A (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296412(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296412: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_0029641A
 * Original: 0x0029641A - 0x0029642C (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029641A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029641A: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x334624;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029642C
 * Original: 0x0029642C - 0x00296434 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029642C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029642C: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_002D6DFF(); return; /* tail jmp 0x002D6DFF */

}

/**
 * sub_00296434
 * Original: 0x00296434 - 0x0029643F (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296434(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296434: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D4E9F(); return; /* tail jmp 0x002D4E9F */

}

/**
 * sub_0029643F
 * Original: 0x0029643F - 0x0029644A (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029643F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029643F: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D59C2(); return; /* tail jmp 0x002D59C2 */

}

/**
 * sub_0029644A
 * Original: 0x0029644A - 0x00296455 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029644A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029644A: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D59C2(); return; /* tail jmp 0x002D59C2 */

}

/**
 * sub_00296455
 * Original: 0x00296455 - 0x0029646A (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296455(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296455: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D59C2(); return; /* tail jmp 0x002D59C2 */

    eax = 0x334668;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029646A
 * Original: 0x0029646A - 0x0029647C (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029646A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029646A: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_002D79AE(); return; /* tail jmp 0x002D79AE */

    eax = 0x33468C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029647C
 * Original: 0x0029647C - 0x00296484 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029647C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029647C: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_002D6DFF(); return; /* tail jmp 0x002D6DFF */

}

/**
 * sub_00296484
 * Original: 0x00296484 - 0x00296499 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296484(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296484: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D4E94(); return; /* tail jmp 0x002D4E94 */

    eax = 0x3346B8;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296499
 * Original: 0x00296499 - 0x002964AB (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296499(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296499: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x3346DC;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002964AB
 * Original: 0x002964AB - 0x002964BD (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002964AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002964AB: ;
    ecx = ebp + -48;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x334700;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002964BD
 * Original: 0x002964BD - 0x002964CF (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002964BD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002964BD: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_002D2ADB(); return; /* tail jmp 0x002D2ADB */

    eax = 0x334760;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002964CF
 * Original: 0x002964CF - 0x002964E1 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002964CF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002964CF: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x334784;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002964E1
 * Original: 0x002964E1 - 0x002964F3 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002964E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002964E1: ;
    ecx = ebp + 0x1C;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x3347A8;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002964F3
 * Original: 0x002964F3 - 0x002964FE (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002964F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002964F3: ;
    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_002D2ADB(); return; /* tail jmp 0x002D2ADB */

}

/**
 * sub_002964FE
 * Original: 0x002964FE - 0x00296509 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002964FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002964FE: ;
    ecx = ebp + -200;
    g_seh_ebp = ebp; sub_002D2ADB(); return; /* tail jmp 0x002D2ADB */

}

/**
 * sub_00296509
 * Original: 0x00296509 - 0x00296511 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296509(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296509: ;
    ecx = ebp + -76;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_00296511
 * Original: 0x00296511 - 0x00296519 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296511(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296511: ;
    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_00296519
 * Original: 0x00296519 - 0x00296521 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296519(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296519: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_00296521
 * Original: 0x00296521 - 0x00296529 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296521(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296521: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_002D2ADB(); return; /* tail jmp 0x002D2ADB */

}

/**
 * sub_00296529
 * Original: 0x00296529 - 0x00296531 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296529(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296529: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_00296531
 * Original: 0x00296531 - 0x00296539 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296531(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296531: ;
    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_00296539
 * Original: 0x00296539 - 0x0029654B (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296539(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296539: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_002D2ADB(); return; /* tail jmp 0x002D2ADB */

    eax = 0x33480C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029654B
 * Original: 0x0029654B - 0x00296564 (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029654B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029654B: ;
    eax = MEM32(ebp + -16);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00296563; /* je: equal / zero */

loc_00296557: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -48;
    g_seh_ebp = ebp; sub_002D2ADB(); return; /* tail jmp 0x002D2ADB */

loc_00296563: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296564
 * Original: 0x00296564 - 0x0029656E (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296564(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296564: ;
    eax = 0x334830;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029656E
 * Original: 0x0029656E - 0x00296576 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029656E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029656E: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_00296576
 * Original: 0x00296576 - 0x0029657E (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296576(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296576: ;
    ecx = ebp + 0x10;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_0029657E
 * Original: 0x0029657E - 0x00296586 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029657E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029657E: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_002D4EBC(); return; /* tail jmp 0x002D4EBC */

}

/**
 * sub_00296586
 * Original: 0x00296586 - 0x00296598 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296586(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296586: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_002D2ADB(); return; /* tail jmp 0x002D2ADB */

    eax = 0x33486C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296598
 * Original: 0x00296598 - 0x002965A0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296598(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296598: ;
    ecx = MEM32(ebp + -24);
    g_seh_ebp = ebp; sub_002D6DFF(); return; /* tail jmp 0x002D6DFF */

}

/**
 * sub_002965A0
 * Original: 0x002965A0 - 0x002965AB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002965A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002965A0: ;
    ecx = MEM32(ebp + -24);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_002965AB
 * Original: 0x002965AB - 0x002965B6 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002965AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002965AB: ;
    ecx = MEM32(ebp + -24);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_002965B6
 * Original: 0x002965B6 - 0x002965C1 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002965B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002965B6: ;
    ecx = MEM32(ebp + -24);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_002965C1
 * Original: 0x002965C1 - 0x002965CB (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002965C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002965C1: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x002965C9u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002965C9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002965CB
 * Original: 0x002965CB - 0x002965D5 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002965CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002965CB: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x002965D3u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002965D3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002965D5
 * Original: 0x002965D5 - 0x002965DF (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002965D5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002965D5: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x002965DDu); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002965DD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002965DF
 * Original: 0x002965DF - 0x002965E9 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002965DF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002965DF: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x002965E7u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002965E7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002965E9
 * Original: 0x002965E9 - 0x002965F3 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002965E9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002965E9: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x002965F1u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002965F1: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002965F3
 * Original: 0x002965F3 - 0x002965FD (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002965F3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002965F3: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x002965FBu); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002965FB: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002965FD
 * Original: 0x002965FD - 0x00296607 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002965FD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002965FD: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x00296605u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_00296605: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296607
 * Original: 0x00296607 - 0x00296611 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296607(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296607: ;
    eax = 0x33490C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296611
 * Original: 0x00296611 - 0x00296619 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296611(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296611: ;
    ecx = MEM32(ebp + -40);
    g_seh_ebp = ebp; sub_002D6DFF(); return; /* tail jmp 0x002D6DFF */

}

/**
 * sub_00296619
 * Original: 0x00296619 - 0x00296624 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296619(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296619: ;
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D4E9F(); return; /* tail jmp 0x002D4E9F */

}

/**
 * sub_00296624
 * Original: 0x00296624 - 0x0029662F (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296624(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296624: ;
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D59C2(); return; /* tail jmp 0x002D59C2 */

}

/**
 * sub_0029662F
 * Original: 0x0029662F - 0x0029663A (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029662F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029662F: ;
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D59C2(); return; /* tail jmp 0x002D59C2 */

}

/**
 * sub_0029663A
 * Original: 0x0029663A - 0x00296645 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029663A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029663A: ;
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D59C2(); return; /* tail jmp 0x002D59C2 */

}

/**
 * sub_00296645
 * Original: 0x00296645 - 0x0029664F (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296645(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296645: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x0029664Du); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_0029664D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0029664F
 * Original: 0x0029664F - 0x00296659 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029664F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029664F: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x00296657u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_00296657: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296659
 * Original: 0x00296659 - 0x00296663 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296659(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296659: ;
    PUSH32(esp, MEM32(ebp + -44));
    PUSH32(esp, 0x00296661u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_00296661: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296663
 * Original: 0x00296663 - 0x0029666D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296663(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296663: ;
    eax = 0x334968;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029666D
 * Original: 0x0029666D - 0x00296675 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029666D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029666D: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_002D79AE(); return; /* tail jmp 0x002D79AE */

}

/**
 * sub_00296675
 * Original: 0x00296675 - 0x0029668D (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296675(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296675: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x88;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002D4EBC(); return; /* tail jmp 0x002D4EBC */

    eax = 0x334994;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029668D
 * Original: 0x0029668D - 0x00296695 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029668D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029668D: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

}

/**
 * sub_00296695
 * Original: 0x00296695 - 0x002966A7 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296695(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296695: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x3349C0;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002966A7
 * Original: 0x002966A7 - 0x002966B9 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002966A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002966A7: ;
    ecx = ebp + 0x14;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x3349E4;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002966B9
 * Original: 0x002966B9 - 0x002966C1 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002966B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002966B9: ;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_002D4EBC(); return; /* tail jmp 0x002D4EBC */

}

/**
 * sub_002966C1
 * Original: 0x002966C1 - 0x002966D3 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002966C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002966C1: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_002D4EC7(); return; /* tail jmp 0x002D4EC7 */

    eax = 0x334A10;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002966D3
 * Original: 0x002966D3 - 0x002966E5 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002966D3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002966D3: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_002D295A(); return; /* tail jmp 0x002D295A */

    eax = 0x334A34;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002966E5
 * Original: 0x002966E5 - 0x002966EF (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002966E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002966E5: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x002966EDu); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002966ED: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002966EF
 * Original: 0x002966EF - 0x002966F9 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002966EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002966EF: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x002966F7u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002966F7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002966F9
 * Original: 0x002966F9 - 0x00296703 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002966F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002966F9: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x00296701u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_00296701: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296703
 * Original: 0x00296703 - 0x0029670D (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296703(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296703: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x0029670Bu); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_0029670B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0029670D
 * Original: 0x0029670D - 0x00296717 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029670D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029670D: ;
    eax = 0x334AA4;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296717
 * Original: 0x00296717 - 0x0029671F (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296717(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296717: ;
    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_002D4EBC(); return; /* tail jmp 0x002D4EBC */

}

/**
 * sub_0029671F
 * Original: 0x0029671F - 0x00296727 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029671F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029671F: ;
    ecx = ebp + -100;
    g_seh_ebp = ebp; sub_002D4EBC(); return; /* tail jmp 0x002D4EBC */

}

/**
 * sub_00296727
 * Original: 0x00296727 - 0x0029672F (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296727(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296727: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_002D4E9F(); return; /* tail jmp 0x002D4E9F */

}

/**
 * sub_0029672F
 * Original: 0x0029672F - 0x00296737 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029672F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029672F: ;
    ecx = ebp + -84;
    g_seh_ebp = ebp; sub_002D4E9F(); return; /* tail jmp 0x002D4E9F */

}

/**
 * sub_00296737
 * Original: 0x00296737 - 0x0029673F (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296737(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296737: ;
    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_002D4E94(); return; /* tail jmp 0x002D4E94 */

}

/**
 * sub_0029673F
 * Original: 0x0029673F - 0x00296749 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029673F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029673F: ;
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, 0x00296747u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_00296747: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296749
 * Original: 0x00296749 - 0x00296753 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296749(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296749: ;
    eax = 0x334AF0;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296753
 * Original: 0x00296753 - 0x0029675B (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296753(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296753: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_002E6380(); return; /* tail jmp 0x002E6380 */

}

/**
 * sub_0029675B
 * Original: 0x0029675B - 0x00296766 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029675B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029675B: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002E62F3(); return; /* tail jmp 0x002E62F3 */

}

/**
 * sub_00296766
 * Original: 0x00296766 - 0x00296771 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296766(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296766: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002E62F3(); return; /* tail jmp 0x002E62F3 */

}

/**
 * sub_00296771
 * Original: 0x00296771 - 0x0029677C (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296771(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296771: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002E62F3(); return; /* tail jmp 0x002E62F3 */

}

/**
 * sub_0029677C
 * Original: 0x0029677C - 0x00296787 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029677C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029677C: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002E62F3(); return; /* tail jmp 0x002E62F3 */

}

/**
 * sub_00296787
 * Original: 0x00296787 - 0x0029679C (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296787(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296787: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002E62F3(); return; /* tail jmp 0x002E62F3 */

    eax = 0x334B3C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029679C
 * Original: 0x0029679C - 0x002967A4 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029679C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029679C: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_002CE932(); return; /* tail jmp 0x002CE932 */

}

/**
 * sub_002967A4
 * Original: 0x002967A4 - 0x002967B6 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002967A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002967A4: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_002CE932(); return; /* tail jmp 0x002CE932 */

    eax = 0x334B68;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002967B6
 * Original: 0x002967B6 - 0x002967C1 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002967B6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002967B6: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002CE932(); return; /* tail jmp 0x002CE932 */

}

/**
 * sub_002967C1
 * Original: 0x002967C1 - 0x002967D6 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002967C1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002967C1: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002CE932(); return; /* tail jmp 0x002CE932 */

    eax = 0x334B94;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002967D6
 * Original: 0x002967D6 - 0x002967E1 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002967D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002967D6: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002CE932(); return; /* tail jmp 0x002CE932 */

}

/**
 * sub_002967E1
 * Original: 0x002967E1 - 0x002967EC (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002967E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002967E1: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002CE932(); return; /* tail jmp 0x002CE932 */

}

/**
 * sub_002967EC
 * Original: 0x002967EC - 0x00296802 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002967EC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002967EC: ;
    PUSH32(esp, 0x2E3D7A);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x4C);
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00296801u); RECOMP_ABI_CALL(0x0028B4E6u, sub_0028B4E6); /* call 0x0028B4E6 */

loc_00296801: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00296802
 * Original: 0x00296802 - 0x0029681A (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296802(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296802: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x54C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x54C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002E44A6(); return; /* tail jmp 0x002E44A6 */

    eax = 0x334BD0;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029681A
 * Original: 0x0029681A - 0x0029682C (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029681A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029681A: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_002E44A6(); return; /* tail jmp 0x002E44A6 */

    eax = 0x334BF4;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029682C
 * Original: 0x0029682C - 0x0029683E (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029682C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029682C: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_002CE932(); return; /* tail jmp 0x002CE932 */

    eax = 0x334C18;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029683E
 * Original: 0x0029683E - 0x00296850 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029683E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029683E: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_002E44A6(); return; /* tail jmp 0x002E44A6 */

    eax = 0x334C3C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296850
 * Original: 0x00296850 - 0x00296858 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296850(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296850: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_002CE932(); return; /* tail jmp 0x002CE932 */

}

/**
 * sub_00296858
 * Original: 0x00296858 - 0x0029686A (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296858(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296858: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_002CE932(); return; /* tail jmp 0x002CE932 */

    eax = 0x334C68;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_0029686A
 * Original: 0x0029686A - 0x00296872 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0029686A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0029686A: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_002CE932(); return; /* tail jmp 0x002CE932 */

}

/**
 * sub_00296872
 * Original: 0x00296872 - 0x00296884 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296872(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296872: ;
    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_002CE932(); return; /* tail jmp 0x002CE932 */

    eax = 0x334C94;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296884
 * Original: 0x00296884 - 0x00296896 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296884(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296884: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_002E44A6(); return; /* tail jmp 0x002E44A6 */

    eax = 0x334CB8;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296896
 * Original: 0x00296896 - 0x002968A8 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296896(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296896: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_002CE932(); return; /* tail jmp 0x002CE932 */

    eax = 0x334CDC;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002968A8
 * Original: 0x002968A8 - 0x002968B2 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002968A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002968A8: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x002968B0u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002968B0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002968B2
 * Original: 0x002968B2 - 0x002968BC (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002968B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002968B2: ;
    eax = 0x334D00;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002968BC
 * Original: 0x002968BC - 0x002968C6 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002968BC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002968BC: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0x002968C4u); RECOMP_ABI_CALL(0x002E60D2u, sub_002E60D2); /* call 0x002E60D2 */

loc_002968C4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_002968C6
 * Original: 0x002968C6 - 0x002968D0 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002968C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002968C6: ;
    eax = 0x334D24;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002968D0
 * Original: 0x002968D0 - 0x002968D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002968D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002968D0: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_002E61CC(); return; /* tail jmp 0x002E61CC */

}

/**
 * sub_002968D8
 * Original: 0x002968D8 - 0x002968E0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002968D8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002968D8: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_002E5F88(); return; /* tail jmp 0x002E5F88 */

}

/**
 * sub_002968E0
 * Original: 0x002968E0 - 0x002968E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002968E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002968E0: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_002E5F88(); return; /* tail jmp 0x002E5F88 */

}

/**
 * sub_002968E8
 * Original: 0x002968E8 - 0x00296900 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002968E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002968E8: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_002E5F88(); return; /* tail jmp 0x002E5F88 */

    eax = 0x334D60;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00296900
 * Original: 0x00296900 - 0x00296908 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296900: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00277040(); return; /* tail jmp 0x00277040 */

}

/**
 * sub_00296920
 * Original: 0x00296920 - 0x0029692D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296920(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296920: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x2E24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2E24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00276E70(); return; /* tail jmp 0x00276E70 */

}

/**
 * sub_00296940
 * Original: 0x00296940 - 0x00296948 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296940: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000DA260(); return; /* tail jmp 0x000DA260 */

}

/**
 * sub_00296960
 * Original: 0x00296960 - 0x00296968 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296960: ;
    eax = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_000D4800(); return; /* tail jmp 0x000D4800 */

}

/**
 * sub_00296980
 * Original: 0x00296980 - 0x00296988 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296980(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296980: ;
    eax = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000D8020(); return; /* tail jmp 0x000D8020 */

}

/**
 * sub_002969A0
 * Original: 0x002969A0 - 0x002969AA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002969A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002969A0: ;
    eax = 0x33504C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_002969B0
 * Original: 0x002969B0 - 0x002969B8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002969B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002969B0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_0028B331(); return; /* tail jmp 0x0028B331 */

}

/**
 * sub_002969D0
 * Original: 0x002969D0 - 0x002969D8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002969D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002969D0: ;
    eax = ebp + 4;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_002969F0
 * Original: 0x002969F0 - 0x002969FB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002969F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002969F0: ;
    eax = ebp + -2100;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_002969FB
 * Original: 0x002969FB - 0x00296A10 (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_002969FB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_002969FB: ;
    eax = ebp + -2104;
    g_seh_ebp = ebp; sub_00276E60(); return; /* tail jmp 0x00276E60 */

    eax = 0x3350C0;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296A10
 * Original: 0x00296A10 - 0x00296A1B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296A10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296A10: ;
    eax = ebp + -2064;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00296A1B
 * Original: 0x00296A1B - 0x00296A30 (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296A1B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296A1B: ;
    eax = ebp + -2068;
    g_seh_ebp = ebp; sub_00276E60(); return; /* tail jmp 0x00276E60 */

    eax = 0x3350EC;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296A30
 * Original: 0x00296A30 - 0x00296A38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296A30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296A30: ;
    eax = ebp + -16;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00296A38
 * Original: 0x00296A38 - 0x00296A46 (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296A38(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00296A38: ;
    eax = MEM32(0x653ACC);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x653ACC) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00296A46
 * Original: 0x00296A46 - 0x00296A50 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296A46(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296A46: ;
    eax = 0x335118;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296A50
 * Original: 0x00296A50 - 0x00296A58 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296A50: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_00276580(); return; /* tail jmp 0x00276580 */

}

/**
 * sub_00296A58
 * Original: 0x00296A58 - 0x00296A70 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296A58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296A58: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_002765B0(); return; /* tail jmp 0x002765B0 */

    eax = 0x335168;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00296A70
 * Original: 0x00296A70 - 0x00296A7B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296A70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296A70: ;
    eax = ebp + -544;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00296A7B
 * Original: 0x00296A7B - 0x00296A86 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296A7B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296A7B: ;
    eax = ebp + -536;
    g_seh_ebp = ebp; sub_00012600(); return; /* tail jmp 0x00012600 */

}

/**
 * sub_00296A86
 * Original: 0x00296A86 - 0x00296AA0 (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296A86(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296A86: ;
    eax = ebp + -548;
    g_seh_ebp = ebp; sub_00012600(); return; /* tail jmp 0x00012600 */

    eax = 0x33519C;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00296AA0
 * Original: 0x00296AA0 - 0x00296AAB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296AA0: ;
    eax = ebp + -532;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00296AAB
 * Original: 0x00296AAB - 0x00296AB6 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296AAB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296AAB: ;
    eax = ebp + -528;
    g_seh_ebp = ebp; sub_000BE070(); return; /* tail jmp 0x000BE070 */

}

/**
 * sub_00296AB6
 * Original: 0x00296AB6 - 0x00296AD0 (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296AB6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296AB6: ;
    eax = ebp + -536;
    g_seh_ebp = ebp; sub_000BE250(); return; /* tail jmp 0x000BE250 */

    eax = 0x3351D0;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00296AD0
 * Original: 0x00296AD0 - 0x00296AD8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296AD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296AD0: ;
    eax = ebp + -24;
    g_seh_ebp = ebp; sub_000F33A0(); return; /* tail jmp 0x000F33A0 */

}

/**
 * sub_00296AF0
 * Original: 0x00296AF0 - 0x00296AFA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296AF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296AF0: ;
    eax = 0x335278;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296B00
 * Original: 0x00296B00 - 0x00296B08 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296B00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296B00: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_0027EDE0(); return; /* tail jmp 0x0027EDE0 */

}

/**
 * sub_00296B20
 * Original: 0x00296B20 - 0x00296B28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296B20: ;
    eax = ebp + 8;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00296B40
 * Original: 0x00296B40 - 0x00296B48 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296B40: ;
    esi = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000F0EF0(); return; /* tail jmp 0x000F0EF0 */

}

/**
 * sub_00296B48
 * Original: 0x00296B48 - 0x00296B53 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296B48(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296B48: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000F0EF0(); return; /* tail jmp 0x000F0EF0 */

}

/**
 * sub_00296B53
 * Original: 0x00296B53 - 0x00296B63 (16 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296B53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296B53: ;
    esi = MEM32(ebp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_000F0EF0(); return; /* tail jmp 0x000F0EF0 */

    eax = 0x3352F4;

    g_seh_ebp = ebp; sub_00296B63(); return; /* fallthrough 0x00296B63 */

}

/**
 * sub_00296B63
 * Original: 0x00296B63 - 0x00296B70 (13 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296B63(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296B63: ;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

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
 * sub_00296B70
 * Original: 0x00296B70 - 0x00296B78 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296B70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296B70: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_0027EDE0(); return; /* tail jmp 0x0027EDE0 */

}

/**
 * sub_00296B90
 * Original: 0x00296B90 - 0x00296B98 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296B90: ;
    eax = ebp + -16;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00296B98
 * Original: 0x00296B98 - 0x00296BA6 (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296B98(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00296B98: ;
    eax = MEM32(0x654200);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x654200) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00296BA6
 * Original: 0x00296BA6 - 0x00296BB0 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296BA6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296BA6: ;
    eax = 0x335344;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296BB0
 * Original: 0x00296BB0 - 0x00296BBB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296BB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296BB0: ;
    eax = ebp + -5152;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00296BBB
 * Original: 0x00296BBB - 0x00296BC6 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296BBB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296BBB: ;
    eax = ebp + -5148;
    g_seh_ebp = ebp; sub_000BE070(); return; /* tail jmp 0x000BE070 */

}

/**
 * sub_00296BC6
 * Original: 0x00296BC6 - 0x00296BE0 (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296BC6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296BC6: ;
    eax = ebp + -5156;
    g_seh_ebp = ebp; sub_000BE250(); return; /* tail jmp 0x000BE250 */

    eax = 0x335378;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00296BE0
 * Original: 0x00296BE0 - 0x00296BE8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296BE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296BE0: ;
    eax = ebp + -16;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00296BE8
 * Original: 0x00296BE8 - 0x00296BF6 (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296BE8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00296BE8: ;
    eax = MEM32(0x654288);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x654288) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00296BF6
 * Original: 0x00296BF6 - 0x00296C00 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296BF6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296BF6: ;
    eax = 0x3353A4;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296C00
 * Original: 0x00296C00 - 0x00296C0B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296C00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296C00: ;
    eax = MEM32(ebp + 4);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00296C09u); RECOMP_ABI_CALL(0x00272C40u, sub_00272C40); /* call 0x00272C40 */

loc_00296C09: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296C0B
 * Original: 0x00296C0B - 0x00296C15 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296C0B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296C0B: ;
    eax = 0x3353C8;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296C20
 * Original: 0x00296C20 - 0x00296C28 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296C20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296C20: ;
    eax = ebp + -16;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

}

/**
 * sub_00296C28
 * Original: 0x00296C28 - 0x00296C36 (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296C28(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00296C28: ;
    eax = MEM32(0x6542C0);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x6542C0) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00296C36
 * Original: 0x00296C36 - 0x00296C40 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296C36(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296C36: ;
    eax = 0x3353F4;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}

/**
 * sub_00296C40
 * Original: 0x00296C40 - 0x00296C60 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296C40: ;
    eax = ebp + 0x10;
    g_seh_ebp = ebp; sub_00011520(); return; /* tail jmp 0x00011520 */

    eax = 0x335418;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

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
 * sub_00296C60
 * Original: 0x00296C60 - 0x00296C68 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296C60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296C60: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_00277040(); return; /* tail jmp 0x00277040 */

}

/**
 * sub_00296C80
 * Original: 0x00296C80 - 0x00296C8B (11 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296C80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296C80: ;
    eax = MEM32(ebp + -16);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00296C89u); RECOMP_ABI_CALL(0x00272C40u, sub_00272C40); /* call 0x00272C40 */

loc_00296C89: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00296C8B
 * Original: 0x00296C8B - 0x00296C95 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00296C8B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00296C8B: ;
    eax = 0x335460;
    g_seh_ebp = ebp; sub_0028C6C1(); return; /* tail jmp 0x0028C6C1 */

}
