/**
 * PoP SoT xbox-demo - Recompiled code chunk 17
 * Functions: 250 (0x000F91D0 - 0x00103490)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_000F91D0
 * Original: 0x000F91D0 - 0x000F93CB (507 bytes, 171 insns)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F91D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F91D0: ;
    PUSH32(esp, ecx);
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F93C9; /* je: equal / zero */

loc_000F91DC: ;
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 4) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000F93C8; /* je: equal / zero */

loc_000F91EC: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F91FA; /* jne: not equal / not zero */

loc_000F91F5: ;
    PUSH32(esp, 0x000F91FAu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000F91FA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0x58;
    ecx = eax;
    PUSH32(esp, 0x000F9209u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_000F9209: ;
    ebx = eax;
    ecx = 0x16;
    esi = ebp;
    edi = ebx;
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
    ecx = MEM32(esp + 0x18);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 0x48) = esi;
    MEM32(ebx + 0x4C) = esi;
    edx = MEM32(ecx + 0x18);
    MEM32(edx + 4) = ebx;
    eax = MEM32(ebx);
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F92B0; /* je: equal / zero */

loc_000F9231: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F923F; /* jne: not equal / not zero */

loc_000F923A: ;
    PUSH32(esp, 0x000F923Fu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000F923F: ;
    edx = MEM32(ebx);
    ecx = MEM32(edx);
    edx = MEM32(ecx + 4);
    ecx = eax;
    PUSH32(esp, 0x000F924Du); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_000F924D: ;
    MEM32(ebx + 0x44) = eax;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F925E; /* jne: not equal / not zero */

loc_000F9259: ;
    PUSH32(esp, 0x000F925Eu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000F925E: ;
    edx = MEM32(ebx);
    ecx = MEM32(edx);
    edx = MEM32(ecx + 4);
    ecx = eax;
    PUSH32(esp, 0x000F926Cu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_000F926C: ;
    MEM32(ebx + 0x40) = eax;
    _fa = (uint32_t)(MEM32(ebp + 0x40)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x40), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9295; /* jne: not equal / not zero */

loc_000F9274: ;
    PUSH32(esp, 0x331F2C);
    PUSH32(esp, 0x331F0C);
    PUSH32(esp, 0x762);
    PUSH32(esp, 0x331FAC);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000F9292u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000F9292: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000F9295: ;
    edx = MEM32(ebx);
    eax = MEM32(edx);
    ecx = MEM32(eax + 4);
    esi = MEM32(ebp + 0x40);
    edi = MEM32(ebx + 0x40);
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

loc_000F92B0: ;
    eax = MEM32(ebp + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F93B5; /* je: equal / zero */

loc_000F92BB: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F92C9; /* jne: not equal / not zero */

loc_000F92C4: ;
    PUSH32(esp, 0x000F92C9u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000F92C9: ;
    edx = 0x34;
    ecx = eax;
    PUSH32(esp, 0x000F92D5u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_000F92D5: ;
    ebp = eax;
    eax = MEM32(esp + 0x10);
    esi = MEM32(eax + 0x50);
    ecx = 0xD;
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
    MEM32(ebx + 0x50) = ebp;
    eax = MEM32(ebp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9328; /* je: equal / zero */

loc_000F92F1: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F92FF; /* jne: not equal / not zero */

loc_000F92FA: ;
    PUSH32(esp, 0x000F92FFu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000F92FF: ;
    edx = MEM32(ebp + 4);
    ecx = eax;
    PUSH32(esp, 0x000F9309u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_000F9309: ;
    ecx = MEM32(ebp + 4);
    edx = MEM32(esp + 0x10);
    MEM32(ebp) = eax;
    edx = MEM32(edx + 0x50);
    esi = MEM32(edx);
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

loc_000F9328: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F93B5; /* je: equal / zero */

loc_000F9333: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9341; /* jne: not equal / not zero */

loc_000F933C: ;
    PUSH32(esp, 0x000F9341u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000F9341: ;
    edx = MEM32(ebp + 0xC);
    edx = edx + edx * 2;
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    PUSH32(esp, 0x000F9351u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_000F9351: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(esp + 0x10);
    ecx = ecx + ecx * 2;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 8) = eax;
    edx = MEM32(edx + 0x50);
    esi = MEM32(edx + 8);
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
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9385; /* jne: not equal / not zero */

loc_000F9380: ;
    PUSH32(esp, 0x000F9385u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000F9385: ;
    edx = MEM32(ebp + 0xC);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x22);
    ecx = eax;
    PUSH32(esp, 0x000F9392u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_000F9392: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(esp + 0x10);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x22);
    MEM32(ebp + 0x14) = eax;
    edx = MEM32(edx + 0x50);
    esi = MEM32(edx + 0x14);
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

loc_000F93B5: ;
    eax = MEM32(ebx);
    MEM16(eax + 0xC) = MEM16(eax + 0xC) + 1;
    _fa = (uint32_t)(MEM16(eax + 0xC)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0);
    PUSH32(esp, 0x000F93C2u); RECOMP_ABI_CALL(0x000F8F90u, sub_000F8F90); /* call 0x000F8F90 */

loc_000F93C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_000F93C8: ;
    POP32(esp, ebp);

loc_000F93C9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F93D0
 * Original: 0x000F93D0 - 0x000F93E2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F93D0(void)
{

loc_000F93D0: ;
    PUSH32(esp, 0x000F93D5u); RECOMP_ABI_CALL(0x000F94F0u, sub_000F94F0); /* call 0x000F94F0 */

loc_000F93D5: ;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_000F93F0
 * Original: 0x000F93F0 - 0x000F942F (63 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F93F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F93F0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(edi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ecx;
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000F9429; /* jne: not equal / not zero */

loc_000F9402: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x000F940Du); RECOMP_ABI_CALL(0x000F93F0u, sub_000F93F0); /* call 0x000F93F0 */

loc_000F940D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000F9420; /* je: equal / zero */

loc_000F9413: ;
    PUSH32(esp, 0x000F9418u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_000F9418: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000F9420u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F941Du); } /* indirect call */
    }

loc_000F9420: ;
    SET_LO8(eax, MEM8(esi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000F9402; /* je: equal / zero */

loc_000F9429: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9430
 * Original: 0x000F9430 - 0x000F94AA (122 bytes, 48 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F9430: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_000F947B; /* jne: not equal / not zero */

loc_000F9445: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F947B; /* jne: not equal / not zero */

loc_000F9449: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000F9454u); RECOMP_ABI_CALL(0x000F93F0u, sub_000F93F0); /* call 0x000F93F0 */

loc_000F9454: ;
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

loc_000F947B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F94A0; /* je: equal / zero */

loc_000F947F: ;
    PUSH32(esp, edi);

loc_000F9480: ;
    edx = esp + 0x14;
    edi = eax;
    PUSH32(esp, 0x000F948Bu); RECOMP_ABI_CALL(0x0027F560u, sub_0027F560); /* call 0x0027F560 */

loc_000F948B: ;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000F9497u); RECOMP_ABI_CALL(0x0027A6D0u, sub_0027A6D0); /* call 0x0027A6D0 */

loc_000F9497: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9480; /* jne: not equal / not zero */

loc_000F949F: ;
    POP32(esp, edi);

loc_000F94A0: ;
    MEM32(ebp) = eax;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F94B0
 * Original: 0x000F94B0 - 0x000F94E9 (57 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F94B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F94B0: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    MEM32(eax) = eax;
    eax = MEM32(ebx + 4);
    MEM32(eax + 4) = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 4) (32-bit) */
    MEM32(ebx + 8) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000F94E7; /* je: equal / zero */

loc_000F94CA: ;
    PUSH32(esp, esi);
    goto loc_000F94D0;

    /* nop */

loc_000F94D0: ;
    esi = MEM32(edi);
    PUSH32(esp, 0x000F94D7u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_000F94D7: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000F94DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000F94DCu); } /* indirect call */
    }

loc_000F94DF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 4) (32-bit) */
    edi = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000F94D0; /* jne: not equal / not zero */

loc_000F94E6: ;
    POP32(esp, esi);

loc_000F94E7: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F94F0
 * Original: 0x000F94F0 - 0x000F951A (42 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F94F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F94F0: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F94FE; /* jne: not equal / not zero */

loc_000F94F9: ;
    PUSH32(esp, 0x000F94FEu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000F94FE: ;
    edx = 0x58;
    ecx = eax;
    PUSH32(esp, 0x000F950Au); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_000F950A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9510; /* je: equal / zero */

loc_000F950E: ;
    MEM32(eax) = eax;

loc_000F9510: ;
    ecx = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9519; /* je: equal / zero */

loc_000F9517: ;
    MEM32(ecx) = eax;

loc_000F9519: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F9520
 * Original: 0x000F9520 - 0x000F9560 (64 bytes, 22 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9520(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9520: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F952E; /* jne: not equal / not zero */

loc_000F9529: ;
    PUSH32(esp, 0x000F952Eu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000F952E: ;
    edx = 0x58;
    ecx = eax;
    PUSH32(esp, 0x000F953Au); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_000F953A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F955D; /* je: equal / zero */

loc_000F953E: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    MEM32(eax) = ecx;
    edi = eax + 8;
    ecx = 0x14;
    MEM32(eax + 4) = edx;
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

loc_000F955D: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_000F9560
 * Original: 0x000F9560 - 0x000F95ED (141 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9560: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297148);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = 0x3333333;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_000F95D9; /* jae: above or equal (unsigned >=) */

loc_000F9588: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x323364);
    ecx = esp + 8;
    MEM32(esp + 0x20) = 0xF;
    MEM32(esp + 0x1C) = 0;
    MEM8(esp + 0xC) = 0;
    PUSH32(esp, 0x000F95ADu); RECOMP_ABI_CALL(0x00017340u, sub_00017340); /* call 0x00017340 */

loc_000F95AD: ;
    eax = esp;
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    MEM32(esp + 0x50) = 0;
    PUSH32(esp, 0x000F95C2u); RECOMP_ABI_CALL(0x00017430u, sub_00017430); /* call 0x00017430 */

loc_000F95C2: ;
    PUSH32(esp, 0x334DD0);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    MEM32(esp + 0x24) = 0x323120;
    PUSH32(esp, 0x000F95D9u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_000F95D9: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esp + 0x44);
    MEM32(edx + 8) = eax;
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000F95F0
 * Original: 0x000F95F0 - 0x000F9645 (85 bytes, 33 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F95F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F95F0: ;
    eax = MEM32(ecx);
    edx = MEM32(eax + 8);
    MEM32(ecx) = edx;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(edx + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9605; /* jne: not equal / not zero */

loc_000F9602: ;
    MEM32(edx + 4) = ecx;

loc_000F9605: ;
    edx = MEM32(ecx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 8);
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9624; /* jne: not equal / not zero */

loc_000F9617: ;
    MEM32(edx + 4) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000F9624: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9639; /* jne: not equal / not zero */

loc_000F962C: ;
    MEM32(edx + 8) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

loc_000F9639: ;
    MEM32(edx) = eax;
    MEM32(eax + 8) = ecx;
    MEM32(ecx + 4) = eax;
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000F9650
 * Original: 0x000F9650 - 0x000F9697 (71 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9650: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F965E; /* jne: not equal / not zero */

loc_000F9659: ;
    PUSH32(esp, 0x000F965Eu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000F965E: ;
    edx = 0x18;
    ecx = eax;
    PUSH32(esp, 0x000F966Au); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_000F966A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9674; /* je: equal / zero */

loc_000F966E: ;
    MEM32(eax) = 0;

loc_000F9674: ;
    ecx = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9681; /* je: equal / zero */

loc_000F967B: ;
    MEM32(ecx) = 0;

loc_000F9681: ;
    ecx = eax + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F968E; /* je: equal / zero */

loc_000F9688: ;
    MEM32(ecx) = 0;

loc_000F968E: ;
    MEM8(eax + 0x14) = 1;
    MEM8(eax + 0x15) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_000F96A0
 * Original: 0x000F96A0 - 0x000F96EE (78 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F96A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F96A0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F96ED; /* je: equal / zero */

loc_000F96A4: ;
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    esi = MEM32(esi);
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    edx = eax + eax * 4;
    edx = esi + edx * 4;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_000F96ED; /* je: equal / zero */

loc_000F96B7: ;
    eax = eax + eax * 2;
    eax = ecx + eax * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F96ED; /* je: equal / zero */

loc_000F96C1: ;
    MEM8(eax + 0xA) = MEM8(eax + 0xA) & 0xFE;
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM16(eax + 8) = 0;
    SET_LO8(ebx, MEM8(edx + 0xE));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0xA));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    POP32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_000F96E9; /* je: equal / zero */

loc_000F96E2: ;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(eax + 0xA) = LO16(ecx);

loc_000F96E9: ;
    MEM8(eax + 0xA) = MEM8(eax + 0xA) & 0xF9;
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_000F96ED: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F96F0
 * Original: 0x000F96F0 - 0x000F9752 (98 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F96F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F96F0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9751; /* je: equal / zero */

loc_000F96F4: ;
    ecx = MEM32(edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9751; /* je: equal / zero */

loc_000F96FA: ;
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ecx + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 4), LO16(esi) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000F9750; /* jbe: below or equal (unsigned <=) */

loc_000F9703: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000F9706: ;
    ecx = MEM32(ecx);
    eax = ZX16(LO16(esi));
    edx = eax + eax * 4;
    edx = ecx + edx * 4;
    ecx = MEM32(edi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9747; /* je: equal / zero */

loc_000F9718: ;
    eax = eax + eax * 2;
    eax = ecx + eax * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9747; /* je: equal / zero */

loc_000F9722: ;
    MEM8(eax + 0xA) = MEM8(eax + 0xA) & 0xFE;
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0xA));
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM16(eax + 8) = 0;
    _fa = (uint32_t)(MEM8(edx + 0xE)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0xE), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9743; /* je: equal / zero */

loc_000F973C: ;
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(eax + 0xA) = LO16(ecx);

loc_000F9743: ;
    MEM8(eax + 0xA) = MEM8(eax + 0xA) & 0xF9;
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_000F9747: ;
    ecx = MEM32(edi);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), MEM16(ecx + 4) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F9706; /* jb: below (unsigned <) */

loc_000F9750: ;
    POP32(esp, esi);

loc_000F9751: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F9760
 * Original: 0x000F9760 - 0x000F97B3 (83 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9760: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F97B2; /* je: equal / zero */

loc_000F9764: ;
    eax = MEM32(esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), LO16(edx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000F97B2; /* jbe: below or equal (unsigned <=) */

loc_000F976E: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_000F9771: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = ZX16(LO16(edx));
    ecx = eax + eax * 2;
    eax = MEM32(esi + 4);
    eax = eax + ecx * 4;
    if (CMP_EQ(_fa, _fb)) goto loc_000F97A5; /* je: equal / zero */

loc_000F9781: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0xA));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F97A9; /* jne: not equal / not zero */

loc_000F978C: ;
    ecx = ecx & 0xFFF9;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx | 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    MEM16(eax + 0xA) = LO16(ecx);
    MEM16(eax + 8) = 0;
    goto loc_000F97A9;

loc_000F97A5: ;
    MEM8(eax + 0xA) = MEM8(eax + 0xA) & 0xFE;
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_000F97A9: ;
    ecx = MEM32(esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 4) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F9771; /* jb: below (unsigned <) */

loc_000F97B2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F97C0
 * Original: 0x000F97C0 - 0x000F9802 (66 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F97C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F97C0: ;
    eax = MEM32(esi);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), LO16(edx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000F9801; /* jbe: below or equal (unsigned <=) */

loc_000F97CA: ;
    /* nop */

loc_000F97D0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = ZX16(LO16(edx));
    ecx = eax + eax * 2;
    eax = MEM32(esi + 4);
    eax = eax + ecx * 4;
    if (CMP_EQ(_fa, _fb)) goto loc_000F97F4; /* je: equal / zero */

loc_000F97E0: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0xA));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F97F8; /* jne: not equal / not zero */

loc_000F97EB: ;
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(eax + 0xA) = LO16(ecx);
    goto loc_000F97F8;

loc_000F97F4: ;
    MEM8(eax + 0xA) = MEM8(eax + 0xA) & 0xFD;
    _fa = (uint32_t)(MEM8(eax + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_000F97F8: ;
    ecx = MEM32(esi);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ecx + 4)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ecx + 4) (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F97D0; /* jb: below (unsigned <) */

loc_000F9801: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000F9810
 * Original: 0x000F9810 - 0x000F9859 (73 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9810(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9810: ;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000F9854; /* je: equal / zero */

loc_000F981C: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9854; /* je: equal / zero */

loc_000F9822: ;
    ecx = ecx + ecx * 4;
    eax = eax + ecx * 4;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9854; /* je: equal / zero */

loc_000F982F: ;
    edx = ZX16(MEM16(eax + 0xC));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000F984E; /* jle: less or equal (signed <=) */

loc_000F9839: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    SET_LO16(eax, MEM16(esp + 4));

loc_000F9842: ;
    _fb = (uint32_t)(MEM16(esi + ecx * 8)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + MEM16(esi + ecx * 8));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F9842; /* jl: less (signed <) */

loc_000F984B: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000F984E: ;
    SET_LO16(eax, MEM16(esp));
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000F9854: ;
    SET_LO16(eax, 0); /* xor self */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F9860
 * Original: 0x000F9860 - 0x000F9A77 (535 bytes, 172 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9860(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F9860: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9870; /* je: equal / zero */

loc_000F986C: ;
    MEMF(edi) = xmm0.f[0]; /* movss */

loc_000F9870: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9878; /* je: equal / zero */

loc_000F9874: ;
    MEMF(esi) = xmm0.f[0]; /* movss */

loc_000F9878: ;
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9A73; /* je: equal / zero */

loc_000F9884: ;
    edx = MEM32(ebx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9A73; /* je: equal / zero */

loc_000F988E: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9A73; /* je: equal / zero */

loc_000F9898: ;
    PUSH32(esp, ebp);
    ebp = eax + eax * 4;
    ebp = ebp << 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ecx + ebp + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9A72; /* je: equal / zero */

loc_000F98AB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F996F; /* jne: not equal / not zero */

loc_000F98B3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9A72; /* je: equal / zero */

loc_000F98BB: ;
    eax = MEM32(edx);
    edx = ZX16(MEM16(eax + ebp + 0xC));
    ecx = MEM32(eax + ebp + 4);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2 = XMM_SCALAR(MEMF(0x3337A8)); /* movss */
    edi = ecx + edx * 8;
    eax = edi;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F9946; /* jl: less (signed <) */

loc_000F98E8: ;
    eax = edi + -24;
    goto loc_000F98F0;

    /* nop */

loc_000F98F0: ;
    edx = ZX16(MEM16(ecx));
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    edx = ZX16(MEM16(ecx + 8));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    edx = ZX16(MEM16(ecx + 0x10));
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    edx = ZX16(MEM16(ecx + 0x18));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_000F98F0; /* jl: less (signed <) */

loc_000F9946: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F9A72; /* jae: above or equal (unsigned >=) */

loc_000F994E: ;
    edi = edi;

loc_000F9950: ;
    eax = ZX16(MEM16(ecx));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    if (CMP_B(_fa, _fb)) goto loc_000F9950; /* jb: below (unsigned <) */

loc_000F996A: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000F996F: ;
    edx = MEM32(ebx + 4);
    eax = eax + eax * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    xmm2 = XMM_SCALAR(MEMF(0x3337A8)); /* movss */
    MEM32(esp + 0xC) = eax;
    eax = ZX16(MEM16(edx + eax + 8));
    ebx = ecx + eax * 8;
    eax = ebx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 7;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F99FA; /* jl: less (signed <) */

loc_000F99A1: ;
    eax = ebx + -24;

loc_000F99A4: ;
    edx = ZX16(MEM16(ecx));
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    edx = ZX16(MEM16(ecx + 8));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(edi) = xmm1.f[0]; /* movss */
    edx = ZX16(MEM16(ecx + 0x10));
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    edx = ZX16(MEM16(ecx + 0x18));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(edi) = xmm1.f[0]; /* movss */
    if (CMP_L(_fas, _fbs)) goto loc_000F99A4; /* jl: less (signed <) */

loc_000F99FA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F9A1A; /* jae: above or equal (unsigned >=) */

loc_000F99FE: ;
    edi = edi;

loc_000F9A00: ;
    eax = ZX16(MEM16(ecx));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    if (CMP_B(_fa, _fb)) goto loc_000F9A00; /* jb: below (unsigned <) */

loc_000F9A1A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9A5A; /* je: equal / zero */

loc_000F9A1E: ;
    edx = MEM32(edi);
    eax = MEM32(esp + 0x14);
    MEM32(esi) = edx;
    edx = MEM32(eax);
    eax = MEM32(edx);
    edx = ZX16(MEM16(eax + ebp + 0xC));
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 4);
    eax = eax + edx * 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F9A5A; /* jae: above or equal (unsigned >=) */

loc_000F9A3B: ;
    goto loc_000F9A40;

    /* nop */

loc_000F9A40: ;
    edx = ZX16(MEM16(ecx));
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esi); /* addss */
    MEMF(esi) = xmm0.f[0]; /* movss */
    if (CMP_B(_fa, _fb)) goto loc_000F9A40; /* jb: below (unsigned <) */

loc_000F9A5A: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 4);
    edx = MEM32(esp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx + edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */

loc_000F9A72: ;
    POP32(esp, ebp);

loc_000F9A73: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F9A80
 * Original: 0x000F9A80 - 0x000F9B1D (157 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9A80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F9A80: ;
    eax = MEM32(ecx);
    edx = MEM32(eax);
    eax = ZX16(MEM16(eax + 4));
    eax = eax + eax * 4;
    PUSH32(esp, edi);
    edi = edx + eax * 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    eax = MEM32(ecx + 4);
    if (CMP_AE(_fa, _fb)) goto loc_000F9B1B; /* jae: above or equal (unsigned >=) */

loc_000F9A9A: ;
    xmm2 = XMM_SCALAR(MEMF(0x3337A8)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    ebx = 4;
    /* nop */

loc_000F9AB0: ;
    esi = ZX16(MEM16(edx + 0xC));
    ecx = MEM32(edx + 4);
    esi = ecx + esi * 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    xmm1 = xmm4; /* movaps */
    MEM16(eax + 8) = 0;
    if (CMP_AE(_fa, _fb)) goto loc_000F9AFD; /* jae: above or equal (unsigned >=) */

loc_000F9AC7: ;
    goto loc_000F9AD0;

    /* nop */

loc_000F9AD0: ;
    ebp = ZX16(MEM16(ecx));
    MEM16(eax + 0xA) = MEM16(eax + 0xA) | LO16(ebx);
    _fa = (uint32_t)(MEM16(eax + 0xA)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000F9AF9; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F9AE4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 8) = MEM16(eax + 8) + 1;
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    if (CMP_B(_fa, _fb)) goto loc_000F9AD0; /* jb: below (unsigned <) */

loc_000F9AF7: ;
    goto loc_000F9AFD;

loc_000F9AF9: ;
    MEMF(eax) = xmm1.f[0]; /* movss */

loc_000F9AFD: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(edx + 0xC));
    _fa = (uint32_t)(MEM16(eax + 8)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 8), LO16(ecx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9B0E; /* jne: not equal / not zero */

loc_000F9B09: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(eax + 8) = LO16(ecx);

loc_000F9B0E: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x14;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F9AB0; /* jb: below (unsigned <) */

loc_000F9B18: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000F9B1B: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_000F9B20
 * Original: 0x000F9B20 - 0x000F9CBB (411 bytes, 143 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9B20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F9B20: ;
    eax = MEM32(edx);
    ecx = MEM32(eax);
    eax = ZX16(MEM16(eax + 4));
    PUSH32(esp, ebx);
    eax = eax + eax * 4;
    PUSH32(esp, ebp);
    ebp = ecx + eax * 4;
    xmm0 = XMM_SCALAR(MEMF(0x3337A8)); /* movss */
    PUSH32(esp, esi);
    esi = MEM32(edx + 4);
    edx = ebp;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x13) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x13;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x66666667;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)edx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((3) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    PUSH32(esp, edi);
    SET_LO8(ebx, 0x40);
    if (CMP_L(_fas, _fbs)) goto loc_000F9C6A; /* jl: less (signed <) */

loc_000F9B60: ;
    SET_LO16(eax, MEM16(ecx + 0xC));
    SET_LO16(eax, LO16(eax) - 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi + 8) = LO16(eax);
    edx = ZX16(LO16(eax));
    _fa = (uint32_t)(MEM8(ecx + 0xE)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xE), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9B87; /* je: equal / zero */

loc_000F9B72: ;
    SET_LO16(edi, MEM16(esi + 4));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9B87; /* je: equal / zero */

loc_000F9B7B: ;
    eax = ZX16(MEM16(esi + 6));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ZX16(LO16(edi));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }

loc_000F9B87: ;
    eax = MEM32(ecx + 4);
    eax = eax + edx * 8;
    edx = ZX16(MEM16(eax));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    SET_LO16(eax, MEM16(ecx + 0x20));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(eax, LO16(eax) - 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi + 8) = LO16(eax);
    edx = ZX16(LO16(eax));
    _fa = (uint32_t)(MEM8(ecx + 0x22)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x22), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9BC6; /* je: equal / zero */

loc_000F9BB1: ;
    SET_LO16(edi, MEM16(esi + 4));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9BC6; /* je: equal / zero */

loc_000F9BBA: ;
    eax = ZX16(MEM16(esi + 6));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ZX16(LO16(edi));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }

loc_000F9BC6: ;
    eax = MEM32(ecx + 0x18);
    eax = eax + edx * 8;
    edx = ZX16(MEM16(eax));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    SET_LO16(eax, MEM16(ecx + 0x34));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(eax, LO16(eax) - 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi + 8) = LO16(eax);
    edx = ZX16(LO16(eax));
    _fa = (uint32_t)(MEM8(ecx + 0x36)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x36), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9C05; /* je: equal / zero */

loc_000F9BF0: ;
    SET_LO16(edi, MEM16(esi + 4));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9C05; /* je: equal / zero */

loc_000F9BF9: ;
    eax = ZX16(MEM16(esi + 6));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ZX16(LO16(edi));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }

loc_000F9C05: ;
    eax = MEM32(ecx + 0x2C);
    eax = eax + edx * 8;
    edx = ZX16(MEM16(eax));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    SET_LO16(eax, MEM16(ecx + 0x48));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(eax, LO16(eax) - 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi + 8) = LO16(eax);
    edx = ZX16(LO16(eax));
    _fa = (uint32_t)(MEM8(ecx + 0x4A)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x4A), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9C44; /* je: equal / zero */

loc_000F9C2F: ;
    SET_LO16(edi, MEM16(esi + 4));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9C44; /* je: equal / zero */

loc_000F9C38: ;
    eax = ZX16(MEM16(esi + 6));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ZX16(LO16(edi));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }

loc_000F9C44: ;
    eax = MEM32(ecx + 0x40);
    eax = eax + edx * 8;
    edx = ZX16(MEM16(eax));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + -60;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000F9B60; /* jl: less (signed <) */

loc_000F9C6A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000F9CB6; /* jae: above or equal (unsigned >=) */

loc_000F9C6E: ;
    edi = edi;

loc_000F9C70: ;
    SET_LO16(eax, MEM16(ecx + 0xC));
    SET_LO16(eax, LO16(eax) - 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(esi + 8) = LO16(eax);
    edx = ZX16(LO16(eax));
    _fa = (uint32_t)(MEM8(ecx + 0xE)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xE), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9C97; /* je: equal / zero */

loc_000F9C82: ;
    SET_LO16(edi, MEM16(esi + 4));
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9C97; /* je: equal / zero */

loc_000F9C8B: ;
    eax = ZX16(MEM16(esi + 6));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ZX16(LO16(edi));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }

loc_000F9C97: ;
    eax = MEM32(ecx + 4);
    eax = eax + edx * 8;
    edx = ZX16(MEM16(eax));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000F9C70; /* jb: below (unsigned <) */

loc_000F9CB6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F9CC0
 * Original: 0x000F9CC0 - 0x000F9D23 (99 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000F9CC0: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = ZX16(MEM16(ecx + 0xC));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000F9D12; /* jle: less or equal (signed <=) */

loc_000F9CCF: ;
    ecx = MEM32(ecx + 4);
    xmm1 = XMM_SCALAR(MEMF(0x3337A8)); /* movss */
    /* nop */

loc_000F9CE0: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ecx + 2));
    ebx = edx;
    ebx = ebx & 0xF000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), LO16(edi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9CF8; /* jne: not equal / not zero */

loc_000F9CF3: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(edx), 6 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9D18; /* je: equal / zero */

loc_000F9CF8: ;
    edx = ZX16(MEM16(ecx));
    xmm2.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm2; /* movaps */
    if (CMP_L(_fas, _fbs)) goto loc_000F9CE0; /* jl: less (signed <) */

loc_000F9D12: ;
    POP32(esp, esi);
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000F9D18: ;
    ecx = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEMF(ecx) = xmm0.f[0]; /* movss */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000F9D30
 * Original: 0x000F9D30 - 0x000F9E1E (238 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9D30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000F9D30: ;
    PUSH32(esp, ecx);
    eax = MEM32(0x64D8C4);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 4), LO16(ebx) (16-bit) */
    MEM32(esp + 4) = ebx;
    if (CMP_BE(_fa, _fb)) goto loc_000F9E06; /* jbe: below or equal (unsigned <=) */

loc_000F9D47: ;
    xmm2 = XMM_SCALAR(MEMF(0x3337A8)); /* movss */
    xmm4 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x64D8B8);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    /* nop */

loc_000F9D60: ;
    eax = MEM32(eax);
    edx = ZX16(MEM16(eax + ebx + 0xC));
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    xmm1 = xmm3; /* movaps */
    if (CMP_LE(_fas, _fbs)) goto loc_000F9D9B; /* jle: less or equal (signed <=) */

loc_000F9D72: ;
    esi = MEM32(eax + 4);

loc_000F9D75: ;
    ebp = ZX16(MEM16(esi));
    xmm0.f[0] = (float)(int32_t)ebp; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_000F9E09; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000F9D89: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    if (CMP_L(_fas, _fbs)) goto loc_000F9D75; /* jl: less (signed <) */

loc_000F9D95: ;
    esi = MEM32(0x64D8B8);

loc_000F9D9B: ;
    ecx = ZX16(MEM16(eax + 0xC));
    eax = MEM32(eax + 4);
    edx = ZX16(MEM16(eax + ecx * 8 + -8));
    xmm1.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000F9DB0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9DE3; /* je: equal / zero */

loc_000F9DB5: ;
    eax = MEM32(esi + 0x18);
    edx = MEM32(eax + 0x20);
    eax = MEM32(edx + 4);
    MEM8(eax + edi + 0xA) = MEM8(eax + edi + 0xA) & 0xFB;
    _fa = (uint32_t)(MEM8(eax + edi + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    edx = MEM32(esi + 0x18);
    eax = eax + edi + 0xA;
    eax = MEM32(edx + 0x20);
    edx = MEM32(eax + 4);
    MEM16(edx + edi + 8) = LO16(ecx);
    eax = MEM32(esi + 0x18);
    ecx = MEM32(eax + 0x20);
    edx = MEM32(ecx + 4);
    MEMF(edi + edx) = xmm1.f[0]; /* movss */

loc_000F9DE3: ;
    eax = MEM32(0x64D8C4);
    ecx = MEM32(esp + 0x10);
    edx = ZX16(MEM16(eax + 4));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x14;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_L(_fas, _fbs)) goto loc_000F9D60; /* jl: less (signed <) */

loc_000F9E03: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);

loc_000F9E06: ;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000F9E09: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F9E16; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000F9E12: ;
    xmm1 = xmm4; /* movaps */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000F9E16: ;
    esi = MEM32(0x64D8B8);
    goto loc_000F9DB0;

}

/**
 * sub_000F9E20
 * Original: 0x000F9E20 - 0x000FA3E6 (1478 bytes, 428 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000F9E20(void)
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

loc_000F9E20: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x10);
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA3DC; /* je: equal / zero */

loc_000F9E43: ;
    ecx = MEM32(0x64D8B8);
    ecx = MEM32(ecx + 0xC);
    xmm4 = XMM_SCALAR(MEMF(0x49362C)); /* movss */
    MEM32(0x64D8D8) = ecx;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9EA2; /* je: equal / zero */

loc_000F9E62: ;
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F9EA2; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm3.f[0]) */

loc_000F9E67: ;
    esi = ZX16(MEM16(edx + 0xC));
    ecx = ZX16(MEM16(ebp + 8));
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9EA2; /* jne: not equal / not zero */

loc_000F9E74: ;
    eax = ZX16(MEM16(eax + ecx * 8));
    xmm1 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337A8); /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000F9EA2; /* jp: parity */

loc_000F9E92: ;
    _fa = (uint32_t)(MEM8(edx + 0xE)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + 0xE), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9EA2; /* je: equal / zero */

loc_000F9E98: ;
    MEM8(ebp + 0xA) = MEM8(ebp + 0xA) & 0xFB;
    _fa = (uint32_t)(MEM8(ebp + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM16(ebp + 8) = 0;

loc_000F9EA2: ;
    esi = MEM32(esp + 0x20);
    xmm2 = xmm4; /* movaps */
    goto loc_000F9EB1;

loc_000F9EAB: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */

loc_000F9EB1: ;
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xE), 0x40 (8-bit) */
    edx = ZX16(MEM16(ebp + 8));
    if (TEST_Z(_fa, _fb)) goto loc_000F9ED8; /* je: equal / zero */

loc_000F9EBB: ;
    SET_LO16(ecx, MEM16(ebp + 4));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9ED8; /* je: equal / zero */

loc_000F9EC4: ;
    eax = ZX16(MEM16(ebp + 6));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX16(LO16(ecx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esi + 4);
    ebx = eax + edx * 8;
    goto loc_000F9EDE;

loc_000F9ED8: ;
    ecx = MEM32(esi + 4);
    ebx = ecx + edx * 8;

loc_000F9EDE: ;
    edx = ZX16(MEM16(ebx));
    xmm1 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm0 = xmm4; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(0x64D8E0) = xmm0.f[0]; /* movss */
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337A8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEM32(0x64D8D0) = ebx;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F9F31; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000F9F10: ;
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp); /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm1.f[0]; /* subss */
    MEMF(0x64D8DC) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    MEMF(ebp) = xmm0.f[0]; /* movss */
    goto loc_000F9F7C;

loc_000F9F31: ;
    _fca = xmm3.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F9F69; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm1.f[0]) */

loc_000F9F36: ;
    xmm0 = xmm3; /* movaps */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp); /* subss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    MEMF(0x64D8DC) = xmm0.f[0]; /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(ebp) = xmm3.f[0]; /* movss */
    fp_push(MEMF(0x3339C4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000F9F7C; /* jbe: below or equal (unsigned <=) */

loc_000F9F67: ;
    goto loc_000F9F76;

loc_000F9F69: ;
    MEMF(0x64D8DC) = xmm2.f[0]; /* movss */
    MEMF(ebp) = xmm1.f[0]; /* movss */

loc_000F9F76: ;
    MEMF(esp + 0x14) = xmm3.f[0]; /* movss */

loc_000F9F7C: ;
    _fa = (uint32_t)(MEM8(ebx + 2)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 2), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9FEC; /* je: equal / zero */

loc_000F9F82: ;
    _fa = (uint32_t)(MEM8(ebp + 0xA)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xA), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F9FEC; /* jne: not equal / not zero */

loc_000F9F88: ;
    eax = MEM32(0x64D8C4);
    _fa = (uint32_t)(MEM8(eax + 6)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 6), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000F9FEC; /* jne: not equal / not zero */

loc_000F9F93: ;
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000F9FEC; /* jb: below (unsigned <) (xmm4.f[0] vs xmm3.f[0]) */

loc_000F9F98: ;
    eax = MEM32(0x343DD0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9FEC; /* je: equal / zero */

loc_000F9FA1: ;
    ecx = MEM32(0x64D8BC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9FEC; /* je: equal / zero */

loc_000F9FAB: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9FBE; /* je: equal / zero */

loc_000F9FB3: ;
    edx = MEM32(ecx + 0x14);
    eax = MEM32(edx + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000F9FC1;

loc_000F9FBE: ;
    eax = MEM32(ecx + 0xC);

loc_000F9FC1: ;
    edx = MEM32(0x64D8D4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9FD5; /* jne: not equal / not zero */

loc_000F9FCB: ;
    PUSH32(esp, 0x000F9FD0u); RECOMP_ABI_CALL(0x00020BD0u, sub_00020BD0); /* call 0x00020BD0 */

loc_000F9FD0: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    goto loc_000F9FEC;

loc_000F9FD5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9FEC; /* je: equal / zero */

loc_000F9FD9: ;
    edi = MEM32(0x64D8D4);
    ecx = 0x14;
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
    esi = MEM32(esp + 0x20);

loc_000F9FEC: ;
    SET_LO16(eax, MEM16(ebx + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9FFE; /* je: equal / zero */

loc_000F9FF4: ;
    _fa = (uint32_t)(MEM8(ebp + 0xA)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0xA), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FA0C8; /* jne: not equal / not zero */

loc_000F9FFE: ;
    edx = MEM32(0x64D8F8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA036; /* je: equal / zero */

loc_000FA008: ;
    ecx = ZX16(MEM16(esi + 0x10));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000FA01C; /* jae: above or equal (unsigned >=) */

loc_000FA011: ;
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edx);
    goto loc_000FA02E;

loc_000FA01C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000FA036; /* jae: above or equal (unsigned >=) */

loc_000FA021: ;
    ecx = ecx & 0x1F;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = 1;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(edx + 4);

loc_000FA02E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, edi (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FA0C8; /* jne: not equal / not zero */

loc_000FA036: ;
    edi = ZX16(LO16(eax));
    eax = edi;
    eax = eax & 0x17C0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x200 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000FA140; /* jg: greater (signed >) */

loc_000FA04B: ;
    if (CMP_NE(_fa, _fb)) goto loc_000FA07D; /* jne: not equal / not zero */

loc_000FA04D: ;
    eax = esp + 0x18;
    PUSH32(esp, eax);
    edi = edi & 0xF000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    PUSH32(esp, 0x000FA05Fu); RECOMP_ABI_CALL(0x000F9CC0u, sub_000F9CC0); /* call 0x000F9CC0 */

loc_000FA05F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA0C8; /* je: equal / zero */

loc_000FA067: ;
    xmm4 = XMM_SCALAR(MEMF(0x49362C)); /* movss */
    MEM16(ebp + 8) = LO16(eax);
    MEMF(ebp) = xmm3.f[0]; /* movss */
    goto loc_000F9EAB;

loc_000FA07D: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000FA0F3; /* je: equal / zero */

loc_000FA082: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_000FA0A0; /* je: equal / zero */

loc_000FA087: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_000FA0C8; /* jne: not equal / not zero */

loc_000FA08E: ;
    eax = MEM32(0x343DD8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA0C8; /* je: equal / zero */

loc_000FA097: ;
    eax = ebx;
    PUSH32(esp, 0x000FA09Eu); RECOMP_ABI_CALL(0x0010E510u, sub_0010E510); /* call 0x0010E510 */

loc_000FA09E: ;
    goto loc_000FA0C8;

loc_000FA0A0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FA0BC; /* jnp: not parity */

loc_000FA0AF: ;
    ecx = ZX16(MEM16(esi + 0xC));
    edx = ZX16(MEM16(ebp + 8));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA0C8; /* jne: not equal / not zero */

loc_000FA0BC: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000FA0C2u); RECOMP_ABI_CALL(0x0010CF10u, sub_0010CF10); /* call 0x0010CF10 */

loc_000FA0C2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FA0C5: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */

loc_000FA0C8: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(ebx + 2));
    edx = edx & 0x17C0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x1000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA1B5; /* jne: not equal / not zero */

loc_000FA0E0: ;
    _fa = (uint32_t)(MEM8(ebx + 4)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 4), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA1A4; /* je: equal / zero */

loc_000FA0EA: ;
    SET_LO16(eax, MEM16(ebx + 6));
    goto loc_000FA1AF;

loc_000FA0F3: ;
    eax = MEM32(0x64D1DC);
    eax = MEM32(eax + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA0C8; /* je: equal / zero */

loc_000FA100: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA0C8; /* je: equal / zero */

loc_000FA105: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000FA10Bu); RECOMP_ABI_CALL(0x00272930u, sub_00272930); /* call 0x00272930 */

loc_000FA10B: ;
    SET_LO16(eax, MEM16(ebx + 2));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA131; /* je: equal / zero */

loc_000FA116: ;
    PUSH32(esp, 0x000FA11Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FA11B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA0C5; /* je: equal / zero */

loc_000FA11F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebp) = xmm0.f[0]; /* movss */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000FA131: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA0C5; /* je: equal / zero */

loc_000FA135: ;
    PUSH32(esp, 0x000FA13Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FA13A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA11F; /* je: equal / zero */

loc_000FA13E: ;
    goto loc_000FA0C5;

loc_000FA140: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x400 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA161; /* je: equal / zero */

loc_000FA147: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1000 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA0C8; /* jne: not equal / not zero */

loc_000FA152: ;
    PUSH32(esp, ebp);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000FA159u); RECOMP_ABI_CALL(0x00272AF0u, sub_00272AF0); /* call 0x00272AF0 */

loc_000FA159: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000FA0C5;

loc_000FA161: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edi, MEM16(ebx + 2));
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ecx = esi;
    edi = edi & 0xF000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x000FA179u); RECOMP_ABI_CALL(0x000F9CC0u, sub_000F9CC0); /* call 0x000F9CC0 */

loc_000FA179: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA0C8; /* je: equal / zero */

loc_000FA185: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    PUSH32(esp, 0x000FA190u); RECOMP_ABI_CALL(0x000F9D30u, sub_000F9D30); /* call 0x000F9D30 */

loc_000FA190: ;
    MEM32(0x64D8E4) = 1;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000FA1A4: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA1B5; /* je: equal / zero */

loc_000FA1AB: ;
    SET_LO16(eax, MEM16(eax + 2));

loc_000FA1AF: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 4 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA1B9; /* je: equal / zero */

loc_000FA1B5: ;
    MEM8(ebp + 0xA) = MEM8(ebp + 0xA) | 4;
    _fa = (uint32_t)(MEM8(ebp + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_000FA1B9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FA3D0; /* jnp: not parity */

loc_000FA1CC: ;
    xmm4 = XMM_SCALAR(MEMF(0x49362C)); /* movss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FA3D0; /* jnp: not parity */

loc_000FA1E1: ;
    _fca = xmm3.f[0]; _fcb = xmm4.f[0]; /* comiss */
    SET_LO16(eax, MEM16(ebp + 8));
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FA2FD; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm4.f[0]) */

loc_000FA1EE: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA2AF; /* jne: not equal / not zero */

loc_000FA1F7: ;
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xE), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA3D0; /* je: equal / zero */

loc_000FA201: ;
    SET_LO16(eax, MEM16(esi + 0xC));
    MEM8(ebp + 0xA) = MEM8(ebp + 0xA) & 0xFB;
    _fa = (uint32_t)(MEM8(ebp + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO16(eax, LO16(eax) - 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(ebp + 8) = LO16(eax);
    ecx = ZX16(LO16(eax));
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xE), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA235; /* je: equal / zero */

loc_000FA218: ;
    SET_LO16(edx, MEM16(ebp + 4));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA235; /* je: equal / zero */

loc_000FA221: ;
    eax = ZX16(MEM16(ebp + 6));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX16(LO16(edx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esi + 4);
    eax = eax + edx * 8;
    goto loc_000FA23B;

loc_000FA235: ;
    edx = MEM32(esi + 4);
    eax = edx + ecx * 8;

loc_000FA23B: ;
    ecx = ZX16(MEM16(eax));
    edx = MEM32(0x64D8B8);
    xmm0.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    ecx = MEM32(0x64D8BC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337A8); /* mulss */
    MEMF(ebp) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000F9EAB; /* jne: not equal / not zero */

loc_000FA263: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9EAB; /* je: equal / zero */

loc_000FA26C: ;
    ecx = MEM32(esp + 0x28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9EAB; /* je: equal / zero */

loc_000FA278: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax + 2));
    edx = edx & 0x17C0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9EAB; /* jne: not equal / not zero */

loc_000FA290: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA2A2; /* je: equal / zero */

loc_000FA298: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_000FA2A2: ;
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000FA2AF: ;
    MEM8(ebp + 0xA) = MEM8(ebp + 0xA) & 0xFB;
    _fa = (uint32_t)(MEM8(ebp + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(ebp + 8) = LO16(eax);
    ecx = ZX16(LO16(eax));
    _fa = (uint32_t)(MEM8(esi + 0xE)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0xE), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA2DE; /* je: equal / zero */

loc_000FA2C1: ;
    SET_LO16(edx, MEM16(ebp + 4));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA2DE; /* je: equal / zero */

loc_000FA2CA: ;
    eax = ZX16(MEM16(ebp + 6));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX16(LO16(edx));
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = MEM32(esi + 4);
    eax = eax + edx * 8;
    goto loc_000FA2E4;

loc_000FA2DE: ;
    edx = MEM32(esi + 4);
    eax = edx + ecx * 8;

loc_000FA2E4: ;
    eax = ZX16(MEM16(eax));
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337A8); /* mulss */
    MEMF(ebp) = xmm0.f[0]; /* movss */
    goto loc_000F9EAB;

loc_000FA2FD: ;
    ecx = ZX16(MEM16(esi + 0xC));
    edx = ZX16(LO16(eax));
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA3A5; /* jne: not equal / not zero */

loc_000FA30D: ;
    SET_LO16(eax, MEM16(esi + 0xE));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FA3B8; /* jne: not equal / not zero */

loc_000FA319: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA32C; /* je: equal / zero */

loc_000FA31D: ;
    MEM8(ebp + 0xA) = MEM8(ebp + 0xA) & 0xFB;
    _fa = (uint32_t)(MEM8(ebp + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM16(ebp + 8) = 0;
    MEMF(ebp) = xmm3.f[0]; /* movss */

loc_000FA32C: ;
    eax = MEM32(0x64D8BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x64D8B8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x64D8B8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9EAB; /* jne: not equal / not zero */

loc_000FA33D: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000F9EAB; /* je: equal / zero */

loc_000FA346: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000F9EAB; /* je: equal / zero */

loc_000FA352: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ebx + 2));
    eax = eax & 0x17C0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000F9EAB; /* jne: not equal / not zero */

loc_000FA368: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA37A; /* je: equal / zero */

loc_000FA370: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_000FA37A: ;
    edx = ZX16(MEM16(ebx));
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337A8); /* mulss */
    MEMF(ebp) = xmm0.f[0]; /* movss */
    SET_LO16(eax, MEM16(esi + 0xC));
    SET_LO16(eax, LO16(eax) - 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(ebp + 8) = LO16(eax);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000FA3A5: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ebp + 0xA) = MEM8(ebp + 0xA) & 0xFB;
    _fa = (uint32_t)(MEM8(ebp + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM16(ebp + 8) = LO16(eax);
    MEMF(ebp) = xmm3.f[0]; /* movss */
    goto loc_000F9EAB;

loc_000FA3B8: ;
    ecx = ZX16(MEM16(ebx));
    MEM8(ebp + 0xA) = MEM8(ebp + 0xA) & 0xFE;
    _fa = (uint32_t)(MEM8(ebp + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3337A8); /* mulss */
    MEMF(ebp) = xmm1.f[0]; /* movss */

loc_000FA3D0: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA3DC; /* je: equal / zero */

loc_000FA3D8: ;
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_000FA3DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
 * sub_000FA32C
 * Original: 0x000FA32C - 0x000FA3E6 (186 bytes, 53 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA32C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FA32C: ;
    eax = MEM32(0x64D8BC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x64D8B8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x64D8B8) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000F9EAB(); return; } /* jne: not equal / not zero */

loc_000FA33D: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) { g_seh_ebp = ebp; sub_000F9EAB(); return; } /* je: equal / zero */

loc_000FA346: ;
    eax = MEM32(esp + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_000F9EAB(); return; } /* je: equal / zero */

loc_000FA352: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ebx + 2));
    eax = eax & 0x17C0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000F9EAB(); return; } /* jne: not equal / not zero */

loc_000FA368: ;
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA37A; /* je: equal / zero */

loc_000FA370: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_000FA37A: ;
    edx = ZX16(MEM16(ebx));
    xmm0.f[0] = (float)(int32_t)edx; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337A8); /* mulss */
    MEMF(ebp) = xmm0.f[0]; /* movss */
    SET_LO16(eax, MEM16(esi + 0xC));
    SET_LO16(eax, LO16(eax) - 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(ebp + 8) = LO16(eax);
    eax = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    ecx = ZX16(MEM16(ebx));
    MEM8(ebp + 0xA) = MEM8(ebp + 0xA) & 0xFE;
    _fa = (uint32_t)(MEM8(ebp + 0xA)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3337A8); /* mulss */
    MEMF(ebp) = xmm1.f[0]; /* movss */
    eax = MEM32(esp + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA3DC; /* je: equal / zero */

loc_000FA3D8: ;
    MEMF(eax) = xmm0.f[0]; /* movss */

loc_000FA3DC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FA3F0
 * Original: 0x000FA3F0 - 0x000FA679 (649 bytes, 191 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA3F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FA3F0: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000FA416; /* je: equal / zero */

loc_000FA401: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    MEM32(esp + 0x1C) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000FA416; /* je: equal / zero */

loc_000FA40B: ;
    ebp = MEM32(eax + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, esi (32-bit) */
    MEM32(esp + 0x18) = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_000FA420; /* jne: not equal / not zero */

loc_000FA416: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000FA420: ;
    eax = MEM32(0x64D8C8);
    edx = MEM32(0x64D8BC);
    ecx = MEM32(0x64D8CC);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    MEM32(esp + 0x24) = eax;
    eax = MEM32(0x64D8B8);
    eax = MEM32(eax + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    MEM32(esp + 0x14) = esi;
    MEM32(esp + 0x20) = edx;
    MEM32(esp + 0x28) = ecx;
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA45D; /* je: equal / zero */

loc_000FA456: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    goto loc_000FA465;

loc_000FA45D: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */

loc_000FA465: ;
    _fa = (uint32_t)(MEM16(edi + 4)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 4), LO16(esi) (16-bit) */
    xmm2 = XMM_SCALAR(MEMF(0x49362C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(0x49362C) = xmm2.f[0]; /* movss */
    if (CMP_BE(_fa, _fb)) goto loc_000FA612; /* jbe: below or equal (unsigned <=) */

loc_000FA483: ;
    ebx = MEM32(0x64D8D4);
    goto loc_000FA490;

loc_000FA48B: ;
    ebp = MEM32(esp + 0x18);
    /* nop */

loc_000FA490: ;
    eax = MEM32(0x64CFE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA4D7; /* jne: not equal / not zero */

loc_000FA499: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000FA4D7; /* jbe: below or equal (unsigned <=) */

loc_000FA49E: ;
    eax = MEM32(edx + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FA4A9; /* jne: not equal / not zero */

loc_000FA4A5: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FA4D7; /* jne: not equal / not zero */

loc_000FA4A9: ;
    eax = MEM32(edi);
    ecx = esi + esi * 4;
    eax = MEM32(eax + ecx * 4 + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA4D7; /* je: equal / zero */

loc_000FA4B6: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 2));
    ecx = ecx & 0x17C0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x80 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FA4D7; /* jne: not equal / not zero */

loc_000FA4CA: ;
    eax = MEM32(edx + 0x14);
    eax = MEM32(eax);
    MEM8(eax) = MEM8(eax) & 0xFE;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    goto loc_000FA605;

loc_000FA4D7: ;
    eax = MEM32(0x64D8EC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA509; /* je: equal / zero */

loc_000FA4E0: ;
    eax = MEM32(edi);
    ecx = esi + esi * 4;
    ecx = eax + ecx * 4;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA509; /* je: equal / zero */

loc_000FA4EF: ;
    eax = ZX16(MEM16(eax + 2));
    eax = eax & 0x17C0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x80) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x80 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA509; /* je: equal / zero */

loc_000FA4FF: ;
    _fa = (uint32_t)(MEM8(ecx + 0xE)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0xE), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA605; /* je: equal / zero */

loc_000FA509: ;
    ecx = esi + esi * 2;
    SET_LO16(eax, MEM16(ebp + ecx * 4 + 0xA));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ebp = ebp + ecx * 4;
    if (TEST_Z(_fa, _fb)) goto loc_000FA605; /* je: equal / zero */

loc_000FA51D: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FA605; /* jne: not equal / not zero */

loc_000FA525: ;
    eax = MEM32(edi);
    edx = esi + esi * 4;
    edi = eax + edx * 4;
    eax = edi;
    MEM32(0x64D8C8) = eax;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D8CC) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000FA553; /* je: equal / zero */

loc_000FA540: ;
    ecx = eax;
    MEM32(0x64D8BC) = eax;
    PUSH32(esp, 0x000FA54Cu); RECOMP_ABI_CALL(0x00016950u, sub_00016950); /* call 0x00016950 */

loc_000FA54C: ;
    MEM32(0x64D8D4) = eax;
    goto loc_000FA55F;

loc_000FA553: ;
    ecx = MEM32(0x64D8B8);
    MEM32(0x64D8BC) = ecx;

loc_000FA55F: ;
    edx = MEM32(esp + 0x34);
    PUSH32(esp, edx);
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    MEM32(0x64D8E4) = 0;
    PUSH32(esp, 0x000FA577u); RECOMP_ABI_CALL(0x000F9E20u, sub_000F9E20); /* call 0x000F9E20 */

loc_000FA577: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA59C; /* je: equal / zero */

loc_000FA57E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x14) = 1;
    if (CMP_NE(_fa, _fb)) goto loc_000FA59C; /* jne: not equal / not zero */

loc_000FA58A: ;
    eax = MEM32(esp + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA59C; /* je: equal / zero */

loc_000FA592: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */

loc_000FA59C: ;
    eax = MEM32(0x64D8E4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA5A8; /* je: equal / zero */

loc_000FA5A5: ;
    esi = esi | 0xFFFFFFFFu;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000FA5A8: ;
    eax = MEM32(0x64CFE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(0x64D8BC);
    if (CMP_EQ(_fa, _fb)) goto loc_000FA5F5; /* je: equal / zero */

loc_000FA5B7: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA5E4; /* je: equal / zero */

loc_000FA5BF: ;
    PUSH32(esp, 3);
    PUSH32(esp, edx);
    MEM32(0x64CFE8) = 0;
    PUSH32(esp, 0x000FA5D1u); RECOMP_ABI_CALL(0x0005BC70u, sub_0005BC70); /* call 0x0005BC70 */

loc_000FA5D1: ;
    edx = MEM32(0x64D8BC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64CFE8) = 1;

loc_000FA5E4: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA5F5; /* je: equal / zero */

loc_000FA5E9: ;
    eax = MEM32(edx + 0x14);
    eax = MEM32(eax + 4);
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000FA5F5: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    edi = MEM32(esp + 0x1C);
    MEM32(0x64D8D4) = ebx;

loc_000FA605: ;
    ecx = ZX16(MEM16(edi + 4));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000FA48B; /* jb: below (unsigned <) */

loc_000FA612: ;
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    MEM32(0x64D8CC) = ecx;
    ecx = MEM32(esp + 0x34);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(0x64D8BC) = edx;
    MEM32(0x64D8C8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000FA66D; /* je: equal / zero */

loc_000FA637: ;
    edx = MEM32(0x64D8B8);
    eax = MEM32(edx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA65D; /* je: equal / zero */

loc_000FA644: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x3C)); /* movss */
    eax = MEM32(esp + 0x14);
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000FA65D: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm1.f[0] = xmm1.f[0] / xmm0.f[0]; /* divss */
    MEMF(ecx) = xmm1.f[0]; /* movss */

loc_000FA66D: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FA680
 * Original: 0x000FA680 - 0x000FA73D (189 bytes, 60 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000FA680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FA680: ;
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x148);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x154);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000FA72F; /* ja: above (unsigned >) */

loc_000FA69A: ;
    /* nop */

loc_000FA6A0: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA724; /* je: equal / zero */

loc_000FA6A6: ;
    ecx = eax;
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA724; /* je: equal / zero */

loc_000FA6B0: ;
    esi = MEM32(eax + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x40000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA724; /* je: equal / zero */

loc_000FA6BB: ;
    ecx = MEM32(eax + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA724; /* je: equal / zero */

loc_000FA6C2: ;
    edx = MEM32(ecx + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA724; /* je: equal / zero */

loc_000FA6C9: ;
    _fa = (uint32_t)(MEM8(ecx + 0x2E)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x2E), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA6D6; /* je: equal / zero */

loc_000FA6CF: ;
    SET_LO8(ecx, MEM8(eax + 0x1C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA724; /* je: equal / zero */

loc_000FA6D6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 0x400000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FA724; /* jne: not equal / not zero */

loc_000FA6DE: ;
    ecx = MEM32(edx);
    MEM32(0x64D8C4) = ecx;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x4000000 (32-bit) */
    MEM32(0x64D8B8) = eax;
    MEM32(0x64D8C0) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000FA712; /* je: equal / zero */

loc_000FA6FB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000 (32-bit) */
    eax = MEM32(eax + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_000FA70D; /* je: equal / zero */

loc_000FA706: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000FA714;

loc_000FA70D: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000FA714;

loc_000FA712: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000FA714: ;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    MEM32(0x64D8D4) = eax;
    PUSH32(esp, 0x000FA721u); RECOMP_ABI_CALL(0x000FA3F0u, sub_000FA3F0); /* call 0x000FA3F0 */

loc_000FA721: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FA724: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000FA6A0; /* jbe: below or equal (unsigned <=) */

loc_000FA72F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x64D8C8) = 0;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000FA740
 * Original: 0x000FA740 - 0x000FA7FB (187 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FA740: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FA7F7; /* je: equal / zero */

loc_000FA74B: ;
    MEM32(0x64D8C4) = eax;
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D8B8) = ecx;
    MEM32(0x64D8C8) = edx;
    MEM32(0x64D8CC) = esi;
    if (CMP_NE(_fa, _fb)) goto loc_000FA76A; /* jne: not equal / not zero */

loc_000FA768: ;
    eax = ecx;

loc_000FA76A: ;
    xmm0 = XMM_SCALAR(MEMF(0x49362C)); /* movss */
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x4000000 (32-bit) */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    MEM32(0x64D8BC) = eax;
    MEMF(0x49362C) = xmm0.f[0]; /* movss */
    MEM32(0x64D8E4) = 0;
    if (TEST_Z(_fa, _fb)) goto loc_000FA7B6; /* je: equal / zero */

loc_000FA79F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000 (32-bit) */
    eax = MEM32(eax + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_000FA7B1; /* je: equal / zero */

loc_000FA7AA: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000FA7B8;

loc_000FA7B1: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000FA7B8;

loc_000FA7B6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000FA7B8: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    MEM32(0x64D8D4) = eax;
    MEM32(0x64D8E8) = 1;
    PUSH32(esp, 0x000FA7D2u); RECOMP_ABI_CALL(0x000F9E20u, sub_000F9E20); /* call 0x000F9E20 */

loc_000FA7D2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D8E8) = 0;
    MEM32(0x64D8C8) = 0;
    MEMF(0x49362C) = xmm0.f[0]; /* movss */

loc_000FA7F7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FA800
 * Original: 0x000FA800 - 0x000FA848 (72 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA800(void)
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

loc_000FA800: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 2 (16-bit) */
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000FA83E; /* jne: not equal / not zero */

loc_000FA828: ;
    fp_push(MEMF(eax + 0x6270D8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000FA83E: ;
    eax = MEM32(eax + 0x6270D8);
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
 * sub_000FA850
 * Original: 0x000FA850 - 0x000FA8A4 (84 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA850(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FA850: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000FA856u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FA856: ;
    esi = eax;
    PUSH32(esp, 0x000FA85Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FA85D: ;
    ecx = esi;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, esi);
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
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
 * sub_000FA8B0
 * Original: 0x000FA8B0 - 0x000FA90E (94 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA8B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FA8B0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000FA8B6u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FA8B6: ;
    esi = eax;
    PUSH32(esp, 0x000FA8BDu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FA8BD: ;
    ecx = esi;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, edx (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FA8D1; /* je: equal / zero */

loc_000FA8CB: ;
    edx = ~edx;
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_000FA8D3;

loc_000FA8D1: ;
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000FA8D3: ;
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
 * sub_000FA910
 * Original: 0x000FA910 - 0x000FA966 (86 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA910(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FA910: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x000FA916u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FA916: ;
    esi = eax;
    PUSH32(esp, 0x000FA91Du); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FA91D: ;
    ecx = esi;
    edx = 1;
    edx = edx << LO8(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    POP32(esp, esi);
    edx = ~edx;
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
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
 * sub_000FA96E
 * Original: 0x000FA96E - 0x000FA970 (2 bytes, 2 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA96E(void)
{

loc_000FA96E: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000FA970
 * Original: 0x000FA970 - 0x000FA9CE (94 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FA970(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000FA970: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000FA978u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FA978: ;
    esi = eax;
    PUSH32(esp, 0x000FA97Fu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FA97F: ;
    edi = MEM32(0x64D854);
    ecx = esi;
    ebx = 1;
    if (LO8(ecx)) _cf = (int)(((ebx) >> (32 - (LO8(ecx)))) & 1);
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edi + 0x6270D8;
    _cf = 0; /* logical op clears CF */
    ebx = ebx & eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0x64D858);
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ebx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x20)) >> 32) & 1);
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = (int)((ebx) != 0);
    ebx = (uint32_t)(-(int32_t)ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edi;
    POP32(esp, edi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    MEM32(edx) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FA9D0
 * Original: 0x000FA9D0 - 0x000FAA30 (96 bytes, 25 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000FA9D0(void)
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

loc_000FA9D0: ;
    PUSH32(esp, ecx);
    edx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    ecx = edx + 0x6270D8;
    if (CMP_NE(_fa, _fb)) goto loc_000FA9F7; /* jne: not equal / not zero */

loc_000FA9F1: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx); /* cvtsi2ss */
    goto loc_000FA9FB;

loc_000FA9F7: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */

loc_000FA9FB: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = sin(fp_top()); /* fsin */
    MEM16(eax * 8 + 0x616FD8) = 2;
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
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FAA30
 * Original: 0x000FAA30 - 0x000FAA90 (96 bytes, 25 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000FAA30(void)
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

loc_000FAA30: ;
    PUSH32(esp, ecx);
    edx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    ecx = edx + 0x6270D8;
    if (CMP_NE(_fa, _fb)) goto loc_000FAA57; /* jne: not equal / not zero */

loc_000FAA51: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx); /* cvtsi2ss */
    goto loc_000FAA5B;

loc_000FAA57: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */

loc_000FAA5B: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = cos(fp_top()); /* fcos */
    MEM16(eax * 8 + 0x616FD8) = 2;
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
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FAA90
 * Original: 0x000FAA90 - 0x000FAB00 (112 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FAA90(void)
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

loc_000FAA90: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D854);
    PUSH32(esp, esi);
    esi = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(esi * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi * 8 + 0x616FD8), 1 (16-bit) */
    PUSH32(esp, edi);
    edi = ebx + 0x6270D8;
    if (CMP_NE(_fa, _fb)) goto loc_000FAABB; /* jne: not equal / not zero */

loc_000FAAB5: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edi); /* cvtsi2ss */
    goto loc_000FAABF;

loc_000FAABB: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */

loc_000FAABF: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, 0x000FAACEu); RECOMP_ABI_CALL(0x002941B0u, sub_002941B0); /* call 0x002941B0 */

loc_000FAACE: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi * 8 + 0x616FDC) = edi;
    MEM16(esi * 8 + 0x616FD8) = 2;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, edi);
    MEM32(0x64D858) = esi;
    POP32(esp, esi);
    MEM32(0x64D854) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_000FAB00
 * Original: 0x000FAB00 - 0x000FAB3B (59 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FAB00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000FAB00: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(esp + 8); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FAB3A; /* jnp: not parity */

loc_000FAB11: ;
    PUSH32(esp, 0x000FAB16u); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_000FAB16: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337E0); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_000FAB3A: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FAB40
 * Original: 0x000FAB40 - 0x000FAC25 (229 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FAB40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000FAB40: ;
    edx = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = 1;
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FAB6C; /* jne: not equal / not zero */

loc_000FAB62: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 0x6270D8); /* cvtsi2ss */
    goto loc_000FAB74;

loc_000FAB6C: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x6270D8)); /* movss */

loc_000FAB74: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), LO16(eax) (16-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000FABA3; /* jne: not equal / not zero */

loc_000FAB93: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 0x6270D8); /* cvtsi2ss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    goto loc_000FABB1;

loc_000FABA3: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x6270D8)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_000FABB1: ;
    _fca = xmm0.f[0]; _fcb = MEMF(esp); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FABEF; /* jnp: not parity */

loc_000FABBB: ;
    PUSH32(esp, 0x000FABC0u); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_000FABC0: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    edx = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337E0); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */

loc_000FABEF: ;
    eax = edx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    MEM16(ecx * 8 + 0x616FD8) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FAC30
 * Original: 0x000FAC30 - 0x000FAC60 (48 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FAC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FAC30: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FAC37; /* jne: not equal / not zero */

loc_000FAC34: ;
    eax = esi;
    esp += 4; return; /* ret */

loc_000FAC37: ;
    PUSH32(esp, 0x000FAC3Cu); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_000FAC3C: ;
    ecx = eax;
    eax = edi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    eax = 0x80010003u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xE) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FAC5F; /* jne: not equal / not zero */

loc_000FAC5E: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000FAC5F: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FAC60
 * Original: 0x000FAC60 - 0x000FACDB (123 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FAC60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FAC60: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000FAC67u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FAC67: ;
    edi = eax;
    PUSH32(esp, 0x000FAC6Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FAC6E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FAC76; /* jne: not equal / not zero */

loc_000FAC74: ;
    goto loc_000FAC9E;

loc_000FAC76: ;
    PUSH32(esp, 0x000FAC7Bu); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_000FAC7B: ;
    ecx = eax;
    eax = edi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    eax = 0x80010003u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xE) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FAC9E; /* jne: not equal / not zero */

loc_000FAC9D: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000FAC9E: ;
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
 * sub_000FACE0
 * Original: 0x000FACE0 - 0x000FAD40 (96 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FACE0(void)
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

loc_000FACE0: ;
    PUSH32(esp, ecx);
    edx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    ecx = edx + 0x6270D8;
    if (CMP_NE(_fa, _fb)) goto loc_000FAD07; /* jne: not equal / not zero */

loc_000FAD01: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx); /* cvtsi2ss */
    goto loc_000FAD0B;

loc_000FAD07: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */

loc_000FAD0B: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 2;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_top() = fabs(fp_top()); /* fabs */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FAD40
 * Original: 0x000FAD40 - 0x000FAD90 (80 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FAD40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FAD40: ;
    PUSH32(esp, 0x000FAD45u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FAD45: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_000FAD4B; /* jge: greater or equal (signed >=) */

loc_000FAD49: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_000FAD4B: ;
    ecx = MEM32(0x64D854);
    edx = eax;
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
 * sub_000FAD90
 * Original: 0x000FAD90 - 0x000FAE0E (126 bytes, 37 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000FAD90(void)
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

loc_000FAD90: ;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ecx + 0x6270D8)); /* fld float */
    edx = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(ecx + 0x6270D8)); /* fsub dword ptr [ecx + 0x6270d8] */
    eax = ecx + 0x6270D8;
    fp_push(MEMF(edx + 4)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 4)); /* fsub dword ptr [eax + 4] */
    esi = MEM32(0x64D858);
    fp_push(MEMF(edx + 8)); /* fld float */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(eax + 8)); /* fsub dword ptr [eax + 8] */
    MEM32(esi * 8 + 0x616FDC) = eax;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEM16(esi * 8 + 0x616FD8) = 2;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    MEM32(0x64D858) = esi;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEM32(0x64D854) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    POP32(esp, esi);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 4);
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
 * sub_000FAE10
 * Original: 0x000FAE10 - 0x000FAE74 (100 bytes, 30 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000FAE10(void)
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

loc_000FAE10: ;
    edx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(edx + 0x6270E0)); /* fld float */
    eax = edx + 0x6270D8;
    fp_push(MEMF(eax + 4)); /* fld float */
    ecx = MEM32(0x64D858);
    fp_push(MEMF(eax)); /* fld float */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(ecx * 8 + 0x616FDC) = eax;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEM16(ecx * 8 + 0x616FD8) = 2;
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 4);
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
 * sub_000FAE4E
 * Original: 0x000FAE4E - 0x000FAE74 (38 bytes, 14 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000FAE4E(void)
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

loc_000FAE4E: ;
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 4);
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
 * sub_000FAE80
 * Original: 0x000FAE80 - 0x000FAEF8 (120 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FAE80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FAE80: ;
    edx = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2 = XMM_SCALAR(MEMF(edx + 0x6270D8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x6270DC)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x6270E0)); /* movss */
    eax = edx + 0x6270D8;
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm1 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(ecx * 8 + 0x616FDC) = eax;
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x616FD8) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FAF00
 * Original: 0x000FAF00 - 0x000FAF3B (59 bytes, 25 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000FAF00(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000FAF00: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax + 8)); /* fld float */
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
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(ecx + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEMF(ecx + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FAF40
 * Original: 0x000FAF40 - 0x000FAFDD (157 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FAF40(void)
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

loc_000FAF40: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(edx + 0x6270D8)); /* fld float */
    eax = edx + 0x6270D8;
    fp_push(MEMF(eax + 4)); /* fld float */
    ecx = MEM32(0x64D858);
    fp_push(MEMF(eax + 8)); /* fld float */
    PUSH32(esp, esi);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM16(ecx * 8 + 0x616FD8) = 3;
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    MEM32(0x64D858) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esp + 4);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEM32(eax) = esi;
    esi = MEM32(esp + 8);
    MEM32(eax + 4) = esi;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    esi = MEM32(esp + 0xC);
    MEM32(eax + 8) = esi;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_000FAFE0
 * Original: 0x000FAFE0 - 0x000FB027 (71 bytes, 28 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000FAFE0(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000FAFE0: ;
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax + 8)); /* fld float */
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
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FB030
 * Original: 0x000FB030 - 0x000FB0F3 (195 bytes, 58 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000FB030(void)
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

loc_000FB030: ;
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000FB05D; /* jne: not equal / not zero */

loc_000FB053: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_000FB065;

loc_000FB05D: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_000FB065: ;
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 8;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x000FB091u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FB08Au); } /* indirect call */
    }

loc_000FB091: ;
    fp_push(MEMF(esi)); /* fld float */
    eax = MEM32(0x64D854);
    fp_push(MEMF(esi + 4)); /* fld float */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esi + 8)); /* fld float */
    MEM32(0x64D854) = eax;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = MEM32(esp + 0x4C);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FB100
 * Original: 0x000FB100 - 0x000FB184 (132 bytes, 45 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000FB100(void)
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

loc_000FB100: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x000FB12Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FB127u); } /* indirect call */
    }

loc_000FB12E: ;
    eax = MEM32(0x64D854);
    fp_push(MEMF(esi + 8)); /* fld float */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esi + 4)); /* fld float */
    MEM32(0x64D854) = eax;
    fp_push(MEMF(esi)); /* fld float */
    eax = MEM32(esp + 0x48);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FB190
 * Original: 0x000FB190 - 0x000FB1C3 (51 bytes, 20 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000FB190(void)
{
    #define fp_push(v) do { double _fp_value = (v); \
        g_fp_top = (g_fp_top + 7u) & 7u; \
        g_fp_stack[g_fp_top] = _fp_value; } while (0)
    #define fp_pop() (g_fp_top = (g_fp_top + 1u) & 7u)
    #define fp_top() g_fp_stack[g_fp_top]
    #define fp_st(i) g_fp_stack[(g_fp_top + (i)) & 7u]
    #define fp_st1() fp_st(1)

loc_000FB190: ;
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax)); /* fld float */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3337C0)); /* fmul dword ptr [0x3337c0] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FB1D0
 * Original: 0x000FB1D0 - 0x000FB24C (124 bytes, 40 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000FB1D0(void)
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

loc_000FB1D0: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x000FB1FEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FB1F7u); } /* indirect call */
    }

loc_000FB1FE: ;
    eax = MEM32(0x64D854);
    fp_push(MEMF(esi + 4)); /* fld float */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esi)); /* fld float */
    MEM32(0x64D854) = eax;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    eax = MEM32(esp + 0x48);
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    MEMF(esi) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEMF(esi + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3337C0)); /* fmul dword ptr [0x3337c0] */
    MEMF(esi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FB250
 * Original: 0x000FB250 - 0x000FB2CA (122 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB250(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FB250: ;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270E0)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6270DC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 8); /* mulss */
    eax = ecx + 0x6270D8;
    PUSH32(esp, esi);
    esi = MEM32(0x64D858);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx); /* mulss */
    MEM32(esi * 8 + 0x616FDC) = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi * 8 + 0x616FD8) = 2;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 8);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = esi;
    MEM32(0x64D854) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FB2D0
 * Original: 0x000FB2D0 - 0x000FB390 (192 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB2D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FB2D0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x6270DC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x6270E0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 4); /* mulss */
    eax = edx + 0x6270D8;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 8); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 4); /* mulss */
    ecx = MEM32(esp);
    PUSH32(esp, esi);
    esi = MEM32(0x64D858);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 8);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 4) = ecx;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEM32(esi * 8 + 0x616FDC) = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi * 8 + 0x616FD8) = 3;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 8) = ecx;
    eax = MEM32(esp + 0x14);
    MEM32(0x64D858) = esi;
    MEM32(0x64D854) = edx;
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
 * sub_000FB390
 * Original: 0x000FB390 - 0x000FB3BB (43 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000FB390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FB390: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(eax + 0xC);
    eax = esp;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FB3A4u); RECOMP_ABI_CALL(0x000C37B0u, sub_000C37B0); /* call 0x000C37B0 */

loc_000FB3A4: ;
    ecx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    ecx = esp + 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FB3B4u); RECOMP_ABI_CALL(0x000C3350u, sub_000C3350); /* call 0x000C3350 */

loc_000FB3B4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000FB3C0
 * Original: 0x000FB3C0 - 0x000FB476 (182 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000FB3C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FB3C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x74) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x74;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ebx + 0x6270D8;
    MEM32(0x64D884) = ecx;
    ecx = MEM32(esi);
    MEM32(0x64D87C) = edx;
    edx = MEM32(esi + 4);
    PUSH32(esp, edi);
    edi = MEM32(0x64D858);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esi + 8);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 0xC);
    eax = esp + 0x30;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(esp + 0x20) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FB41Fu); RECOMP_ABI_CALL(0x000C37B0u, sub_000C37B0); /* call 0x000C37B0 */

loc_000FB41F: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FB431u); RECOMP_ABI_CALL(0x000C3350u, sub_000C3350); /* call 0x000C3350 */

loc_000FB431: ;
    eax = MEM32(esp + 0x28);
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x30);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi * 8 + 0x616FDC) = esi;
    MEM16(edi * 8 + 0x616FD8) = 3;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    eax = MEM32(ebp + 8);
    MEM32(0x64D858) = edi;
    POP32(esp, edi);
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    POP32(esp, esi);
    MEM32(0x64D854) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000FB480
 * Original: 0x000FB480 - 0x000FB527 (167 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB480(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FB480: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D884);
    edx = MEM32(0x64D878);
    ecx = MEM32(ecx + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D854);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D884) = eax;
    eax = MEM32(ebx + 0x6270D8);
    esi = ebx + 0x6270D8;
    MEM32(0x64D87C) = edx;
    edx = MEM32(esi + 4);
    MEM32(esp + 8) = eax;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(0x64D858);
    MEM32(esp + 0x10) = edx;
    edx = esp + 0x18;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x000FB4E1u); RECOMP_ABI_CALL(0x000C3350u, sub_000C3350); /* call 0x000C3350 */

loc_000FB4E1: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi * 8 + 0x616FDC) = esi;
    MEM16(edi * 8 + 0x616FD8) = 3;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(0x64D858) = edi;
    POP32(esp, edi);
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    POP32(esp, esi);
    MEM32(0x64D854) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FB4B9
 * Original: 0x000FB4B9 - 0x000FB527 (110 bytes, 32 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB4B9(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FB4B9: ;
    edx = MEM32(esi + 4);
    MEM32(esp + 8) = eax;
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(0x64D858);
    MEM32(esp + 0x10) = edx;
    edx = esp + 0x18;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x000FB4E1u); RECOMP_ABI_CALL(0x000C3350u, sub_000C3350); /* call 0x000C3350 */

loc_000FB4E1: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi * 8 + 0x616FDC) = esi;
    MEM16(edi * 8 + 0x616FD8) = 3;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(0x64D858) = edi;
    POP32(esp, edi);
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    POP32(esp, esi);
    MEM32(0x64D854) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FB530
 * Original: 0x000FB530 - 0x000FB60F (223 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FB530: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D858);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D854);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D884) = ecx;
    ecx = MEM32(ebp + 0x6270D8);
    esi = ebp + 0x6270D8;
    MEM32(0x64D87C) = edx;
    edx = MEM32(esi + 4);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0xC);
    MEM32(esp + 0x20) = edx;
    edx = esp + 0x10;
    MEM32(esp + 0x24) = ecx;
    PUSH32(esp, edx);
    ecx = esp + 0x20;
    eax = edi;
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x000FB595u); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_000FB595: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 0x30); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x18); /* addss */
    ecx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x28);
    MEM32(ebx * 8 + 0x616FDC) = esi;
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    MEM16(ebx * 8 + 0x616FD8) = 3;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D854) = ebp;
    POP32(esp, ebp);
    MEM32(0x64D858) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FB610
 * Original: 0x000FB610 - 0x000FB683 (115 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB610(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000FB610: ;
    PUSH32(esp, esi);
    esi = MEM32(0x64D858);
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(0x20));
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0x6270D8);
    ecx = edi + 0x6270D8;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x7FFFFFFF (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000FB639; /* je: equal / zero */

loc_000FB635: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000FB64F;

loc_000FB639: ;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 4), 0x7FFFFFFF (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_000FB635; /* jne: not equal / not zero */

loc_000FB642: ;
    eax = MEM32(ecx + 8);
    _cf = 0; /* logical op clears CF */
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_000FB64F: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    eax = MEM32(esp + 0xC);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0x20)) >> 32) & 1);
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi * 8 + 0x616FD8) = 1;
    MEM32(esi * 8 + 0x616FDC) = ecx;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edi;
    POP32(esp, edi);
    MEM32(0x64D858) = esi;
    MEM32(ecx) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(8)) >> 32) & 1);
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FB690
 * Original: 0x000FB690 - 0x000FB6E3 (83 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB690(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FB690: ;
    PUSH32(esp, ecx);
    xmm0 = XMM_SCALAR(MEMF(0x343DDC)); /* movss */
    edx = MEM32(eax);
    MEMF(esp) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FB6BA; /* jle: less or equal (signed <=) */

loc_000FB6AD: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000FB6BA: ;
    edx = MEM32(eax + 4);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000FB6AD; /* jg: greater (signed >) */

loc_000FB6C7: ;
    eax = MEM32(eax + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    eax = ecx;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FB6F0
 * Original: 0x000FB6F0 - 0x000FB73E (78 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB6F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FB6F0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D854);
    PUSH32(esp, esi);
    esi = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = ebx + 0x6270D8;
    eax = edi;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, 0x000FB710u); RECOMP_ABI_CALL(0x000FB690u, sub_000FB690); /* call 0x000FB690 */

loc_000FB710: ;
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
 * sub_000FB740
 * Original: 0x000FB740 - 0x000FB7BB (123 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB740(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FB740: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
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
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FB795; /* jle: less or equal (signed <=) */

loc_000FB78C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = SX8(LO8(eax));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000FB795: ;
    edx = MEM32(esp + 4);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000FB7B4; /* jg: greater (signed >) */

loc_000FB7A5: ;
    edx = MEM32(esp + 8);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */

loc_000FB7B4: ;
    eax = SX8(LO8(eax));
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FB7C0
 * Original: 0x000FB7C0 - 0x000FB84A (138 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB7C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FB7C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D854);
    PUSH32(esp, edi);
    edi = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(edi * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi * 8 + 0x616FD8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FB7E9; /* jne: not equal / not zero */

loc_000FB7DF: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esi + 0x6270D8); /* cvtsi2ss */
    goto loc_000FB7F1;

loc_000FB7E9: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x6270D8)); /* movss */

loc_000FB7F1: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0xC);
    ecx = esi + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = esi + 0x6270D8;
    PUSH32(esp, eax);
    eax = ebx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000FB818u); RECOMP_ABI_CALL(0x000FB740u, sub_000FB740); /* call 0x000FB740 */

loc_000FB818: ;
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
    eax = MEM32(esp + 0x14);
    MEM32(0x64D858) = edi;
    POP32(esp, edi);
    MEM32(0x64D854) = esi;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FB850
 * Original: 0x000FB850 - 0x000FB8FE (174 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB850(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FB850: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D858);
    PUSH32(esp, esi);
    esi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000FB878; /* jne: not equal / not zero */

loc_000FB86E: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esi + 0x6270D8); /* cvtsi2ss */
    goto loc_000FB880;

loc_000FB878: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x6270D8)); /* movss */

loc_000FB880: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 0x6270D8);
    eax = esi + 0x6270D8;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    edi = MEM32(esp + 8);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FB8A8; /* jle: less or equal (signed <=) */

loc_000FB8A4: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000FB8C9;

loc_000FB8A8: ;
    edx = MEM32(eax + 4);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_000FB8A4; /* jg: greater (signed >) */

loc_000FB8B5: ;
    edx = MEM32(eax + 8);
    PUSH32(esp, ebx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    SET_LO8(ebx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    edi = ebx;
    POP32(esp, ebx);

loc_000FB8C9: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D854) = esi;
    MEM32(eax) = edx;
    eax = MEM32(esp + 0xC);
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FB900
 * Original: 0x000FB900 - 0x000FB9B6 (182 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB900(void)
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

loc_000FB900: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D858);
    PUSH32(esp, esi);
    esi = MEM32(0x64D854);
    eax = MEM32(esi + 0x6270B8);
    ecx = MEM32(esi + 0x6270BC);
    edx = MEM32(esi + 0x6270C0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 8) = eax;
    eax = MEM32(esi + 0x6270D8);
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(esi + 0x6270DC);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(esi + 0x6270E0);
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = esi + 0x6270D8;
    MEM32(esp + 0x18) = eax;
    eax = MEM32(edi);
    MEM32(esp + 0x1C) = ecx;
    ecx = MEM32(edi + 4);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(edi + 8);
    MEM32(esp + 0x24) = eax;
    MEM32(esp + 0x28) = ecx;
    MEM32(esp + 0x2C) = edx;
    ecx = esp + 0xC;
    eax = esp + 0x18;
    edx = esp + 0x24;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000FB985u); RECOMP_ABI_CALL(0x000FE7F0u, sub_000FE7F0); /* call 0x000FE7F0 */

loc_000FB985: ;
    MEMF(edi) = (float)fp_top(); fp_pop(); /* fstp */
    eax = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx * 8 + 0x616FDC) = edi;
    MEM16(ebx * 8 + 0x616FD8) = 2;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D854) = esi;
    POP32(esp, esi);
    MEM32(0x64D858) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FB9C0
 * Original: 0x000FB9C0 - 0x000FBB55 (405 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FB9C0(void)
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

loc_000FB9C0: ;
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    eax = MEM32(0x64D854);
    ecx = MEM32(eax + 0x6270B8);
    edx = MEM32(eax + 0x6270BC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(eax + 0x6270E0);
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0x6270D8);
    xmm6 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x6270E0);
    xmm7 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    MEM32(esp + 0x1C) = edx;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(eax + 0x6270DC);
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEM32(esp + 0x18) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm6.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    edx = MEM32(0x64D858);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 8)); /* fld float */
    ecx = eax + 0x6270D8;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    esi = MEM32(ecx);
    MEM32(esp + 0x2C) = esi;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    esi = MEM32(ecx + 4);
    xmm4 = XMM_SCALAR(MEMF(esp + 0x2C)); /* movss */
    MEM32(esp + 0x30) = esi;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    esi = MEM32(ecx + 8);
    xmm5 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm5.f[0] = xmm5.f[0] - xmm0.f[0]; /* subss */
    MEM32(esp + 0x34) = esi;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] - xmm7.f[0]; /* subss */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(esp + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x18); /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + MEMF(esp + 0x1C); /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm7.f[0]; /* addss */
    MEMF(esp + 0x2C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x34) = xmm3.f[0]; /* movss */
    esi = MEM32(esp + 0x2C);
    MEM32(ecx) = esi;
    esi = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = esi;
    esi = MEM32(esp + 0x34);
    MEM32(0x64D854) = eax;
    eax = MEM32(esp + 0x3C);
    MEM16(edx * 8 + 0x616FD8) = 3;
    MEM32(edx * 8 + 0x616FDC) = ecx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ecx + 8) = esi;
    MEM32(0x64D858) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FBB60
 * Original: 0x000FBB60 - 0x000FBC2E (206 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FBB60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FBB60: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D858);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    eax = MEM32(edi + 0x6270B8);
    ecx = MEM32(edi + 0x6270BC);
    edx = MEM32(edi + 0x6270C0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = eax;
    eax = MEM32(edi + 0x6270D8);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(edi + 0x6270DC);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(edi + 0x6270E0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = edi + 0x6270D8;
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(ebx);
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(ebx + 4);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ebx + 8);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    MEM32(esp + 0x30) = edx;
    edx = esp + 0x10;
    eax = esp + 0x1C;
    esi = esp + 0x28;
    ecx = esp + 0x34;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 3;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000FBBEAu); RECOMP_ABI_CALL(0x000BF0A0u, sub_000BF0A0); /* call 0x000BF0A0 */

loc_000FBBEA: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x38);
    edx = MEM32(esp + 0x3C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp * 8 + 0x616FDC) = ebx;
    MEM32(0x64D854) = edi;
    POP32(esp, edi);
    MEM16(ebp * 8 + 0x616FD8) = 3;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx) = eax;
    eax = MEM32(esp + 0x40);
    POP32(esp, esi);
    MEM32(0x64D858) = ebp;
    POP32(esp, ebp);
    MEM32(ebx + 4) = ecx;
    MEM32(ebx + 8) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FBC30
 * Original: 0x000FBC30 - 0x000FBD40 (272 bytes, 71 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FBC30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FBC30: ;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000FBC5B; /* jne: not equal / not zero */

loc_000FBC51: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ebp + 0x6270D8); /* cvtsi2ss */
    goto loc_000FBC63;

loc_000FBC5B: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x6270D8)); /* movss */

loc_000FBC63: ;
    ecx = MEM32(ebp + 0x6270B8);
    edx = MEM32(ebp + 0x6270BC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(ebp + 0x6270E0);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ebp + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(ebp + 0x6270DC);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ebp + 0x6270E0);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D858) = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + 0x6270D8;
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 4);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ebx = esp + 0x2C;
    esi = esp + 0x38;
    edi = esp + 0x44;
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x000FBCEFu); RECOMP_ABI_CALL(0x000BF230u, sub_000BF230); /* call 0x000BF230 */

loc_000FBCEF: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    POP32(esp, esi);
    MEM32(eax + 4) = edx;
    eax = MEM32(esp + 0x44);
    MEM32(0x64D854) = ebp;
    MEM16(ecx * 8 + 0x616FD8) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(0x64D858) = ecx;
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
 * sub_000FBC5B
 * Original: 0x000FBC5B - 0x000FBD40 (229 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FBC5B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FBC5B: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x6270D8)); /* movss */
    ecx = MEM32(ebp + 0x6270B8);
    edx = MEM32(ebp + 0x6270BC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(ebp + 0x6270E0);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(ebp + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(ebp + 0x6270DC);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ebp + 0x6270E0);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D858) = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + 0x6270D8;
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(eax);
    MEM32(esp + 0x2C) = edx;
    edx = MEM32(eax + 4);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(esp + 0x10);
    MEM32(esp + 0x34) = edx;
    MEM32(esp + 0x14) = eax;
    eax = MEM32(eax + 8);
    PUSH32(esp, ecx);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    ebx = esp + 0x2C;
    esi = esp + 0x38;
    edi = esp + 0x44;
    MEM32(esp + 0x40) = eax;
    PUSH32(esp, 0x000FBCEFu); RECOMP_ABI_CALL(0x000BF230u, sub_000BF230); /* call 0x000BF230 */

loc_000FBCEF: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x44);
    edx = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x44);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    POP32(esp, esi);
    MEM32(eax + 4) = edx;
    eax = MEM32(esp + 0x44);
    MEM32(0x64D854) = ebp;
    MEM16(ecx * 8 + 0x616FD8) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(0x64D858) = ecx;
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
 * sub_000FBD40
 * Original: 0x000FBD40 - 0x000FBE6C (300 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FBD40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FBD40: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D858);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ebp * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp * 8 + 0x616FD8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FBD6C; /* jne: not equal / not zero */

loc_000FBD62: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edi + 0x6270D8); /* cvtsi2ss */
    goto loc_000FBD74;

loc_000FBD6C: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x6270D8)); /* movss */

loc_000FBD74: ;
    eax = MEM32(edi + 0x6270B8);
    ecx = MEM32(edi + 0x6270BC);
    edx = MEM32(edi + 0x6270C0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = eax;
    eax = MEM32(edi + 0x6270B8);
    MEM32(esp + 0x24) = ecx;
    ecx = MEM32(edi + 0x6270BC);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(edi + 0x6270C0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(edi + 0x6270B8);
    MEM32(esp + 0x30) = ecx;
    ecx = MEM32(edi + 0x6270BC);
    MEM32(esp + 0x34) = edx;
    edx = MEM32(edi + 0x6270C0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x38) = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(edi + 0x6270D8);
    ebx = edi + 0x6270D8;
    MEM32(esp + 0x3C) = ecx;
    ecx = MEM32(ebx + 4);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x40) = edx;
    edx = MEM32(ebx + 8);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x18) = ecx;
    PUSH32(esp, eax);
    MEM32(esp + 0x20) = edx;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    edx = esp + 0x58;
    PUSH32(esp, edx);
    eax = esp + 0x2C;
    ecx = esp + 0x38;
    edx = esp + 0x44;
    esi = esp + 0x50;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000FBE25u); RECOMP_ABI_CALL(0x000BEC90u, sub_000BEC90); /* call 0x000BEC90 */

loc_000FBE25: ;
    eax = MEM32(esp + 0x50);
    ecx = MEM32(esp + 0x54);
    edx = MEM32(esp + 0x58);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp * 8 + 0x616FDC) = ebx;
    MEM32(0x64D854) = edi;
    POP32(esp, edi);
    MEM16(ebp * 8 + 0x616FD8) = 3;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx) = eax;
    eax = MEM32(esp + 0x5C);
    POP32(esp, esi);
    MEM32(0x64D858) = ebp;
    POP32(esp, ebp);
    MEM32(ebx + 4) = ecx;
    MEM32(ebx + 8) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FBE70
 * Original: 0x000FBE70 - 0x000FC042 (466 bytes, 111 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000FBE70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000FBE70: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    if ((_fca > _fcb)) goto loc_000FBE97; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_000FBE8A: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FBE9C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000FBE97: ;
    MEMF(ebp + 0x10) = xmm1.f[0]; /* movss */

loc_000FBE9C: ;
    SET_LO8(eax, MEM8(ebp + 0x14));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FBFE3; /* je: equal / zero */

loc_000FBEA7: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(0x653C40) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(0x653C44) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esi + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(0x653C48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(0x653BF0) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edx); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(0x653BF4) = xmm0.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edx); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(0x653BF8) = xmm0.f[0]; /* movss */
    eax = MEM32(ecx);
    MEM32(0x653C10) = eax;
    eax = MEM32(ecx + 4);
    MEM32(0x653C14) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(0x653C18) = ecx;
    eax = MEM32(esi);
    MEM32(0x653C60) = eax;
    ecx = MEM32(esi + 4);
    MEM32(0x653C64) = ecx;
    eax = MEM32(esi + 8);
    MEM32(0x653C68) = eax;
    ecx = MEM32(edx);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x653C00) = ecx;
    eax = MEM32(edx + 4);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x653C04) = eax;
    ecx = MEM32(edx + 8);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x653C08) = ecx;
    edx = MEM32(edi);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x653C50) = edx;
    eax = MEM32(edi + 4);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x653C54) = eax;
    ecx = MEM32(edi + 8);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x653C58) = ecx;

loc_000FBFE3: ;
    edx = MEM32(ebp + 0x10);
    SET_LO8(eax, MEM8(ebp + 0x14));
    PUSH32(esp, edx);
    PUSH32(esp, 0x653BF0);
    PUSH32(esp, 0x653C40);
    edi = esp + 0x1C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FBFFDu); RECOMP_ABI_CALL(0x000C2500u, sub_000C2500); /* call 0x000C2500 */

loc_000FBFFD: ;
    eax = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x30);
    ecx = eax + -2147483648;
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x34);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x30);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = ecx;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x38);
    MEM32(ebx) = edx;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 8) = ecx;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000FC050
 * Original: 0x000FC050 - 0x000FC1A7 (343 bytes, 80 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC050: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FC07A; /* jne: not equal / not zero */

loc_000FC070: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_000FC082;

loc_000FC07A: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_000FC082: ;
    edx = MEM32(eax + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 0x6270DC);
    MEM32(esp + 0x20) = edx;
    edx = MEM32(eax + 0x6270E0);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x6270DC);
    MEM32(esp + 8) = edx;
    edx = MEM32(eax + 0x6270E0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 0x6270D8);
    MEM32(esp + 0x10) = edx;
    edx = MEM32(eax + 0x6270DC);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x6270E0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x18) = edx;
    edx = MEM32(eax + 0x6270D8);
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 0x6270DC);
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270E0);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx * 8 + 0x616FDC);
    MEM32(esp + 0x30) = edx;
    MEM32(esp + 0x34) = eax;
    SET_LO16(eax, MEM16(ecx * 8 + 0x616FD8));
    PUSH32(esp, esi);
    edx = esp + 0x3C;
    MEM32(0x64D858) = ecx;
    PUSH32(esp, edx);
    ecx = SX16(LO16(eax));
    PUSH32(esp, ebx);
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x000FC13Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FC134u); } /* indirect call */
    }

loc_000FC13B: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x64D854) = MEM32(0x64D854) - 0x20;
    _fa = (uint32_t)(MEM32(0x64D854)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    esi = MEM32(eax * 8 + 0x616FD4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x7C;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x000FC16Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FC165u); } /* indirect call */
    }

loc_000FC16C: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x64D854) = MEM32(0x64D854) - 0x20;
    _fa = (uint32_t)(MEM32(0x64D854)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 0x18);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    eax = esp + 0x48;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    ecx = esp + 0x44;
    edx = esp + 0x2C;
    esi = esp + 0x38;
    PUSH32(esp, 0x000FC191u); RECOMP_ABI_CALL(0x000FBE70u, sub_000FBE70); /* call 0x000FBE70 */

loc_000FC191: ;
    eax = MEM32(esp + 0xD0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FC1B0
 * Original: 0x000FC1B0 - 0x000FC25E (174 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000FC1B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC1B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 4); /* mulss */
    edx = MEM32(eax);
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 8); /* mulss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    MEM32(esp + 0x20) = edx;
    edx = MEM32(eax + 4);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    eax = MEM32(eax + 8);
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 4); /* mulss */
    MEM32(esp + 0x24) = edx;
    edx = MEM32(ecx);
    MEM32(esp + 0x28) = eax;
    eax = MEM32(ecx + 4);
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = edx;
    edx = MEM32(ebp + 8);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(ebp + 0xC);
    MEM32(esp + 0x18) = ecx;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    PUSH32(esp, edx);
    ecx = esp + 4;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FC257u); RECOMP_ABI_CALL(0x000C3350u, sub_000C3350); /* call 0x000C3350 */

loc_000FC257: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000FC260
 * Original: 0x000FC260 - 0x000FC335 (213 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC260(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC260: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D858);
    PUSH32(esp, esi);
    esi = MEM32(0x64D854);
    eax = MEM32(esi + 0x6270B8);
    ecx = MEM32(esi + 0x6270BC);
    edx = MEM32(esi + 0x6270C0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0x6270B8);
    MEM32(esp + 0x18) = ecx;
    ecx = MEM32(esi + 0x6270BC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(esi + 0x6270E0);
    PUSH32(esp, edi);
    MEM32(esp + 0x24) = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x6270D8);
    edi = esi + 0x6270D8;
    MEM32(esp + 0x28) = ecx;
    ecx = MEM32(edi + 4);
    MEM32(esp + 0xC) = eax;
    MEM32(esp + 0x10) = ecx;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    ecx = esp + 0x34;
    MEM32(esp + 0x30) = edx;
    edx = MEM32(edi + 8);
    PUSH32(esp, ecx);
    eax = esp + 0x20;
    ecx = esp + 0x2C;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x000FC2EFu); RECOMP_ABI_CALL(0x000FC1B0u, sub_000FC1B0); /* call 0x000FC1B0 */

loc_000FC2EF: ;
    eax = MEM32(esp + 0x3C);
    edx = MEM32(esp + 0x38);
    ecx = MEM32(esp + 0x40);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 4) = eax;
    eax = MEM32(esp + 0x40);
    MEM32(ebx * 8 + 0x616FDC) = edi;
    MEM32(edi) = edx;
    MEM32(edi + 8) = ecx;
    MEM16(ebx * 8 + 0x616FD8) = 3;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D854) = esi;
    POP32(esp, esi);
    MEM32(0x64D858) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FC340
 * Original: 0x000FC340 - 0x000FC3EC (172 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000FC340: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_000FC368; /* jne: not equal / not zero */

loc_000FC35E: ;
    xmm2.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_000FC370;

loc_000FC368: ;
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_000FC370: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FC388; /* jne: not equal / not zero */

loc_000FC37E: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_000FC390;

loc_000FC388: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_000FC390: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    edx = ecx + 0x6270D8;
    if (CMP_NE(_fa, _fb)) goto loc_000FC3AA; /* jne: not equal / not zero */

loc_000FC3A4: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edx); /* cvtsi2ss */
    goto loc_000FC3AE;

loc_000FC3AA: ;
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */

loc_000FC3AE: ;
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FC3B8; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_000FC3B3: ;
    xmm0 = xmm2; /* movaps */
    goto loc_000FC3C0;

loc_000FC3B8: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FC3C0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000FC3BD: ;
    xmm0 = xmm1; /* movaps */

loc_000FC3C0: ;
    MEM16(eax * 8 + 0x616FD8) = 2;
    MEM32(eax * 8 + 0x616FDC) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 4);
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEM32(0x64D854) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FC3F0
 * Original: 0x000FC3F0 - 0x000FC472 (130 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC3F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000FC3F0: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_000FC418; /* jne: not equal / not zero */

loc_000FC40E: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_000FC420;

loc_000FC418: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_000FC420: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    edx = ecx + 0x6270D8;
    if (CMP_NE(_fa, _fb)) goto loc_000FC43A; /* jne: not equal / not zero */

loc_000FC434: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edx); /* cvtsi2ss */
    goto loc_000FC43E;

loc_000FC43A: ;
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */

loc_000FC43E: ;
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_000FC446; /* jae: above or equal (unsigned >=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000FC443: ;
    xmm0 = xmm1; /* movaps */

loc_000FC446: ;
    MEM16(eax * 8 + 0x616FD8) = 2;
    MEM32(eax * 8 + 0x616FDC) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 4);
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEM32(0x64D854) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FC480
 * Original: 0x000FC480 - 0x000FC502 (130 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000FC480: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_000FC4A8; /* jne: not equal / not zero */

loc_000FC49E: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_000FC4B0;

loc_000FC4A8: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_000FC4B0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    edx = ecx + 0x6270D8;
    if (CMP_NE(_fa, _fb)) goto loc_000FC4CA; /* jne: not equal / not zero */

loc_000FC4C4: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edx); /* cvtsi2ss */
    goto loc_000FC4CE;

loc_000FC4CA: ;
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */

loc_000FC4CE: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca >= _fcb)) goto loc_000FC4D6; /* jae: above or equal (unsigned >=) (xmm0.f[0] vs xmm1.f[0]) */

loc_000FC4D3: ;
    xmm0 = xmm1; /* movaps */

loc_000FC4D6: ;
    MEM16(eax * 8 + 0x616FD8) = 2;
    MEM32(eax * 8 + 0x616FDC) = edx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 4);
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEM32(0x64D854) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FC510
 * Original: 0x000FC510 - 0x000FC52B (27 bytes, 10 insns)
 * Category: crt
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000FC510(void)
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

loc_000FC510: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x343DDC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000FC528; /* jbe: below or equal (unsigned <=) */

loc_000FC522: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000FC528: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FC530
 * Original: 0x000FC530 - 0x000FC5A7 (119 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC530(void)
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

loc_000FC530: ;
    PUSH32(esp, ecx);
    edx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    ecx = edx + 0x6270D8;
    if (CMP_NE(_fa, _fb)) goto loc_000FC557; /* jne: not equal / not zero */

loc_000FC551: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx); /* cvtsi2ss */
    goto loc_000FC55B;

loc_000FC557: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */

loc_000FC55B: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x343DDC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000FC579; /* jbe: below or equal (unsigned <=) */

loc_000FC572: ;
    esi = 1;
    goto loc_000FC57B;

loc_000FC579: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000FC57B: ;
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
    MEM32(ecx) = esi;
    MEM32(0x64D854) = edx;
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
 * sub_000FC5B0
 * Original: 0x000FC5B0 - 0x000FC650 (160 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC5B0(void)
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

loc_000FC5B0: ;
    edx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FC5D7; /* jne: not equal / not zero */

loc_000FC5CD: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edx + 0x6270D8); /* cvtsi2ss */
    goto loc_000FC5DF;

loc_000FC5D7: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 0x6270D8)); /* movss */

loc_000FC5DF: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    ecx = edx + 0x6270D8;
    if (CMP_NE(_fa, _fb)) goto loc_000FC600; /* jne: not equal / not zero */

loc_000FC5FA: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx); /* cvtsi2ss */
    goto loc_000FC604;

loc_000FC600: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */

loc_000FC604: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    PUSH32(esp, esi);
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000FC620; /* jbe: below or equal (unsigned <=) */

loc_000FC619: ;
    esi = 1;
    goto loc_000FC622;

loc_000FC620: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000FC622: ;
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
    MEM32(ecx) = esi;
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FC650
 * Original: 0x000FC650 - 0x000FC6B0 (96 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC650(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC650: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_000FC68D; /* jne: not equal / not zero */

loc_000FC675: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    eax = MEM32(esp + 4);
    MEMF(0x343DDC) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000FC68D: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */
    eax = MEM32(esp + 4);
    MEMF(0x343DDC) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FC6B0
 * Original: 0x000FC6B0 - 0x000FC6F7 (71 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC6B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FC6B0: ;
    ecx = MEM32(0x64D854);
    xmm0 = XMM_SCALAR(MEMF(0x343DDC)); /* movss */
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
 * sub_000FC700
 * Original: 0x000FC700 - 0x000FC784 (132 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC700(void)
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

loc_000FC700: ;
    PUSH32(esp, ecx);
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FC716; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000FC70E: ;
    xmm0 = xmm1; /* movaps */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_000FC716: ;
    fp_push(MEMD(0x3338B0)); /* fld double */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000FC730; /* jbe: below or equal (unsigned <=) */

loc_000FC72D: ;
    xmm0 = xmm1; /* movaps */

loc_000FC730: ;
    xmm2 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 4) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(eax + 8) = xmm2.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FC790
 * Original: 0x000FC790 - 0x000FC89F (271 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC790(void)
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

loc_000FC790: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(0x64D858);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(edx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx * 8 + 0x616FD8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FC7B8; /* jne: not equal / not zero */

loc_000FC7AE: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_000FC7C0;

loc_000FC7B8: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_000FC7C0: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    eax = ecx + 0x6270D8;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FC7ED; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000FC7E4: ;
    xmm0 = xmm1; /* movaps */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */

loc_000FC7ED: ;
    fp_push(MEMD(0x3338B0)); /* fld double */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000FC808; /* jbe: below or equal (unsigned <=) */

loc_000FC805: ;
    xmm0 = xmm1; /* movaps */

loc_000FC808: ;
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    esi = MEM32(esp + 8);
    MEM32(eax) = esi;
    esi = MEM32(esp + 0xC);
    MEM32(eax + 4) = esi;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    esi = MEM32(esp + 0x10);
    MEM32(eax + 8) = esi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx * 8 + 0x616FDC) = eax;
    eax = MEM32(esp + 0x18);
    MEM16(edx * 8 + 0x616FD8) = 3;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_000FC8A0
 * Original: 0x000FC8A0 - 0x000FCA4D (429 bytes, 110 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FC8A0(void)
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

loc_000FC8A0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm4.f[0]; /* divss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm7 = xmm0; /* movaps */
    xmm7.f[0] = xmm7.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */
    MEMF(ecx + 4) = xmm2.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm6.f[0]; /* subss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    MEMF(ecx + 8) = xmm3.f[0]; /* movss */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax + 8)); /* fld float */
    xmm4 = XMM_SCALAR(MEMF(esp)); /* movss */
    fp_push(MEMF(eax + 4)); /* fld float */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    fp_push(MEMF(eax)); /* fld float */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm2.f[0] = xmm2.f[0] * MEMF(eax + 8); /* mulss */
    xmm5.f[0] = xmm5.f[0] * MEMF(eax + 4); /* mulss */
    xmm3 = xmm2; /* movaps */
    MEMF(eax) = xmm1.f[0]; /* movss */
    MEMF(eax + 4) = xmm5.f[0]; /* movss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    xmm2 = xmm5; /* movaps */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 8); /* mulss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(ecx + 4); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(ecx + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 4); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 4); /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + MEMF(esp + 8); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0xC); /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 4);
    xmm4.f[0] = xmm4.f[0] + xmm7.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esp + 8) = xmm4.f[0]; /* movss */
    ecx = MEM32(esp + 8);
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    MEM32(edx) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(edx + 4) = ecx;
    MEM32(edx + 8) = eax;
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
 * sub_000FCA50
 * Original: 0x000FCA50 - 0x000FCB2A (218 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCA50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FCA50: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D858);
    PUSH32(esp, esi);
    esi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ebx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx * 8 + 0x616FD8), 1 (16-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_000FCA7B; /* jne: not equal / not zero */

loc_000FCA71: ;
    xmm0.f[0] = (float)(int32_t)MEM32(esi + 0x6270D8); /* cvtsi2ss */
    goto loc_000FCA83;

loc_000FCA7B: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x6270D8)); /* movss */

loc_000FCA83: ;
    eax = MEM32(esi + 0x6270B8);
    ecx = MEM32(esi + 0x6270BC);
    edx = MEM32(esi + 0x6270C0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x10) = eax;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x6270D8);
    edi = esi + 0x6270D8;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(edi + 4);
    MEM32(esp + 0x18) = edx;
    edx = MEM32(edi + 8);
    MEM32(esp + 0x1C) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(esp + 0x20) = ecx;
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, eax);
    edx = esp + 0x2C;
    eax = esp + 0x14;
    ecx = esp + 0x20;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000FCAE4u); RECOMP_ABI_CALL(0x000FC8A0u, sub_000FC8A0); /* call 0x000FC8A0 */

loc_000FCAE4: ;
    eax = MEM32(esp + 0x34);
    ecx = MEM32(esp + 0x2C);
    edx = MEM32(esp + 0x30);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = eax;
    eax = MEM32(esp + 0x38);
    MEM32(ebx * 8 + 0x616FDC) = edi;
    MEM32(edi) = ecx;
    MEM32(edi + 4) = edx;
    MEM16(ebx * 8 + 0x616FD8) = 3;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D854) = esi;
    POP32(esp, esi);
    MEM32(0x64D858) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FCB30
 * Original: 0x000FCB30 - 0x000FCB7E (78 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCB30(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FCB30: ;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 4;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x000FCB5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FCB57u); } /* indirect call */
    }

loc_000FCB5E: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(0x64D854) = MEM32(0x64D854) - 0x20;
    _fa = (uint32_t)(MEM32(0x64D854)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi) = eax;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0x48);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FCB80
 * Original: 0x000FCB80 - 0x000FCC2C (172 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCB80(void)
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

loc_000FCB80: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_000FCBAB; /* jne: not equal / not zero */

loc_000FCBA1: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_000FCBB3;

loc_000FCBAB: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_000FCBB3: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    edx = ecx + 0x6270D8;
    if (CMP_NE(_fa, _fb)) goto loc_000FCBD2; /* jne: not equal / not zero */

loc_000FCBCC: ;
    xmm1.f[0] = (float)(int32_t)MEM32(edx); /* cvtsi2ss */
    goto loc_000FCBD6;

loc_000FCBD2: ;
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */

loc_000FCBD6: ;
    fp_push(MEMF(0x3337A0)); /* fld float */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp)); /* fdiv dword ptr [esp] */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 2;
    MEM32(eax * 8 + 0x616FDC) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x10);
    MEM32(0x64D854) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 4) = fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = (float)(int32_t)MEM32(esp + 4); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edx) = xmm1.f[0]; /* movss */
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
 * sub_000FCC30
 * Original: 0x000FCC30 - 0x000FCD13 (227 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCC30(void)
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

loc_000FCC30: ;
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    MEM32(0x64D854) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_000FCC5D; /* jne: not equal / not zero */

loc_000FCC53: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_000FCC65;

loc_000FCC5D: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_000FCC65: ;
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    esi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x000FCC91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FCC8Au); } /* indirect call */
    }

loc_000FCC91: ;
    fp_push(MEMF(0x3337A0)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0xC)); /* fdiv dword ptr [esp + 0xc] */
    eax = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D854) = eax;
    eax = MEM32(esp + 0x64);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi)); /* fmul dword ptr [esi] */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 8) = fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = (float)(int32_t)MEM32(esp + 8); /* cvtsi2ss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 4)); /* fmul dword ptr [esi + 4] */
    MEMF(esi) = xmm1.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0x10) = fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esi + 8)); /* fmul dword ptr [esi + 8] */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMD(0x49A978)); /* fadd qword ptr [0x49a978] */
    MEMD(esp + 0x18) = fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = (float)(int32_t)MEM32(esp + 0x18); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */
    POP32(esp, esi);
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FCD20
 * Original: 0x000FCD20 - 0x000FCD7B (91 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCD20(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FCD20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi + 0x6270D8;
    PUSH32(esp, edi);
    edi = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = esi + 0x6270D8;
    ecx = ebx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000FCD4Bu); RECOMP_ABI_CALL(0x0002C570u, sub_0002C570); /* call 0x0002C570 */

loc_000FCD4B: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi * 8 + 0x616FDC) = ebx;
    MEM16(edi * 8 + 0x616FD8) = 2;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = edi;
    POP32(esp, edi);
    MEM32(0x64D854) = esi;
    POP32(esp, esi);
    MEMF(ebx) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FCD80
 * Original: 0x000FCD80 - 0x000FCDE4 (100 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCD80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FCD80: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esi + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi + 0x6270D8;
    PUSH32(esp, edi);
    edi = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = esi + 0x6270D8;
    ecx = ebx;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000FCDB4u); RECOMP_ABI_CALL(0x0002C620u, sub_0002C620); /* call 0x0002C620 */

loc_000FCDB4: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi * 8 + 0x616FDC) = ebx;
    MEM16(edi * 8 + 0x616FD8) = 2;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = edi;
    POP32(esp, edi);
    MEM32(0x64D854) = esi;
    POP32(esp, esi);
    MEMF(ebx) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FCDF0
 * Original: 0x000FCDF0 - 0x000FCEC4 (212 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCDF0(void)
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

loc_000FCDF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D858);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp = esi + 0x6270D8;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x14) = eax;
    edi = esi + 0x6270D8;
    eax = ebp;
    ecx = edi;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000FCE2Eu); RECOMP_ABI_CALL(0x0002C570u, sub_0002C570); /* call 0x0002C570 */

loc_000FCE2E: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337A0); /* comiss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FCE42; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3337A0)) */

loc_000FCE3D: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_000FCE90;

loc_000FCE42: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FCE5F; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000FCE4F: ;
    xmm0 = XMM_SCALAR(MEMF(0x333894)); /* movss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    goto loc_000FCE6C;

loc_000FCE5F: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    PUSH32(esp, 0x000FCE68u); RECOMP_ABI_CALL(0x002941B0u, sub_002941B0); /* call 0x002941B0 */

loc_000FCE68: ;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */

loc_000FCE6C: ;
    edx = MEM32(esp + 0x14);
    eax = ebp;
    ecx = edi;
    PUSH32(esp, 0x000FCE79u); RECOMP_ABI_CALL(0x0002C620u, sub_0002C620); /* call 0x0002C620 */

loc_000FCE79: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x10); /* subss */
    if ((_fca > _fcb)) goto loc_000FCE90; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_000FCE8A: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_000FCE90: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx * 8 + 0x616FDC) = edi;
    MEMF(edi) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    MEM32(0x64D854) = esi;
    MEM16(ebx * 8 + 0x616FD8) = 2;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(0x64D858) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FCED0
 * Original: 0x000FCED0 - 0x000FCF6B (155 bytes, 41 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCED0(void)
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

loc_000FCED0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi + 0x6270D8;
    PUSH32(esp, edi);
    edi = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = esi + 0x6270D8;
    ecx = ebx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000FCEFCu); RECOMP_ABI_CALL(0x0002C570u, sub_0002C570); /* call 0x0002C570 */

loc_000FCEFC: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337A0); /* comiss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FCF10; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3337A0)) */

loc_000FCF0B: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_000FCF3A;

loc_000FCF10: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FCF27; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000FCF1D: ;
    xmm0 = XMM_SCALAR(MEMF(0x333894)); /* movss */
    goto loc_000FCF3A;

loc_000FCF27: ;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    PUSH32(esp, 0x000FCF30u); RECOMP_ABI_CALL(0x002941B0u, sub_002941B0); /* call 0x002941B0 */

loc_000FCF30: ;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */

loc_000FCF3A: ;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi * 8 + 0x616FDC) = ebx;
    MEM16(edi * 8 + 0x616FD8) = 2;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = edi;
    POP32(esp, edi);
    MEM32(0x64D854) = esi;
    POP32(esp, esi);
    MEMF(ebx) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_000FCF70
 * Original: 0x000FCF70 - 0x000FD016 (166 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FCF70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FCF70: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D858);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ebp * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp * 8 + 0x616FD8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FCF9C; /* jne: not equal / not zero */

loc_000FCF92: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edi + 0x6270D8); /* cvtsi2ss */
    goto loc_000FCFA4;

loc_000FCF9C: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x6270D8)); /* movss */

loc_000FCFA4: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    eax = edi + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edi + 0x6270D8;
    PUSH32(esp, ecx);
    ebx = esp + 0x18;
    ecx = esi;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000FCFCFu); RECOMP_ABI_CALL(0x000C2BD0u, sub_000C2BD0); /* call 0x000C2BD0 */

loc_000FCFCF: ;
    eax = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp * 8 + 0x616FDC) = esi;
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x24);
    MEM32(0x64D854) = edi;
    POP32(esp, edi);
    MEM16(ebp * 8 + 0x616FD8) = 3;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi) = edx;
    MEM32(esi + 8) = ecx;
    POP32(esp, esi);
    MEM32(0x64D858) = ebp;
    POP32(esp, ebp);
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
 * sub_000FD020
 * Original: 0x000FD020 - 0x000FD0FB (219 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD020(void)
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

loc_000FD020: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_000FD049; /* jne: not equal / not zero */

loc_000FD03F: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_000FD051;

loc_000FD049: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_000FD051: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FD069; /* jne: not equal / not zero */

loc_000FD05F: ;
    xmm3.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_000FD071;

loc_000FD069: ;
    xmm3 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_000FD071: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    edx = ecx + 0x6270D8;
    if (CMP_NE(_fa, _fb)) goto loc_000FD08B; /* jne: not equal / not zero */

loc_000FD085: ;
    xmm2.f[0] = (float)(int32_t)MEM32(edx); /* cvtsi2ss */
    goto loc_000FD08F;

loc_000FD08B: ;
    xmm2 = XMM_SCALAR(MEMF(edx)); /* movss */

loc_000FD08F: ;
    xmm1 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FD0A4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000FD09C: ;
    xmm0 = xmm1; /* movaps */
    MEMF(esp) = xmm0.f[0]; /* movss */

loc_000FD0A4: ;
    fp_push(MEMD(0x3338B0)); /* fld double */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000FD0BE; /* jbe: below or equal (unsigned <=) */

loc_000FD0BB: ;
    xmm0 = xmm1; /* movaps */

loc_000FD0BE: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 2;
    MEM32(eax * 8 + 0x616FDC) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(edx) = xmm1.f[0]; /* movss */
    MEM32(0x64D854) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FD0E8
 * Original: 0x000FD0E8 - 0x000FD0FB (19 bytes, 6 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD0E8(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD0E8: ;
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(edx) = xmm1.f[0]; /* movss */
    MEM32(0x64D854) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FD100
 * Original: 0x000FD100 - 0x000FD135 (53 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD100(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000FD100: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FD11C; /* jp: parity */

loc_000FD113: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    esp += 4; return; /* ret */

loc_000FD11C: ;
    eax = MEM32(esp + 4);
    eax = eax & 0xBF800000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x3F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 4) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000FD140
 * Original: 0x000FD140 - 0x000FD1D1 (145 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000FD140: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D858);
    PUSH32(esp, esi);
    esi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    edx = esi + 0x6270D8;
    if (CMP_NE(_fa, _fb)) goto loc_000FD169; /* jne: not equal / not zero */

loc_000FD163: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edx); /* cvtsi2ss */
    goto loc_000FD16D;

loc_000FD169: ;
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */

loc_000FD16D: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FD18A; /* jp: parity */

loc_000FD180: ;
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    goto loc_000FD1A2;

loc_000FD18A: ;
    eax = MEM32(esp + 4);
    eax = eax & 0xBF800000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x3F800000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(esp + 4) = eax;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_000FD1A2: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x616FD8) = 2;
    MEM32(ecx * 8 + 0x616FDC) = edx;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = esi;
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FD1E0
 * Original: 0x000FD1E0 - 0x000FD240 (96 bytes, 25 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000FD1E0(void)
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

loc_000FD1E0: ;
    PUSH32(esp, ecx);
    edx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    ecx = edx + 0x6270D8;
    if (CMP_NE(_fa, _fb)) goto loc_000FD207; /* jne: not equal / not zero */

loc_000FD201: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx); /* cvtsi2ss */
    goto loc_000FD20B;

loc_000FD207: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */

loc_000FD20B: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEM16(eax * 8 + 0x616FD8) = 2;
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
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FD240
 * Original: 0x000FD240 - 0x000FD290 (80 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD240(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD240: ;
    PUSH32(esp, 0x000FD245u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FD245: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000FD250; /* jle: less or equal (signed <=) */

loc_000FD249: ;
    eax = 1;
    goto loc_000FD255;

loc_000FD250: ;
    if (CMP_GE(_fas, _fbs)) goto loc_000FD255; /* jge: greater or equal (signed >=) */

loc_000FD252: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000FD255: ;
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
 * sub_000FD290
 * Original: 0x000FD290 - 0x000FD300 (112 bytes, 39 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD290(void)
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

loc_000FD290: ;
    PUSH32(esp, ecx);
    edx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    ecx = edx + 0x6270D8;
    if (CMP_NE(_fa, _fb)) goto loc_000FD2B7; /* jne: not equal / not zero */

loc_000FD2B1: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx); /* cvtsi2ss */
    goto loc_000FD2BB;

loc_000FD2B7: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */

loc_000FD2BB: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(0.69314718055994530942); /* fldln2 */
    MEM16(eax * 8 + 0x616FD8) = 2;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FD300
 * Original: 0x000FD300 - 0x000FD364 (100 bytes, 27 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_000FD300(void)
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

loc_000FD300: ;
    PUSH32(esp, ecx);
    edx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), 1 (16-bit) */
    ecx = edx + 0x6270D8;
    if (CMP_NE(_fa, _fb)) goto loc_000FD327; /* jne: not equal / not zero */

loc_000FD321: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx); /* cvtsi2ss */
    goto loc_000FD32B;

loc_000FD327: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */

loc_000FD32B: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(0.30102999566398119521); /* fldlg2 */
    MEM16(eax * 8 + 0x616FD8) = 2;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    { fp_st1() = fp_st1() * log2(fp_top()); fp_pop(); } /* fyl2x */
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(ecx) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FD370
 * Original: 0x000FD370 - 0x000FD3BE (78 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD370(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD370: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000FD377u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FD377: ;
    esi = eax;
    PUSH32(esp, 0x000FD37Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FD37E: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    edi = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    ecx = edi + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 1;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x64D854) = edi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    MEM32(ecx) = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_000FD3C0
 * Original: 0x000FD3C0 - 0x000FD453 (147 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD3C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD3C0: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_000FD3E8; /* jne: not equal / not zero */

loc_000FD3DE: ;
    xmm1.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_000FD3F0;

loc_000FD3E8: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_000FD3F0: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    edx = ecx + 0x6270D8;
    if (CMP_NE(_fa, _fb)) goto loc_000FD40A; /* jne: not equal / not zero */

loc_000FD404: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edx); /* cvtsi2ss */
    goto loc_000FD40E;

loc_000FD40A: ;
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */

loc_000FD40E: ;
    MEM16(eax * 8 + 0x616FD8) = 2;
    MEM32(eax * 8 + 0x616FDC) = edx;
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    esi = (int32_t)xmm2.f[0]; /* cvttss2si */
    xmm2.f[0] = (float)(int32_t)esi; /* cvtsi2ss */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 8);
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(edx) = xmm0.f[0]; /* movss */
    MEM32(0x64D854) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FD460
 * Original: 0x000FD460 - 0x000FD4FF (159 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD460(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000FD460: ;
    PUSH32(esp, ecx);
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] / MEMF(esp + 0xC); /* divss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = (int32_t)xmm1.f[0]; /* cvttss2si */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_LE(_fas, _fbs)) goto loc_000FD4F3; /* jle: less or equal (signed <=) */

loc_000FD4A8: ;
    PUSH32(esp, esi);
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    esi = eax;

loc_000FD4B5: ;
    PUSH32(esp, 0x000FD4BAu); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_000FD4BA: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x3337E0); /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 4); /* mulss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FD4E9; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_000FD4D7: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */

loc_000FD4E9: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000FD4B5; /* jne: not equal / not zero */

loc_000FD4EC: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    POP32(esp, esi);

loc_000FD4F3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FD500
 * Original: 0x000FD500 - 0x000FD60F (271 bytes, 61 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD500(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FD500: ;
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
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
    if (CMP_NE(_fa, _fb)) goto loc_000FD52B; /* jne: not equal / not zero */

loc_000FD521: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_000FD533;

loc_000FD52B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_000FD533: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000FD550; /* jne: not equal / not zero */

loc_000FD546: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_000FD558;

loc_000FD550: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_000FD558: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000FD576; /* jne: not equal / not zero */

loc_000FD56C: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_000FD57E;

loc_000FD576: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_000FD57E: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edx) (16-bit) */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    MEM32(0x64D854) = ecx;
    MEM32(0x64D858) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000FD5A7; /* jne: not equal / not zero */

loc_000FD59D: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_000FD5AF;

loc_000FD5A7: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_000FD5AF: ;
    eax = MEM32(esp);
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FD5CDu); RECOMP_ABI_CALL(0x000FD460u, sub_000FD460); /* call 0x000FD460 */

loc_000FD5CD: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEMF(eax) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x24);
    MEM16(ecx * 8 + 0x616FD8) = 2;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FD610
 * Original: 0x000FD610 - 0x000FD88B (635 bytes, 177 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD610(void)
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

loc_000FD610: ;
    SET_LO8(edx, MEM8(esp + 8));
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    xmm7 = xmm0; /* movaps */
    if (TEST_NZ(_fa, _fb)) goto loc_000FD661; /* jne: not equal / not zero */

loc_000FD627: ;
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
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(eax) = (float)fp_top(); fp_pop(); /* fstp */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(eax + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    MEMF(eax + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_000FD661: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 2 (8-bit) */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 4); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_000FD6C2; /* jne: not equal / not zero */

loc_000FD68F: ;
    fp_push(MEMF(ecx + 8)); /* fld float */
    fp_push(MEMF(ecx + 4)); /* fld float */
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
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    xmm7 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 0x18)); /* fdiv dword ptr [esp + 0x18] */
    goto loc_000FD6C5;

loc_000FD6C2: ;
    fp_push(MEMF(esp)); /* fld float */

loc_000FD6C5: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = cos(fp_top()); /* fcos */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000FD71F; /* jbe: below or equal (unsigned <=) */

loc_000FD6D7: ;
    SET_LO8(edx, LO8(edx) & 6);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 4 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FD70B; /* jne: not equal / not zero */

loc_000FD6DF: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm7.f[0]; /* divss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */

loc_000FD70B: ;
    eax = MEM32(ecx);
    MEM32(esi) = eax;
    edx = MEM32(ecx + 4);
    MEM32(esi + 4) = edx;
    eax = MEM32(ecx + 8);
    MEM32(esi + 8) = eax;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000FD71F: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 4); /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 8); /* mulss */
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 4); /* mulss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2.f[0] = xmm2.f[0] * MEMF(ecx + 4); /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm3.f[0]; /* subss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    MEMF(esp + 4) = xmm4.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 6 (8-bit) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm6 = xmm2; /* movaps */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm4.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm5.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] + xmm6.f[0]; /* addss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    if (TEST_NZ(_fa, _fb)) goto loc_000FD873; /* jne: not equal / not zero */

loc_000FD855: ;
    xmm1.f[0] = xmm1.f[0] * xmm7.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 4) = xmm1.f[0]; /* movss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */

loc_000FD873: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = MEM32(esp + 0xC);
    MEM32(esi) = ecx;
    MEM32(esi + 4) = edx;
    MEM32(esi + 8) = eax;
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
 * sub_000FD890
 * Original: 0x000FD890 - 0x000FD93E (174 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FD890: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000FD89Cu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FD89C: ;
    ebx = MEM32(0x64D854);
    ebp = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebp--;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ebp * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp * 8 + 0x616FD8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FD8C1; /* jne: not equal / not zero */

loc_000FD8B7: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ebx + 0x6270D8); /* cvtsi2ss */
    goto loc_000FD8C9;

loc_000FD8C1: ;
    xmm0 = XMM_SCALAR(MEMF(ebx + 0x6270D8)); /* movss */

loc_000FD8C9: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    ecx = ebx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    edi = ebx + 0x6270D8;
    eax = ecx;
    esi = esp + 0x1C;
    ecx = edi;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000FD8F7u); RECOMP_ABI_CALL(0x000FD610u, sub_000FD610); /* call 0x000FD610 */

loc_000FD8F7: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x1C);
    edx = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 8) = eax;
    eax = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp * 8 + 0x616FDC) = edi;
    MEM32(edi) = ecx;
    MEM32(edi + 4) = edx;
    POP32(esp, edi);
    MEM16(ebp * 8 + 0x616FD8) = 3;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = ebp;
    POP32(esp, ebp);
    MEM32(0x64D854) = ebx;
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
 * sub_000FD940
 * Original: 0x000FD940 - 0x000FD9D9 (153 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD940(void)
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

loc_000FD940: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax); /* subss */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 4) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1.f[0] = xmm1.f[0] / MEMF(esp); /* divss */
    ecx = MEM32(esp);
    PUSH32(esp, ecx);
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    ecx = esp + 0xC;
    MEMF(esp + 0xC) = xmm4.f[0]; /* movss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000FD9D5u); RECOMP_ABI_CALL(0x000738C0u, sub_000738C0); /* call 0x000738C0 */

loc_000FD9D5: ;
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
 * sub_000FD9E0
 * Original: 0x000FD9E0 - 0x000FDB1E (318 bytes, 76 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FD9E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FD9E0: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDA0A; /* jne: not equal / not zero */

loc_000FDA00: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_000FDA12;

loc_000FDA0A: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_000FDA12: ;
    edx = MEM32(eax + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 8) = edx;
    edx = MEM32(eax + 0x6270DC);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 0x6270E0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    MEM32(esp + 0x14) = edx;
    edx = eax + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    MEM32(0x64D854) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + 0x6270D8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx * 8 + 0x616FDC);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    SET_LO16(eax, MEM16(ecx * 8 + 0x616FD8));
    edx = esp + 0x28;
    MEM32(0x64D858) = ecx;
    PUSH32(esp, edx);
    ecx = SX16(LO16(eax));
    PUSH32(esp, edi);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x000FDA84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FDA7Du); } /* indirect call */
    }

loc_000FDA84: ;
    edx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    esi = MEM32(eax * 8 + 0x616FD4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(0x64D854) = edx;
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x000FDABDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FDAB6u); } /* indirect call */
    }

loc_000FDABD: ;
    ebx = MEM32(0x64D854);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esp + 0x2C;
    ebp = ebx + 0x6270D8;
    PUSH32(esp, 0x000FDADEu); RECOMP_ABI_CALL(0x000FD940u, sub_000FD940); /* call 0x000FD940 */

loc_000FDADE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x616FDC) = ebp;
    MEM16(eax * 8 + 0x616FD8) = 1;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x94);
    POP32(esp, ebp);
    MEM32(0x64D854) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FDA33
 * Original: 0x000FDA33 - 0x000FDB1E (235 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDA33(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FDA33: ;
    MEM32(esp + 0x14) = edx;
    edx = eax + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    MEM32(0x64D854) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + 0x6270D8;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx * 8 + 0x616FDC);
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = eax;
    SET_LO16(eax, MEM16(ecx * 8 + 0x616FD8));
    edx = esp + 0x28;
    MEM32(0x64D858) = ecx;
    PUSH32(esp, edx);
    ecx = SX16(LO16(eax));
    PUSH32(esp, edi);
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x000FDA84u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FDA7Du); } /* indirect call */
    }

loc_000FDA84: ;
    edx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    esi = MEM32(eax * 8 + 0x616FD4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0x68;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(0x64D854) = edx;
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x000FDABDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FDAB6u); } /* indirect call */
    }

loc_000FDABD: ;
    ebx = MEM32(0x64D854);
    ecx = MEM32(esp + 0x20);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = esp + 0x2C;
    ebp = ebx + 0x6270D8;
    PUSH32(esp, 0x000FDADEu); RECOMP_ABI_CALL(0x000FD940u, sub_000FD940); /* call 0x000FD940 */

loc_000FDADE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x616FDC) = ebp;
    MEM16(eax * 8 + 0x616FD8) = 1;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x94);
    POP32(esp, ebp);
    MEM32(0x64D854) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x88;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FDB20
 * Original: 0x000FDB20 - 0x000FDB3D (29 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_000FDB20(void)
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

loc_000FDB20: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 8)); /* fsub dword ptr [esp + 8] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000FDB3A; /* jbe: below or equal (unsigned <=) */

loc_000FDB34: ;
    eax = 1;
    esp += 4; return; /* ret */

loc_000FDB3A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FDB40
 * Original: 0x000FDB40 - 0x000FDC0C (204 bytes, 54 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDB40(void)
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

loc_000FDB40: ;
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = 1;
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edi) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FDB6D; /* jne: not equal / not zero */

loc_000FDB63: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_000FDB75;

loc_000FDB6D: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_000FDB75: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edi) (16-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000FDB93; /* jne: not equal / not zero */

loc_000FDB89: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_000FDB9B;

loc_000FDB93: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_000FDB9B: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(eax * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax * 8 + 0x616FD8), LO16(edi) (16-bit) */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = ecx + 0x6270D8;
    if (CMP_NE(_fa, _fb)) goto loc_000FDBBB; /* jne: not equal / not zero */

loc_000FDBB5: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edx); /* cvtsi2ss */
    goto loc_000FDBBF;

loc_000FDBBB: ;
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */

loc_000FDBBF: ;
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000FDBDD; /* jbe: below or equal (unsigned <=) */

loc_000FDBD9: ;
    esi = edi;
    goto loc_000FDBDF;

loc_000FDBDD: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000FDBDF: ;
    MEM16(eax * 8 + 0x616FD8) = LO16(edi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x616FDC) = edx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(edx) = esi;
    MEM32(0x64D854) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_000FDC10
 * Original: 0x000FDC10 - 0x000FDD63 (339 bytes, 86 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDC10(void)
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

loc_000FDC10: ;
    PUSH32(esp, ecx);
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 4); /* subss */
    xmm2 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edx + 8); /* subss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx); /* subss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(edx + 8); /* subss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(edx); /* subss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(edx + 4); /* subss */
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    POP32(esp, edi);
    fp_push(MEMD(0x333820)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FDD57; /* jnp: not parity */

loc_000FDCB7: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() / MEMF(esp + 8)); /* fdiv dword ptr [esp + 8] */
    MEMF(esp + 8) = (float)fp_top(); /* fst */
    fp_push(MEMD(0x333820)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_000FDD57; /* ja: above (unsigned >) */

loc_000FDCD2: ;
    fp_push(MEMD(0x3338B0)); /* fld double */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_000FDD57; /* ja: above (unsigned >) */

loc_000FDCE2: ;
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(esi + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 4); /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + MEMF(ecx + 8); /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    MEMF(ecx) = xmm2.f[0]; /* movss */
    MEMF(ecx + 4) = xmm0.f[0]; /* movss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000FDD57: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ecx) = eax;
    MEM32(ecx + 4) = eax;
    MEM32(ecx + 8) = eax;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FDD70
 * Original: 0x000FDD70 - 0x000FDDFB (139 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDD70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FDD70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D858);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edi + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edi + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = edi + 0x6270D8;
    PUSH32(esp, ebx);
    ecx = esp + 0x14;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000FDDB4u); RECOMP_ABI_CALL(0x000FDC10u, sub_000FDC10); /* call 0x000FDC10 */

loc_000FDDB4: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp * 8 + 0x616FDC) = ebx;
    MEM32(0x64D854) = edi;
    POP32(esp, edi);
    MEM16(ebp * 8 + 0x616FD8) = 3;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx) = eax;
    eax = MEM32(esp + 0x1C);
    POP32(esp, esi);
    MEM32(0x64D858) = ebp;
    POP32(esp, ebp);
    MEM32(ebx + 4) = ecx;
    MEM32(ebx + 8) = edx;
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
 * sub_000FDE00
 * Original: 0x000FDE00 - 0x000FDF8C (396 bytes, 94 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDE00(void)
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

loc_000FDE00: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x64D854);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm4 = XMM_SCALAR(MEMF(edx + 0x6270E0)); /* movss */
    PUSH32(esp, esi);
    ebx = MEM32(0x64D858);
    PUSH32(esp, edi);
    edi = edx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm4.f[0] = xmm4.f[0] - MEMF(edx + 0x6270E0); /* subss */
    ecx = edx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x6270D8)); /* movss */
    eax = edx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x6270D8)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx); /* subss */
    xmm3 = XMM_SCALAR(MEMF(edx + 0x6270E0)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(ecx + 8); /* subss */
    xmm2 = XMM_SCALAR(MEMF(edx + 0x6270DC)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    esi = edx + 0x6270D8;
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(ecx + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx); /* subss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMD(0x333820)); /* fld double */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FDEEB; /* jp: parity */

loc_000FDEE3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000FDF55;

loc_000FDEEB: ;
    xmm3 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(edi + 8); /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm5.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 0x10);
    MEMF(esp + 0x14) = xmm2.f[0]; /* movss */
    eax = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    edi = MEM32(esp + 0x18);

loc_000FDF55: ;
    MEM32(esi + 8) = edi;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx * 8 + 0x616FDC) = esi;
    MEM32(esi + 4) = eax;
    eax = MEM32(esp + 0x20);
    MEM16(ebx * 8 + 0x616FD8) = 3;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi) = ecx;
    POP32(esp, esi);
    MEM32(0x64D858) = ebx;
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
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
 * sub_000FDF90
 * Original: 0x000FDF90 - 0x000FE01B (139 bytes, 40 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDF90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FDF90: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D858);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edi + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edi + 0x6270D8;
    eax = esp + 0x10;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = edi + 0x6270D8;
    PUSH32(esp, eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000FDFD4u); RECOMP_ABI_CALL(0x000C3850u, sub_000C3850); /* call 0x000C3850 */

loc_000FDFD4: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp * 8 + 0x616FDC) = ebx;
    MEM32(0x64D854) = edi;
    POP32(esp, edi);
    MEM16(ebp * 8 + 0x616FD8) = 3;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 8) = eax;
    eax = MEM32(esp + 0x1C);
    POP32(esp, esi);
    MEM32(0x64D858) = ebp;
    POP32(esp, ebp);
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = edx;
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
 * sub_000FDFD4
 * Original: 0x000FDFD4 - 0x000FE01B (71 bytes, 21 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FDFD4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FDFD4: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp * 8 + 0x616FDC) = ebx;
    MEM32(0x64D854) = edi;
    POP32(esp, edi);
    MEM16(ebp * 8 + 0x616FD8) = 3;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 8) = eax;
    eax = MEM32(esp + 0x1C);
    POP32(esp, esi);
    MEM32(0x64D858) = ebp;
    POP32(esp, ebp);
    MEM32(ebx) = ecx;
    MEM32(ebx + 4) = edx;
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
 * sub_000FE020
 * Original: 0x000FE020 - 0x000FE09E (126 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FE020: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D858);
    ecx = ebx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    edx = ebx + 0x6270D8;
    PUSH32(esp, edi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = ebx + 0x6270D8;
    edi = esp + 0x10;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 3;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000FE05Au); RECOMP_ABI_CALL(0x000C39F0u, sub_000C39F0); /* call 0x000C39F0 */

loc_000FE05A: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp * 8 + 0x616FDC) = esi;
    POP32(esp, edi);
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x1C);
    MEM16(ebp * 8 + 0x616FD8) = 3;
    ebp++;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    POP32(esp, esi);
    MEM32(0x64D858) = ebp;
    POP32(esp, ebp);
    MEM32(0x64D854) = ebx;
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
 * sub_000FE0A0
 * Original: 0x000FE0A0 - 0x000FE158 (184 bytes, 64 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE0A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000FE0A0: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FE0BA; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(edx)) */

loc_000FE0AF: ;
    _fca = xmm0.f[0]; _fcb = MEMF(edx); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FE0CF; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(edx)) */

loc_000FE0B4: ;
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    goto loc_000FE0C3;

loc_000FE0BA: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FE0CF; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ecx)) */

loc_000FE0BF: ;
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */

loc_000FE0C3: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FE0CF; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax)) */

loc_000FE0C8: ;
    edi = 1;
    goto loc_000FE0D1;

loc_000FE0CF: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000FE0D1: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 4); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FE0EE; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(edx + 4)) */

loc_000FE0E1: ;
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 4); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FE106; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(edx + 4)) */

loc_000FE0E7: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    goto loc_000FE0F9;

loc_000FE0EE: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 4); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FE106; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ecx + 4)) */

loc_000FE0F4: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */

loc_000FE0F9: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 4); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FE106; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 4)) */

loc_000FE0FF: ;
    esi = 1;
    goto loc_000FE108;

loc_000FE106: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000FE108: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 8); /* comiss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FE125; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(edx + 8)) */

loc_000FE118: ;
    _fca = xmm0.f[0]; _fcb = MEMF(edx + 8); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FE13D; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(edx + 8)) */

loc_000FE11E: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    goto loc_000FE130;

loc_000FE125: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ecx + 8); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FE13D; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(ecx + 8)) */

loc_000FE12B: ;
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */

loc_000FE130: ;
    _fca = xmm0.f[0]; _fcb = MEMF(eax + 8); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FE13D; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(eax + 8)) */

loc_000FE136: ;
    eax = 1;
    goto loc_000FE13F;

loc_000FE13D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000FE13F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE153; /* je: equal / zero */

loc_000FE143: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE153; /* je: equal / zero */

loc_000FE147: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FE153; /* je: equal / zero */

loc_000FE14B: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_000FE153: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FE160
 * Original: 0x000FE160 - 0x000FE1BE (94 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE160(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE160: ;
    PUSH32(esp, esi);
    esi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(0x64D858);
    ecx = esi + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esi + 0x6270D8;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000FE191u); RECOMP_ABI_CALL(0x000FE0A0u, sub_000FE0A0); /* call 0x000FE0A0 */

loc_000FE191: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(edi * 8 + 0x616FD8) = 1;
    MEM32(edi * 8 + 0x616FDC) = edx;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x64D858) = edi;
    POP32(esp, edi);
    MEM32(0x64D854) = esi;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FE1C0
 * Original: 0x000FE1C0 - 0x000FE276 (182 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE1C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE1C0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(edx + 0x6270DC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 4); /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 0x6270E0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx + 8); /* mulss */
    eax = edx + 0x6270D8;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm1.f[0] = xmm1.f[0] * MEMF(ecx); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(ecx + 8); /* mulss */
    ecx = MEM32(esp);
    PUSH32(esp, esi);
    esi = MEM32(0x64D858);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    ecx = MEM32(esp + 8);
    MEM32(eax + 4) = ecx;
    MEM32(esi * 8 + 0x616FDC) = eax;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi * 8 + 0x616FD8) = 3;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + 8) = ecx;
    eax = MEM32(esp + 0x14);
    MEM32(0x64D858) = esi;
    MEM32(0x64D854) = edx;
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
 * sub_000FE280
 * Original: 0x000FE280 - 0x000FE47F (511 bytes, 141 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE280(void)
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

loc_000FE280: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x20));
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
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
    MEMF(esp + 0xC) = (float)fp_top(); /* fst */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x343DDC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_000FE2C9; /* jbe: below or equal (unsigned <=) */

loc_000FE2B5: ;
    eax = MEM32(ecx);
    MEM32(edx) = eax;
    eax = MEM32(ecx + 4);
    MEM32(edx + 4) = eax;
    ecx = MEM32(ecx + 8);
    MEM32(edx + 8) = ecx;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000FE2C9: ;
    xmm2 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 8); /* subss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 4); /* subss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ecx); /* subss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 4) = xmm3.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    xmm5 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    fp_push(MEMF(eax + 4)); /* fld float */
    fp_push(MEMF(eax + 8)); /* fld float */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    xmm6 = xmm0; /* movaps */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    MEMF(esp + 0x1C) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    { double _t = g_fp_stack[(g_fp_top + 3) & 7]; fp_push(_t); } /* fld st(3) */
    xmm2 = xmm5; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 4) & 7]); /* fmul st(4) */
    xmm7 = xmm1; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    xmm2.f[0] = xmm2.f[0] - xmm7.f[0]; /* subss */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 3) & 7] = fp_top(); fp_pop(); /* fstp st(3) */
    fp_pop(); /* fstp st(0) */
    fp_pop(); /* fstp st(0) */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 4)); /* fadd dword ptr [esp + 4] */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 4); /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(esp + 8)); /* fadd dword ptr [esp + 8] */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 8); /* mulss */
    MEMF(esp + 0x10) = xmm2.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp + 0x1C); /* mulss */
    xmm4.f[0] = xmm4.f[0] * MEMF(esp + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] * MEMF(esp); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333818); /* mulss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    xmm2.f[0] = xmm2.f[0] * MEMF(0x333884); /* mulss */
    fp_push(MEMF(esp)); /* fld float */
    xmm1 = xmm5; /* movaps */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp)); /* fmul dword ptr [esp] */
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3337CC)); /* fmul dword ptr [0x3337cc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    xmm3 = xmm4; /* movaps */
    xmm1.f[0] = xmm1.f[0] / xmm2.f[0]; /* divss */
    _fca = xmm1.f[0]; _fcb = xmm5.f[0]; /* comiss */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm3.f[0] = xmm3.f[0] / xmm2.f[0]; /* divss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FE43E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm5.f[0]) */

loc_000FE43B: ;
    xmm3 = xmm1; /* movaps */

loc_000FE43E: ;
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm1 = xmm3; /* movaps */
    xmm1.f[0] = xmm1.f[0] * MEMF(eax + 4); /* mulss */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 8); /* mulss */
    MEMF(edx) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x20)) >> 32) & 1);
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FE464
 * Original: 0x000FE464 - 0x000FE47F (27 bytes, 7 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE464(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE464: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edx + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(edx + 8) = xmm0.f[0]; /* movss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FE480
 * Original: 0x000FE480 - 0x000FE52D (173 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE480(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE480: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D858);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi + 0x6270D8;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM16(ebx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx * 8 + 0x616FD8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FE4B6; /* jne: not equal / not zero */

loc_000FE4AC: ;
    xmm0.f[0] = (float)(int32_t)MEM32(edi + 0x6270D8); /* cvtsi2ss */
    goto loc_000FE4BE;

loc_000FE4B6: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 0x6270D8)); /* movss */

loc_000FE4BE: ;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edi + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    esi = edi + 0x6270D8;
    edx = esp + 0x14;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x000FE4E7u); RECOMP_ABI_CALL(0x000FE280u, sub_000FE280); /* call 0x000FE280 */

loc_000FE4E7: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx * 8 + 0x616FDC) = esi;
    MEM32(esi) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(0x64D854) = edi;
    MEM16(ebx * 8 + 0x616FD8) = 3;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(esi + 4) = ecx;
    MEM32(esi + 8) = edx;
    POP32(esp, esi);
    MEM32(0x64D858) = ebx;
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
 * sub_000FE530
 * Original: 0x000FE530 - 0x000FE55D (45 bytes, 13 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE530(void)
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

loc_000FE530: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, 0x000FE53Du); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000FE53D: ;
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000FE54Cu); RECOMP_ABI_CALL(0x002920B5u, sub_002920B5); /* call 0x002920B5 */

loc_000FE54C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FE55C; /* jne: not equal / not zero */

loc_000FE556: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_000FE55C: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FE560
 * Original: 0x000FE560 - 0x000FE636 (214 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE560(void)
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

loc_000FE560: ;
    ecx = MEM32(0x64D854);
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
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
    if (CMP_NE(_fa, _fb)) goto loc_000FE58B; /* jne: not equal / not zero */

loc_000FE581: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_000FE593;

loc_000FE58B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_000FE593: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_000FE5BC; /* jne: not equal / not zero */

loc_000FE5B2: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_000FE5C4;

loc_000FE5BC: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_000FE5C4: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x000FE5D5u); RECOMP_ABI_CALL(0x0028C40Cu, sub_0028C40C); /* call 0x0028C40C */

loc_000FE5D5: ;
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000FE5E4u); RECOMP_ABI_CALL(0x002920B5u, sub_002920B5); /* call 0x002920B5 */

loc_000FE5E4: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FE5F4; /* jne: not equal / not zero */

loc_000FE5EE: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_000FE5F4: ;
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
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FE640
 * Original: 0x000FE640 - 0x000FE7AC (364 bytes, 88 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE640(void)
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

loc_000FE640: ;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D858);
    edx = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM16(edi * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi * 8 + 0x616FD8), 1 (16-bit) */
    esi = ecx + 0x6270D8;
    if (CMP_NE(_fa, _fb)) goto loc_000FE68A; /* jne: not equal / not zero */

loc_000FE684: ;
    xmm5.f[0] = (float)(int32_t)MEM32(esi); /* cvtsi2ss */
    goto loc_000FE68E;

loc_000FE68A: ;
    xmm5 = XMM_SCALAR(MEMF(esi)); /* movss */

loc_000FE68E: ;
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(0x333884)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm3.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    MEMF(esp + 0xC) = xmm5.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    xmm3.f[0] = xmm3.f[0] - xmm0.f[0]; /* subss */
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_top()); /* fadd st(0), st(0) */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax); /* subss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm7 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] - xmm1.f[0]; /* subss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm6.f[0] = xmm6.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] - MEMF(eax + 8); /* subss */
    xmm5.f[0] = xmm5.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm6.f[0]; /* addss */
    xmm6 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(eax + 4); /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm3 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm5 = xmm7; /* movaps */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm5.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + MEMF(eax + 4); /* addss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi * 8 + 0x616FDC) = esi;
    xmm4.f[0] = xmm4.f[0] * xmm7.f[0]; /* mulss */
    MEMF(esp + 0x10) = xmm3.f[0]; /* movss */
    eax = MEM32(esp + 0x10);
    MEM32(esi) = eax;
    MEM16(edi * 8 + 0x616FD8) = 3;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm1.f[0]; /* movss */
    edx = MEM32(esp + 0x14);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    eax = MEM32(esp + 0x18);
    MEM32(esi + 8) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(0x64D858) = edi;
    POP32(esp, edi);
    MEM32(esi + 4) = edx;
    POP32(esp, esi);
    MEM32(0x64D854) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
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
 * sub_000FE7B0
 * Original: 0x000FE7B0 - 0x000FE7EB (59 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE7B0(void)
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

loc_000FE7B0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000FE7B6u); RECOMP_ABI_CALL(0x0002C570u, sub_0002C570); /* call 0x0002C570 */

loc_000FE7B6: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337A0); /* comiss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FE7CC; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3337A0)) */

loc_000FE7C4: ;
    fp_push(MEMF(0x3337C0)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000FE7CC: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FE7E1; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_000FE7D9: ;
    fp_push(MEMF(0x333894)); /* fld float */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000FE7E1: ;
    fp_push(MEMF(esp)); /* fld float */
    PUSH32(esp, 0x000FE7E9u); RECOMP_ABI_CALL(0x002941B0u, sub_002941B0); /* call 0x002941B0 */

loc_000FE7E9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FE7F0
 * Original: 0x000FE7F0 - 0x000FE8D9 (233 bytes, 58 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE7F0(void)
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

loc_000FE7F0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm3 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] - MEMF(eax + 8); /* subss */
    xmm5 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm5.f[0] = xmm5.f[0] - MEMF(eax); /* subss */
    xmm6 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 0xC) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEMF(esp + 4) = xmm5.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    MEMF(esp + 8) = xmm6.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    xmm0 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax); /* subss */
    fp_push(MEMF(esp + 8)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 8); /* subss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm7 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm4 = xmm7; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm5 = xmm7; /* movaps */
    xmm7 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm6.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm6 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 8) = xmm3.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] - xmm7.f[0]; /* subss */
    MEMF(esp + 4) = xmm6.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
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
 * sub_000FE8E0
 * Original: 0x000FE8E0 - 0x000FE909 (41 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE8E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE8E0: ;
    PUSH32(esp, 0x000FE8E5u); RECOMP_ABI_CALL(0x0028B466u, sub_0028B466); /* call 0x0028B466 */

loc_000FE8E5: ;
    ecx = eax;
    eax = esi;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)eax);
    eax = 0x80010003u;
    { int64_t _r = (int64_t)(int32_t)eax * (int64_t)(int32_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xE) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    eax = eax >> 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FE908; /* jne: not equal / not zero */

loc_000FE907: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_000FE908: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000FE910
 * Original: 0x000FE910 - 0x000FE947 (55 bytes, 12 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE910(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE910: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_000FE93E; /* jne: not equal / not zero */

loc_000FE935: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    esp += 4; return; /* ret */

loc_000FE93E: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */
    esp += 4; return; /* ret */

}

/**
 * sub_000FE950
 * Original: 0x000FE950 - 0x000FE986 (54 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE950(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE950: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    MEM32(ecx * 8 + 0x616FDC) = eax;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax) = edx;
    MEM32(0x64D858) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_000FE990
 * Original: 0x000FE990 - 0x000FE9A2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE990(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE990: ;
    PUSH32(esp, 0x000FE995u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FE995: ;
    MEM32(0x64D1FC) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FE9B0
 * Original: 0x000FE9B0 - 0x000FE9C2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE9B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE9B0: ;
    PUSH32(esp, 0x000FE9B5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FE9B5: ;
    MEM32(0x64D8FC) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FE9D0
 * Original: 0x000FE9D0 - 0x000FE9E2 (18 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE9D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE9D0: ;
    PUSH32(esp, 0x000FE9D5u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FE9D5: ;
    MEM32(0x64D900) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FE9F0
 * Original: 0x000FE9F0 - 0x000FEA2D (61 bytes, 20 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FE9F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FE9F0: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000FE9F8u); RECOMP_ABI_CALL(0x00024F20u, sub_00024F20); /* call 0x00024F20 */

loc_000FE9F8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FEA1C; /* jne: not equal / not zero */

loc_000FE9FE: ;
    PUSH32(esp, 0x3320BC);
    PUSH32(esp, 0x3320B0);
    PUSH32(esp, 0x6A);
    PUSH32(esp, 0x332070);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000FEA19u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000FEA19: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FEA1C: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    edx = edi;
    PUSH32(esp, 0x000FEA28u); RECOMP_ABI_CALL(0x00022020u, sub_00022020); /* call 0x00022020 */

loc_000FEA28: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FEA30
 * Original: 0x000FEA30 - 0x000FEAD1 (161 bytes, 43 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FEA30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FEA30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x000FEA50u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FEA50: ;
    ecx = MEM32(0x64D858);
    edi = eax;
    eax = MEM32(0x64D854);
    edx = MEM32(eax + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    ecx = MEM32(eax + 0x6270DC);
    MEM32(esp + 8) = edx;
    edx = MEM32(eax + 0x6270E0);
    MEM32(esp + 0xC) = ecx;
    ecx = esp + 8;
    MEM32(0x64D854) = eax;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x000FEA93u); RECOMP_ABI_CALL(0x00024F20u, sub_00024F20); /* call 0x00024F20 */

loc_000FEA93: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FEAB7; /* jne: not equal / not zero */

loc_000FEA99: ;
    PUSH32(esp, 0x3320BC);
    PUSH32(esp, 0x3320B0);
    PUSH32(esp, 0x6A);
    PUSH32(esp, 0x332070);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000FEAB4u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000FEAB4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FEAB7: ;
    PUSH32(esp, edi);
    edx = esp + 0xC;
    PUSH32(esp, 0x000FEAC1u); RECOMP_ABI_CALL(0x00022020u, sub_00022020); /* call 0x00022020 */

loc_000FEAC1: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
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
 * sub_000FEAE0
 * Original: 0x000FEAE0 - 0x000FEB22 (66 bytes, 21 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FEAE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FEAE0: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000FEAE8u); RECOMP_ABI_CALL(0x00024F20u, sub_00024F20); /* call 0x00024F20 */

loc_000FEAE8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FEB0F; /* jne: not equal / not zero */

loc_000FEAEE: ;
    PUSH32(esp, 0x3320BC);
    PUSH32(esp, 0x3320B0);
    PUSH32(esp, 0x8E);
    PUSH32(esp, 0x332070);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000FEB0Cu); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000FEB0C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FEB0F: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, eax);
    edx = edi;
    eax = esi;
    PUSH32(esp, 0x000FEB1Du); RECOMP_ABI_CALL(0x000220B0u, sub_000220B0); /* call 0x000220B0 */

loc_000FEB1D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FEB30
 * Original: 0x000FEB30 - 0x000FEBD6 (166 bytes, 44 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FEB30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FEB30: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x000FEB50u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FEB50: ;
    ecx = MEM32(0x64D858);
    edi = eax;
    eax = MEM32(0x64D854);
    edx = MEM32(eax + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    ecx = MEM32(eax + 0x6270DC);
    MEM32(esp + 8) = edx;
    edx = MEM32(eax + 0x6270E0);
    MEM32(esp + 0xC) = ecx;
    ecx = esp + 8;
    MEM32(0x64D854) = eax;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x000FEB93u); RECOMP_ABI_CALL(0x00024F20u, sub_00024F20); /* call 0x00024F20 */

loc_000FEB93: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FEBBA; /* jne: not equal / not zero */

loc_000FEB99: ;
    PUSH32(esp, 0x3320BC);
    PUSH32(esp, 0x3320B0);
    PUSH32(esp, 0x8E);
    PUSH32(esp, 0x332070);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000FEBB7u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000FEBB7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FEBBA: ;
    PUSH32(esp, edi);
    edx = esp + 0xC;
    eax = esi;
    PUSH32(esp, 0x000FEBC6u); RECOMP_ABI_CALL(0x000220B0u, sub_000220B0); /* call 0x000220B0 */

loc_000FEBC6: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
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
 * sub_000FEBE0
 * Original: 0x000FEBE0 - 0x000FEC18 (56 bytes, 17 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FEBE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FEBE0: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000FEBE8u); RECOMP_ABI_CALL(0x00024F20u, sub_00024F20); /* call 0x00024F20 */

loc_000FEBE8: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FEC0F; /* jne: not equal / not zero */

loc_000FEBEE: ;
    PUSH32(esp, 0x3320BC);
    PUSH32(esp, 0x3320B0);
    PUSH32(esp, 0xB8);
    PUSH32(esp, 0x332070);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000FEC0Cu); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000FEC0C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FEC0F: ;
    edx = edi;
    PUSH32(esp, 0x000FEC16u); RECOMP_ABI_CALL(0x000221D0u, sub_000221D0); /* call 0x000221D0 */

loc_000FEC16: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FEC20
 * Original: 0x000FEC20 - 0x000FECEE (206 bytes, 51 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FEC20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FEC20: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D854);
    edx = MEM32(eax + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    ecx = MEM32(eax + 0x6270DC);
    PUSH32(esp, ebx);
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x6270E0);
    PUSH32(esp, esi);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, edi);
    ecx = esp + 0xC;
    MEM32(0x64D854) = eax;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x000FEC7Du); RECOMP_ABI_CALL(0x00024F20u, sub_00024F20); /* call 0x00024F20 */

loc_000FEC7D: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FECA4; /* jne: not equal / not zero */

loc_000FEC83: ;
    PUSH32(esp, 0x3320BC);
    PUSH32(esp, 0x3320B0);
    PUSH32(esp, 0xB8);
    PUSH32(esp, 0x332070);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000FECA1u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000FECA1: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FECA4: ;
    ebx = MEM32(0x64D854);
    edx = esp + 0xC;
    edi = ebx + 0x6270D8;
    PUSH32(esp, 0x000FECB9u); RECOMP_ABI_CALL(0x000221D0u, sub_000221D0); /* call 0x000221D0 */

loc_000FECB9: ;
    MEM32(edi) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x616FDC) = edi;
    MEM16(eax * 8 + 0x616FD8) = 1;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x18);
    POP32(esp, esi);
    MEM32(0x64D854) = ebx;
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
 * sub_000FECF0
 * Original: 0x000FECF0 - 0x000FEDA3 (179 bytes, 57 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000FECF0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FECF0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = ebp;
    PUSH32(esp, 0x000FECFEu); RECOMP_ABI_CALL(0x00024F20u, sub_00024F20); /* call 0x00024F20 */

loc_000FECFE: ;
    ecx = ebx;
    esi = eax;
    PUSH32(esp, 0x000FED07u); RECOMP_ABI_CALL(0x00024F20u, sub_00024F20); /* call 0x00024F20 */

loc_000FED07: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000FED2E; /* jne: not equal / not zero */

loc_000FED0D: ;
    PUSH32(esp, 0x3320BC);
    PUSH32(esp, 0x3320B0);
    PUSH32(esp, 0xEA);
    PUSH32(esp, 0x332070);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000FED2Bu); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000FED2B: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FED2E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FED53; /* jne: not equal / not zero */

loc_000FED32: ;
    PUSH32(esp, 0x332044);
    PUSH32(esp, 0x332034);
    PUSH32(esp, 0xEB);
    PUSH32(esp, 0x332070);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000FED50u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000FED50: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FED53: ;
    eax = MEM32(0x64F064);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FED66; /* jne: not equal / not zero */

loc_000FED5C: ;
    MEM32(0x64F064) = 1;

loc_000FED66: ;
    eax = MEM32(esp + 0x2C);
    ecx = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x24);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x24);
    PUSH32(esp, ecx);
    ecx = MEM32(esp + 0x24);
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    MEM32(0x64D900) = 0;
    PUSH32(esp, 0x000FED9Cu); RECOMP_ABI_CALL(0x000224F0u, sub_000224F0); /* call 0x000224F0 */

loc_000FED9C: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000FEDB0
 * Original: 0x000FEDB0 - 0x000FEF1D (365 bytes, 92 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FEDB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FEDB0: ;
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D884);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x000FEDD8u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FEDD8: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x000FEDE1u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FEDE1: ;
    ecx = MEM32(0x64D854);
    MEM32(esp + 0x18) = eax;
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
    if (CMP_NE(_fa, _fb)) goto loc_000FEE14; /* jne: not equal / not zero */

loc_000FEE0A: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_000FEE1C;

loc_000FEE14: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_000FEE1C: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000FEE27u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FEE27: ;
    edi = eax;
    PUSH32(esp, 0x000FEE2Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FEE2E: ;
    ebx = eax;
    eax = MEM32(0x64D854);
    edx = MEM32(eax + 0x6270B8);
    ecx = MEM32(eax + 0x6270BC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x28) = edx;
    edx = MEM32(eax + 0x627100);
    MEM32(esp + 0x2C) = ecx;
    ecx = MEM32(eax + 0x6270D8);
    MEM32(esp + 0x30) = edx;
    edx = MEM32(eax + 0x6270DC);
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270E0);
    MEM32(esp + 0x24) = eax;
    eax = MEM32(0x64D858);
    esi = MEM32(eax * 8 + 0x616FC4);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x1C) = ecx;
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD8));
    MEM32(esp + 0x20) = edx;
    edx = esp + 0x34;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = SX16(LO16(ecx));
    PUSH32(esp, esi);
    MEM32(0x64D858) = eax;
    { uint32_t _icall_target = MEM32(ecx * 8 + 0x3418EC); PUSH32(esp, 0x000FEEA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FEEA1u); } /* indirect call */
    }

loc_000FEEA8: ;
    edx = MEM32(0x64D854);
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x20);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D854) = edx;
    edx = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ebx = esp + 0x50;
    PUSH32(esp, 0x000FEED8u); RECOMP_ABI_CALL(0x000FECF0u, sub_000FECF0); /* call 0x000FECF0 */

loc_000FEED8: ;
    edx = MEM32(0x64D854);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
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
    eax = MEM32(esp + 0x68);
    POP32(esp, ebp);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FEF20
 * Original: 0x000FEF20 - 0x000FEFB5 (149 bytes, 44 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FEF20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FEF20: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = eax;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x000FEF2Eu); RECOMP_ABI_CALL(0x00024F20u, sub_00024F20); /* call 0x00024F20 */

loc_000FEF2E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FEF55; /* jne: not equal / not zero */

loc_000FEF34: ;
    PUSH32(esp, 0x3320BC);
    PUSH32(esp, 0x3320B0);
    PUSH32(esp, 0x14A);
    PUSH32(esp, 0x332070);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000FEF52u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000FEF52: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FEF55: ;
    eax = MEM32(ebx);
    MEM32(esi) = eax;
    ecx = MEM32(ebx + 4);
    MEM32(esi + 4) = ecx;
    edx = MEM32(ebx + 8);
    eax = esp + 8;
    MEM32(esi + 8) = edx;
    PUSH32(esp, eax);
    ebx = esp + 0x10;
    edx = esi;
    ecx = edi;
    PUSH32(esp, 0x000FEF77u); RECOMP_ABI_CALL(0x00021F10u, sub_00021F10); /* call 0x00021F10 */

loc_000FEF77: ;
    xmm1.f[0] = (float)(int32_t)MEM32(esp + 0xC); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi + 0x18); /* addss */
    xmm0 = XMM_SCALAR(MEMF(0x3337D8)); /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1.f[0] = (float)(int32_t)MEM32(esp + 0x10); /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] + MEMF(edi + 0x1C); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    ecx = MEM32(edi + 0x20);
    POP32(esp, edi);
    MEM32(esi + 8) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FEFC0
 * Original: 0x000FEFC0 - 0x000FF07C (188 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FEFC0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FEFC0: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(esp) = eax;
    eax = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(0x64D858);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(eax + 0x6270D8);
    MEM32(0x64D87C) = edx;
    edx = MEM32(eax + 0x6270DC);
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270E0);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = esi;
    MEM32(esp + 0x10) = eax;
    esi = esp + 0x14;
    eax = esp + 8;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0x000FF029u); RECOMP_ABI_CALL(0x000FEF20u, sub_000FEF20); /* call 0x000FEF20 */

loc_000FF029: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(esp + 0x14);
    eax = ecx + 0x6270D8;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x24);
    MEM16(ecx * 8 + 0x616FD8) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FF080
 * Original: 0x000FF080 - 0x000FF0FF (127 bytes, 45 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FF080: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebp);
    ebp = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, 0x3320BC);
    PUSH32(esp, 0x3320B0);
    PUSH32(esp, 0x174);
    PUSH32(esp, 0x332070);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000FF0A6u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000FF0A6: ;
    eax = MEM32(ebp + 0x1C0);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF0F9; /* je: equal / zero */

loc_000FF0B5: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);

loc_000FF0B7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000FF0F7; /* jae: above or equal (unsigned >=) */

loc_000FF0BC: ;
    ecx = MEM32(eax);
    edi = MEM32(ecx + esi * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF0EC; /* je: equal / zero */

loc_000FF0C5: ;
    edx = esp + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(esp + 0x20);
    ebx = esp + 0x14;
    ecx = edi;
    PUSH32(esp, 0x000FF0D9u); RECOMP_ABI_CALL(0x00021F10u, sub_00021F10); /* call 0x00021F10 */

loc_000FF0D9: ;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x1C);
    ecx = edi;
    PUSH32(esp, 0x000FF0E9u); RECOMP_ABI_CALL(0x00024E60u, sub_00024E60); /* call 0x00024E60 */

loc_000FF0E9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FF0EC: ;
    eax = MEM32(ebp + 0x1C0);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF0B7; /* jne: not equal / not zero */

loc_000FF0F7: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_000FF0F9: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FF100
 * Original: 0x000FF100 - 0x000FF16D (109 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF100(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FF100: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D884);
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D858);
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = edx;
    edx = MEM32(ecx + 0x6270D8);
    MEM32(esp) = edx;
    edx = MEM32(ecx + 0x6270DC);
    MEM32(esp + 4) = edx;
    MEM32(0x64D854) = ecx;
    ecx = MEM32(ecx + 0x6270E0);
    edx = esp;
    PUSH32(esp, edx);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, 0x000FF162u); RECOMP_ABI_CALL(0x000FF080u, sub_000FF080); /* call 0x000FF080 */

loc_000FF162: ;
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
 * sub_000FF170
 * Original: 0x000FF170 - 0x000FF1E6 (118 bytes, 43 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF170(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FF170: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ecx = edi;
    PUSH32(esp, 0x000FF17Eu); RECOMP_ABI_CALL(0x00024F20u, sub_00024F20); /* call 0x00024F20 */

loc_000FF17E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF1A5; /* jne: not equal / not zero */

loc_000FF184: ;
    PUSH32(esp, 0x3320BC);
    PUSH32(esp, 0x3320B0);
    PUSH32(esp, 0x1AD);
    PUSH32(esp, 0x332070);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000FF1A2u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000FF1A2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FF1A5: ;
    PUSH32(esp, ebx);
    eax = esp + 0x10;
    PUSH32(esp, eax);
    ebx = esp + 0x10;
    edx = edi;
    ecx = esi;
    PUSH32(esp, 0x000FF1B8u); RECOMP_ABI_CALL(0x00021F10u, sub_00021F10); /* call 0x00021F10 */

loc_000FF1B8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_000FF1DE; /* je: equal / zero */

loc_000FF1C0: ;
    edi = esp + 8;
    edx = esp + 0xC;
    ecx = esi;
    PUSH32(esp, 0x000FF1CFu); RECOMP_ABI_CALL(0x00021FC0u, sub_00021FC0); /* call 0x00021FC0 */

loc_000FF1CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FF1DE; /* je: equal / zero */

loc_000FF1D3: ;
    POP32(esp, edi);
    eax = 1;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000FF1DE: ;
    POP32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FF1F0
 * Original: 0x000FF1F0 - 0x000FF292 (162 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF1F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FF1F0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(esp) = eax;
    eax = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D884) = ecx;
    ecx = MEM32(0x64D858);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D87C) = edx;
    edx = MEM32(eax + 0x6270DC);
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    ecx = MEM32(eax + 0x6270D8);
    eax = MEM32(eax + 0x6270E0);
    MEM32(esp + 0xC) = eax;
    eax = esp + 4;
    MEM32(esp + 4) = ecx;
    MEM32(esp + 8) = edx;
    PUSH32(esp, 0x000FF254u); RECOMP_ABI_CALL(0x000FF170u, sub_000FF170); /* call 0x000FF170 */

loc_000FF254: ;
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
    eax = MEM32(esp + 0x14);
    MEM32(0x64D854) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FF2A0
 * Original: 0x000FF2A0 - 0x000FF389 (233 bytes, 61 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF2A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FF2A0: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x000FF2C2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FF2C2: ;
    ebp = eax;
    PUSH32(esp, 0x000FF2C9u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FF2C9: ;
    ecx = MEM32(0x64D858);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x64D854);
    edx = MEM32(eax + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    ecx = MEM32(eax + 0x6270DC);
    MEM32(esp + 0x14) = edx;
    edx = MEM32(eax + 0x6270E0);
    MEM32(esp + 0x18) = ecx;
    ecx = esp + 0x14;
    MEM32(0x64D854) = eax;
    MEM32(esp + 0x1C) = edx;
    PUSH32(esp, 0x000FF30Eu); RECOMP_ABI_CALL(0x00024F20u, sub_00024F20); /* call 0x00024F20 */

loc_000FF30E: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF335; /* jne: not equal / not zero */

loc_000FF314: ;
    PUSH32(esp, 0x3320BC);
    PUSH32(esp, 0x3320B0);
    PUSH32(esp, 0x1D1);
    PUSH32(esp, 0x332070);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000FF332u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000FF332: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FF335: ;
    ebx = MEM32(0x64D854);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edx = esp + 0x1C;
    esi = ebx + 0x6270D8;
    PUSH32(esp, 0x000FF350u); RECOMP_ABI_CALL(0x00025800u, sub_00025800); /* call 0x00025800 */

loc_000FF350: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x616FDC) = esi;
    MEM16(eax * 8 + 0x616FD8) = 1;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x1C);
    POP32(esp, ebp);
    MEM32(0x64D854) = ebx;
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
 * sub_000FF390
 * Original: 0x000FF390 - 0x000FF3D6 (70 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF390(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FF390: ;
    PUSH32(esp, esi);
    ecx = edi;
    PUSH32(esp, 0x000FF398u); RECOMP_ABI_CALL(0x00024F20u, sub_00024F20); /* call 0x00024F20 */

loc_000FF398: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF3BF; /* jne: not equal / not zero */

loc_000FF39E: ;
    PUSH32(esp, 0x3320BC);
    PUSH32(esp, 0x3320B0);
    PUSH32(esp, 0x1F6);
    PUSH32(esp, 0x332070);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000FF3BCu); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000FF3BC: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FF3BF: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edx = edi;
    PUSH32(esp, 0x000FF3D1u); RECOMP_ABI_CALL(0x000258A0u, sub_000258A0); /* call 0x000258A0 */

loc_000FF3D1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FF398
 * Original: 0x000FF398 - 0x000FF3D6 (62 bytes, 20 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF398(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FF398: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF3BF; /* jne: not equal / not zero */

loc_000FF39E: ;
    PUSH32(esp, 0x3320BC);
    PUSH32(esp, 0x3320B0);
    PUSH32(esp, 0x1F6);
    PUSH32(esp, 0x332070);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000FF3BCu); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000FF3BC: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FF3BF: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    edx = edi;
    PUSH32(esp, 0x000FF3D1u); RECOMP_ABI_CALL(0x000258A0u, sub_000258A0); /* call 0x000258A0 */

loc_000FF3D1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FF3E0
 * Original: 0x000FF3E0 - 0x000FF4E4 (260 bytes, 67 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF3E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FF3E0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x000FF402u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FF402: ;
    ebp = eax;
    eax = MEM32(0x64D854);
    ecx = MEM32(eax + 0x6270BC);
    edx = MEM32(eax + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0x20) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 0x6270E0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D858) = ecx;
    ecx = MEM32(eax + 0x6270D8);
    MEM32(esp + 0x24) = edx;
    edx = MEM32(eax + 0x6270DC);
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270E0);
    MEM32(esp + 0x10) = ecx;
    ecx = esp + 0x10;
    MEM32(esp + 0x14) = edx;
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, 0x000FF468u); RECOMP_ABI_CALL(0x00024F20u, sub_00024F20); /* call 0x00024F20 */

loc_000FF468: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF48F; /* jne: not equal / not zero */

loc_000FF46E: ;
    PUSH32(esp, 0x3320BC);
    PUSH32(esp, 0x3320B0);
    PUSH32(esp, 0x1F6);
    PUSH32(esp, 0x332070);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000FF48Cu); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000FF48C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FF48F: ;
    ebx = MEM32(0x64D854);
    PUSH32(esp, ebp);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    edx = esp + 0x1C;
    esi = ebx + 0x6270D8;
    PUSH32(esp, 0x000FF4ABu); RECOMP_ABI_CALL(0x000258A0u, sub_000258A0); /* call 0x000258A0 */

loc_000FF4AB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x616FDC) = esi;
    MEM16(eax * 8 + 0x616FD8) = 1;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x24);
    POP32(esp, ebp);
    MEM32(0x64D854) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FF4F0
 * Original: 0x000FF4F0 - 0x000FF639 (329 bytes, 83 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF4F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FF4F0: ;
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x000FF50Eu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FF50E: ;
    ecx = MEM32(0x64D854);
    MEM32(esp + 4) = eax;
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
    if (CMP_NE(_fa, _fb)) goto loc_000FF53C; /* jne: not equal / not zero */

loc_000FF532: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_000FF544;

loc_000FF53C: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_000FF544: ;
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    edi = MEM32(eax * 8 + 0x616FDC);
    MEM32(0x64D858) = eax;
    eax = esp + 0x24;
    PUSH32(esp, eax);
    edx = SX16(LO16(ecx));
    PUSH32(esp, edi);
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    { uint32_t _icall_target = MEM32(edx * 8 + 0x3418EC); PUSH32(esp, 0x000FF573u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FF56Cu); } /* indirect call */
    }

loc_000FF573: ;
    eax = MEM32(0x64D854);
    ecx = MEM32(0x64D858);
    edx = MEM32(eax + 0x62709C);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    ecx = MEM32(eax + 0x6270D8);
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270E0);
    MEM32(esp + 0x18) = ecx;
    ecx = esp + 0x18;
    MEM32(esp + 0x1C) = edx;
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x000FF5B7u); RECOMP_ABI_CALL(0x00024F20u, sub_00024F20); /* call 0x00024F20 */

loc_000FF5B7: ;
    ebx = eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF5DE; /* jne: not equal / not zero */

loc_000FF5BD: ;
    PUSH32(esp, 0x3320BC);
    PUSH32(esp, 0x3320B0);
    PUSH32(esp, 0x220);
    PUSH32(esp, 0x332070);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000FF5DBu); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000FF5DB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FF5DE: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    ebp = MEM32(0x64D854);
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    edx = esp + 0x24;
    eax = ebx;
    esi = ebp + 0x6270D8;
    PUSH32(esp, 0x000FF600u); RECOMP_ABI_CALL(0x000256E0u, sub_000256E0); /* call 0x000256E0 */

loc_000FF600: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x20;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x616FDC) = esi;
    MEM16(eax * 8 + 0x616FD8) = 1;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x58);
    MEM32(0x64D854) = ebp;
    POP32(esp, ebp);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x4C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x4C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FF640
 * Original: 0x000FF640 - 0x000FF765 (293 bytes, 74 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF640(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FF640: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D854);
    edx = MEM32(eax + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(0x64D858);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(eax + 0x6270DC);
    MEM32(esp + 0x1C) = edx;
    edx = MEM32(eax + 0x6270E0);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = esi;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x28) = edx;
    PUSH32(esp, 0x000FF69Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FF69A: ;
    ebp = eax;
    PUSH32(esp, 0x000FF6A1u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FF6A1: ;
    ecx = MEM32(0x64D858);
    MEM32(esp + 0x10) = eax;
    eax = MEM32(0x64D854);
    edx = MEM32(eax + 0x6270BC);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    ecx = MEM32(eax + 0x6270D8);
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270E0);
    MEM32(esp + 0x14) = ecx;
    ecx = esp + 0x14;
    MEM32(esp + 0x18) = edx;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000FF6E6u); RECOMP_ABI_CALL(0x00024F20u, sub_00024F20); /* call 0x00024F20 */

loc_000FF6E6: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF70D; /* jne: not equal / not zero */

loc_000FF6EC: ;
    PUSH32(esp, 0x3320BC);
    PUSH32(esp, 0x3320B0);
    PUSH32(esp, 0x252);
    PUSH32(esp, 0x332070);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000FF70Au); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000FF70A: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FF70D: ;
    ebx = MEM32(0x64D854);
    ecx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    eax = esp + 0x28;
    edx = esp + 0x1C;
    esi = ebx + 0x6270D8;
    PUSH32(esp, 0x000FF72Cu); RECOMP_ABI_CALL(0x00025760u, sub_00025760); /* call 0x00025760 */

loc_000FF72C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x20;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax * 8 + 0x616FDC) = esi;
    MEM16(eax * 8 + 0x616FD8) = 1;
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0x28);
    POP32(esp, ebp);
    MEM32(0x64D854) = ebx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FF770
 * Original: 0x000FF770 - 0x000FF7E4 (116 bytes, 36 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000FF770: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ecx = edi;
    PUSH32(esp, 0x000FF779u); RECOMP_ABI_CALL(0x00024F20u, sub_00024F20); /* call 0x00024F20 */

loc_000FF779: ;
    ebx = eax;
    eax = esi + esi * 2;
    ecx = edi + eax * 4 + -12;
    PUSH32(esp, 0x000FF787u); RECOMP_ABI_CALL(0x00024F20u, sub_00024F20); /* call 0x00024F20 */

loc_000FF787: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    ebp = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000FF7AE; /* jne: not equal / not zero */

loc_000FF78D: ;
    PUSH32(esp, 0x3320BC);
    PUSH32(esp, 0x3320B0);
    PUSH32(esp, 0x27D);
    PUSH32(esp, 0x332070);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000FF7ABu); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000FF7AB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FF7AE: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF7D3; /* jne: not equal / not zero */

loc_000FF7B2: ;
    PUSH32(esp, 0x33200C);
    PUSH32(esp, 0x332034);
    PUSH32(esp, 0x27E);
    PUSH32(esp, 0x332070);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000FF7D0u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000FF7D0: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FF7D3: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ecx = edi;
    edx = ebx;
    PUSH32(esp, 0x000FF7DEu); RECOMP_ABI_CALL(0x00024590u, sub_00024590); /* call 0x00024590 */

loc_000FF7DE: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_000FF7F0
 * Original: 0x000FF7F0 - 0x000FF89C (172 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF7F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FF7F0: ;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = eax;
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x000FF81Bu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FF81B: ;
    esi = eax;
    eax = MEM32(0x64D858);
    SET_LO16(ecx, MEM16(eax * 8 + 0x616FD0));
    edi = MEM32(eax * 8 + 0x616FD4);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = SX16(LO16(ecx));
    ecx = esp + 0xC;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    { uint32_t _icall_target = MEM32(eax * 8 + 0x3418EC); PUSH32(esp, 0x000FF847u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FF840u); } /* indirect call */
    }

loc_000FF847: ;
    eax = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = eax;
    PUSH32(esp, 0x000FF85Cu); RECOMP_ABI_CALL(0x000FF770u, sub_000FF770); /* call 0x000FF770 */

loc_000FF85C: ;
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
 * sub_000FF8A0
 * Original: 0x000FF8A0 - 0x000FF919 (121 bytes, 37 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF8A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FF8A0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    ecx = MEM32(edi + 0xC);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000FF8B3u); RECOMP_ABI_CALL(0x00024F20u, sub_00024F20); /* call 0x00024F20 */

loc_000FF8B3: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF8DA; /* jne: not equal / not zero */

loc_000FF8B9: ;
    PUSH32(esp, 0x3320BC);
    PUSH32(esp, 0x3320B0);
    PUSH32(esp, 0x2AB);
    PUSH32(esp, 0x332070);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000FF8D7u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000FF8D7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FF8DA: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(eax + 0x10);
    edx = MEM32(eax + 0x14);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esp + 0xC) = ecx;
    ecx = MEM32(eax + 0x18);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = eax + 0x30;
    ebx = esp + 0xC;
    eax = esi;
    MEM32(esp + 0x10) = edx;
    MEM32(esp + 0x14) = ecx;
    PUSH32(esp, 0x000FF912u); RECOMP_ABI_CALL(0x000259F0u, sub_000259F0); /* call 0x000259F0 */

loc_000FF912: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FF920
 * Original: 0x000FF920 - 0x000FF97D (93 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF920(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FF920: ;
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    eax = MEM32(0x64D884);
    MEM32(0x64D884) = ecx;
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x000FF942u); RECOMP_ABI_CALL(0x000FF8A0u, sub_000FF8A0); /* call 0x000FF8A0 */

loc_000FF942: ;
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
 * sub_000FF980
 * Original: 0x000FF980 - 0x000FFB05 (389 bytes, 114 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FF980(void)
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

loc_000FF980: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    ecx = ebx;
    PUSH32(esp, 0x000FF98Eu); RECOMP_ABI_CALL(0x00024F20u, sub_00024F20); /* call 0x00024F20 */

loc_000FF98E: ;
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FF9B5; /* jne: not equal / not zero */

loc_000FF994: ;
    PUSH32(esp, 0x3320BC);
    PUSH32(esp, 0x3320B0);
    PUSH32(esp, 0x2D3);
    PUSH32(esp, 0x332070);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000FF9B2u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000FF9B2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FF9B5: ;
    eax = MEM32(ebp + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(edi + 4)); /* fld float */
    fp_push(MEMF(edi)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    { double _t = g_fp_stack[(g_fp_top + 2) & 7]; fp_push(_t); } /* fld st(2) */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() * g_fp_stack[(g_fp_top + 3) & 7]); /* fmul st(3) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    g_fp_stack[(g_fp_top + 2) & 7] = fp_top(); fp_pop(); /* fstp st(2) */
    fp_pop(); /* fstp st(0) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(0x3337C0)); /* fld float */
    fp_push(MEMF(esp + 8)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fucompi */
    fp_pop(); /* fstp st(0) */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((g_fp_cmp == 0 || g_fp_cmp == 2) /* fucompi */) ? 0x40u : 0u) | (((g_fp_cmp == 2) /* fucompi */) ? 0x04u : 0u) | (((g_fp_cmp < 0 || g_fp_cmp == 2) /* fucompi */) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (fucompi) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000FFB01; /* jnp: not parity */

loc_000FFA27: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000FFA3B; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000FFA38: ;
    xmm2 = xmm0; /* movaps */

loc_000FFA3B: ;
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000FFA4F; /* jp: parity */

loc_000FFA47: ;
    xmm2 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */

loc_000FFA4F: ;
    fp_push(MEMF(edi)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    fp_push(MEMF(edi + 4)); /* fld float */
    PUSH32(esp, edi);
    fp_push(MEMF(esp + 0x14)); /* fld float */
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
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(edi + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    MEMF(edi + 4) = xmm1.f[0]; /* movss */
    MEMF(edi + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm4 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    MEMF(edi + 8) = xmm4.f[0]; /* movss */
    eax = MEM32(ebp + 0xC);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    MEMF(edi) = xmm2.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000FFAECu); RECOMP_ABI_CALL(0x00022230u, sub_00022230); /* call 0x00022230 */

loc_000FFAEC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FFB01; /* jne: not equal / not zero */

loc_000FFAF3: ;
    MEMF(edi + 8) = xmm3.f[0]; /* movss */
    MEMF(edi + 4) = xmm3.f[0]; /* movss */
    MEMF(edi) = xmm3.f[0]; /* movss */

loc_000FFB01: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_000FFB10
 * Original: 0x000FFB10 - 0x000FFBFA (234 bytes, 56 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FFB10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FFB10: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    edx = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D854);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FFB53; /* jne: not equal / not zero */

loc_000FFB49: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_000FFB5B;

loc_000FFB53: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_000FFB5B: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    ecx = MEM32(eax + 0x6270D8);
    MEM32(esp + 4) = ecx;
    ecx = MEM32(eax + 0x6270DC);
    PUSH32(esp, ebx);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(esp + 8);
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270E0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    edi = esp + 0x20;
    ebx = esp + 0x14;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x000FFBA3u); RECOMP_ABI_CALL(0x000FF980u, sub_000FF980); /* call 0x000FF980 */

loc_000FFBA3: ;
    ecx = MEM32(0x64D854);
    edx = MEM32(esp + 0x20);
    eax = ecx + 0x6270D8;
    MEM32(eax) = edx;
    edx = MEM32(esp + 0x24);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x28);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x28);
    MEM16(ecx * 8 + 0x616FD8) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000FFC00
 * Original: 0x000FFC00 - 0x000FFC44 (68 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FFC00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FFC00: ;
    ecx = MEM32(0x64D854);
    edx = ZX8(MEM8(0x3662F8));
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
 * sub_000FFC50
 * Original: 0x000FFC50 - 0x000FFCAE (94 bytes, 32 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FFC50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FFC50: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x000FFC73u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FFC73: ;
    edi = eax;
    PUSH32(esp, 0x000FFC7Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_000FFC7A: ;
    ecx = MEM32(esi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FFCA4; /* je: equal / zero */

loc_000FFC81: ;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FFCA4; /* je: equal / zero */

loc_000FFC86: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FFCA4; /* je: equal / zero */

loc_000FFC8D: ;
    edx = MEM32(esi + 0x14);
    ecx = MEM32(edx);
    MEM32(ecx + 8) = MEM32(ecx + 8) | eax;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax);
    ecx = MEM32(eax + 8);
    edi = ~edi;
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = ecx;

loc_000FFCA4: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FFCB0
 * Original: 0x000FFCB0 - 0x000FFCC6 (22 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FFCB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FFCB0: ;
    eax = MEM32(0x64D880);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FFCBBu); RECOMP_ABI_CALL(0x001080C0u, sub_001080C0); /* call 0x001080C0 */

loc_000FFCBB: ;
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
 * sub_000FFCD0
 * Original: 0x000FFCD0 - 0x000FFD7A (170 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000FFCD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FFCD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = ecx;
    ecx = MEM32(0x34AC38);
    PUSH32(esp, edi);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFCEEu); RECOMP_ABI_CALL(0x0001AEB0u, sub_0001AEB0); /* call 0x0001AEB0 */

loc_000FFCEE: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFCFAu); RECOMP_ABI_CALL(0x0002B490u, sub_0002B490); /* call 0x0002B490 */

loc_000FFCFA: ;
    ebx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFD01u); RECOMP_ABI_CALL(0x0002B860u, sub_0002B860); /* call 0x0002B860 */

loc_000FFD01: ;
    edx = MEM32(0x34AC38);
    edi = MEM32(edx + 0x2C);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFD11u); RECOMP_ABI_CALL(0x00026150u, sub_00026150); /* call 0x00026150 */

loc_000FFD11: ;
    eax = 0xD;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFD1Du); RECOMP_ABI_CALL(0x00011D60u, sub_00011D60); /* call 0x00011D60 */

loc_000FFD1D: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FFD35; /* je: equal / zero */

loc_000FFD22: ;
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFD2Au); RECOMP_ABI_CALL(0x000F8CE0u, sub_000F8CE0); /* call 0x000F8CE0 */

loc_000FFD2A: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFD32u); RECOMP_ABI_CALL(0x000F8CE0u, sub_000F8CE0); /* call 0x000F8CE0 */

loc_000FFD32: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FFD35: ;
    edi = MEM32(ebp + 8);
    ecx = MEM32(edi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FFD71; /* je: equal / zero */

loc_000FFD3F: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FFD71; /* je: equal / zero */

loc_000FFD46: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x20000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FFD6B; /* je: equal / zero */

loc_000FFD4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FFD5A; /* je: equal / zero */

loc_000FFD52: ;
    ecx = eax + 0x10;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFD5Au); RECOMP_ABI_CALL(0x000BFB30u, sub_000BFB30); /* call 0x000BFB30 */

loc_000FFD5A: ;
    eax = MEM32(edi + 0x24);
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFD68u); RECOMP_ABI_CALL(0x0001A770u, sub_0001A770); /* call 0x0001A770 */

loc_000FFD68: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FFD6B: ;
    eax = MEM32(edi + 0x24);
    MEM32(esi + 0x24) = eax;

loc_000FFD71: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000FFD80
 * Original: 0x000FFD80 - 0x000FFDE3 (99 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FFD80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FFD80: ;
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
    edx = MEM32(ecx + 0x6270D8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D854) = ecx;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    ecx = ecx + 0x6270D8;
    MEM32(0x64D858) = esi;
    PUSH32(esp, 0x000FFDD1u); RECOMP_ABI_CALL(0x000FFCD0u, sub_000FFCD0); /* call 0x000FFCD0 */

loc_000FFDD1: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000FFDD7u); RECOMP_ABI_CALL(0x001080C0u, sub_001080C0); /* call 0x001080C0 */

loc_000FFDD7: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000FFDF0
 * Original: 0x000FFDF0 - 0x000FFE5C (108 bytes, 34 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FFDF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FFDF0: ;
    ecx = MEM32(0x64D858);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D904);
    PUSH32(esp, esi);
    esi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = esi + 0x6270D8;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(eax);
    if (CMP_LE(_fas, _fbs)) goto loc_000FFE25; /* jle: less or equal (signed <=) */

loc_000FFE17: ;
    _fa = (uint32_t)(MEM32(edx * 4 + 0x634690)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx * 4 + 0x634690), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FFE55; /* je: equal / zero */

loc_000FFE20: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000FFE17; /* jl: less (signed <) */

loc_000FFE25: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_000FFE27: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEM32(0x64D854) = esi;
    MEM32(ecx * 8 + 0x616FDC) = eax;
    POP32(esp, esi);
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
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000FFE55: ;
    edx = 1;
    goto loc_000FFE27;

}

/**
 * sub_000FFE60
 * Original: 0x000FFE60 - 0x000FFFA2 (322 bytes, 100 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000FFE60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FFE60: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x64D904);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xC8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xC8 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_000FFE85; /* jge: greater or equal (signed >=) */

loc_000FFE78: ;
    MEM32(eax * 4 + 0x634690) = esi;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D904) = eax;

loc_000FFE85: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x20000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000FFF47; /* jne: not equal / not zero */

loc_000FFE91: ;
    eax = MEM32(esi + 4);
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFEA5u); RECOMP_ABI_CALL(0x0001CAD0u, sub_0001CAD0); /* call 0x0001CAD0 */

loc_000FFEA5: ;
    eax = MEM32(esi + 4);
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFEB9u); RECOMP_ABI_CALL(0x0001CAD0u, sub_0001CAD0); /* call 0x0001CAD0 */

loc_000FFEB9: ;
    edi = MEM32(0x34AC38);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FFED1; /* je: equal / zero */

loc_000FFEC3: ;
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFECAu); RECOMP_ABI_CALL(0x00021910u, sub_00021910); /* call 0x00021910 */

loc_000FFECA: ;
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFED1u); RECOMP_ABI_CALL(0x00021650u, sub_00021650); /* call 0x00021650 */

loc_000FFED1: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FFF83; /* je: equal / zero */

loc_000FFEDD: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FFF83; /* je: equal / zero */

loc_000FFEE8: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FFF83; /* je: equal / zero */

loc_000FFEF3: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FFF83; /* jne: not equal / not zero */

loc_000FFEFC: ;
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFF03u); RECOMP_ABI_CALL(0x0002B630u, sub_0002B630); /* call 0x0002B630 */

loc_000FFF03: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000FFF14; /* je: equal / zero */

loc_000FFF0B: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFF11u); RECOMP_ABI_CALL(0x0005B360u, sub_0005B360); /* call 0x0005B360 */

loc_000FFF11: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FFF14: ;
    ecx = MEM32(esi);
    eax = MEM32(esi + 0x14);
    ecx = ecx & 0xFFBFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = ecx;
    edi = MEM32(eax + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FFF3B; /* je: equal / zero */

loc_000FFF28: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFF2Du); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_000FFF2D: ;
    ecx = MEM32(esi + 0x14);
    ecx = MEM32(ecx + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000FFF3Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000FFF38u); } /* indirect call */
    }

loc_000FFF3B: ;
    edx = MEM32(esi + 0x14);
    MEM32(edx + 8) = 0;
    goto loc_000FFF83;

loc_000FFF47: ;
    edi = MEM32(0x34AC38);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FFF7A; /* je: equal / zero */

loc_000FFF51: ;
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFF58u); RECOMP_ABI_CALL(0x00021E50u, sub_00021E50); /* call 0x00021E50 */

loc_000FFF58: ;
    PUSH32(esp, edi);
    ebx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFF60u); RECOMP_ABI_CALL(0x00021A40u, sub_00021A40); /* call 0x00021A40 */

loc_000FFF60: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFF6Au); RECOMP_ABI_CALL(0x00026540u, sub_00026540); /* call 0x00026540 */

loc_000FFF6A: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000FFF7A; /* je: equal / zero */

loc_000FFF71: ;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFF77u); RECOMP_ABI_CALL(0x00021A40u, sub_00021A40); /* call 0x00021A40 */

loc_000FFF77: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FFF7A: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000FFF80u); RECOMP_ABI_CALL(0x0001B360u, sub_0001B360); /* call 0x0001B360 */

loc_000FFF80: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FFF83: ;
    edi = MEM32(0x64D880);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    SET_LO8(eax, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0xFFFFFC1Eu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x3E8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3E8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000FFFB0
 * Original: 0x000FFFB0 - 0x00100012 (98 bytes, 27 insns)
 * Category: game_debug
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000FFFB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000FFFB0: ;
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D8A8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000FFFFC; /* je: equal / zero */

loc_000FFFD7: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000FFFFC; /* jne: not equal / not zero */

loc_000FFFDB: ;
    PUSH32(esp, 0x332160);
    PUSH32(esp, 0x332118);
    PUSH32(esp, 0x14A);
    PUSH32(esp, 0x3320D8);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x000FFFF9u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_000FFFF9: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000FFFFC: ;
    eax = esi;
    PUSH32(esp, 0x00100003u); RECOMP_ABI_CALL(0x000FFE60u, sub_000FFE60); /* call 0x000FFE60 */

loc_00100003: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    POP32(esp, esi);
    if (CMP_NE(_fa, _fb)) goto loc_0010000A; /* jne: not equal / not zero */

loc_00100009: ;
    esp += 4; return; /* ret */

loc_0010000A: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00100014
 * Original: 0x00100014 - 0x00100020 (12 bytes, 12 insns)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100014(void)
{

loc_00100014: ;
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
 * sub_00100020
 * Original: 0x00100020 - 0x001000B4 (148 bytes, 35 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00100020: ;
    eax = MEM32(0x64CFE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00100071; /* je: equal / zero */

loc_00100029: ;
    eax = MEM32(0x64D8D0);
    eax = ZX16(MEM16(eax));
    xmm0 = XMM_SCALAR(MEMF(0x64D8DC)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3337A8); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */

loc_00100071: ;
    eax = MEM32(edx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001000B3; /* je: equal / zero */

loc_001000A7: ;
    ecx = MEM32(edx + 0x14);
    eax = MEM32(ecx + 4);
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001000B3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00100045
 * Original: 0x00100045 - 0x001000B4 (111 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100045(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00100045: ;
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    eax = MEM32(edx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001000B3; /* je: equal / zero */

loc_001000A7: ;
    ecx = MEM32(edx + 0x14);
    eax = MEM32(ecx + 4);
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001000B3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00100049
 * Original: 0x00100049 - 0x001000B4 (107 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100049(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00100049: ;
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    eax = MEM32(edx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001000B3; /* je: equal / zero */

loc_001000A7: ;
    ecx = MEM32(edx + 0x14);
    eax = MEM32(ecx + 4);
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001000B3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010004D
 * Original: 0x0010004D - 0x001000B4 (103 bytes, 25 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010004D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010004D: ;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    eax = MEM32(edx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001000B3; /* je: equal / zero */

loc_001000A7: ;
    ecx = MEM32(edx + 0x14);
    eax = MEM32(ecx + 4);
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001000B3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00100051
 * Original: 0x00100051 - 0x001000B4 (99 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100051(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00100051: ;
    MEMF(ecx) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    eax = MEM32(edx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001000B3; /* je: equal / zero */

loc_001000A7: ;
    ecx = MEM32(edx + 0x14);
    eax = MEM32(ecx + 4);
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001000B3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00100055
 * Original: 0x00100055 - 0x001000B4 (95 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100055(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00100055: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    eax = MEM32(edx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001000B3; /* je: equal / zero */

loc_001000A7: ;
    ecx = MEM32(edx + 0x14);
    eax = MEM32(ecx + 4);
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001000B3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0010005A
 * Original: 0x0010005A - 0x001000B4 (90 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0010005A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0010005A: ;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 8) = xmm1.f[0]; /* movss */
    eax = MEM32(edx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001000B3; /* je: equal / zero */

loc_001000A7: ;
    ecx = MEM32(edx + 0x14);
    eax = MEM32(ecx + 4);
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001000B3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00100084
 * Original: 0x00100084 - 0x001000B4 (48 bytes, 12 insns)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100084(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00100084: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001000B3; /* je: equal / zero */

loc_001000A7: ;
    ecx = MEM32(edx + 0x14);
    eax = MEM32(ecx + 4);
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001000B3: ;
    esp += 4; return; /* ret */

}

/**
 * sub_001000C0
 * Original: 0x001000C0 - 0x001001AF (239 bytes, 48 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001000C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001000C0: ;
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    edx = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D858);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(0x64CFE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D854) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0010015B; /* je: equal / zero */

loc_001000FF: ;
    eax = MEM32(0x64D8D0);
    eax = ZX16(MEM16(eax));
    xmm0 = XMM_SCALAR(MEMF(0x64D8DC)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3337A8); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x6270D8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6270DC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x6270DC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6270E0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x6270E0) = xmm1.f[0]; /* movss */

loc_0010015B: ;
    eax = MEM32(edx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x6270D8); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270DC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270E0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001001A7; /* je: equal / zero */

loc_0010019B: ;
    ecx = MEM32(edx + 0x14);
    eax = MEM32(ecx + 4);
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001001A7: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001000C6
 * Original: 0x001000C6 - 0x001001AF (233 bytes, 47 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001000C6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001000C6: ;
    eax = MEM32(0x64D880);
    edx = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D858);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(0x64CFE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D854) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0010015B; /* je: equal / zero */

loc_001000FF: ;
    eax = MEM32(0x64D8D0);
    eax = ZX16(MEM16(eax));
    xmm0 = XMM_SCALAR(MEMF(0x64D8DC)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3337A8); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x6270D8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6270DC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x6270DC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6270E0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x6270E0) = xmm1.f[0]; /* movss */

loc_0010015B: ;
    eax = MEM32(edx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x6270D8); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270DC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270E0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001001A7; /* je: equal / zero */

loc_0010019B: ;
    ecx = MEM32(edx + 0x14);
    eax = MEM32(ecx + 4);
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001001A7: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001000CB
 * Original: 0x001000CB - 0x001001AF (228 bytes, 46 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001000CB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001000CB: ;
    edx = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D858);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(0x64CFE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D854) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0010015B; /* je: equal / zero */

loc_001000FF: ;
    eax = MEM32(0x64D8D0);
    eax = ZX16(MEM16(eax));
    xmm0 = XMM_SCALAR(MEMF(0x64D8DC)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3337A8); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x6270D8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6270DC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x6270DC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6270E0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x6270E0) = xmm1.f[0]; /* movss */

loc_0010015B: ;
    eax = MEM32(edx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x6270D8); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270DC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270E0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001001A7; /* je: equal / zero */

loc_0010019B: ;
    ecx = MEM32(edx + 0x14);
    eax = MEM32(ecx + 4);
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001001A7: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001000D1
 * Original: 0x001000D1 - 0x001001AF (222 bytes, 45 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001000D1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001000D1: ;
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D858);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(0x64CFE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D854) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0010015B; /* je: equal / zero */

loc_001000FF: ;
    eax = MEM32(0x64D8D0);
    eax = ZX16(MEM16(eax));
    xmm0 = XMM_SCALAR(MEMF(0x64D8DC)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3337A8); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x6270D8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6270DC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x6270DC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6270E0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x6270E0) = xmm1.f[0]; /* movss */

loc_0010015B: ;
    eax = MEM32(edx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x6270D8); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270DC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270E0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001001A7; /* je: equal / zero */

loc_0010019B: ;
    ecx = MEM32(edx + 0x14);
    eax = MEM32(ecx + 4);
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001001A7: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001000D6
 * Original: 0x001000D6 - 0x001001AF (217 bytes, 44 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001000D6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001000D6: ;
    eax = MEM32(0x64D858);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(0x64CFE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D854) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0010015B; /* je: equal / zero */

loc_001000FF: ;
    eax = MEM32(0x64D8D0);
    eax = ZX16(MEM16(eax));
    xmm0 = XMM_SCALAR(MEMF(0x64D8DC)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3337A8); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x6270D8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6270DC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x6270DC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6270E0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x6270E0) = xmm1.f[0]; /* movss */

loc_0010015B: ;
    eax = MEM32(edx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x6270D8); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270DC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270E0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001001A7; /* je: equal / zero */

loc_0010019B: ;
    ecx = MEM32(edx + 0x14);
    eax = MEM32(ecx + 4);
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001001A7: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001000DB
 * Original: 0x001000DB - 0x001001AF (212 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001000DB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001000DB: ;
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(0x64CFE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D854) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0010015B; /* je: equal / zero */

loc_001000FF: ;
    eax = MEM32(0x64D8D0);
    eax = ZX16(MEM16(eax));
    xmm0 = XMM_SCALAR(MEMF(0x64D8DC)); /* movss */
    xmm1.f[0] = (float)(int32_t)eax; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3337A8); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x6270D8) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6270DC)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x6270DC) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x6270E0)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ecx + 0x6270E0) = xmm1.f[0]; /* movss */

loc_0010015B: ;
    eax = MEM32(edx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(ecx + 0x6270D8); /* addss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(eax) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270DC)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 4); /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270E0)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(eax + 8); /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001001A7; /* je: equal / zero */

loc_0010019B: ;
    ecx = MEM32(edx + 0x14);
    eax = MEM32(ecx + 4);
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001001A7: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001001B0
 * Original: 0x001001B0 - 0x00100286 (214 bytes, 57 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001001B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001001B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x5C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64CFE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0010020B; /* je: equal / zero */

loc_001001C3: ;
    eax = MEM32(0x64D8D0);
    ecx = ZX16(MEM16(eax));
    xmm0 = XMM_SCALAR(MEMF(0x64D8DC)); /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3337A8); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esi + 8) = xmm1.f[0]; /* movss */

loc_0010020B: ;
    edx = MEM32(edi + 0xC);
    eax = esp + 0x10;
    ebx = edx + 0x30;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010021Au); RECOMP_ABI_CALL(0x000C37B0u, sub_000C37B0); /* call 0x000C37B0 */

loc_0010021A: ;
    edx = esp + 4;
    PUSH32(esp, edx);
    eax = ebx;
    ecx = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010022Au); RECOMP_ABI_CALL(0x000C3350u, sub_000C3350); /* call 0x000C3350 */

loc_0010022A: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 8); /* addss */
    ecx = MEM32(edi + 0xC);
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0xC); /* addss */
    eax = ecx + 0x30;
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    PUSH32(esp, eax);
    eax = esp + 0xC;
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010026Cu); RECOMP_ABI_CALL(0x000C3350u, sub_000C3350); /* call 0x000C3350 */

loc_0010026C: ;
    SET_LO8(eax, MEM8(edi));
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00100281; /* je: equal / zero */

loc_00100275: ;
    ecx = MEM32(edi + 0x14);
    eax = MEM32(ecx + 4);
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00100281: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00100290
 * Original: 0x00100290 - 0x001002DD (77 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100290(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00100290: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D854);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = eax + 0x6270D8;
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    PUSH32(esp, 0x001002D3u); RECOMP_ABI_CALL(0x001001B0u, sub_001001B0); /* call 0x001001B0 */

loc_001002D3: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001002E0
 * Original: 0x001002E0 - 0x0010039C (188 bytes, 67 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001002E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_001002E0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0x14);
    esi = MEM32(esi + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    ebp = MEM32(edi);
    MEM32(esi + 0x30) = ebp;
    ebp = MEM32(edi + 4);
    MEM32(esi + 0x34) = ebp;
    edi = MEM32(edi + 8);
    MEM32(esi + 0x38) = edi;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) | 2;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edi = MEM32(edx);
    MEM32(esi) = edi;
    edi = MEM32(edx + 4);
    MEM32(esi + 4) = edi;
    edx = MEM32(edx + 8);
    MEM32(esi + 8) = edx;
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x10) = edx;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x14) = edx;
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(esi + 0x18) = ecx;
    edx = MEM32(eax);
    MEM32(esi + 0x20) = edx;
    ecx = MEM32(eax + 4);
    MEM32(esi + 0x24) = ecx;
    edx = MEM32(eax + 8);
    MEM32(esi + 0x28) = edx;
    PUSH32(esp, 0x00100354u); RECOMP_ABI_CALL(0x000C50B0u, sub_000C50B0); /* call 0x000C50B0 */

loc_00100354: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 8 (8-bit) */
    MEM32(esi + 0x40) = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_00100366; /* jne: not equal / not zero */

loc_0010035B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x2C) = eax;

loc_00100366: ;
    edx = ebx;
    PUSH32(esp, 0x0010036Du); RECOMP_ABI_CALL(0x0002B630u, sub_0002B630); /* call 0x0002B630 */

loc_0010036D: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00100396; /* je: equal / zero */

loc_00100376: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    edi = MEM32(ebx + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_00100388; /* je: equal / zero */

loc_00100380: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0010038B;

loc_00100388: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010038B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00100396; /* je: equal / zero */

loc_0010038F: ;
    ecx = 0x14;
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

loc_00100396: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001003A0
 * Original: 0x001003A0 - 0x00100413 (115 bytes, 31 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001003A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001003A0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D858);
    PUSH32(esp, esi);
    esi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = esi + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D87C) = ecx;
    ecx = esi + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = esi + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D854) = esi;
    esi = esi + 0x6270D8;
    PUSH32(esp, esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    MEM32(0x64D858) = ebx;
    PUSH32(esp, 0x00100405u); RECOMP_ABI_CALL(0x001002E0u, sub_001002E0); /* call 0x001002E0 */

loc_00100405: ;
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
 * sub_00100420
 * Original: 0x00100420 - 0x00100493 (115 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100420(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00100420: ;
    eax = MEM32(0x64D884);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax + 8);
    edx = MEM32(0x64D878);
    ecx = MEM32(0x64D880);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    MEM32(0x64D87C) = edx;
    edx = MEM32(eax);
    eax = MEM32(eax + 8);
    MEM32(0x64D884) = ecx;
    ecx = edi + 0x6270D8;
    MEM32(ecx + 8) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 3;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x64D854) = edi;
    POP32(esp, edi);
    MEM32(ecx + 4) = esi;
    MEM32(ecx) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_001004A0
 * Original: 0x001004A0 - 0x00100524 (132 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001004A0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001004A0: ;
    eax = MEM32(0x64D884);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax + 8);
    edx = MEM32(0x64D878);
    ecx = MEM32(0x64D880);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    MEM32(0x64D87C) = edx;
    edx = MEM32(eax);
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D884) = ecx;
    ecx = edi + 0x6270D8;
    MEM32(ecx + 8) = eax;
    eax = MEM32(0x64D858);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 0x80000000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax * 8 + 0x616FD8) = 3;
    MEM32(eax * 8 + 0x616FDC) = ecx;
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(0x64D854) = edi;
    POP32(esp, edi);
    MEM32(ecx + 4) = esi;
    MEM32(ecx) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00100530
 * Original: 0x00100530 - 0x001005E8 (184 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100530(void)
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

loc_00100530: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D884);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax + 8);
    fp_push(MEMF(eax + 0x30)); /* fld float */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax + 4)); /* fld float */
    ecx = MEM32(0x64D880);
    fp_push(MEMF(eax + 8)); /* fld float */
    edx = MEM32(0x64D878);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(0x64D884) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    ecx = MEM32(0x64D854);
    MEM32(0x64D87C) = edx;
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
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    eax = ecx + 0x6270D8;
    MEM32(eax) = edx;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x10);
    MEM16(ecx * 8 + 0x616FD8) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_001005F0
 * Original: 0x001005F0 - 0x001006A8 (184 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001005F0(void)
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

loc_001005F0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D884);
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax + 8);
    fp_push(MEMF(eax + 0x10)); /* fld float */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(eax + 4)); /* fld float */
    ecx = MEM32(0x64D880);
    fp_push(MEMF(eax + 8)); /* fld float */
    edx = MEM32(0x64D878);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(0x64D884) = ecx;
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    ecx = MEM32(0x64D854);
    MEM32(0x64D87C) = edx;
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
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax)); /* fmul dword ptr [eax] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 4)); /* fmul dword ptr [eax + 4] */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(eax + 8)); /* fmul dword ptr [eax + 8] */
    eax = ecx + 0x6270D8;
    MEM32(eax) = edx;
    edx = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    edx = MEM32(esp + 8);
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax + 8) = edx;
    eax = MEM32(esp + 0x10);
    MEM16(ecx * 8 + 0x616FD8) = 3;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_001006B0
 * Original: 0x001006B0 - 0x001007AE (254 bytes, 89 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001006B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001006B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebx);
    ecx = eax;
    ecx = ecx & 0x400000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0x4000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001006E8; /* je: equal / zero */

loc_001006D9: ;
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001006E5u); RECOMP_ABI_CALL(0x0002B680u, sub_0002B680); /* call 0x0002B680 */

loc_001006E5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001006E8: ;
    ecx = MEM32(ebp + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    edx = esp + 0x68;
    PUSH32(esp, edx);
    edx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001006FDu); RECOMP_ABI_CALL(0x000C3EE0u, sub_000C3EE0); /* call 0x000C3EE0 */

loc_001006FD: ;
    eax = MEM32(ebx + 0xC);
    ecx = esp + 0x1C;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00100718; /* je: equal / zero */

loc_0010070B: ;
    ecx = 0x14;
    esi = eax;
    edi = esp + 0x10;
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

loc_00100718: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edi = esp + 0x64;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00100728u); RECOMP_ABI_CALL(0x000C3470u, sub_000C3470); /* call 0x000C3470 */

loc_00100728: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00100799; /* je: equal / zero */

loc_00100733: ;
    eax = MEM32(ebx);
    edx = eax;
    edx = edx & 0x4000000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_0010077D; /* je: equal / zero */

loc_0010073F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    esi = MEM32(ebx + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_00100778; /* je: equal / zero */

loc_00100749: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010074F: ;
    ecx = esp + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00100762; /* je: equal / zero */

loc_00100757: ;
    ecx = 0x14;
    edi = esp + 0x10;
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

loc_00100762: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00100786; /* je: equal / zero */

loc_00100766: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    esi = MEM32(ebx + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_00100781; /* je: equal / zero */

loc_00100770: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xA0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00100788;

loc_00100778: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0010074F;

loc_0010077D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_00100757;

loc_00100781: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00100788;

loc_00100786: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00100788: ;
    edx = esp + 0x10;
    PUSH32(esp, edx);
    edi = esp + 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00100796u); RECOMP_ABI_CALL(0x000C3470u, sub_000C3470); /* call 0x000C3470 */

loc_00100796: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00100799: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001007A8; /* je: equal / zero */

loc_001007A1: ;
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001007A8u); RECOMP_ABI_CALL(0x0002B750u, sub_0002B750); /* call 0x0002B750 */

loc_001007A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001007B0
 * Original: 0x001007B0 - 0x0010084D (157 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001007B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001007B0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D854);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ecx * 8 + 0x616FD8)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx * 8 + 0x616FD8), 1 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001007F4; /* jne: not equal / not zero */

loc_001007EA: ;
    xmm0.f[0] = (float)(int32_t)MEM32(eax + 0x6270D8); /* cvtsi2ss */
    goto loc_001007FC;

loc_001007F4: ;
    xmm0 = XMM_SCALAR(MEMF(eax + 0x6270D8)); /* movss */

loc_001007FC: ;
    edx = MEM32(eax + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = ecx;
    ecx = MEM32(eax + 0x6270DC);
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    MEM32(esp + 8) = edx;
    edx = MEM32(eax + 0x6270E0);
    MEM32(0x64D854) = eax;
    eax = MEM32(esp + 4);
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, eax);
    ecx = esp + 0xC;
    PUSH32(esp, ecx);
    MEM32(esp + 0x18) = edx;
    PUSH32(esp, 0x0010083Eu); RECOMP_ABI_CALL(0x001006B0u, sub_001006B0); /* call 0x001006B0 */

loc_0010083E: ;
    eax = MEM32(esp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_00100850
 * Original: 0x00100850 - 0x00100D8F (1343 bytes, 357 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00100850(void)
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

loc_00100850: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x64CFE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001008AE; /* je: equal / zero */

loc_00100866: ;
    eax = MEM32(0x64D8D0);
    ecx = ZX16(MEM16(eax));
    xmm0 = XMM_SCALAR(MEMF(0x64D8DC)); /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3337A8); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi + 8) = xmm1.f[0]; /* movss */

loc_001008AE: ;
    eax = MEM32(esi);
    ecx = eax;
    ecx = ecx & 0x400000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0x4000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 8) = ecx;
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_001008F8; /* je: equal / zero */

loc_001008C7: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + 0x40);
    edx = MEM32(eax + 0x44);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEM32(esp + 0x24) = edx;
    MEM32(esp + 0x28) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001008F1u); RECOMP_ABI_CALL(0x0002B680u, sub_0002B680); /* call 0x0002B680 */

loc_001008F1: ;
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001008F8: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    edx = 4;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00100A01; /* jnp: not parity */

loc_00100911: ;
    fp_push(MEMF(edi)); /* fld float */
    eax = MEM32(esi + 0xC);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | edx;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    xmm4 = xmm2; /* movaps */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(eax + 0x20) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 0x14) = xmm3.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    MEMF(eax + 0x24) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 0x18) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 0x28) = xmm3.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00100A01; /* je: equal / zero */

loc_001009D1: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001009F0; /* je: equal / zero */

loc_001009DA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_001009EB; /* je: equal / zero */

loc_001009E4: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001009F2;

loc_001009EB: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001009F2;

loc_001009F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001009F2: ;
    ecx = MEM32(edi);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001009FAu); RECOMP_ABI_CALL(0x000C42F0u, sub_000C42F0); /* call 0x000C42F0 */

loc_001009FA: ;
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00100A01: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00100BB3; /* jnp: not parity */

loc_00100A13: ;
    fp_push(MEMF(edi + 4)); /* fld float */
    eax = MEM32(esi + 0xC);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | edx;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    xmm3 = xmm2; /* movaps */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
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
    if (CMP_EQ(_fa, _fb)) goto loc_00100BB3; /* je: equal / zero */

loc_00100AD8: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00100AF7; /* je: equal / zero */

loc_00100AE1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_00100AF2; /* je: equal / zero */

loc_00100AEB: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00100AF9;

loc_00100AF2: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00100AF9;

loc_00100AF7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00100AF9: ;
    fp_push(MEMF(edi + 4)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | edx;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    xmm3 = xmm2; /* movaps */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
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

loc_00100BB3: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00100D61; /* jnp: not parity */

loc_00100BC5: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    eax = MEM32(esi + 0xC);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | edx;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    xmm3 = xmm2; /* movaps */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x10); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(eax + 0x14) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00100D61; /* je: equal / zero */

loc_00100C83: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00100CA2; /* je: equal / zero */

loc_00100C8C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_00100C9D; /* je: equal / zero */

loc_00100C96: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00100CA4;

loc_00100C9D: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00100CA4;

loc_00100CA2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00100CA4: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    edi = MEM32(eax + 0x40);
    xmm3 = xmm2; /* movaps */
    edi = edi | edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x40) = edi;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEMF(eax + 0x14) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 0x18) = xmm3.f[0]; /* movss */

loc_00100D61: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00100D89; /* je: equal / zero */

loc_00100D65: ;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00100D6Cu); RECOMP_ABI_CALL(0x0002B750u, sub_0002B750); /* call 0x0002B750 */

loc_00100D6C: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 8);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x1C);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_00100D89: ;
    POP32(esp, edi);
    POP32(esp, ebx);
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
 * sub_00100D90
 * Original: 0x00100D90 - 0x00100DF6 (102 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100D90(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00100D90: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D854);
    edx = MEM32(eax + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D858) = MEM32(0x64D858) - 1;
    _fa = (uint32_t)(MEM32(0x64D858)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(eax + 0x6270DC);
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x6270E0);
    MEM32(0x64D854) = eax;
    eax = esp + 4;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0x00100DEAu); RECOMP_ABI_CALL(0x00100850u, sub_00100850); /* call 0x00100850 */

loc_00100DEA: ;
    eax = MEM32(esp + 0x14);
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
 * sub_00100E00
 * Original: 0x00100E00 - 0x00100F00 (256 bytes, 81 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00100E00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00100E00: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00100EFA; /* jnp: not parity */

loc_00100E21: ;
    eax = MEM32(0x64CFE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00100E53; /* je: equal / zero */

loc_00100E2A: ;
    eax = MEM32(0x64D8D0);
    ecx = ZX16(MEM16(eax));
    xmm2 = XMM_SCALAR(MEMF(0x64D8DC)); /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3337A8); /* mulss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebp + 8) = xmm2.f[0]; /* movss */

loc_00100E53: ;
    eax = MEM32(esi);
    eax = eax & 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 8) = eax;
    if ((_fa == 0)) goto loc_00100E87; /* je: equal / zero */

loc_00100E60: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 8);
    edx = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x40);
    ebx = MEM32(eax + 0x44);
    edi = MEM32(eax + 0x48);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00100E82u); RECOMP_ABI_CALL(0x0002B680u, sub_0002B680); /* call 0x0002B680 */

loc_00100E82: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00100E8F;

loc_00100E87: ;
    edi = MEM32(esp + 0x14);
    ebx = MEM32(esp + 0x10);

loc_00100E8F: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00100ED6; /* jnp: not parity */

loc_00100EA1: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00100EADu); RECOMP_ABI_CALL(0x000C42F0u, sub_000C42F0); /* call 0x000C42F0 */

loc_00100EAD: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00100ED6; /* je: equal / zero */

loc_00100EB9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_00100ECA; /* je: equal / zero */

loc_00100EC3: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00100ECD;

loc_00100ECA: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00100ECD: ;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00100ED3u); RECOMP_ABI_CALL(0x000C42F0u, sub_000C42F0); /* call 0x000C42F0 */

loc_00100ED3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00100ED6: ;
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00100EFA; /* je: equal / zero */

loc_00100EDE: ;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00100EE5u); RECOMP_ABI_CALL(0x0002B750u, sub_0002B750); /* call 0x0002B750 */

loc_00100EE5: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = edi;

loc_00100EFA: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00100F00
 * Original: 0x00100F00 - 0x00100F80 (128 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00100F00(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00100F00: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
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
    if (CMP_NE(_fa, _fb)) goto loc_00100F4D; /* jne: not equal / not zero */

loc_00100F43: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_00100F55;

loc_00100F4D: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_00100F55: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00100F65u); RECOMP_ABI_CALL(0x00100E00u, sub_00100E00); /* call 0x00100E00 */

loc_00100F65: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00100F80
 * Original: 0x00100F80 - 0x00101139 (441 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00100F80(void)
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

loc_00100F80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00101133; /* jnp: not parity */

loc_00100FA1: ;
    eax = MEM32(0x64CFE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00100FD3; /* je: equal / zero */

loc_00100FAA: ;
    eax = MEM32(0x64D8D0);
    ecx = ZX16(MEM16(eax));
    xmm2 = XMM_SCALAR(MEMF(0x64D8DC)); /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3337A8); /* mulss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebp + 8) = xmm2.f[0]; /* movss */

loc_00100FD3: ;
    edx = MEM32(esi);
    edx = edx & 0x400000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0xC) = edx;
    if ((_fa == 0)) goto loc_0010100C; /* je: equal / zero */

loc_00100FE1: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 8);
    edx = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x40);
    ebx = MEM32(eax + 0x44);
    edi = MEM32(eax + 0x48);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101003u); RECOMP_ABI_CALL(0x0002B680u, sub_0002B680); /* call 0x0002B680 */

loc_00101003: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00101014;

loc_0010100C: ;
    edi = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x18);

loc_00101014: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00101113; /* jnp: not parity */

loc_0010102A: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    eax = MEM32(esi + 0xC);
    fp_top() = cos(fp_top()); /* fcos */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    ecx = MEM32(eax + 0x40);
    xmm3 = xmm0; /* movaps */
    ecx = ecx | 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x40) = ecx;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x20); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 0x20) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(eax + 8) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 0x28) = xmm3.f[0]; /* movss */
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00101113; /* je: equal / zero */

loc_001010F3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_00101104; /* je: equal / zero */

loc_001010FD: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00101107;

loc_00101104: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00101107: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101110u); RECOMP_ABI_CALL(0x000C43B0u, sub_000C43B0); /* call 0x000C43B0 */

loc_00101110: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00101113: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00101133; /* je: equal / zero */

loc_00101117: ;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010111Eu); RECOMP_ABI_CALL(0x0002B750u, sub_0002B750); /* call 0x0002B750 */

loc_0010111E: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 8);
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = edi;

loc_00101133: ;
    POP32(esp, edi);
    POP32(esp, ebx);
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
 * sub_00101140
 * Original: 0x00101140 - 0x001011B2 (114 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101140(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00101140: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
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
    if (CMP_NE(_fa, _fb)) goto loc_0010118D; /* jne: not equal / not zero */

loc_00101183: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_00101195;

loc_0010118D: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_00101195: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001011A5u); RECOMP_ABI_CALL(0x00100F80u, sub_00100F80); /* call 0x00100F80 */

loc_001011A5: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_001011C0
 * Original: 0x001011C0 - 0x0010137B (443 bytes, 125 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001011C0(void)
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

loc_001011C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00101375; /* jnp: not parity */

loc_001011E1: ;
    eax = MEM32(0x64CFE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00101213; /* je: equal / zero */

loc_001011EA: ;
    eax = MEM32(0x64D8D0);
    ecx = ZX16(MEM16(eax));
    xmm2 = XMM_SCALAR(MEMF(0x64D8DC)); /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3337A8); /* mulss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebp + 8) = xmm2.f[0]; /* movss */

loc_00101213: ;
    edx = MEM32(esi);
    edx = edx & 0x400000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0xC) = edx;
    if ((_fa == 0)) goto loc_0010124C; /* je: equal / zero */

loc_00101221: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 8);
    edx = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x40);
    ebx = MEM32(eax + 0x44);
    edi = MEM32(eax + 0x48);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    MEM32(esp + 0x20) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101243u); RECOMP_ABI_CALL(0x0002B680u, sub_0002B680); /* call 0x0002B680 */

loc_00101243: ;
    edx = MEM32(esp + 0x18);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00101254;

loc_0010124C: ;
    edi = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x18);

loc_00101254: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00101355; /* jnp: not parity */

loc_0010126A: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    eax = MEM32(esi + 0xC);
    fp_top() = cos(fp_top()); /* fcos */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    ecx = MEM32(eax + 0x40);
    xmm4 = xmm2; /* movaps */
    ecx = ecx | 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x40) = ecx;
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 4) = xmm3.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x14); /* mulss */
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
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00101355; /* je: equal / zero */

loc_00101335: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_00101346; /* je: equal / zero */

loc_0010133F: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00101349;

loc_00101346: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00101349: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101352u); RECOMP_ABI_CALL(0x000C4480u, sub_000C4480); /* call 0x000C4480 */

loc_00101352: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00101355: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00101375; /* je: equal / zero */

loc_00101359: ;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101360u); RECOMP_ABI_CALL(0x0002B750u, sub_0002B750); /* call 0x0002B750 */

loc_00101360: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 8);
    ecx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = ebx;
    MEM32(eax + 8) = edi;

loc_00101375: ;
    POP32(esp, edi);
    POP32(esp, ebx);
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
 * sub_00101380
 * Original: 0x00101380 - 0x001013F2 (114 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101380(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00101380: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
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
    if (CMP_NE(_fa, _fb)) goto loc_001013CD; /* jne: not equal / not zero */

loc_001013C3: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_001013D5;

loc_001013CD: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_001013D5: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x001013E5u); RECOMP_ABI_CALL(0x001011C0u, sub_001011C0); /* call 0x001011C0 */

loc_001013E5: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00101400
 * Original: 0x00101400 - 0x001019AD (1453 bytes, 378 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00101400(void)
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

loc_00101400: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(0x64CFE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010145E; /* je: equal / zero */

loc_00101416: ;
    eax = MEM32(0x64D8D0);
    ecx = ZX16(MEM16(eax));
    xmm0 = XMM_SCALAR(MEMF(0x64D8DC)); /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3337A8); /* mulss */
    xmm0.f[0] = xmm0.f[0] / xmm1.f[0]; /* divss */
    xmm1 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(edi + 8) = xmm1.f[0]; /* movss */

loc_0010145E: ;
    eax = MEM32(esi);
    edx = eax;
    edx = edx & 0x400000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & 0x4000000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(esp + 8) = edx;
    ebx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0010148A; /* je: equal / zero */

loc_00101477: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101483u); RECOMP_ABI_CALL(0x0002B680u, sub_0002B680); /* call 0x0002B680 */

loc_00101483: ;
    edx = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010148A: ;
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    ecx = 4;
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00101641; /* jnp: not parity */

loc_001014A3: ;
    fp_push(MEMF(edi)); /* fld float */
    eax = MEM32(esi + 0xC);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm0 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | ecx;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    xmm4 = xmm0; /* movaps */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(eax + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 8); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 8) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    MEMF(eax + 0x14) = xmm4.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    MEMF(eax + 0x24) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 0x28) = xmm4.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_00101641; /* je: equal / zero */

loc_00101565: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00101584; /* je: equal / zero */

loc_0010156E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_0010157F; /* je: equal / zero */

loc_00101578: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00101586;

loc_0010157F: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00101586;

loc_00101584: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00101586: ;
    fp_push(MEMF(edi)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm5 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | ecx;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    xmm4 = xmm2; /* movaps */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    MEMF(eax + 4) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(eax + 8) = xmm4.f[0]; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    xmm5 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    MEMF(eax + 0x14) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEMF(eax + 0x18) = xmm4.f[0]; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm5.f[0]; /* subss */
    MEMF(eax + 0x24) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 0x28) = xmm4.f[0]; /* movss */

loc_00101641: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_001017EA; /* jnp: not parity */

loc_00101653: ;
    fp_push(MEMF(edi + 4)); /* fld float */
    eax = MEM32(esi + 0xC);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | ecx;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    xmm5 = xmm2; /* movaps */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(eax + 8) = xmm4.f[0]; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm5 = xmm0; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(eax + 0x10) = xmm4.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4 = xmm1; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(eax + 0x18) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(eax + 0x20) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 0x28) = xmm4.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_001017EA; /* je: equal / zero */

loc_00101716: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00101735; /* je: equal / zero */

loc_0010171F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_00101730; /* je: equal / zero */

loc_00101729: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00101737;

loc_00101730: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00101737;

loc_00101735: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00101737: ;
    fp_push(MEMF(edi + 4)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | ecx;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    fp_top() = cos(fp_top()); /* fcos */
    xmm4 = xmm2; /* movaps */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(eax + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(eax) = xmm4.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 8); /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    MEMF(eax + 8) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm5 = xmm2; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    MEMF(eax + 0x10) = xmm4.f[0]; /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    MEMF(eax + 0x18) = xmm4.f[0]; /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm5 = xmm1; /* movaps */
    xmm5.f[0] = xmm5.f[0] * MEMF(eax + 0x28); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm5.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] - xmm2.f[0]; /* subss */
    MEMF(eax + 0x20) = xmm4.f[0]; /* movss */
    MEMF(eax + 0x28) = xmm0.f[0]; /* movss */

loc_001017EA: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0010199C; /* jnp: not parity */

loc_001017FC: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    eax = MEM32(esi + 0xC);
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | ecx;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    xmm3 = xmm2; /* movaps */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
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
    if (CMP_EQ(_fa, _fb)) goto loc_0010199C; /* je: equal / zero */

loc_001018C1: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001018E0; /* je: equal / zero */

loc_001018CA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_001018DB; /* je: equal / zero */

loc_001018D4: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001018E2;

loc_001018DB: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001018E2;

loc_001018E0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001018E2: ;
    fp_push(MEMF(edi + 8)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm4 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    fp_top() = cos(fp_top()); /* fcos */
    edi = MEM32(eax + 0x40);
    xmm3 = xmm1; /* movaps */
    edi = edi | ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x40) = edi;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 4) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 0x14) = xmm1.f[0]; /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x24); /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 0x20) = xmm3.f[0]; /* movss */
    MEMF(eax + 0x24) = xmm1.f[0]; /* movss */

loc_0010199C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001019A7; /* je: equal / zero */

loc_001019A0: ;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001019A7u); RECOMP_ABI_CALL(0x0002B750u, sub_0002B750); /* call 0x0002B750 */

loc_001019A7: ;
    POP32(esp, edi);
    POP32(esp, ebx);
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
 * sub_001019B0
 * Original: 0x001019B0 - 0x00101A16 (102 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001019B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001019B0: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D854);
    edx = MEM32(eax + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D858) = MEM32(0x64D858) - 1;
    _fa = (uint32_t)(MEM32(0x64D858)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(eax + 0x6270DC);
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x6270E0);
    MEM32(0x64D854) = eax;
    eax = esp + 4;
    MEM32(esp + 8) = ecx;
    MEM32(esp + 0xC) = edx;
    PUSH32(esp, 0x00101A0Au); RECOMP_ABI_CALL(0x00101400u, sub_00101400); /* call 0x00101400 */

loc_00101A0A: ;
    eax = MEM32(esp + 0x14);
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
 * sub_00101A20
 * Original: 0x00101A20 - 0x00101BA0 (384 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00101A20(void)
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

loc_00101A20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, edi);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00101B9B; /* jnp: not parity */

loc_00101A40: ;
    eax = MEM32(0x64CFE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00101A72; /* je: equal / zero */

loc_00101A49: ;
    eax = MEM32(0x64D8D0);
    ecx = ZX16(MEM16(eax));
    xmm2 = XMM_SCALAR(MEMF(0x64D8DC)); /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3337A8); /* mulss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebp + 8) = xmm2.f[0]; /* movss */

loc_00101A72: ;
    edi = MEM32(esi);
    edi = edi & 0x400000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00101A8B; /* je: equal / zero */

loc_00101A7C: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101A88u); RECOMP_ABI_CALL(0x0002B680u, sub_0002B680); /* call 0x0002B680 */

loc_00101A88: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00101A8B: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00101B90; /* jnp: not parity */

loc_00101AA1: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    eax = MEM32(esi + 0xC);
    fp_top() = cos(fp_top()); /* fcos */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    edx = MEM32(eax + 0x40);
    xmm3 = xmm2; /* movaps */
    edx = edx | 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x40) = edx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
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
    xmm4 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    MEMF(eax + 0x14) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x18)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEMF(eax + 0x18) = xmm3.f[0]; /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(eax + 0x24) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    MEMF(eax + 0x28) = xmm3.f[0]; /* movss */
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00101B90; /* je: equal / zero */

loc_00101B70: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_00101B81; /* je: equal / zero */

loc_00101B7A: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00101B84;

loc_00101B81: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00101B84: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101B8Du); RECOMP_ABI_CALL(0x000C4080u, sub_000C4080); /* call 0x000C4080 */

loc_00101B8D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00101B90: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00101B9B; /* je: equal / zero */

loc_00101B94: ;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101B9Bu); RECOMP_ABI_CALL(0x0002B750u, sub_0002B750); /* call 0x0002B750 */

loc_00101B9B: ;
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
 * sub_00101BA0
 * Original: 0x00101BA0 - 0x00101C20 (128 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101BA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00101BA0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
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
    if (CMP_NE(_fa, _fb)) goto loc_00101BED; /* jne: not equal / not zero */

loc_00101BE3: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_00101BF5;

loc_00101BED: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_00101BF5: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00101C05u); RECOMP_ABI_CALL(0x00101A20u, sub_00101A20); /* call 0x00101A20 */

loc_00101C05: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00101C20
 * Original: 0x00101C20 - 0x00101D9C (380 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00101C20(void)
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

loc_00101C20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, edi);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00101D97; /* jnp: not parity */

loc_00101C40: ;
    eax = MEM32(0x64CFE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00101C72; /* je: equal / zero */

loc_00101C49: ;
    eax = MEM32(0x64D8D0);
    ecx = ZX16(MEM16(eax));
    xmm2 = XMM_SCALAR(MEMF(0x64D8DC)); /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3337A8); /* mulss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebp + 8) = xmm2.f[0]; /* movss */

loc_00101C72: ;
    edi = MEM32(esi);
    edi = edi & 0x400000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00101C8B; /* je: equal / zero */

loc_00101C7C: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101C88u); RECOMP_ABI_CALL(0x0002B680u, sub_0002B680); /* call 0x0002B680 */

loc_00101C88: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00101C8B: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00101D8C; /* jnp: not parity */

loc_00101CA1: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    eax = MEM32(esi + 0xC);
    fp_top() = cos(fp_top()); /* fcos */
    xmm2 = XMM_SCALAR(MEMF(eax)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
    edx = MEM32(eax + 0x40);
    xmm4 = xmm2; /* movaps */
    edx = edx | 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x40) = edx;
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
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
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm0; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x18); /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm4.f[0]; /* addss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x18); /* mulss */
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
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00101D8C; /* je: equal / zero */

loc_00101D6C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_00101D7D; /* je: equal / zero */

loc_00101D76: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00101D80;

loc_00101D7D: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00101D80: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101D89u); RECOMP_ABI_CALL(0x000C4150u, sub_000C4150); /* call 0x000C4150 */

loc_00101D89: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00101D8C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00101D97; /* je: equal / zero */

loc_00101D90: ;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101D97u); RECOMP_ABI_CALL(0x0002B750u, sub_0002B750); /* call 0x0002B750 */

loc_00101D97: ;
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
 * sub_00101DA0
 * Original: 0x00101DA0 - 0x00101E12 (114 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101DA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00101DA0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
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
    if (CMP_NE(_fa, _fb)) goto loc_00101DED; /* jne: not equal / not zero */

loc_00101DE3: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_00101DF5;

loc_00101DED: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_00101DF5: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00101E05u); RECOMP_ABI_CALL(0x00101C20u, sub_00101C20); /* call 0x00101C20 */

loc_00101E05: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00101E20
 * Original: 0x00101E20 - 0x00101F9A (378 bytes, 104 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00101E20(void)
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

loc_00101E20: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, edi);
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00101F95; /* jnp: not parity */

loc_00101E40: ;
    eax = MEM32(0x64CFE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00101E72; /* je: equal / zero */

loc_00101E49: ;
    eax = MEM32(0x64D8D0);
    ecx = ZX16(MEM16(eax));
    xmm2 = XMM_SCALAR(MEMF(0x64D8DC)); /* movss */
    xmm1.f[0] = (float)(int32_t)ecx; /* cvtsi2ss */
    xmm1.f[0] = xmm1.f[0] * MEMF(0x3337A8); /* mulss */
    xmm2.f[0] = xmm2.f[0] / xmm1.f[0]; /* divss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebp + 8) = xmm2.f[0]; /* movss */

loc_00101E72: ;
    edi = MEM32(esi);
    edi = edi & 0x400000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00101E8B; /* je: equal / zero */

loc_00101E7C: ;
    edx = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101E88u); RECOMP_ABI_CALL(0x0002B680u, sub_0002B680); /* call 0x0002B680 */

loc_00101E88: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00101E8B: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00101F8A; /* jnp: not parity */

loc_00101EA1: ;
    fp_push(MEMF(ebp + 8)); /* fld float */
    eax = MEM32(esi + 0xC);
    fp_top() = cos(fp_top()); /* fcos */
    xmm0 = XMM_SCALAR(MEMF(eax)); /* movss */
    edx = MEM32(eax + 0x40);
    xmm3 = xmm0; /* movaps */
    edx = edx | 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x40) = edx;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(ebp + 8)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */
    fp_top() = sin(fp_top()); /* fsin */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    xmm2 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 4); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(eax) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 4); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x10)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4 = xmm2; /* movaps */
    xmm4.f[0] = xmm4.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    xmm4 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    MEMF(eax + 0x10) = xmm3.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm3.f[0] = xmm3.f[0] * MEMF(eax + 0x14); /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(eax + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x20)); /* movss */
    xmm3 = xmm0; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] - xmm4.f[0]; /* subss */
    MEMF(eax + 0x20) = xmm3.f[0]; /* movss */
    xmm3 = XMM_SCALAR(MEMF(eax + 0x24)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm0.f[0]; /* addss */
    MEMF(eax + 0x24) = xmm3.f[0]; /* movss */
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00101F8A; /* je: equal / zero */

loc_00101F6A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_00101F7B; /* je: equal / zero */

loc_00101F74: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xA0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00101F7E;

loc_00101F7B: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00101F7E: ;
    ecx = MEM32(ebp + 8);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101F87u); RECOMP_ABI_CALL(0x000C4220u, sub_000C4220); /* call 0x000C4220 */

loc_00101F87: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00101F8A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00101F95; /* je: equal / zero */

loc_00101F8E: ;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00101F95u); RECOMP_ABI_CALL(0x0002B750u, sub_0002B750); /* call 0x0002B750 */

loc_00101F95: ;
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
 * sub_00101FA0
 * Original: 0x00101FA0 - 0x00102012 (114 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00101FA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00101FA0: ;
    PUSH32(esp, ecx);
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
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
    if (CMP_NE(_fa, _fb)) goto loc_00101FED; /* jne: not equal / not zero */

loc_00101FE3: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_00101FF5;

loc_00101FED: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_00101FF5: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    edx = MEM32(esp + 4);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00102005u); RECOMP_ABI_CALL(0x00101E20u, sub_00101E20); /* call 0x00101E20 */

loc_00102005: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00102020
 * Original: 0x00102020 - 0x00102172 (338 bytes, 116 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00102020(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102020: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = eax;
    SET_LO8(eax, MEM8(ebx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0010214A; /* je: equal / zero */

loc_0010203B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_00102065; /* je: equal / zero */

loc_00102041: ;
    ecx = MEM32(ecx + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010205F; /* je: equal / zero */

loc_0010204A: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010205F; /* je: equal / zero */

loc_00102051: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010205F; /* je: equal / zero */

loc_00102058: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00102041; /* jne: not equal / not zero */

loc_0010205D: ;
    goto loc_00102067;

loc_0010205F: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_0010206B;

loc_00102065: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00102067: ;
    MEM32(esp + 0xC) = ecx;

loc_0010206B: ;
    edx = MEM32(esp + 0x50);
    ecx = 0x3F800000;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(esp + 0xC);
    edx = edx & 0xFFFFFFC3u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x50) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0010210B; /* je: equal / zero */

loc_001020C3: ;
    goto loc_001020C7;

loc_001020C5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001020C7: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001020D8; /* je: equal / zero */

loc_001020CF: ;
    eax = MEM32(ebx + 0x14);
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001020D8: ;
    PUSH32(esp, eax);
    edi = esp + 0x14;
    esi = esp + 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001020E6u); RECOMP_ABI_CALL(0x000C3470u, sub_000C3470); /* call 0x000C3470 */

loc_001020E6: ;
    ecx = 0x14;
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
    ebx = MEM32(ebx + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00102103; /* je: equal / zero */

loc_001020F7: ;
    ebx = MEM32(ebx + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00102103; /* je: equal / zero */

loc_001020FE: ;
    ebx = MEM32(ebx + 4);
    goto loc_00102105;

loc_00102103: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00102105: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001020C5; /* jne: not equal / not zero */

loc_0010210B: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    edi = esp + 0x14;
    esi = esp + 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102120u); RECOMP_ABI_CALL(0x000C3470u, sub_000C3470); /* call 0x000C3470 */

loc_00102120: ;
    eax = MEM32(ebp + 8);
    ecx = MEM32(esp + 0x94);
    edx = MEM32(esp + 0x98);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x9C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0010214A: ;
    edx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102151u); RECOMP_ABI_CALL(0x0002B630u, sub_0002B630); /* call 0x0002B630 */

loc_00102151: ;
    eax = MEM32(ebx + 0xC);
    edx = MEM32(eax + 0x30);
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    POP32(esp, edi);
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    POP32(esp, esi);
    MEM32(ecx + 8) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00102180
 * Original: 0x00102180 - 0x001021FC (124 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102180(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102180: ;
    ecx = MEM32(0x64D880);
    eax = MEM32(0x64D884);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = esp + -12;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x001021AAu); RECOMP_ABI_CALL(0x00102020u, sub_00102020); /* call 0x00102020 */

loc_001021AA: ;
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
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00102200
 * Original: 0x00102200 - 0x0010222B (43 bytes, 11 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102200(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102200: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00102222u); RECOMP_ABI_CALL(0x0002B860u, sub_0002B860); /* call 0x0002B860 */

loc_00102222: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00102230
 * Original: 0x00102230 - 0x001022B1 (129 bytes, 33 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102230: ;
    eax = MEM32(0x64D884);
    ecx = MEM32(0x64D880);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x10000 (32-bit) */
    eax = MEM32(eax + 0xC);
    MEM32(0x64D87C) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_0010225F; /* je: equal / zero */

loc_00102258: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00102262;

loc_0010225F: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00102262: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    eax = edi + 0x6270D8;
    MEM32(eax) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = esi;
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax + 4) = edx;
    eax = MEM32(esp + 0xC);
    MEM32(0x64D854) = edi;
    MEM16(ecx * 8 + 0x616FD8) = 3;
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
 * sub_001022C0
 * Original: 0x001022C0 - 0x00102333 (115 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001022C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001022C0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(edi);
    ebx = ebx & 0x400000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_001022D9; /* je: equal / zero */

loc_001022D2: ;
    edx = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001022D9u); RECOMP_ABI_CALL(0x0002B630u, sub_0002B630); /* call 0x0002B630 */

loc_001022D9: ;
    eax = MEM32(edi + 0xC);
    ecx = MEM32(esi);
    MEM32(eax + 0x30) = ecx;
    edx = MEM32(esi + 4);
    MEM32(eax + 0x34) = edx;
    ecx = MEM32(esi + 8);
    MEM32(eax + 0x38) = ecx;
    ecx = MEM32(eax + 0x40);
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(eax + 0x40) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00102301; /* je: equal / zero */

loc_001022FA: ;
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102301u); RECOMP_ABI_CALL(0x0002B750u, sub_0002B750); /* call 0x0002B750 */

loc_00102301: ;
    eax = MEM32(0x64CFE8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0010231D; /* jne: not equal / not zero */

loc_0010230A: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010231D; /* je: equal / zero */

loc_00102312: ;
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010231Au); RECOMP_ABI_CALL(0x0005BC70u, sub_0005BC70); /* call 0x0005BC70 */

loc_0010231A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010231D: ;
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010232E; /* je: equal / zero */

loc_00102322: ;
    edx = MEM32(edi + 0x14);
    eax = MEM32(edx + 4);
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0010232E: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00102340
 * Original: 0x00102340 - 0x0010238D (77 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102340(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102340: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D854);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = eax + 0x6270D8;
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    PUSH32(esp, 0x00102383u); RECOMP_ABI_CALL(0x001022C0u, sub_001022C0); /* call 0x001022C0 */

loc_00102383: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00102390
 * Original: 0x00102390 - 0x001023F4 (100 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00102390(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102390: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_001023EF; /* je: equal / zero */

loc_0010239C: ;
    esi = MEM32(edi);
    esi = esi & 0x400000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_001023AD; /* je: equal / zero */

loc_001023A6: ;
    edx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001023ADu); RECOMP_ABI_CALL(0x0002B630u, sub_0002B630); /* call 0x0002B630 */

loc_001023AD: ;
    ecx = MEM32(ebx + 0xC);
    edx = MEM32(ecx + 0x30);
    eax = MEM32(edi + 0xC);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x34) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x38) = ecx;
    ecx = MEM32(eax + 0x40);
    ecx = ecx | 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(eax + 0x40) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_001023DC; /* je: equal / zero */

loc_001023D5: ;
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001023DCu); RECOMP_ABI_CALL(0x0002B750u, sub_0002B750); /* call 0x0002B750 */

loc_001023DC: ;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001023EF; /* je: equal / zero */

loc_001023E4: ;
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001023ECu); RECOMP_ABI_CALL(0x0005BC70u, sub_0005BC70); /* call 0x0005BC70 */

loc_001023EC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001023EF: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00102400
 * Original: 0x00102400 - 0x0010244D (77 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102400(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102400: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D854);
    ebx = MEM32(eax + 0x6270B8);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(0x64D858);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D854) = eax;
    MEM32(0x64D858) = ecx;
    PUSH32(esp, 0x00102443u); RECOMP_ABI_CALL(0x00102390u, sub_00102390); /* call 0x00102390 */

loc_00102443: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00102450
 * Original: 0x00102450 - 0x001024BF (111 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00102450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102450: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001024B9; /* je: equal / zero */

loc_00102461: ;
    eax = MEM32(ebx);
    eax = eax & 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esp + 0xC) = eax;
    if ((_fa == 0)) goto loc_00102475; /* je: equal / zero */

loc_0010246E: ;
    edx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102475u); RECOMP_ABI_CALL(0x0002B630u, sub_0002B630); /* call 0x0002B630 */

loc_00102475: ;
    esi = MEM32(esi + 0xC);
    edi = MEM32(ebx + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00102486; /* je: equal / zero */

loc_0010247F: ;
    ecx = 0x14;
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

loc_00102486: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00102495; /* je: equal / zero */

loc_0010248E: ;
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102495u); RECOMP_ABI_CALL(0x0002B750u, sub_0002B750); /* call 0x0002B750 */

loc_00102495: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001024A8; /* je: equal / zero */

loc_0010249D: ;
    PUSH32(esp, 3);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001024A5u); RECOMP_ABI_CALL(0x0005BC70u, sub_0005BC70); /* call 0x0005BC70 */

loc_001024A5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001024A8: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001024B9; /* je: equal / zero */

loc_001024AD: ;
    eax = MEM32(ebx + 0x14);
    eax = MEM32(eax + 4);
    MEM32(eax) = MEM32(eax) | 0x800000;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_001024B9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001024C0
 * Original: 0x001024C0 - 0x0010250B (75 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001024C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001024C0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    ebx = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D854);
    MEM32(0x64D87C) = ecx;
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
    PUSH32(esp, 0x00102502u); RECOMP_ABI_CALL(0x00102450u, sub_00102450); /* call 0x00102450 */

loc_00102502: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00102510
 * Original: 0x00102510 - 0x0010256B (91 bytes, 29 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102510(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102510: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00102533u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00102533: ;
    ecx = esi;
    edi = eax;
    PUSH32(esp, 0x0010253Cu); RECOMP_ABI_CALL(0x00011D60u, sub_00011D60); /* call 0x00011D60 */

loc_0010253C: ;
    edx = edi;
    edx = edx & 0xFE;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0xFE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0xFE (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00102561; /* jne: not equal / not zero */

loc_00102549: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00102561; /* je: equal / zero */

loc_0010254E: ;
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00102556u); RECOMP_ABI_CALL(0x000F8CE0u, sub_000F8CE0); /* call 0x000F8CE0 */

loc_00102556: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0010255Eu); RECOMP_ABI_CALL(0x000F8CE0u, sub_000F8CE0); /* call 0x000F8CE0 */

loc_0010255E: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00102561: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00102570
 * Original: 0x00102570 - 0x001025BF (79 bytes, 24 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102570: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00102593u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00102593: ;
    ebx = eax;
    PUSH32(esp, 0x0010259Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0010259A: ;
    ecx = MEM32(esi + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001025B5; /* je: equal / zero */

loc_001025A1: ;
    SET_LO16(edx, ZX8(LO8(ebx)));
    SET_LO16(eax, ZX8(LO8(eax)));
    edx = ~edx;
    SET_LO16(edx, LO16(edx) & MEM16(ecx + 0x2E));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    edx = edx | eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM16(ecx + 0x2E) = LO16(edx);

loc_001025B5: ;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_001025C0
 * Original: 0x001025C0 - 0x00102627 (103 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001025C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001025C0: ;
    ecx = MEM32(0x64D878);
    eax = MEM32(0x64D880);
    edx = MEM32(0x64D884);
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
    if (CMP_NE(_fa, _fb)) goto loc_0010260B; /* jne: not equal / not zero */

loc_00102601: ;
    xmm0.f[0] = (float)(int32_t)MEM32(ecx + 0x6270D8); /* cvtsi2ss */
    goto loc_00102613;

loc_0010260B: ;
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x6270D8)); /* movss */

loc_00102613: ;
    eax = MEM32(edx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010261F; /* je: equal / zero */

loc_0010261A: ;
    MEMF(eax + 0x30) = xmm0.f[0]; /* movss */

loc_0010261F: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00102630
 * Original: 0x00102630 - 0x00102776 (326 bytes, 100 insns)
 * CC: cdecl, 0 params, returns float_sse
 * Frame: fpo_leaf
 */
void sub_00102630(void)
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

loc_00102630: ;
    eax = MEM32(edx + 0x18);
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00102772; /* je: equal / zero */

loc_0010263E: ;
    ecx = MEM32(edx + 0x10);
    eax = MEM32(ecx + 0x14);
    PUSH32(esp, ebx);
    ebx = MEM32(0x49A888);
    PUSH32(esp, esi);
    esi = MEM32(0x49A890);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(0x49A88C);
    if (CMP_EQ(_fa, _fb)) goto loc_0010267A; /* je: equal / zero */

loc_00102661: ;
    PUSH32(esp, ebp);
    ebp = MEM32(ecx + 0x18);
    MEM32(esp + 0x24) = ebp;
    ebp = MEM32(ecx + 0x1C);
    MEM32(esp + 0x28) = ebp;
    ebp = MEM32(ecx + 0x20);
    MEM32(esp + 0x2C) = ebp;
    POP32(esp, ebp);
    goto loc_00102686;

loc_0010267A: ;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x24) = edi;
    MEM32(esp + 0x28) = esi;

loc_00102686: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001026A2; /* je: equal / zero */

loc_0010268B: ;
    eax = MEM32(ecx + 0x24);
    MEM32(esp + 0x2C) = eax;
    eax = MEM32(ecx + 0x28);
    ecx = MEM32(ecx + 0x2C);
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = ecx;
    goto loc_001026AE;

loc_001026A2: ;
    MEM32(esp + 0x2C) = ebx;
    MEM32(esp + 0x30) = edi;
    MEM32(esp + 0x34) = esi;

loc_001026AE: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    POP32(esp, edi);
    fp_top() = fabs(fp_top()); /* fabs */
    POP32(esp, esi);
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    POP32(esp, ebx);
    fp_push(MEMF(esp + 0x20)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 4) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_001026D9; /* ja: above (unsigned >) */

loc_001026D3: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_001026D9: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_00102707; /* ja: above (unsigned >) */

loc_00102702: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */

loc_00102707: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */
    fp_top() = fabs(fp_top()); /* fabs */
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_push(MEMF(esp + 4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_00102735; /* ja: above (unsigned >) */

loc_00102730: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */

loc_00102735: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    eax = MEM32(edx + 0x18);
    fp_push(MEMF(esp + 0xC)); /* fld float */
    MEM8(eax + 0x2E) = MEM8(eax + 0x2E) | 8;
    _fa = (uint32_t)(MEM8(eax + 0x2E)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    edx = MEM32(edx + 0x18);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x333928)); /* fadd dword ptr [0x333928] */
    MEMF(edx + 0x30) = (float)fp_top(); fp_pop(); /* fstp */
    fp_pop(); /* fstp st(0) */

loc_00102772: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00102780
 * Original: 0x00102780 - 0x001027A9 (41 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102780(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102780: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    edx = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x001027A1u); RECOMP_ABI_CALL(0x00102630u, sub_00102630); /* call 0x00102630 */

loc_001027A1: ;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_001027B0
 * Original: 0x001027B0 - 0x0010285D (173 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001027B0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001027B0: ;
    ecx = MEM32(0x64D880);
    eax = MEM32(0x64D884);
    eax = MEM32(eax + 0xC);
    edx = MEM32(0x64D878);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edi + 0x6270D8;
    MEM32(0x64D884) = ecx;
    ecx = MEM32(esi);
    ecx = MEM32(ecx + 0xC);
    xmm2 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm2.f[0] = xmm2.f[0] - MEMF(eax + 0x38); /* subss */
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x34); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D858);
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = xmm0; /* movaps */
    MEM32(edx * 8 + 0x616FDC) = esi;
    xmm3.f[0] = xmm3.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(0x64D854) = edi;
    MEM16(edx * 8 + 0x616FD8) = 2;
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEMF(esi) = xmm3.f[0]; /* movss */
    MEM32(0x64D858) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00102860
 * Original: 0x00102860 - 0x001028F8 (152 bytes, 38 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102860(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102860: ;
    ecx = MEM32(0x64D880);
    eax = MEM32(0x64D884);
    eax = MEM32(eax + 0xC);
    edx = MEM32(0x64D878);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = edi + 0x6270D8;
    MEM32(0x64D884) = ecx;
    ecx = MEM32(esi);
    ecx = MEM32(ecx + 0xC);
    xmm1 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(eax + 0x34); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D858);
    xmm2 = xmm1; /* movaps */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm1 = xmm0; /* movaps */
    MEM32(edx * 8 + 0x616FDC) = esi;
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEM32(0x64D854) = edi;
    MEM16(edx * 8 + 0x616FD8) = 2;
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, edi);
    MEMF(esi) = xmm2.f[0]; /* movss */
    MEM32(0x64D858) = edx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00102900
 * Original: 0x00102900 - 0x00102994 (148 bytes, 43 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00102900(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102900: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010290Fu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_0010290F: ;
    ecx = MEM32(0x64D878);
    ebx = MEM32(0x64D884);
    edi = eax;
    eax = MEM32(0x64D880);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102932u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00102932: ;
    edx = MEM32(ebx + 4);
    edi = ~edi;
    edx = edx & edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = eax;
    edx = edx & 0xFFFF0000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = esi;
    ecx = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010294Cu); RECOMP_ABI_CALL(0x0001CAD0u, sub_0001CAD0); /* call 0x0001CAD0 */

loc_0010294C: ;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esi & 0xFFFF0000u;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(eax) = esi;
    MEM32(ecx * 8 + 0x616FDC) = eax;
    eax = MEM32(ebp + 8);
    POP32(esp, edi);
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001029A0
 * Original: 0x001029A0 - 0x00102A09 (105 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001029A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001029A0: ;
    ecx = MEM32(0x64D880);
    eax = MEM32(0x64D884);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D87C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001029CC; /* je: equal / zero */

loc_001029C3: ;
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFFFF0000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_001029CC: ;
    edx = MEM32(0x64D854);
    eax = edx + 0x6270D8;
    MEM32(eax) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00102A10
 * Original: 0x00102A10 - 0x00102A78 (104 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102A10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102A10: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00102A32u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00102A32: ;
    ecx = eax;
    eax = MEM32(esi + 4);
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00102A5C; /* je: equal / zero */

loc_00102A40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x200000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00102A6F; /* jne: not equal / not zero */

loc_00102A47: ;
    eax = eax | 0x200000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = esi;
    PUSH32(esp, 0x00102A53u); RECOMP_ABI_CALL(0x0001CAD0u, sub_0001CAD0); /* call 0x0001CAD0 */

loc_00102A53: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00102A5C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00102A6F; /* je: equal / zero */

loc_00102A63: ;
    eax = eax & 0xFFDFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    PUSH32(esp, 0x00102A6Fu); RECOMP_ABI_CALL(0x0001CAD0u, sub_0001CAD0); /* call 0x0001CAD0 */

loc_00102A6F: ;
    eax = MEM32(esp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00102A80
 * Original: 0x00102A80 - 0x00102B42 (194 bytes, 65 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102A80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102A80: ;
    PUSH32(esp, edi);
    edi = eax;
    eax = MEM32(esi + 4);
    eax = eax & 0xFFFF0000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00102AA1; /* je: equal / zero */

loc_00102A8F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00102B40; /* jne: not equal / not zero */

loc_00102A9A: ;
    eax = eax | 0x400000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00102AB1;

loc_00102AA1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00102B40; /* je: equal / zero */

loc_00102AAC: ;
    eax = eax & 0xFFBFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00102AB1: ;
    ecx = esi;
    PUSH32(esp, 0x00102AB8u); RECOMP_ABI_CALL(0x0001CAD0u, sub_0001CAD0); /* call 0x0001CAD0 */

loc_00102AB8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00102ADC; /* jne: not equal / not zero */

loc_00102ABC: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00102B40; /* je: equal / zero */

loc_00102AC1: ;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00102B40; /* jne: not equal / not zero */

loc_00102AC7: ;
    PUSH32(esp, 5);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00102ACFu); RECOMP_ABI_CALL(0x000F8CE0u, sub_000F8CE0); /* call 0x000F8CE0 */

loc_00102ACF: ;
    PUSH32(esp, 4);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00102AD7u); RECOMP_ABI_CALL(0x000F8CE0u, sub_000F8CE0); /* call 0x000F8CE0 */

loc_00102AD7: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00102ADC: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00102B40; /* je: equal / zero */

loc_00102AE4: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00102B40; /* je: equal / zero */

loc_00102AEB: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00102B40; /* je: equal / zero */

loc_00102AF2: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00102B40; /* jne: not equal / not zero */

loc_00102AF7: ;
    edx = esi;
    PUSH32(esp, 0x00102AFEu); RECOMP_ABI_CALL(0x0002B630u, sub_0002B630); /* call 0x0002B630 */

loc_00102AFE: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00102B0F; /* je: equal / zero */

loc_00102B06: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00102B0Cu); RECOMP_ABI_CALL(0x0005B360u, sub_0005B360); /* call 0x0005B360 */

loc_00102B0C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00102B0F: ;
    ecx = MEM32(esi);
    eax = MEM32(esi + 0x14);
    ecx = ecx & 0xFFBFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi) = ecx;
    edi = MEM32(eax + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00102B36; /* je: equal / zero */

loc_00102B23: ;
    PUSH32(esp, 0x00102B28u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_00102B28: ;
    ecx = MEM32(esi + 0x14);
    ecx = MEM32(ecx + 8);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00102B36u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00102B33u); } /* indirect call */
    }

loc_00102B36: ;
    edx = MEM32(esi + 0x14);
    MEM32(edx + 8) = 0;

loc_00102B40: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00102B50
 * Original: 0x00102B50 - 0x00102B89 (57 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00102B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102B50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102B79u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00102B79: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102B7Eu); RECOMP_ABI_CALL(0x00102A80u, sub_00102A80); /* call 0x00102A80 */

loc_00102B7E: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00102B90
 * Original: 0x00102B90 - 0x00102BF9 (105 bytes, 23 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102B90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102B90: ;
    ecx = MEM32(0x64D880);
    eax = MEM32(0x64D884);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D87C) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00102BBC; /* je: equal / zero */

loc_00102BB3: ;
    ecx = MEM32(eax + 4);
    ecx = ecx & 0xFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00102BBC: ;
    edx = MEM32(0x64D854);
    eax = edx + 0x6270D8;
    MEM32(eax) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00102C00
 * Original: 0x00102C00 - 0x00102C4B (75 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102C00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102C00: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00102C23u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00102C23: ;
    esi = eax;
    PUSH32(esp, 0x00102C2Au); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00102C2A: ;
    edx = MEM32(edi + 4);
    esi = esi & 0xFF00;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ~esi;
    eax = eax & 0xFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi & edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = esi | eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = MEM32(esp + 0xC);
    MEM32(edi + 4) = esi;
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00102C50
 * Original: 0x00102C50 - 0x00102CB2 (98 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102C50(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102C50: ;
    edx = MEM32(0x64D878);
    ecx = MEM32(0x64D884);
    ecx = MEM32(ecx + 4);
    eax = MEM32(0x64D880);
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D854);
    MEM32(0x64D884) = eax;
    eax = edx + 0x6270D8;
    ecx = ecx & 0xFF00;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00102CC0
 * Original: 0x00102CC0 - 0x00102D36 (118 bytes, 27 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102CC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102CC0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00102CE2u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00102CE2: ;
    edx = MEM32(esi + 4);
    ecx = MEM32(0x64D854);
    eax = eax & edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0xFF (8-bit) */
    POP32(esp, esi);
    eax = ecx + 0x6270D8;
    if (TEST_Z(_fa, _fb)) goto loc_00102D01; /* je: equal / zero */

loc_00102CF9: ;
    MEM32(eax) = 1;
    goto loc_00102D07;

loc_00102D01: ;
    MEM32(eax) = 0;

loc_00102D07: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
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
 * sub_00102D40
 * Original: 0x00102D40 - 0x00102DAF (111 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102D40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102D40: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00102D62u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00102D62: ;
    ecx = MEM32(esi + 4);
    eax = eax & 0xFF00;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx ^ eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 4) = ecx;
    esi = ecx;
    ecx = MEM32(0x64D854);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(eax) = esi;
    MEM32(ecx * 8 + 0x616FDC) = eax;
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
 * sub_00102DB0
 * Original: 0x00102DB0 - 0x00102DF4 (68 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102DB0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102DB0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00102DD3u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00102DD3: ;
    esi = eax;
    PUSH32(esp, 0x00102DDAu); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00102DDA: ;
    ecx = MEM32(edi + 0x18);
    esi = ~esi;
    MEM16(ecx + 0x28) = MEM16(ecx + 0x28) & LO16(esi);
    _fa = (uint32_t)(MEM16(ecx + 0x28)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    edi = MEM32(edi + 0x18);
    MEM16(edi + 0x28) = MEM16(edi + 0x28) | LO16(eax);
    _fa = (uint32_t)(MEM16(edi + 0x28)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    eax = MEM32(esp + 0xC);
    POP32(esp, edi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00102E00
 * Original: 0x00102E00 - 0x00102E60 (96 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102E00(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102E00: ;
    ecx = MEM32(0x64D884);
    ecx = MEM32(ecx + 0x18);
    edx = MEM32(0x64D878);
    ecx = ZX16(MEM16(ecx + 0x28));
    eax = MEM32(0x64D880);
    MEM32(0x64D87C) = edx;
    edx = MEM32(0x64D854);
    MEM32(0x64D884) = eax;
    eax = edx + 0x6270D8;
    MEM32(eax) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx * 8 + 0x616FD8) = 1;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D854) = edx;
    MEM32(0x64D858) = ecx;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00102E60
 * Original: 0x00102E60 - 0x00102EE0 (128 bytes, 36 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102E60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102E60: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00102E82u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00102E82: ;
    edx = MEM32(esi + 0x18);
    ecx = ZX16(MEM16(edx + 0x28));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, eax (32-bit) */
    ecx = MEM32(0x64D854);
    POP32(esp, esi);
    eax = ecx + 0x6270D8;
    if (TEST_Z(_fa, _fb)) goto loc_00102EA2; /* je: equal / zero */

loc_00102E9A: ;
    MEM32(eax) = 1;
    goto loc_00102EA8;

loc_00102EA2: ;
    MEM32(eax) = 0;

loc_00102EA8: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
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
 * sub_00102EE0
 * Original: 0x00102EE0 - 0x00102F4C (108 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102EE0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102EE0: ;
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x18);
    MEM32(0x64D884) = eax;
    MEM32(0x64D87C) = ecx;
    PUSH32(esp, 0x00102F06u); RECOMP_ABI_CALL(0x000FA800u, sub_000FA800); /* call 0x000FA800 */

loc_00102F06: ;
    MEM16(edi + 0x28) = MEM16(edi + 0x28) ^ LO16(eax);
    _fa = (uint32_t)(MEM16(edi + 0x28)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* xor result */
    ecx = MEM32(0x64D854);
    edx = MEM32(esi + 4);
    eax = ecx + 0x6270D8;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D854) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(ecx * 8 + 0x616FDC) = eax;
    MEM32(eax) = edx;
    eax = MEM32(esp + 0xC);
    MEM16(ecx * 8 + 0x616FD8) = 1;
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
 * sub_00102F50
 * Original: 0x00102F50 - 0x00102FE5 (149 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00102F50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102F50: ;
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
    PUSH32(esp, edi);
    edi = MEM32(esi);
    edi = edi & 0x400000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00102F90; /* je: equal / zero */

loc_00102F65: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x40);
    edx = MEM32(eax + 0x44);
    ebx = MEM32(eax + 0x48);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102F8Bu); RECOMP_ABI_CALL(0x0002B680u, sub_0002B680); /* call 0x0002B680 */

loc_00102F8B: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00102F94;

loc_00102F90: ;
    ebx = MEM32(esp + 0x14);

loc_00102F94: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102FA5u); RECOMP_ABI_CALL(0x000C4550u, sub_000C4550); /* call 0x000C4550 */

loc_00102FA5: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00102FCC; /* je: equal / zero */

loc_00102FAC: ;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102FB3u); RECOMP_ABI_CALL(0x0002B750u, sub_0002B750); /* call 0x0002B750 */

loc_00102FB3: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 8);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ebx;

loc_00102FCC: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00102FDF; /* je: equal / zero */

loc_00102FD4: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00102FDCu); RECOMP_ABI_CALL(0x0005BC70u, sub_0005BC70); /* call 0x0005BC70 */

loc_00102FDC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00102FDF: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00102FF0
 * Original: 0x00102FF0 - 0x00103089 (153 bytes, 37 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00102FF0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00102FF0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D854);
    edx = MEM32(eax + 0x6270B8);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(eax + 0x6270DC);
    MEM32(esp + 8) = ecx;
    ecx = MEM32(0x64D858);
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x6270E0);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D858) = ecx;
    ecx = MEM32(eax + 0x6270D8);
    MEM32(esp + 0xC) = edx;
    edx = MEM32(eax + 0x6270DC);
    MEM32(esp + 0x10) = ecx;
    ecx = esp + 4;
    MEM32(esp + 0x14) = edx;
    MEM32(0x64D854) = eax;
    eax = MEM32(eax + 0x6270E0);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    MEM32(esp + 0x20) = eax;
    PUSH32(esp, 0x0010307Au); RECOMP_ABI_CALL(0x00102F50u, sub_00102F50); /* call 0x00102F50 */

loc_0010307A: ;
    eax = MEM32(esp + 0x28);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00103090
 * Original: 0x00103090 - 0x00103124 (148 bytes, 55 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00103090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00103090: ;
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
    PUSH32(esp, edi);
    edi = MEM32(esi);
    edi = edi & 0x400000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_001030D0; /* je: equal / zero */

loc_001030A5: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax + 8);
    ecx = MEM32(eax + 0x40);
    edx = MEM32(eax + 0x44);
    ebx = MEM32(eax + 0x48);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001030CBu); RECOMP_ABI_CALL(0x0002B680u, sub_0002B680); /* call 0x0002B680 */

loc_001030CB: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_001030D4;

loc_001030D0: ;
    ebx = MEM32(esp + 0x14);

loc_001030D4: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 8);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001030E4u); RECOMP_ABI_CALL(0x000C4550u, sub_000C4550); /* call 0x000C4550 */

loc_001030E4: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010310B; /* je: equal / zero */

loc_001030EB: ;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001030F2u); RECOMP_ABI_CALL(0x0002B750u, sub_0002B750); /* call 0x0002B750 */

loc_001030F2: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 8);
    ecx = MEM32(esp + 0xC);
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ebx;

loc_0010310B: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0010311E; /* je: equal / zero */

loc_00103113: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0010311Bu); RECOMP_ABI_CALL(0x0005BC70u, sub_0005BC70); /* call 0x0005BC70 */

loc_0010311B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0010311E: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00103130
 * Original: 0x00103130 - 0x001031A1 (113 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103130(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00103130: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x64D880);
    edx = MEM32(0x64D858);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = edx;
    edx = MEM32(eax + 0x6270D8);
    MEM32(0x64D87C) = ecx;
    ecx = MEM32(eax + 0x6270DC);
    MEM32(esp + 4) = edx;
    edx = MEM32(eax + 0x6270E0);
    MEM32(0x64D854) = eax;
    eax = esp + 4;
    PUSH32(esp, eax);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x10) = edx;
    PUSH32(esp, 0x00103192u); RECOMP_ABI_CALL(0x00103090u, sub_00103090); /* call 0x00103090 */

loc_00103192: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
 * sub_001031B0
 * Original: 0x001031B0 - 0x001032B8 (264 bytes, 77 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_001031B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001031B0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_001032B2; /* je: equal / zero */

loc_001031C6: ;
    edi = MEM32(esi);
    edi = edi & 0x400000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_001031F3; /* je: equal / zero */

loc_001031D0: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax + 8);
    edx = MEM32(eax + 0x44);
    ecx = MEM32(eax + 0x40);
    ebx = MEM32(eax + 0x48);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x1C) = edx;
    edx = esi;
    MEM32(esp + 0x18) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001031F1u); RECOMP_ABI_CALL(0x0002B630u, sub_0002B630); /* call 0x0002B630 */

loc_001031F1: ;
    goto loc_001031F7;

loc_001031F3: ;
    ebx = MEM32(esp + 0x20);

loc_001031F7: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(eax + 0x30);
    edx = MEM32(eax + 0x34);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 8);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(esp + 0xC) = ecx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x10) = edx;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x34); /* subss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x38); /* subss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = esp + 0x2C;
    ecx = esp + 0x14;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00103278u); RECOMP_ABI_CALL(0x000C4550u, sub_000C4550); /* call 0x000C4550 */

loc_00103278: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010329F; /* je: equal / zero */

loc_0010327F: ;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00103286u); RECOMP_ABI_CALL(0x0002B750u, sub_0002B750); /* call 0x0002B750 */

loc_00103286: ;
    ecx = MEM32(esi + 0x14);
    eax = MEM32(ecx + 8);
    edx = MEM32(esp + 0x18);
    ecx = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edx;
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ebx;

loc_0010329F: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001032B2; /* je: equal / zero */

loc_001032A7: ;
    PUSH32(esp, 3);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001032AFu); RECOMP_ABI_CALL(0x0005BC70u, sub_0005BC70); /* call 0x0005BC70 */

loc_001032AF: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001032B2: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_001032C0
 * Original: 0x001032C0 - 0x0010330F (79 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_001032C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_001032C0: ;
    eax = MEM32(0x64D880);
    edx = MEM32(0x64D858);
    ecx = MEM32(0x64D878);
    PUSH32(esp, esi);
    esi = MEM32(0x64D884);
    MEM32(0x64D884) = eax;
    eax = MEM32(0x64D854);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(0x64D858) = edx;
    edx = MEM32(eax + 0x6270D8);
    PUSH32(esp, edx);
    MEM32(0x64D87C) = ecx;
    MEM32(0x64D854) = eax;
    PUSH32(esp, 0x00103303u); RECOMP_ABI_CALL(0x001031B0u, sub_001031B0); /* call 0x001031B0 */

loc_00103303: ;
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
 * sub_00103310
 * Original: 0x00103310 - 0x0010348B (379 bytes, 128 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00103310(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00103310: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00103443; /* je: equal / zero */

loc_0010332B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    ecx = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_00103355; /* je: equal / zero */

loc_00103331: ;
    ecx = MEM32(ecx + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010334F; /* je: equal / zero */

loc_0010333A: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010334F; /* je: equal / zero */

loc_00103341: ;
    ecx = MEM32(ecx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0010334F; /* je: equal / zero */

loc_00103348: ;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00103331; /* jne: not equal / not zero */

loc_0010334D: ;
    goto loc_00103357;

loc_0010334F: ;
    MEM32(esp + 0xC) = ebx;
    goto loc_0010335B;

loc_00103355: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00103357: ;
    MEM32(esp + 0xC) = ecx;

loc_0010335B: ;
    edx = MEM32(esp + 0x50);
    ecx = 0x3F800000;
    MEM32(esp + 0x10) = ecx;
    MEM32(esp + 0x24) = ecx;
    MEM32(esp + 0x38) = ecx;
    MEM32(esp + 0x4C) = ecx;
    ecx = MEM32(esp + 0xC);
    edx = edx & 0xFFFFFFC3u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x20) = eax;
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = eax;
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = eax;
    MEM32(esp + 0x3C) = eax;
    MEM32(esp + 0x40) = eax;
    MEM32(esp + 0x44) = eax;
    MEM32(esp + 0x48) = eax;
    MEM32(esp + 0x50) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_001033FB; /* je: equal / zero */

loc_001033B3: ;
    goto loc_001033B7;

loc_001033B5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001033B7: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_001033C8; /* je: equal / zero */

loc_001033BF: ;
    eax = MEM32(ebx + 0x14);
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_001033C8: ;
    PUSH32(esp, eax);
    edi = esp + 0x14;
    esi = esp + 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x001033D6u); RECOMP_ABI_CALL(0x000C3470u, sub_000C3470); /* call 0x000C3470 */

loc_001033D6: ;
    ecx = 0x14;
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
    ebx = MEM32(ebx + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001033F3; /* je: equal / zero */

loc_001033E7: ;
    ebx = MEM32(ebx + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_001033F3; /* je: equal / zero */

loc_001033EE: ;
    ebx = MEM32(ebx + 4);
    goto loc_001033F5;

loc_001033F3: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_001033F5: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esp + 0xC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_001033B5; /* jne: not equal / not zero */

loc_001033FB: ;
    ecx = MEM32(esp + 0xC);
    edx = MEM32(ecx + 0xC);
    PUSH32(esp, edx);
    edi = esp + 0x14;
    esi = esp + 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00103410u); RECOMP_ABI_CALL(0x000C3470u, sub_000C3470); /* call 0x000C3470 */

loc_00103410: ;
    eax = MEM32(esp + 0x74);
    edx = MEM32(esp + 0x78);
    ecx = eax + -2147483648;
    eax = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x7C);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00103443: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00103459; /* je: equal / zero */

loc_0010344A: ;
    edx = MEM32(ebx + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00103456u); RECOMP_ABI_CALL(0x0002B680u, sub_0002B680); /* call 0x0002B680 */

loc_00103456: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00103459: ;
    eax = MEM32(ebx + 0xC);
    edx = MEM32(eax + 0x10);
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = edx;
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x80000000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 4) = edx;
    eax = MEM32(eax + 8);
    POP32(esp, edi);
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, esi);
    MEM32(ecx + 8) = eax;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00103490
 * Original: 0x00103490 - 0x0010350C (124 bytes, 28 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00103490(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00103490: ;
    ecx = MEM32(0x64D880);
    eax = MEM32(0x64D884);
    edx = MEM32(0x64D878);
    MEM32(0x64D884) = ecx;
    ecx = esp + -12;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    MEM32(0x64D87C) = edx;
    PUSH32(esp, 0x001034BAu); RECOMP_ABI_CALL(0x00103310u, sub_00103310); /* call 0x00103310 */

loc_001034BA: ;
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
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}
