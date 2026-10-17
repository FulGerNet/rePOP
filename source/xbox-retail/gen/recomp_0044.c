/**
 * PoP SoT xbox-retail - Recompiled code chunk 44
 * Functions: 250 (0x0036684A - 0x00368787)
 */

#define RECOMP_GENERATED_CODE
#include "recomp_funcs.h"
#include <math.h>

/**
 * sub_0036684A
 * Original: 0x0036684A - 0x00366895 (75 bytes, 29 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036684A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036684A: ;
    ecx = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x28);
    edx = MEM32(ecx + 0x20);
    SET_LO16(eax, MEM16(edx + eax * 2 + -2));
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(9) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + 9);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_00366891; /* je: equal / zero */

loc_00366863: ;
    PUSH32(esp, edi);

loc_00366864: ;
    eax = MEM32(ecx);
    eax = MEM32(eax + esi * 4);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, 6);
    POP32(esp, edi);
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    edx = MEM32(ecx + 8);
    MEM32(edx + esi * 4) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x28);
    edx = MEM32(ecx + 0x20);
    SET_LO16(eax, MEM16(edx + eax * 2 + -2));
    _fb = (uint32_t)(9) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + 9);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax = ZX16(LO16(eax));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00366864; /* jl: less (signed <) */

loc_00366890: ;
    POP32(esp, edi);

loc_00366891: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00366895
 * Original: 0x00366895 - 0x003668DF (74 bytes, 26 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366895(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366895: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(9) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + 9);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_003668DA; /* je: equal / zero */

loc_003668AF: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(eax + edi * 4));
    PUSH32(esp, 0x003668BDu); RECOMP_ABI_CALL(0x0035CC08u, sub_0035CC08); /* call 0x0035CC08 */

loc_003668BD: ;
    ecx = MEM32(esi);
    MEM32(ecx + edi * 4) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    _fb = (uint32_t)(9) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + 9);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax = ZX16(LO16(eax));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003668AF; /* jl: less (signed <) */

loc_003668DA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003668DF
 * Original: 0x003668DF - 0x0036693F (96 bytes, 33 insns)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003668DF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003668DF: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(esi + ecx * 2 + -2));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00366917; /* je: equal / zero */

loc_003668F6: ;
    ecx = MEM32(eax);
    esi = MEM32(esp + 0xC);
    ecx = ecx + edx * 4;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + esi;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    esi = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(esi + ecx * 2 + -2));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ecx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003668F6; /* jl: less (signed <) */

loc_00366917: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edx = MEM32(eax + 0x20);
    ecx = ZX16(MEM16(edx + ecx * 2 + -2));
    eax = MEM32(eax);
    edx = ecx + 1;
    edx = ZX16(LO16(edx));
    edx = MEM32(eax + edx * 4);
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esp + 0x10);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ZX16(LO16(ecx));
    MEM32(eax + ecx * 4) = edx;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036693F
 * Original: 0x0036693F - 0x003669D9 (154 bytes, 57 insns)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0036693F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036693F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    MEM32(esi) = 0x7FFFFFFF;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edx = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    edx = MEM32(eax);
    _fb = (uint32_t)(2) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 2);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ZX16(LO16(ecx));
    ecx = MEM32(edx + ecx * 4);
    edx = MEM32(ebp + 0xC);
    MEM32(edx) = ecx;
    ebx = MEM32(eax + 0x20);
    PUSH32(esp, edi);
    edi = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    SET_LO16(edi, MEM16(ebx + edi * 2 + -2));
    ebx = MEM32(eax);
    SET_LO16(edi, LO16(edi) + 1);
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    edi = ZX16(LO16(edi));
    _fb = (uint32_t)(MEM32(ebx + edi * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edx) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    ebx = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(ebx + ecx * 2 + -2));
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = 0x80000000u;
    if ((_fa == 0)) goto loc_003669C8; /* je: equal / zero */

loc_0036699F: ;
    ecx = MEM32(eax);
    ecx = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003669AC; /* jle: less or equal (signed <=) */

loc_003669A9: ;
    MEM32(ebp + 0x10) = ecx;

loc_003669AC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003669B2; /* jge: greater or equal (signed >=) */

loc_003669B0: ;
    MEM32(esi) = ecx;

loc_003669B2: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    ebx = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(ebx + ecx * 2 + -2));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ecx));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0036699F; /* jl: less (signed <) */

loc_003669C8: ;
    eax = MEM32(edx);
    _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = eax;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003669D9
 * Original: 0x003669D9 - 0x00366ECA (1265 bytes, 380 insns)
 * CC: cdecl, 15 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003669D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003669D9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 9);
    POP32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x20));
    esi = ebx;
    PUSH32(esp, MEM32(ebp + 0x1C));
    edi = ebp + -48;
    PUSH32(esp, MEM32(ebp + 0x18));
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
    PUSH32(esp, 0x003669FEu); RECOMP_ABI_CALL(0x0035D3BEu, sub_0035D3BE); /* call 0x0035D3BE */

loc_003669FE: ;
    _fa = (uint32_t)(MEM16(ebp + 0x24)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x24), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00366A0C; /* jne: not equal / not zero */

loc_00366A05: ;
    _fa = (uint32_t)(MEM16(ebp + 0x28)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x28), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00366A2D; /* je: equal / zero */

loc_00366A0C: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366A19u); RECOMP_ABI_CALL(0x0035CB3Cu, sub_0035CB3C); /* call 0x0035CB3C */

loc_00366A19: ;
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x32 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00366A2D; /* jbe: below or equal (unsigned <=) */

loc_00366A27: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366A2Du); RECOMP_ABI_CALL(0x0036541Cu, sub_0036541C); /* call 0x0036541C */

loc_00366A2D: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366A33u); RECOMP_ABI_CALL(0x0035D263u, sub_0035D263); /* call 0x0035D263 */

loc_00366A33: ;
    edi = ZX16(MEM16(ebp + 0x14));
    eax = MEM32(ebp + 0x3C);
    ebx = MEM32(ebp + 8);
    esi = MEM32(ebp + 0x10);
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x174) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00366A7C; /* je: equal / zero */

loc_00366A4D: ;
    MEM32(ebx + 0x138) = edi;
    MEM32(ebx + 0x13C) = edi;
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366A63u); RECOMP_ABI_CALL(0x0035D246u, sub_0035D246); /* call 0x0035D246 */

loc_00366A63: ;
    MEM32(ebx + 0x140) = eax;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, MEM32(esi + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366A74u); RECOMP_ABI_CALL(0x0035D246u, sub_0035D246); /* call 0x0035D246 */

loc_00366A74: ;
    MEM32(ebx + 0x144) = eax;
    goto loc_00366AD5;

loc_00366A7C: ;
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366A86u); RECOMP_ABI_CALL(0x0035D246u, sub_0035D246); /* call 0x0035D246 */

loc_00366A86: ;
    MEM32(ebx + 0x138) = eax;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, MEM32(esi + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366A97u); RECOMP_ABI_CALL(0x0035D246u, sub_0035D246); /* call 0x0035D246 */

loc_00366A97: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    ecx = MEM32(ebx + 0x138);
    MEM32(ebx + 0x13C) = eax;
    MEM32(ebx + 0x140) = ecx;
    MEM32(ebx + 0x144) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00366AD5; /* je: equal / zero */

loc_00366AB5: ;
    edx = ecx + 0x8000;
    ecx = 0xFFFF0000u;
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx + 0x138) = edx;
    MEM32(ebx + 0x13C) = eax;

loc_00366AD5: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebx + 0x138));
    esi = ebx + 0xE0;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366AE8u); RECOMP_ABI_CALL(0x00365506u, sub_00365506); /* call 0x00365506 */

loc_00366AE8: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebx + 0x13C));
    MEM32(ebx + 0xA4) = eax;
    eax = ebx + 0xF0;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366B04u); RECOMP_ABI_CALL(0x00365506u, sub_00365506); /* call 0x00365506 */

loc_00366B04: ;
    ecx = MEM32(ebx + 0x138);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebx + 0xA8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00366B26; /* jne: not equal / not zero */

loc_00366B14: ;
    _fa = (uint32_t)(MEM32(ebx + 0x13C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x13C), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00366B26; /* jne: not equal / not zero */

loc_00366B1C: ;
    eax = 0x1901;
    goto loc_00366EC3;

loc_00366B26: ;
    edx = MEM32(ebx + 0x13C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    edi = ebx + 0x100;
    if (CMP_L(_fas, _fbs)) goto loc_00366B65; /* jl: less (signed <) */

loc_00366B36: ;
    eax = MEM32(ebx + 0xA4);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    MEM32(ebx + 0xAC) = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(ebx + 0x110) = 0x10000;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366B57u); RECOMP_ABI_CALL(0x0035CC80u, sub_0035CC80); /* call 0x0035CC80 */

loc_00366B57: ;
    esi = MEM32(ebx + 0x138);
    MEM32(ebx + 0x114) = eax;
    goto loc_00366B8F;

loc_00366B65: ;
    esi = MEM32(ebp + -4);
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    MEM32(ebx + 0xAC) = eax;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366B79u); RECOMP_ABI_CALL(0x0035CC80u, sub_0035CC80); /* call 0x0035CC80 */

loc_00366B79: ;
    esi = MEM32(ebx + 0x13C);
    MEM32(ebx + 0x110) = eax;
    MEM32(ebx + 0x114) = 0x10000;

loc_00366B8F: ;
    eax = MEM32(ebx + 0x13C);
    ecx = MEM32(ebp + 0x40);
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = SX16(LO16(eax));
    MEM32(ecx) = eax;
    PUSH32(esp, MEM32(ebx + 0x13C));
    PUSH32(esp, MEM32(ebx + 0x138));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366BB6u); RECOMP_ABI_CALL(0x0035CFFDu, sub_0035CFFD); /* call 0x0035CFFD */

loc_00366BB6: ;
    edi = MEM32(ebp + 0x18);
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM8(ebx + 0x12C) = LO8(eax);
    eax = esi + 0x8000;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(ebx + 0xC) = LO16(eax);
    eax = edi + 0x8000;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(ebx + 0xE) = LO16(eax);
    MEM32(ebx + 0x10) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366BE4u); RECOMP_ABI_CALL(0x0035CF4Eu, sub_0035CF4E); /* call 0x0035CF4E */

loc_00366BE4: ;
    MEM8(ebx + 0x118) = LO8(eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -48;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366BFBu); RECOMP_ABI_CALL(0x0035D14Au, sub_0035D14A); /* call 0x0035D14A */

loc_00366BFB: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    MEM8(ebx + 0x119) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00366C10; /* je: equal / zero */

loc_00366C09: ;
    MEM8(ebx + 0x119) = 1;

loc_00366C10: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00366C1C; /* je: equal / zero */

loc_00366C15: ;
    MEM8(ebx + 0x119) = MEM8(ebx + 0x119) | 2;
    _fa = (uint32_t)(MEM8(ebx + 0x119)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00366C1C: ;
    _fa = (uint32_t)(MEM16(ebp + 0x24)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x24), LO16(eax) (16-bit) */
    ecx = MEM32(ebp + 0x34);
    esi = MEM32(ebp + 0x38);
    MEM16(ecx) = LO16(eax);
    MEM16(esi) = LO16(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00366C4D; /* jne: not equal / not zero */

loc_00366C2E: ;
    _fa = (uint32_t)(MEM16(ebp + 0x28)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x28), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00366C4D; /* jne: not equal / not zero */

loc_00366C34: ;
    MEM16(ebx + 0x166) = LO16(eax);
    MEM16(ebx + 0x164) = LO16(eax);

loc_00366C42: ;
    MEM32(ebx + 0x168) = eax;
    goto loc_00366EC1;

loc_00366C4D: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366C58u); RECOMP_ABI_CALL(0x0035CB3Cu, sub_0035CB3C); /* call 0x0035CB3C */

loc_00366C58: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    edi = eax;
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x8000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((0x10) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366C6Bu); RECOMP_ABI_CALL(0x0035D030u, sub_0035D030); /* call 0x0035D030 */

loc_00366C6B: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 4 (16-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00366C7F; /* jne: not equal / not zero */

loc_00366C74: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366C7Cu); RECOMP_ABI_CALL(0x0035D08Du, sub_0035D08D); /* call 0x0035D08D */

loc_00366C7C: ;
    MEM32(ebp + 0xC) = eax;

loc_00366C7F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x3C), 0 (32-bit) */
    ecx = 0x3E8;
    if (CMP_EQ(_fa, _fb)) goto loc_00366CA2; /* je: equal / zero */

loc_00366C8A: ;
    edx = ZX16(MEM16(ebp + 0x28));
    eax = ZX16(LO16(edi));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = ecx;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    edi = MEM32(ebp + 0x14);
    MEM16(esi) = LO16(eax);

loc_00366CA2: ;
    eax = ZX16(MEM16(ebp + 0x28));
    edx = ZX16(LO16(edi));
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x10) = edx;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edi = ecx;
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    edi = eax;
    eax = ZX16(MEM16(ebp + 0x24));
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 0x10));
    _fb = (uint32_t)(0xA) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0xA;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ebx + 0x164) = LO16(edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x3C), ecx (32-bit) */
    MEM16(ebx + 0x166) = LO16(eax);
    if (CMP_NE(_fa, _fb)) goto loc_00366CE0; /* jne: not equal / not zero */

loc_00366CDD: ;
    MEM16(esi) = LO16(edi);

loc_00366CE0: ;
    eax = ZX16(MEM16(ebp + 0xC));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00366D31; /* je: equal / zero */

loc_00366CE8: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00366D19; /* je: equal / zero */

loc_00366CEB: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00366D0A; /* je: equal / zero */

loc_00366CEE: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00366CFC; /* je: equal / zero */

loc_00366CF1: ;
    eax = MEM32(ebp + 0x34);
    MEM16(eax) = LO16(ecx);
    MEM16(esi) = LO16(ecx);
    goto loc_00366D3F;

loc_00366CFC: ;
    SET_LO16(eax, MEM16(esi));
    edx = MEM32(ebp + 0x34);
    MEM16(edx) = LO16(eax);
    MEM16(esi) = MEM16(esi) + 1;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00366D3F;

loc_00366D0A: ;
    edx = MEM32(ebp + 0x34);
    SET_LO16(eax, LO16(eax) | 0xFFFF);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    _fb = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(eax, LO16(eax) - MEM16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    MEM16(edx) = LO16(eax);
    goto loc_00366D3F;

loc_00366D19: ;
    SET_LO16(eax, MEM16(esi));
    edx = MEM32(ebp + 0x34);
    SET_LO16(eax, (uint32_t)(-(int32_t)LO16(eax)));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */
    MEM16(edx) = LO16(eax);
    SET_LO16(eax, LO16(eax) | 0xFFFF);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    _fb = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(eax, LO16(eax) - MEM16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    MEM16(esi) = LO16(eax);
    goto loc_00366D3F;

loc_00366D31: ;
    SET_LO16(eax, MEM16(esi));
    edx = MEM32(ebp + 0x34);
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM16(edx) = LO16(eax);
    MEM16(esi) = (uint32_t)(-(int32_t)MEM16(esi));
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */

loc_00366D3F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x3C), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00366E86; /* jne: not equal / not zero */

loc_00366D48: ;
    SET_LO16(eax, MEM16(ebp + 0x20));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x1C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + 0x1C) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00366E86; /* je: equal / zero */

loc_00366D56: ;
    eax = ZX16(MEM16(ebx + 0x166));
    PUSH32(esp, MEM32(ebp + -36));
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, MEM32(ebp + -44));
    MEM32(ebp + 0x18) = eax;
    eax = ZX16(MEM16(ebx + 0x164));
    eax = eax << 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366D7Bu); RECOMP_ABI_CALL(0x0035CC08u, sub_0035CC08); /* call 0x0035CC08 */

loc_00366D7B: ;
    PUSH32(esp, MEM32(ebp + -32));
    esi = eax;
    PUSH32(esp, MEM32(ebp + -48));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366D88u); RECOMP_ABI_CALL(0x0035CC08u, sub_0035CC08); /* call 0x0035CC08 */

loc_00366D88: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(ebp + -36));
    PUSH32(esp, MEM32(ebp + -44));
    if ((_fas >= 0)) goto loc_00366DA8; /* jns: not sign (positive) */

loc_00366D92: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366D97u); RECOMP_ABI_CALL(0x0035CC08u, sub_0035CC08); /* call 0x0035CC08 */

loc_00366D97: ;
    PUSH32(esp, MEM32(ebp + -32));
    esi = eax;
    PUSH32(esp, MEM32(ebp + -48));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366DA4u); RECOMP_ABI_CALL(0x0035CC08u, sub_0035CC08); /* call 0x0035CC08 */

loc_00366DA4: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_00366DBE;

loc_00366DA8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366DADu); RECOMP_ABI_CALL(0x0035CC08u, sub_0035CC08); /* call 0x0035CC08 */

loc_00366DAD: ;
    PUSH32(esp, MEM32(ebp + -32));
    edi = eax;
    PUSH32(esp, MEM32(ebp + -48));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366DBAu); RECOMP_ABI_CALL(0x0035CC08u, sub_0035CC08); /* call 0x0035CC08 */

loc_00366DBA: ;
    esi = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00366DBE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00366DD5; /* jne: not equal / not zero */

loc_00366DC2: ;
    MEM16(ebx + 0x166) = MEM16(ebx + 0x166) & LO16(esi);
    _fa = (uint32_t)(MEM16(ebx + 0x166)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(ebx + 0x164) = MEM16(ebx + 0x164) & LO16(esi);
    _fa = (uint32_t)(MEM16(ebx + 0x164)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    goto loc_00366E86;

loc_00366DD5: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -48));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366DDEu); RECOMP_ABI_CALL(0x0035CC80u, sub_0035CC80); /* call 0x0035CC80 */

loc_00366DDE: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -44));
    MEM32(ebp + -48) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366DEAu); RECOMP_ABI_CALL(0x0035CC80u, sub_0035CC80); /* call 0x0035CC80 */

loc_00366DEA: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -36));
    MEM32(ebp + -44) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366DF6u); RECOMP_ABI_CALL(0x0035CC80u, sub_0035CC80); /* call 0x0035CC80 */

loc_00366DF6: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -32));
    MEM32(ebp + -36) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366E02u); RECOMP_ABI_CALL(0x0035CC80u, sub_0035CC80); /* call 0x0035CC80 */

loc_00366E02: ;
    PUSH32(esp, 9);
    POP32(esp, ecx);
    MEM32(ebp + -32) = eax;
    esi = ebp + -48;
    edi = ebp + -84;
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
    MEM32(ebp + -80) = (uint32_t)(-(int32_t)MEM32(ebp + -80));
    _fa = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ebp + -72) = (uint32_t)(-(int32_t)MEM32(ebp + -72));
    _fa = (uint32_t)(MEM32(ebp + -72)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    esi = 0x10000;
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    eax = ebp + -48;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366E30u); RECOMP_ABI_CALL(0x0035D2C5u, sub_0035D2C5); /* call 0x0035D2C5 */

loc_00366E30: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366E3Eu); RECOMP_ABI_CALL(0x0035CB3Cu, sub_0035CB3C); /* call 0x0035CB3C */

loc_00366E3E: ;
    PUSH32(esp, esi);
    MEM32(ebp + 0x18) = eax;
    PUSH32(esp, esi);
    eax = ebp + -84;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366E56u); RECOMP_ABI_CALL(0x0035D2C5u, sub_0035D2C5); /* call 0x0035D2C5 */

loc_00366E56: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00366E5F; /* jge: greater or equal (signed >=) */

loc_00366E5D: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00366E5F: ;
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(ebx + 0x166) = LO16(eax);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00366E77; /* jge: greater or equal (signed >=) */

loc_00366E75: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_00366E77: ;
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(ebx + 0x164) = LO16(eax);

loc_00366E86: ;
    _fa = (uint32_t)(MEM8(ebx + 0x119)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x119), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00366E9C; /* jne: not equal / not zero */

loc_00366E8F: ;
    eax = MEM32(ebp + 0x30);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00366C42;

loc_00366E9C: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x2C);
    PUSH32(esp, 1);
    MEM32(ebp + 0x28) = eax;
    esi = ebx + 0x168;
    PUSH32(esp, esi);
    eax = ebp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0xA8));
    PUSH32(esp, MEM32(ebp + -4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366EBEu); RECOMP_ABI_CALL(0x00365577u, sub_00365577); /* call 0x00365577 */

loc_00366EBE: ;
    MEM32(esi) = MEM32(esi) & 0xFFFFFFC0u;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00366EC1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00366EC3: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 64; return; /* ret 60 */

}

/**
 * sub_00366ECA
 * Original: 0x00366ECA - 0x00366F36 (108 bytes, 38 insns)
 * CC: cdecl, 11 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00366ECA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366ECA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = ZX16(MEM16(ebp + 0x30));
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM32(esi + 0x174)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x174), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00366EEA; /* je: equal / zero */

loc_00366EE3: ;
    ebx = edi;
    MEM32(ebp + 0x30) = edi;
    goto loc_00366F05;

loc_00366EEA: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366EF5u); RECOMP_ABI_CALL(0x0035D246u, sub_0035D246); /* call 0x0035D246 */

loc_00366EF5: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    ebx = eax;
    PUSH32(esp, MEM32(ebp + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366F02u); RECOMP_ABI_CALL(0x0035D246u, sub_0035D246); /* call 0x0035D246 */

loc_00366F02: ;
    MEM32(ebp + 0x30) = eax;

loc_00366F05: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esi + 0xC0;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366F13u); RECOMP_ABI_CALL(0x00365506u, sub_00365506); /* call 0x00365506 */

loc_00366F13: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x30));
    MEM32(esi + 0x9C) = eax;
    eax = esi + 0xD0;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366F29u); RECOMP_ABI_CALL(0x00365506u, sub_00365506); /* call 0x00365506 */

loc_00366F29: ;
    POP32(esp, edi);
    MEM32(esi + 0xA0) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 48; return; /* ret 44 */

}

/**
 * sub_00366F36
 * Original: 0x00366F36 - 0x00366F85 (79 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366F36(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366F36: ;
    ecx = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x28);
    edx = MEM32(ecx + 0x20);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(edx + eax * 2 + -2));
    edx = MEM32(ecx + 8);
    SET_LO16(esi, LO16(esi) + 1);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX16(LO16(esi));
    edx = MEM32(edx + eax * 4);
    eax = MEM32(esp + 0xC);
    SET_LO16(eax, MEM16(eax + 0x16C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00366F6D; /* je: equal / zero */

loc_00366F61: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00366F6D; /* jne: not equal / not zero */

loc_00366F65: ;
    eax = edx + 2;
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00366F73;

loc_00366F6D: ;
    eax = edx + 0x20;
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00366F73: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00366F81u); RECOMP_ABI_CALL(0x00365FD2u, sub_00365FD2); /* call 0x00365FD2 */

loc_00366F81: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00366F85
 * Original: 0x00366F85 - 0x00366FD4 (79 bytes, 29 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00366F85(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366F85: ;
    ecx = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x28);
    edx = MEM32(ecx + 0x20);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(edx + eax * 2 + -2));
    edx = MEM32(ecx + 8);
    SET_LO16(esi, LO16(esi) + 1);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX16(LO16(esi));
    edx = MEM32(edx + eax * 4);
    eax = MEM32(esp + 0xC);
    SET_LO16(eax, MEM16(eax + 0x16C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00366FBC; /* je: equal / zero */

loc_00366FB0: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00366FBC; /* jne: not equal / not zero */

loc_00366FB4: ;
    eax = edx + 2;
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_00366FC2;

loc_00366FBC: ;
    eax = edx + 0x20;
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00366FC2: ;
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00366FD0u); RECOMP_ABI_CALL(0x00365FD2u, sub_00365FD2); /* call 0x00365FD2 */

loc_00366FD0: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00366FD4
 * Original: 0x00366FD4 - 0x003670B4 (224 bytes, 77 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00366FD4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00366FD4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00366FE6u); RECOMP_ABI_CALL(0x003665EDu, sub_003665ED); /* call 0x003665ED */

loc_00366FE6: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    ecx = MEM32(esi);
    edi = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x18);
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(ecx + eax * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx) = edi;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    ecx = MEM32(esi + 4);
    edi = MEM32(ebp + 0x10);
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(ecx + eax * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx + 4) = edi;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    ecx = MEM32(esi);
    _fb = (uint32_t)(6) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + 6);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax = ZX16(LO16(eax));
    eax = MEM32(ecx + eax * 4);
    ecx = MEM32(ebp + 0x1C);
    MEM32(ecx) = eax;
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ebx = MEM32(esi + 0x20);
    SET_LO16(edi, MEM16(ebx + edi * 2 + -2));
    ebx = MEM32(esi);
    _fb = (uint32_t)(5) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edi, LO16(edi) + 5);
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    edi = ZX16(LO16(edi));
    _fb = (uint32_t)(MEM32(ebx + edi * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebx + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    edi = MEM32(esi + 0x20);
    SET_LO16(eax, MEM16(edi + eax * 2 + -2));
    ebx = MEM32(esi + 4);
    _fb = (uint32_t)(6) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + 6);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    edi = ZX16(LO16(eax));
    eax = MEM32(ebp + 0x10);
    _fb = (uint32_t)(MEM32(ebx + edi * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebx + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 4) = eax;
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ebx = MEM32(esi + 0x20);
    SET_LO16(edi, MEM16(ebx + edi * 2 + -2));
    esi = MEM32(esi + 4);
    _fb = (uint32_t)(5) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edi, LO16(edi) + 5);
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    edi = ZX16(LO16(edi));
    _fb = (uint32_t)(MEM32(esi + edi * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM32(ecx + 4) = eax;
    esi = MEM32(edx);
    eax = MEM32(ebp + 0x20);
    MEM32(eax) = esi;
    edx = MEM32(edx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx);
    eax = MEM32(ebp + 0x24);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 4);
    POP32(esp, esi);
    MEM32(eax + 4) = ecx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_003670B4
 * Original: 0x003670B4 - 0x00367197 (227 bytes, 77 insns)
 * CC: cdecl, 8 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003670B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003670B4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003670C6u); RECOMP_ABI_CALL(0x00366664u, sub_00366664); /* call 0x00366664 */

loc_003670C6: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    edx = MEM32(esi);
    _fb = (uint32_t)(3) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + 3);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ebx = MEM32(ebp + 0x10);
    ecx = ZX16(LO16(eax));
    eax = MEM32(ebp + 0xC);
    edi = eax;
    _fb = (uint32_t)(MEM32(edx + ecx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(edx + ecx * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 0x18);
    MEM32(edx) = edi;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    edi = MEM32(esi + 0x20);
    SET_LO16(ecx, MEM16(edi + ecx * 2 + -2));
    edi = MEM32(esi + 4);
    _fb = (uint32_t)(3) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 3);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ZX16(LO16(ecx));
    _fb = (uint32_t)(MEM32(edi + ecx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(edi + ecx * 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx + 4) = ebx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    edi = MEM32(esi + 0x20);
    SET_LO16(ecx, MEM16(edi + ecx * 2 + -2));
    edi = MEM32(esi);
    _fb = (uint32_t)(8) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 8);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ZX16(LO16(ecx));
    _fb = (uint32_t)(MEM32(edi + ecx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edi + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x1C);
    MEM32(ecx) = eax;
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ebx = MEM32(esi + 0x20);
    SET_LO16(edi, MEM16(ebx + edi * 2 + -2));
    ebx = MEM32(esi);
    _fb = (uint32_t)(7) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edi, LO16(edi) + 7);
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    edi = ZX16(LO16(edi));
    _fb = (uint32_t)(MEM32(ebx + edi * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebx + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx) = eax;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    edi = MEM32(esi + 0x20);
    SET_LO16(eax, MEM16(edi + eax * 2 + -2));
    edi = MEM32(esi + 4);
    _fb = (uint32_t)(8) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + 8);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax = ZX16(LO16(eax));
    eax = MEM32(edi + eax * 4);
    MEM32(ecx + 4) = eax;
    edi = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ebx = MEM32(esi + 0x20);
    SET_LO16(edi, MEM16(ebx + edi * 2 + -2));
    esi = MEM32(esi + 4);
    _fb = (uint32_t)(7) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edi, LO16(edi) + 7);
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    edi = ZX16(LO16(edi));
    _fb = (uint32_t)(MEM32(esi + edi * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM32(ecx + 4) = eax;
    esi = MEM32(edx);
    eax = MEM32(ebp + 0x20);
    MEM32(eax) = esi;
    edx = MEM32(edx + 4);
    MEM32(eax + 4) = edx;
    edx = MEM32(ecx);
    eax = MEM32(ebp + 0x24);
    MEM32(eax) = edx;
    ecx = MEM32(ecx + 4);
    POP32(esp, esi);
    MEM32(eax + 4) = ecx;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 36; return; /* ret 32 */

}

/**
 * sub_00367197
 * Original: 0x00367197 - 0x00367231 (154 bytes, 52 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00367197(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367197: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(ebp + -8) = MEM32(ebp + -8) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -12) = 0x80000000u;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003671B1: ;
    edx = ZX8(MEM8(ebp + -3));
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(ebp + -4));
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ZX8(MEM8(ebp + -2));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ZX8(MEM8(ebp + -1));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ZX8(MEM8(ebp + -7));
    MEM32(eax + 0x76C1BC) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(ebp + -8));
    MEM32(ebp + -4) = MEM32(ebp + -4) >> 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ZX8(MEM8(ebp + -6));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ZX8(MEM8(ebp + -5));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ZX8(MEM8(ebp + -11));
    MEM32(ebp + -8) = MEM32(ebp + -8) << 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esi + 0x76C340) = ecx;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_HI8(ecx, MEM8(ebp + -12));
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ZX8(MEM8(ebp + -10));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = ZX8(MEM8(ebp + -9));
    MEM32(ebp + -12) = MEM32(ebp + -12) >> 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx | edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF80u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFF80u (32-bit) */
    MEM32(eax + 0x76C23C) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_003671B1; /* jg: greater (signed >) */

loc_0036722E: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00367231
 * Original: 0x00367231 - 0x00367242 (17 bytes, 7 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367231(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367231: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00367242
 * Original: 0x00367242 - 0x0036729A (88 bytes, 32 insns)
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00367242(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367242: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(esp + 0xC);
    eax = edx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((5) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = ecx + eax * 4;
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0x20 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00367284; /* jl: less (signed <) */

loc_00367263: ;
    eax = esi;
    PUSH32(esp, edi);
    eax = eax >> 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax;
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    edi = edi << 5;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);

loc_00367273: ;
    edx = MEM32(edx * 4 + 0x76C1C0);
    MEM32(ecx) = MEM32(ecx) | edx;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00367273; /* jne: not equal / not zero */

loc_00367284: ;
    eax = MEM32(edx * 4 + 0x76C1C0);
    eax = eax & MEM32(esi * 4 + 0x76C2C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    MEM32(ecx) = MEM32(ecx) | eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0036729A
 * Original: 0x0036729A - 0x003672BE (36 bytes, 15 insns)
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0036729A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036729A: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003672B9; /* je: equal / zero */

loc_003672A2: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);

loc_003672AB: ;
    esi = MEM32(ecx);
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003672AB; /* jne: not equal / not zero */

loc_003672B8: ;
    POP32(esp, esi);

loc_003672B9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003672BE
 * Original: 0x003672BE - 0x003672DB (29 bytes, 8 insns)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003672BE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003672BE: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    eax = ecx;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax * 4 + 0x76C240);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & MEM32(edx + ecx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003672DB
 * Original: 0x003672DB - 0x003672FC (33 bytes, 10 insns)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003672DB(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003672DB: ;
    eax = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    ecx = eax;
    eax = eax & 0x1F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(eax * 4 + 0x76C240);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((5) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = edx + ecx * 4;
    MEM32(ecx) = MEM32(ecx) | eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003672FC
 * Original: 0x003672FC - 0x003673A0 (164 bytes, 65 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003672FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003672FC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(eax + 8));
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(esi, MEM16(eax + 0xA));
    edx = MEM32(eax + 4);
    PUSH32(esp, edi);
    MEM16(ebp + -4) = LO16(ecx);
    PUSH32(esp, 8);
    POP32(esp, ecx);
    MEM32(ebp + -8) = ebx;
    SET_LO16(ebx, (uint32_t)(int32_t)SMEM8(ebx));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = 0xFF;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0xC));
    SET_LO16(ebx, LO16(ebx) >> LO8(ecx));
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    PUSH32(esp, 8);
    POP32(esp, edi);
    esi = ZX16(LO16(esi));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ZX16(LO16(ebx));
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ecx, MEM8(ecx + 0x430C70));
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx) = MEM8(edx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM16(ebp + -4)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -4), 0 (16-bit) */
    MEM32(ebp + 8) = ebx;
    if (CMP_LE(_fas, _fbs)) goto loc_00367397; /* jle: less or equal (signed <=) */

loc_00367359: ;
    ecx = ZX16(MEM16(ebp + -4));
    MEM32(ebp + -4) = ecx;

loc_00367360: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0xA));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00367373; /* jbe: below or equal (unsigned <=) */

loc_0036736D: ;
    MEM16(ebp + 8) = MEM16(ebp + 8) >> LO8(ecx);
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* shift result */
    goto loc_00367383;

loc_00367373: ;
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(ebp + -8);
    SET_LO16(ecx, (uint32_t)(int32_t)SMEM8(ecx));
    PUSH32(esp, 8);
    POP32(esp, edi);
    MEM32(ebp + 8) = ecx;

loc_00367383: ;
    ecx = ZX16(MEM16(ebp + 8));
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ecx, MEM8(ecx + 0x430C70));
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx) = MEM8(edx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 1;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00367360; /* jne: not equal / not zero */

loc_00367397: ;
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
 * sub_003673A0
 * Original: 0x003673A0 - 0x003673A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003673A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003673A0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_seh_ebp = ebp; sub_003E96D3(); return; /* tail jmp 0x003E96D3 */

}

/**
 * sub_003673A8
 * Original: 0x003673A8 - 0x003673AE (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003673A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003673A8: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x418248)); return; /* indirect tail jmp */

}

/**
 * sub_003673AE
 * Original: 0x003673AE - 0x003673B4 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003673AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003673AE: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x41824C)); return; /* indirect tail jmp */

}

/**
 * sub_003673B4
 * Original: 0x003673B4 - 0x003673BA (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003673B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003673B4: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x418250)); return; /* indirect tail jmp */

}

/**
 * sub_003673BA
 * Original: 0x003673BA - 0x003673C0 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003673BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003673BA: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x418254)); return; /* indirect tail jmp */

}

/**
 * sub_003673C0
 * Original: 0x003673C0 - 0x003673C6 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003673C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003673C0: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x418258)); return; /* indirect tail jmp */

}

/**
 * sub_003673C6
 * Original: 0x003673C6 - 0x003673CC (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003673C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003673C6: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x41825C)); return; /* indirect tail jmp */

}

/**
 * sub_003673CC
 * Original: 0x003673CC - 0x003673D2 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003673CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003673CC: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x4182A4)); return; /* indirect tail jmp */

}

/**
 * sub_003673D2
 * Original: 0x003673D2 - 0x003673D8 (6 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003673D2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003673D2: ;
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(0x4182BC)); return; /* indirect tail jmp */

}

/**
 * sub_003673D8
 * Original: 0x003673D8 - 0x003673EC (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003673D8(void)
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

loc_003673D8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); /* fst */
    PUSH32(esp, 0x003673E3u); RECOMP_ABI_CALL(0x0034E398u, sub_0034E398); /* call 0x0034E398 */

loc_003673E3: ;
    PUSH32(esp, 0x003673E8u); RECOMP_ABI_CALL(0x003673F5u, sub_003673F5); /* call 0x003673F5 */

loc_003673E8: ;
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
 * sub_003673F5
 * Original: 0x003673F5 - 0x003674A3 (174 bytes, 51 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003673F5(void)
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

loc_003673F5: ;
    PUSH32(esp, edx);
    /* wait - FPU sync */
    MEM16(esp) = g_fp_control_word; /* fnstcw word ptr [esp] */
    if (_flags /* je: equal / zero */) goto loc_00367469;

loc_003673FC: ;
    _fa = (uint32_t)(MEM16(esp)) & 0xFFFFu; _fb = (uint32_t)(0x27F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp), 0x27F (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00367409; /* je: equal / zero */

loc_00367404: ;
    PUSH32(esp, 0x00367409u); RECOMP_ABI_CALL(0x0034E325u, sub_0034E325); /* call 0x0034E325 */

loc_00367409: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FF00000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0036743D; /* jae: above or equal (unsigned >=) */

loc_00367410: ;
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */

loc_00367420: ;
    _fa = (uint32_t)(MEM32(0x447F58)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x447F58), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0034E3AE(); return; } /* jne: not equal / not zero */

loc_0036742D: ;
    edx = 0xD;
    ecx = 0x430D70;
    g_seh_ebp = ebp; sub_0034E3BB(); return; /* tail jmp 0x0034E3BB */

loc_0036743D: ;
    if (CMP_A(_fa, _fb)) goto loc_00367477; /* ja: above (unsigned >) */

loc_0036743F: ;
    eax = MEM32(esp + 0xC);
    ecx = eax;
    eax = eax & 0xFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_00367477; /* jne: not equal / not zero */

loc_00367450: ;
    ecx = ecx & 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_pop(); /* fstp st(0) */
    if ((_fa == 0)) goto loc_0036745E; /* je: equal / zero */

loc_0036745A: ;
    fp_push(3.14159265358979323846); /* fldpi */
    goto loc_00367420;

loc_0036745E: ;
    fp_push(0.0); /* fldz */
    goto loc_00367420;

loc_00367462: ;
    PUSH32(esp, 0x00367467u); RECOMP_ABI_CALL(0x0034E33Cu, sub_0034E33C); /* call 0x0034E33C */

loc_00367467: ;
    goto loc_00367484;

loc_00367469: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00367462; /* jne: not equal / not zero */

loc_00367470: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367462; /* jne: not equal / not zero */

loc_00367477: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x42D728)); /* fld */
    eax = 1;

loc_00367484: ;
    _fa = (uint32_t)(MEM32(0x447F58)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x447F58), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0034E3AE(); return; } /* jne: not equal / not zero */

loc_00367491: ;
    edx = 0xD;
    ecx = 0x430D70;
    PUSH32(esp, 0x003674A1u); RECOMP_ABI_CALL(0x0034E2D3u, sub_0034E2D3); /* call 0x0034E2D3 */

loc_003674A1: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003674A4
 * Original: 0x003674A4 - 0x0036751C (120 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003674A4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003674A4: ;
    ebx = MEM32(esp + 4);
    ebp = MEM32(ebx);
    esi = MEM32(ebx + 0x18);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(XBOX_FS_BASE)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(XBOX_FS_BASE) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_003674BF; /* je: equal / zero */

loc_003674B6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003674BCu); RECOMP_ABI_CALL(0x00347F38u, sub_00347F38); /* call 0x00347F38 */

loc_003674BC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003674BF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003674F4; /* je: equal / zero */

loc_003674C4: ;
    eax = ebx + 0x20;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003674CDu); RECOMP_ABI_CALL(0x00367634u, sub_00367634); /* call 0x00367634 */

loc_003674CD: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_003674E7; /* je: equal / zero */

loc_003674D1: ;
    eax = MEM32(ebx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x56433230) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x56433230 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_003674E7; /* jne: not equal / not zero */

loc_003674DB: ;
    eax = MEM32(ebx + 0x24);
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_003674F4; /* je: equal / zero */

loc_003674E2: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003674E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003674E3u); } /* indirect call */
    }

loc_003674E5: ;
    goto loc_003674F4;

loc_003674E7: ;
    eax = MEM32(ebx + 0x1C);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003674F1u); RECOMP_ABI_CALL(0x00347F7Au, sub_00347F7A); /* call 0x00347F7A */

loc_003674F1: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003674F4: ;
    PUSH32(esp, 0);
    eax = MEM32(ebx + 0x14);
    PUSH32(esp, 0x003674FEu); RECOMP_ABI_CALL(0x0034800Eu, sub_0034800E); /* call 0x0034800E */

loc_003674FE: ;
    edx = ebx;
    ebx = MEM32(edx + 4);
    edi = MEM32(edx + 8);
    esi = MEM32(edx + 0xC);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    esp = MEM32(edx + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; RECOMP_ITAIL(MEM32(edx + 0x14)); return; /* indirect tail jmp */

}

/**
 * sub_00367520
 * Original: 0x00367520 - 0x0036759B (123 bytes, 42 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367520: ;
    edx = MEM32(esp + 4);
    MEM32(edx) = ebp;
    MEM32(edx + 4) = ebx;
    MEM32(edx + 8) = edi;
    MEM32(edx + 0xC) = esi;
    MEM32(edx + 0x10) = esp;
    eax = MEM32(esp);
    MEM32(edx + 0x14) = eax;
    MEM32(edx + 0x20) = 0x56433230;
    MEM32(edx + 0x24) = 0;
    eax = MEM32(XBOX_FS_BASE);
    MEM32(edx + 0x18) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0036755D; /* jne: not equal / not zero */

loc_00367554: ;
    MEM32(edx + 0x1C) = 0xFFFFFFFFu;
    goto loc_00367598;

loc_0036755D: ;
    ecx = MEM32(esp + 8);
    ecx = ecx | ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0036756F; /* je: equal / zero */

loc_00367565: ;
    eax = MEM32(esp + 0xC);
    MEM32(edx + 0x24) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00367577; /* jne: not equal / not zero */

loc_0036756F: ;
    eax = MEM32(eax + 0xC);
    MEM32(edx + 0x1C) = eax;
    goto loc_00367598;

loc_00367577: ;
    eax = MEM32(esp + 0x10);
    MEM32(edx + 0x1C) = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00367598; /* je: equal / zero */

loc_00367581: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = esp + 0x1C;
    edi = edx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 6 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00367594; /* jbe: below or equal (unsigned <=) */

loc_0036758F: ;
    ecx = 6;

loc_00367594: ;
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

loc_00367598: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_0036759B
 * Original: 0x0036759B - 0x003675D9 (62 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036759B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0036759B: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003675A8; /* je: equal / zero */

loc_003675A2: ;
    MEM8(ecx) = 0x2D;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003675A8: ;
    PUSH32(esp, esi);
    esi = ecx;

loc_003675AB: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(esp + 8));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(esp + 8)); }
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(9) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 9 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003675BB; /* jbe: below or equal (unsigned <=) */

loc_003675B6: ;
    _fb = (uint32_t)(0x57) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 0x57);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    goto loc_003675BE;

loc_003675BB: ;
    _fb = (uint32_t)(0x30) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + 0x30);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */

loc_003675BE: ;
    MEM8(ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003675AB; /* ja: above (unsigned >) */

loc_003675C5: ;
    MEM8(ecx) = 0;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003675C9: ;
    SET_LO8(edx, MEM8(esi));
    SET_LO8(eax, MEM8(ecx));
    MEM8(ecx) = LO8(edx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM8(esi) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003675C9; /* jb: below (unsigned <) */

loc_003675D7: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_003675D9
 * Original: 0x003675D9 - 0x00367603 (42 bytes, 19 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003675D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003675D9: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xA) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0xA (32-bit) */
    eax = MEM32(ebp + 8);
    if (CMP_NE(_fa, _fb)) goto loc_003675EF; /* jne: not equal / not zero */

loc_003675E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003675EF; /* jge: greater or equal (signed >=) */

loc_003675E9: ;
    PUSH32(esp, 1);
    PUSH32(esp, 0xA);
    goto loc_003675F4;

loc_003675EF: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + 0x10));

loc_003675F4: ;
    ecx = MEM32(ebp + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003675FCu); RECOMP_ABI_CALL(0x0036759Bu, sub_0036759B); /* call 0x0036759B */

loc_003675FC: ;
    eax = MEM32(ebp + 0xC);
    POP32(esp, ecx);
    POP32(esp, ecx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00367604
 * Original: 0x00367604 - 0x0036760E (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367604(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367604: ;
    edx = 0x430D82;
    g_seh_ebp = ebp; sub_00367985(); return; /* tail jmp 0x00367985 */

}

/**
 * sub_00367634
 * Original: 0x00367634 - 0x00367676 (66 bytes, 23 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367634(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367634: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x41EC80);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367640u); RECOMP_ABI_CALL(0x00347864u, sub_00347864); /* call 0x00347864 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00367640: ;
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
    goto loc_0036766A;

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

loc_0036766A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367673u); RECOMP_ABI_CALL(0x0034789Fu, sub_0034789F); /* call 0x0034789F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00367673: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00367651
 * Original: 0x00367651 - 0x00367676 (37 bytes, 13 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367651(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367651: ;
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
 * sub_00367665
 * Original: 0x00367665 - 0x00367676 (17 bytes, 5 insns)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367665(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367665: ;
    esp = MEM32(ebp + -24);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    PUSH32(esp, 0x00367673u); RECOMP_ABI_CALL(0x0034789Fu, sub_0034789F); /* call 0x0034789F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00367673: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00367678
 * Original: 0x00367678 - 0x00367720 (168 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367678(void)
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

loc_00367678: ;
    MEM8(ebp + -144) = 0xFF;
    PUSH32(esp, 0x00367684u); RECOMP_ABI_CALL(0x00367720u, sub_00367720); /* call 0x00367720 */

loc_00367684: ;
    SET_LO8(ebx, LO8(ebx) | LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00367703; /* je: equal / zero */

loc_00367688: ;
    PUSH32(esp, 0x0036768Du); RECOMP_ABI_CALL(0x00367763u, sub_00367763); /* call 0x00367763 */

loc_0036768D: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    goto loc_003676DF;

    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x430D78)); /* fld */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); fp_pop(); /* fcompp  */
    /* wait - FPU sync */
    MEM16(ebp + -160) = (uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw word ptr [ebp - 0xa0] */
    /* wait - FPU sync */
    _fa = (uint32_t)(MEM8(ebp + -159)) & 0xFFu; _fb = (uint32_t)(0x41) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -159), 0x41 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00367712; /* jne: not equal / not zero */

loc_003676AE: ;
    PUSH32(esp, 0x003676B3u); RECOMP_ABI_CALL(0x00367720u, sub_00367720); /* call 0x00367720 */

loc_003676B3: ;
    SET_LO8(ebx, LO8(ebx) | LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00367712; /* je: equal / zero */

loc_003676B7: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    PUSH32(esp, 0x003676BEu); RECOMP_ABI_CALL(0x00367751u, sub_00367751); /* call 0x00367751 */

loc_003676BE: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    PUSH32(esp, 0x003676C5u); RECOMP_ABI_CALL(0x00367763u, sub_00367763); /* call 0x00367763 */

loc_003676C5: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    fp_st1() = RECOMP_FP_PC(fp_top() / fp_st1()); fp_pop(); /* fdivrp st(1) */
    esp += 4; return; /* ret */

    SET_LO8(ebx, LO8(ebx) | LO8(ebx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_0036770D; /* je: equal / zero */

loc_003676DA: ;
    PUSH32(esp, 0x003676DFu); RECOMP_ABI_CALL(0x00367751u, sub_00367751); /* call 0x00367751 */

loc_003676DF: ;
    fp_push(1.0); /* fld1 */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */
    g_seh_ebp = ebp; sub_0034E1E8(); return; /* tail jmp 0x0034E1E8 */

    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x42D6CC)); /* fld */
    g_seh_ebp = ebp; sub_0034E2B3(); return; /* tail jmp 0x0034E2B3 */

    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x42D6CC)); /* fld */
    esp += 4; return; /* ret */

loc_00367703: ;
    PUSH32(esp, 0x00367708u); RECOMP_ABI_CALL(0x0034E029u, sub_0034E029); /* call 0x0034E029 */

loc_00367708: ;
    g_seh_ebp = ebp; sub_0034E2B3(); return; /* tail jmp 0x0034E2B3 */

loc_0036770D: ;
    g_seh_ebp = ebp; sub_0034E029(); return; /* tail jmp 0x0034E029 */

loc_00367712: ;
    MEM8(ebp + -144) = 8;
    PUSH32(esp, 0x0036771Eu); RECOMP_ABI_CALL(0x0034E1FDu, sub_0034E1FD); /* call 0x0034E1FD */

loc_0036771E: ;
    goto loc_00367708;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00367720
 * Original: 0x00367720 - 0x00367751 (49 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367720(void)
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

loc_00367720: ;
    fp_push(1.44269504088896340736); /* fldl2e */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0036772Bu); RECOMP_ABI_CALL(0x0034E046u, sub_0034E046); /* call 0x0034E046 */

loc_0036772B: ;
    SET_LO8(ebx, ~LO8(ebx));
    _fa = (uint32_t)(MEM8(ebp + -159)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -159), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0036773F; /* je: equal / zero */

loc_00367736: ;
    PUSH32(esp, 0x0036773Bu); RECOMP_ABI_CALL(0x00367763u, sub_00367763); /* call 0x00367763 */

loc_0036773B: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_pop(); /* fstp st(0) */

loc_0036773F: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 0x40 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0036774C; /* jne: not equal / not zero */

loc_00367744: ;
    SET_HI8(ebx, ~HI8(ebx));
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */

loc_0036774C: ;
    g_seh_ebp = ebp; sub_0034E1E8(); return; /* tail jmp 0x0034E1E8 */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00367751
 * Original: 0x00367751 - 0x00367763 (18 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367751(void)
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

loc_00367751: ;
    PUSH32(esp, 0x00367756u); RECOMP_ABI_CALL(0x00367763u, sub_00367763); /* call 0x00367763 */

loc_00367756: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    SET_HI8(ebx, HI8(ebx) | HI8(ebx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_00367762; /* jne: not equal / not zero */

loc_0036775C: ;
    fp_push(1.0); /* fld1 */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); /* fadd st(1), st(0) */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */

loc_00367762: ;
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00367763
 * Original: 0x00367763 - 0x00367774 (17 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367763(void)
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

loc_00367763: ;
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_push(1.0); /* fld1 */
    SET_HI8(ebx, HI8(ebx) | HI8(ebx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_00367771; /* jne: not equal / not zero */

loc_0036776B: ;
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_top() = -fp_top(); /* fchs */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */

loc_00367771: ;
    fp_st1() = RECOMP_FP_PC(fp_top() / fp_st1()); fp_pop(); /* fdivrp st(1) */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00367774
 * Original: 0x00367774 - 0x003677B2 (62 bytes, 20 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00367774(void)
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

loc_00367774: ;
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
    _fa = (uint32_t)(MEM32(0x42D9E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x42D9E8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003677A3; /* je: equal / zero */

loc_0036778F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367794u); RECOMP_ABI_CALL(0x0034E157u, sub_0034E157); /* call 0x0034E157 */

loc_00367794: ;
    MEM8(ebp + -712) = MEM8(ebp + -712) | 3;
    _fa = (uint32_t)(MEM8(ebp + -712)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003677A0u); RECOMP_ABI_CALL(0x0036783Eu, sub_0036783E); /* call 0x0036783E */

loc_003677A0: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_003677A3: ;
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMD(ebp + -134) = fp_top(); /* fst */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    MEMD(ebp + -126) = fp_top(); /* fst */
    goto loc_0036778F;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003677B2
 * Original: 0x003677B2 - 0x003677EF (61 bytes, 17 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003677B2(void)
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

loc_003677B2: ;
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
    _fa = (uint32_t)(MEM32(0x42D9E8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x42D9E8), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003677E7; /* je: equal / zero */

loc_003677CC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003677D1u); RECOMP_ABI_CALL(0x0034E0F0u, sub_0034E0F0); /* call 0x0034E0F0 */

loc_003677D1: ;
    MEM8(ebp + -712) = MEM8(ebp + -712) | 1;
    _fa = (uint32_t)(MEM8(ebp + -712)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ebp + -712) = MEM8(ebp + -712) & 0xFD;
    _fa = (uint32_t)(MEM8(ebp + -712)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003677E4u); RECOMP_ABI_CALL(0x0036783Eu, sub_0036783E); /* call 0x0036783E */

loc_003677E4: ;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_003677E7: ;
    MEMD(ebp + -134) = fp_top(); /* fst */
    goto loc_003677CC;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_003677EF
 * Original: 0x003677EF - 0x00367837 (72 bytes, 21 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003677EF(void)
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

loc_003677EF: ;
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
    PUSH32(esp, 0x00367804u); RECOMP_ABI_CALL(0x003679B8u, sub_003679B8); /* call 0x003679B8 */

loc_00367804: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367812u); RECOMP_ABI_CALL(0x003679B8u, sub_003679B8); /* call 0x003679B8 */

loc_00367812: ;
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
    PUSH32(esp, 0x0036782Fu); RECOMP_ABI_CALL(0x0034E157u, sub_0034E157); /* call 0x0034E157 */

loc_0036782F: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367834u); RECOMP_ABI_CALL(0x00367837u, sub_00367837); /* call 0x00367837 */

loc_00367834: ;
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
 * sub_00367837
 * Original: 0x00367837 - 0x0036783E (7 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367837(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367837: ;
    MEM8(ebp + -712) = MEM8(ebp + -712) & 0xFE;
    _fa = (uint32_t)(MEM8(ebp + -712)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

    g_seh_ebp = ebp; sub_0036783E(); return; /* fallthrough 0x0036783E */

}

/**
 * sub_0036783E
 * Original: 0x0036783E - 0x00367985 (327 bytes, 99 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036783E(void)
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

loc_0036783E: ;
    _fa = (uint32_t)(MEM32(0x447F58)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x447F58), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367896; /* jne: not equal / not zero */

loc_00367847: ;
    MEMD(ebp + -720) = fp_top(); /* fst */
    SET_LO8(eax, MEM8(ebp + -144));
    SET_LO8(eax, LO8(eax) | LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00367871; /* je: equal / zero */

loc_00367857: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFF (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003678B6; /* je: equal / zero */

loc_0036785B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xFE) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xFE (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0036789E; /* je: equal / zero */

loc_0036785F: ;
    SET_LO8(eax, LO8(eax) | LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00367896; /* je: equal / zero */

loc_00367863: ;
    eax = SX8(LO8(eax));
    MEM32(ebp + -142) = eax;
    goto loc_00367923;

loc_00367871: ;
    SET_LO16(eax, MEM16(ebp + -164));
    SET_LO16(eax, LO16(eax) & 0x20);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_00367896; /* jne: not equal / not zero */

loc_0036787E: ;
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    SET_LO16(eax, LO16(eax) & 0x20);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00367896; /* je: equal / zero */

loc_00367887: ;
    MEM32(ebp + -142) = 8;
    goto loc_00367923;

loc_00367896: ;
    g_fp_control_word = MEM16(ebp + -164); /* fldcw word ptr [ebp - 0xa4] */
    /* wait - FPU sync */
    esp += 4; return; /* ret */

loc_0036789E: ;
    SET_LO16(eax, MEM16(ebp + -714));
    SET_LO16(eax, LO16(eax) & 0x7FF0);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    SET_LO16(eax, LO16(eax) | LO16(eax));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_003678C9; /* je: equal / zero */

loc_003678AE: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7FF0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7FF0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003678F7; /* je: equal / zero */

loc_003678B4: ;
    goto loc_00367871;

loc_003678B6: ;
    SET_LO16(eax, MEM16(ebp + -714));
    SET_LO16(eax, LO16(eax) & 0x7FF0);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x7FF0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x7FF0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003678F7; /* je: equal / zero */

loc_003678C7: ;
    goto loc_00367871;

loc_003678C9: ;
    MEM32(ebp + -142) = 4;
    fp_push(MEMD(0x41ECA4)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x41EC94)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x41ec94] */
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    /* sahf - store AH to flags */
    if ((g_fp_cmp == 0 || g_fp_cmp == 1) /* sahf */) goto loc_00367923; /* jae: above or equal (unsigned >=) */

loc_003678EF: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x41ECB4)); /* fmul qword ptr [0x41ecb4] */
    goto loc_00367923;

loc_003678F7: ;
    MEM32(ebp + -142) = 3;
    fp_push(MEMD(0x41EC9C)); /* fld double */
    { double _t = fp_top(); fp_top() = fp_st1(); fp_st1() = _t; } /* fxch st(1) */
    fp_top() = ldexp(fp_top(), (int)fp_st1()); /* fscale */
    fp_st1() = fp_top(); fp_pop(); /* fstp st(1) */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    fp_top() = fabs(fp_top()); /* fabs */
    g_fp_cmp = RECOMP_FCMP(fp_top(), MEMD(0x41EC8C)); g_fp_cc = RECOMP_FCMP_CC(g_fp_cmp); fp_pop(); /* fcomp qword ptr [0x41ec8c] */
    /* wait - FPU sync */
    eax = (eax & 0xFFFF0000u) | (uint32_t)(uint16_t)(((g_fp_top & 7u) << 11) | g_fp_cc); /* fnstsw ax <- fpu status */
    /* sahf - store AH to flags */
    if ((g_fp_cmp != 1) /* sahf */) goto loc_00367923; /* jbe: below or equal (unsigned <=) */

loc_0036791D: ;
    fp_top() = RECOMP_FP_PC(fp_top() * MEMD(0x41ECAC)); /* fmul qword ptr [0x41ecac] */

loc_00367923: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ebx = MEM32(ebp + -148);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + -138) = ebx;
    _fa = (uint32_t)(MEM8(ebp + -712)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + -712), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00367955; /* jne: not equal / not zero */

loc_0036793B: ;
    g_df = 0; /* cld */
    esi = ebp + 8;
    edi = ebp + -134;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    _fa = (uint32_t)(MEM8(ebx + 0xC)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0xC), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00367955; /* je: equal / zero */

loc_0036794D: ;
    esi = ebp + 0x10;
    edi = ebp + -126;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */

loc_00367955: ;
    MEMD(ebp + -118) = fp_top(); fp_pop(); /* fstp */
    eax = ebp + -142;
    ebx = ebp + -164;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    ebx = MEM32(ebp + -148);
    SET_LO8(eax, MEM8(ebx + 0xE));
    eax = SX8(LO8(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x00367978u); RECOMP_ABI_CALL(0x003500E8u, sub_003500E8); /* call 0x003500E8 */

loc_00367978: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    fp_push(MEMD(ebp + -118)); /* fld double */
    goto loc_00367896;

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00367985
 * Original: 0x00367985 - 0x003679B8 (51 bytes, 16 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00367985(void)
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

loc_00367985: ;
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
    PUSH32(esp, 0x0036799Au); RECOMP_ABI_CALL(0x003679B8u, sub_003679B8); /* call 0x003679B8 */

loc_0036799A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* wait - FPU sync */
    MEM16(ebp + -164) = g_fp_control_word; /* fnstcw word ptr [ebp - 0xa4] */
    MEM8(ebp + -712) = MEM8(ebp + -712) & 0xFD;
    _fa = (uint32_t)(MEM8(ebp + -712)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003679B0u); RECOMP_ABI_CALL(0x0034E0F0u, sub_0034E0F0); /* call 0x0034E0F0 */

loc_003679B0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003679B5u); RECOMP_ABI_CALL(0x00367837u, sub_00367837); /* call 0x00367837 */

loc_003679B5: ;
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
 * sub_003679B8
 * Original: 0x003679B8 - 0x003679F4 (60 bytes, 22 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003679B8(void)
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

loc_003679B8: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003679EE; /* jne: not equal / not zero */

loc_003679D0: ;
    SET_LO16(ebx, LO16(ebx) | 0x7FFF);
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(ebp + -2) = LO16(ebx);
    eax = MEM32(ebp + 0xC);
    ebx = MEM32(ebp + 8);
    { uint32_t _c = (uint32_t)(0xB) & 31u; if (_c && _c < 32u) { eax = (eax << _c) | (ebx >> (32 - _c)); _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shld result */ } }  /* shld */
    MEM32(ebp + -6) = eax;
    MEM32(ebp + -10) = ebx;
    fp_push(MEMF(ebp + -10)); /* fld */
    goto loc_003679F1;

loc_003679EE: ;
    fp_push(MEMD(ebp + 8)); /* fld double */

loc_003679F1: ;
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
 * sub_003679F4
 * Original: 0x003679F4 - 0x00367A36 (66 bytes, 26 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003679F4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003679F4: ;
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
    PUSH32(esp, 0x00367A0Cu); RECOMP_ABI_CALL(0x0033A2F8u, sub_0033A2F8); /* call 0x0033A2F8 */

loc_00367A0C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00367A14; /* jge: greater or equal (signed >=) */

loc_00367A10: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00367A14: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367A19u); RECOMP_ABI_CALL(0x003517E3u, sub_003517E3); /* call 0x003517E3 */

loc_00367A19: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00367A2A; /* je: equal / zero */

loc_00367A1E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 6 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367A31; /* jne: not equal / not zero */

loc_00367A23: ;
    MEM16(ebp + -2) = MEM16(ebp + -2) & 0;
    _fa = (uint32_t)(MEM16(ebp + -2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    goto loc_00367A31;

loc_00367A2A: ;
    MEM32(ebp + -4) = 1;

loc_00367A31: ;
    eax = MEM32(ebp + -4);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00367A36
 * Original: 0x00367A36 - 0x00367A66 (48 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367A36(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367A36: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x429E70);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367A42u); RECOMP_ABI_CALL(0x00347864u, sub_00347864); /* call 0x00347864 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00367A42: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367A4Fu); RECOMP_ABI_CALL(0x00367B99u, sub_00367B99); /* call 0x00367B99 */

loc_00367A4F: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    goto loc_00367A5A;

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00367A5A: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367A65u); RECOMP_ABI_CALL(0x00348D90u, sub_00348D90); /* call 0x00348D90 */

loc_00367A65: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00367A53
 * Original: 0x00367A53 - 0x00367A66 (19 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367A53(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367A53: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00367A57
 * Original: 0x00367A57 - 0x00367A66 (15 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367A57(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367A57: ;
    esp = MEM32(ebp + -24);
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 3);
    PUSH32(esp, 0x00367A65u); RECOMP_ABI_CALL(0x00348D90u, sub_00348D90); /* call 0x00348D90 */

loc_00367A65: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00367A66
 * Original: 0x00367A66 - 0x00367A74 (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367A66(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367A66: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x42D758)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(0x42D758) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367A6F; /* jne: not equal / not zero */

loc_00367A6E: ;
    esp += 4; return; /* ret */

loc_00367A6F: ;
    g_seh_ebp = ebp; sub_00367A36(); return; /* tail jmp 0x00367A36 */

}

/**
 * sub_00367A74
 * Original: 0x00367A74 - 0x00367A88 (20 bytes, 6 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367A74(void)
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

loc_00367A74: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEMD(esp) = fp_top(); /* fst */
    PUSH32(esp, 0x00367A7Fu); RECOMP_ABI_CALL(0x0034E398u, sub_0034E398); /* call 0x0034E398 */

loc_00367A7F: ;
    PUSH32(esp, 0x00367A84u); RECOMP_ABI_CALL(0x00367A91u, sub_00367A91); /* call 0x00367A91 */

loc_00367A84: ;
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
 * sub_00367A91
 * Original: 0x00367A91 - 0x00367B3F (174 bytes, 49 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367A91(void)
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

loc_00367A91: ;
    PUSH32(esp, edx);
    /* wait - FPU sync */
    MEM16(esp) = g_fp_control_word; /* fnstcw word ptr [esp] */
    if (_flags /* je: equal / zero */) goto loc_00367B05;

loc_00367A98: ;
    _fa = (uint32_t)(MEM16(esp)) & 0xFFFFu; _fb = (uint32_t)(0x27F) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esp), 0x27F (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00367AA5; /* je: equal / zero */

loc_00367AA0: ;
    PUSH32(esp, 0x00367AA5u); RECOMP_ABI_CALL(0x0034E325u, sub_0034E325); /* call 0x0034E325 */

loc_00367AA5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FF00000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FF00000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00367AD7; /* jae: above or equal (unsigned >=) */

loc_00367AAC: ;
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() + fp_st1()); /* fadd st(1) */
    fp_push(1.0); /* fld1 */
    fp_top() = RECOMP_FP_PC(fp_top() - g_fp_stack[(g_fp_top + 2) & 7]); /* fsub st(2) */
    fp_st1() = RECOMP_FP_PC(fp_st1() * fp_top()); fp_pop(); /* fmulp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    { fp_st1() = atan2(fp_st1(), fp_top()); fp_pop(); } /* fpatan */

loc_00367ABA: ;
    _fa = (uint32_t)(MEM32(0x447F58)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x447F58), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0034E3AE(); return; } /* jne: not equal / not zero */

loc_00367AC7: ;
    edx = 0xE;
    ecx = 0x4425A8;
    g_seh_ebp = ebp; sub_0034E3BB(); return; /* tail jmp 0x0034E3BB */

loc_00367AD7: ;
    if (CMP_A(_fa, _fb)) goto loc_00367B13; /* ja: above (unsigned >) */

loc_00367AD9: ;
    eax = MEM32(esp + 0xC);
    ecx = eax;
    eax = eax & 0xFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_00367B13; /* jne: not equal / not zero */

loc_00367AEA: ;
    ecx = ecx & 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x42D732)); /* fld */
    if ((_fa == 0)) goto loc_00367ABA; /* je: equal / zero */

loc_00367AFA: ;
    fp_top() = -fp_top(); /* fchs */
    goto loc_00367ABA;

loc_00367AFE: ;
    PUSH32(esp, 0x00367B03u); RECOMP_ABI_CALL(0x0034E33Cu, sub_0034E33C); /* call 0x0034E33C */

loc_00367B03: ;
    goto loc_00367B20;

loc_00367B05: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFF (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00367AFE; /* jne: not equal / not zero */

loc_00367B0C: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367AFE; /* jne: not equal / not zero */

loc_00367B13: ;
    fp_pop(); /* fstp st(0) */
    fp_push(MEMF(0x42D728)); /* fld */
    eax = 1;

loc_00367B20: ;
    _fa = (uint32_t)(MEM32(0x447F58)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x447F58), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0034E3AE(); return; } /* jne: not equal / not zero */

loc_00367B2D: ;
    edx = 0xE;
    ecx = 0x4425A8;
    PUSH32(esp, 0x00367B3Du); RECOMP_ABI_CALL(0x0034E2D3u, sub_0034E2D3); /* call 0x0034E2D3 */

loc_00367B3D: ;
    POP32(esp, edx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00367B3F
 * Original: 0x00367B3F - 0x00367B99 (90 bytes, 30 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00367B3F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00367B3F: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00367B55; /* je: equal / zero */

loc_00367B4E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xBB40E64Eu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xBB40E64Eu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367B97; /* jne: not equal / not zero */

loc_00367B55: ;
    PUSH32(esp, esi);
    eax = ebp + -8;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367B5Fu); RECOMP_ABI_CALL(0x003514A3u, sub_003514A3); /* call 0x003514A3 */

loc_00367B5F: ;
    esi = MEM32(ebp + -4);
    esi = esi ^ MEM32(ebp + -8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367B6Au); RECOMP_ABI_CALL(0x00331F07u, sub_00331F07); /* call 0x00331F07 */

loc_00367B6A: ;
    esi = esi ^ eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367B71u); RECOMP_ABI_CALL(0x003513B6u, sub_003513B6); /* call 0x003513B6 */

loc_00367B71: ;
    esi = esi ^ eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = ebp + -16;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367B7Cu); RECOMP_ABI_CALL(0x00351000u, sub_00351000); /* call 0x00351000 */

loc_00367B7C: ;
    eax = MEM32(ebp + -12);
    eax = eax ^ MEM32(ebp + -16);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = esi ^ eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x42D758) = esi;
    if ((_fa != 0)) goto loc_00367B96; /* jne: not equal / not zero */

loc_00367B8C: ;
    MEM32(0x42D758) = 0xBB40E64Eu;

loc_00367B96: ;
    POP32(esp, esi);

loc_00367B97: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00367B99
 * Original: 0x00367B99 - 0x00367D38 (415 bytes, 169 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367B99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367B99: ;
    PUSH32(esp, 0x11C);
    PUSH32(esp, 0x42A040);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367BA8u); RECOMP_ABI_CALL(0x00347864u, sub_00347864); /* call 0x00347864 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00367BA8: ;
    eax = MEM32(0x76C060);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00367BD1; /* je: equal / zero */

loc_00367BB1: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00367BBDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00367BBBu); } /* indirect call */
    }

loc_00367BBD: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00367BBF: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00367D1A;

    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

loc_00367BD1: ;
    eax = MEM32(ebp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00367BEC; /* je: equal / zero */

loc_00367BD7: ;
    MEM32(ebp + -32) = 0x42A01C;
    MEM32(ebp + -36) = 0x429F68;
    ebx = 0xD4;
    goto loc_00367BFF;

loc_00367BEC: ;
    MEM32(ebp + -32) = 0x429F48;
    MEM32(ebp + -36) = 0x429EA8;
    ebx = 0xB9;

loc_00367BFF: ;
    MEM8(ebp + -40) = 0;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    esi = 0x429E90;
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

loc_00367C22: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367C22; /* jne: not equal / not zero */

loc_00367C29: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00367C5F; /* jbe: below or equal (unsigned <=) */

loc_00367C33: ;
    eax = ebp + -300;
    edx = eax + 1;

loc_00367C3C: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367C3C; /* jne: not equal / not zero */

loc_00367C43: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + eax + -349;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 3);
    PUSH32(esp, 0x429E8C);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367C5Cu); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_00367C5C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00367C5F: ;
    eax = MEM32(ebp + -28);
    ecx = eax + 1;

loc_00367C65: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367C65; /* jne: not equal / not zero */

loc_00367C6C: ;
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
    PUSH32(esp, 0x00367C7Du); RECOMP_ABI_CALL(0x00347D50u, sub_00347D50); /* call 0x00347D50 */

loc_00367C7D: ;
    MEM32(ebp + -24) = esp;
    edx = esp;
    eax = MEM32(ebp + -32);
    esi = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00367C89: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(esi + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367C89; /* jne: not equal / not zero */

loc_00367C93: ;
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00367C96: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367C96; /* jne: not equal / not zero */

loc_00367C9E: ;
    ebx = 0x429E88;
    esi = ebx;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00367CAB: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367CAB; /* jne: not equal / not zero */

loc_00367CB3: ;
    esi = 0x429E7C;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    eax = MEM32(ebp + -28);
    esi = eax;

loc_00367CC1: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367CC1; /* jne: not equal / not zero */

loc_00367CC8: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00367CCD: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367CCD; /* jne: not equal / not zero */

loc_00367CD5: ;
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

loc_00367CE6: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367CE6; /* jne: not equal / not zero */

loc_00367CEE: ;
    esi = ebx;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    eax = MEM32(ebp + -36);
    esi = eax;

loc_00367CF8: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367CF8; /* jne: not equal / not zero */

loc_00367CFF: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00367D02: ;
    SET_LO8(ecx, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367D02; /* jne: not equal / not zero */

loc_00367D0A: ;
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

loc_00367D1A: ;
    PUSH32(esp, 3);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00367D21u); RECOMP_ABI_CALL(0x00348D90u, sub_00348D90); /* call 0x00348D90 */

loc_00367D21: ;
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
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00367BC8
 * Original: 0x00367BC8 - 0x00367D38 (368 bytes, 155 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367BC8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367BC8: ;
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
    if ((_fa == 0)) goto loc_00367BEC; /* je: equal / zero */

loc_00367BD7: ;
    MEM32(ebp + -32) = 0x42A01C;
    MEM32(ebp + -36) = 0x429F68;
    ebx = 0xD4;
    goto loc_00367BFF;

loc_00367BEC: ;
    MEM32(ebp + -32) = 0x429F48;
    MEM32(ebp + -36) = 0x429EA8;
    ebx = 0xB9;

loc_00367BFF: ;
    MEM8(ebp + -40) = 0;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    esi = 0x429E90;
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

loc_00367C22: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367C22; /* jne: not equal / not zero */

loc_00367C29: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00367C5F; /* jbe: below or equal (unsigned <=) */

loc_00367C33: ;
    eax = ebp + -300;
    edx = eax + 1;

loc_00367C3C: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367C3C; /* jne: not equal / not zero */

loc_00367C43: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + eax + -349;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 3);
    PUSH32(esp, 0x429E8C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00367C5Cu); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_00367C5C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00367C5F: ;
    eax = MEM32(ebp + -28);
    ecx = eax + 1;

loc_00367C65: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367C65; /* jne: not equal / not zero */

loc_00367C6C: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + ebx + 0xC;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x00367C7Du); RECOMP_ABI_CALL(0x00347D50u, sub_00347D50); /* call 0x00347D50 */

loc_00367C7D: ;
    MEM32(ebp + -24) = esp;
    edx = esp;
    eax = MEM32(ebp + -32);
    esi = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00367C89: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(esi + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367C89; /* jne: not equal / not zero */

loc_00367C93: ;
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00367C96: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367C96; /* jne: not equal / not zero */

loc_00367C9E: ;
    ebx = 0x429E88;
    esi = ebx;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00367CAB: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367CAB; /* jne: not equal / not zero */

loc_00367CB3: ;
    esi = 0x429E7C;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    eax = MEM32(ebp + -28);
    esi = eax;

loc_00367CC1: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367CC1; /* jne: not equal / not zero */

loc_00367CC8: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00367CCD: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367CCD; /* jne: not equal / not zero */

loc_00367CD5: ;
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

loc_00367CE6: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367CE6; /* jne: not equal / not zero */

loc_00367CEE: ;
    esi = ebx;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    eax = MEM32(ebp + -36);
    esi = eax;

loc_00367CF8: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367CF8; /* jne: not equal / not zero */

loc_00367CFF: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00367D02: ;
    SET_LO8(ecx, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367D02; /* jne: not equal / not zero */

loc_00367D0A: ;
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
    PUSH32(esp, 0x00367D21u); RECOMP_ABI_CALL(0x00348D90u, sub_00348D90); /* call 0x00348D90 */

loc_00367D21: ;
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
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00367BCC
 * Original: 0x00367BCC - 0x00367D38 (364 bytes, 152 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367BCC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367BCC: ;
    esp = MEM32(ebp + -24);
    g_seh_ebp = ebp; sub_00367BBF(); return; /* tail jmp 0x00367BBF */

    eax = MEM32(ebp + 8);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00367BEC; /* je: equal / zero */

loc_00367BD7: ;
    MEM32(ebp + -32) = 0x42A01C;
    MEM32(ebp + -36) = 0x429F68;
    ebx = 0xD4;
    goto loc_00367BFF;

loc_00367BEC: ;
    MEM32(ebp + -32) = 0x429F48;
    MEM32(ebp + -36) = 0x429EA8;
    ebx = 0xB9;

loc_00367BFF: ;
    MEM8(ebp + -40) = 0;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    esi = 0x429E90;
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

loc_00367C22: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367C22; /* jne: not equal / not zero */

loc_00367C29: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xB) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xB;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3C (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00367C5F; /* jbe: below or equal (unsigned <=) */

loc_00367C33: ;
    eax = ebp + -300;
    edx = eax + 1;

loc_00367C3C: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367C3C; /* jne: not equal / not zero */

loc_00367C43: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebp + eax + -349;
    MEM32(ebp + -28) = eax;
    PUSH32(esp, 3);
    PUSH32(esp, 0x429E8C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00367C5Cu); RECOMP_ABI_CALL(0x00347BD0u, sub_00347BD0); /* call 0x00347BD0 */

loc_00367C5C: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00367C5F: ;
    eax = MEM32(ebp + -28);
    ecx = eax + 1;

loc_00367C65: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367C65; /* jne: not equal / not zero */

loc_00367C6C: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax + ebx + 0xC;
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, 0x00367C7Du); RECOMP_ABI_CALL(0x00347D50u, sub_00347D50); /* call 0x00347D50 */

loc_00367C7D: ;
    MEM32(ebp + -24) = esp;
    edx = esp;
    eax = MEM32(ebp + -32);
    esi = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00367C89: ;
    SET_LO8(ecx, MEM8(eax));
    MEM8(esi + eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367C89; /* jne: not equal / not zero */

loc_00367C93: ;
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00367C96: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367C96; /* jne: not equal / not zero */

loc_00367C9E: ;
    ebx = 0x429E88;
    esi = ebx;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00367CAB: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367CAB; /* jne: not equal / not zero */

loc_00367CB3: ;
    esi = 0x429E7C;
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM32(edi) = MEM32(esi); esi += RECOMP_DF_STEP(4); edi += RECOMP_DF_STEP(4); /* movsd */
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    eax = MEM32(ebp + -28);
    esi = eax;

loc_00367CC1: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367CC1; /* jne: not equal / not zero */

loc_00367CC8: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = edx;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00367CCD: ;
    SET_LO8(ecx, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367CCD; /* jne: not equal / not zero */

loc_00367CD5: ;
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

loc_00367CE6: ;
    SET_LO8(eax, MEM8(edi + 1));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367CE6; /* jne: not equal / not zero */

loc_00367CEE: ;
    esi = ebx;
    MEM16(edi) = MEM16(esi); esi += RECOMP_DF_STEP(2); edi += RECOMP_DF_STEP(2); /* movsw */
    MEM8(edi) = MEM8(esi); esi += RECOMP_DF_STEP(1); edi += RECOMP_DF_STEP(1); /* movsb */
    eax = MEM32(ebp + -36);
    esi = eax;

loc_00367CF8: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367CF8; /* jne: not equal / not zero */

loc_00367CFF: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00367D02: ;
    SET_LO8(ecx, MEM8(edx + 1));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00367D02; /* jne: not equal / not zero */

loc_00367D0A: ;
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
    PUSH32(esp, 0x00367D21u); RECOMP_ABI_CALL(0x00348D90u, sub_00348D90); /* call 0x00348D90 */

loc_00367D21: ;
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
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00367D30
 * Original: 0x00367D30 - 0x00367D38 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367D30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367D30: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00367D42
 * Original: 0x00367D42 - 0x00367D4A (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367D42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367D42: ;
    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_003CC442(); return; /* tail jmp 0x003CC442 */

}

/**
 * sub_00367D4A
 * Original: 0x00367D4A - 0x00367D5F (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367D4A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367D4A: ;
    ecx = ebp + -1056;
    g_seh_ebp = ebp; sub_003DB44E(); return; /* tail jmp 0x003DB44E */

    eax = 0x42A10C;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367D5F
 * Original: 0x00367D5F - 0x00367D67 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367D5F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367D5F: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_00367D67
 * Original: 0x00367D67 - 0x00367D6F (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367D67(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367D67: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_00367D6F
 * Original: 0x00367D6F - 0x00367D81 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367D6F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367D6F: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A174;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367D81
 * Original: 0x00367D81 - 0x00367D93 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367D81(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367D81: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A198;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367D93
 * Original: 0x00367D93 - 0x00367D9B (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367D93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367D93: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_003CDF73(); return; /* tail jmp 0x003CDF73 */

}

/**
 * sub_00367D9B
 * Original: 0x00367D9B - 0x00367DA3 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367D9B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367D9B: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_003CDF73(); return; /* tail jmp 0x003CDF73 */

}

/**
 * sub_00367DA3
 * Original: 0x00367DA3 - 0x00367DB5 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367DA3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367DA3: ;
    ecx = ebp + -48;
    g_seh_ebp = ebp; sub_003CDF73(); return; /* tail jmp 0x003CDF73 */

    eax = 0x42A1CC;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367DB5
 * Original: 0x00367DB5 - 0x00367DC7 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367DB5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367DB5: ;
    ecx = ebp + 8;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A1F0;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367DC7
 * Original: 0x00367DC7 - 0x00367DD9 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367DC7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367DC7: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A214;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367DD9
 * Original: 0x00367DD9 - 0x00367DE1 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367DD9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367DD9: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_00367DE1
 * Original: 0x00367DE1 - 0x00367DE9 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367DE1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367DE1: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_003D2297(); return; /* tail jmp 0x003D2297 */

}

/**
 * sub_00367DE9
 * Original: 0x00367DE9 - 0x00367DF4 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367DE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367DE9: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003D0328(); return; /* tail jmp 0x003D0328 */

}

/**
 * sub_00367DF4
 * Original: 0x00367DF4 - 0x00367DFE (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367DF4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367DF4: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, 0x00367DFCu); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367DFC: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367DFE
 * Original: 0x00367DFE - 0x00367E08 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367DFE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367DFE: ;
    eax = 0x42A250;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367E08
 * Original: 0x00367E08 - 0x00367E1A (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E08(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E08: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_003D0350(); return; /* tail jmp 0x003D0350 */

    eax = 0x42A298;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367E1A
 * Original: 0x00367E1A - 0x00367E22 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E1A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E1A: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_003D2297(); return; /* tail jmp 0x003D2297 */

}

/**
 * sub_00367E22
 * Original: 0x00367E22 - 0x00367E2D (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E22(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E22: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_00367E2D
 * Original: 0x00367E2D - 0x00367E38 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E2D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E2D: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_00367E38
 * Original: 0x00367E38 - 0x00367E4D (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E38: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A2D4;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367E4D
 * Original: 0x00367E4D - 0x00367E57 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E4D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E4D: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x00367E55u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367E55: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367E57
 * Original: 0x00367E57 - 0x00367E61 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E57(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E57: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x00367E5Fu); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367E5F: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367E61
 * Original: 0x00367E61 - 0x00367E6B (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E61(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E61: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x00367E69u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367E69: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367E6B
 * Original: 0x00367E6B - 0x00367E75 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E6B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E6B: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x00367E73u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367E73: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367E75
 * Original: 0x00367E75 - 0x00367E7F (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E75(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E75: ;
    eax = 0x42A310;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367E7F
 * Original: 0x00367E7F - 0x00367E89 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E7F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E7F: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x00367E87u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367E87: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367E89
 * Original: 0x00367E89 - 0x00367E93 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E89(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E89: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x00367E91u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367E91: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367E93
 * Original: 0x00367E93 - 0x00367E9D (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E93(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E93: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x00367E9Bu); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367E9B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367E9D
 * Original: 0x00367E9D - 0x00367EA7 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367E9D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367E9D: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x00367EA5u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367EA5: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367EA7
 * Original: 0x00367EA7 - 0x00367EB1 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367EA7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367EA7: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x00367EAFu); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367EAF: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367EB1
 * Original: 0x00367EB1 - 0x00367EBB (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367EB1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367EB1: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x00367EB9u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367EB9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367EBB
 * Original: 0x00367EBB - 0x00367EC5 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367EBB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367EBB: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x00367EC3u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367EC3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367EC5
 * Original: 0x00367EC5 - 0x00367ECF (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367EC5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367EC5: ;
    eax = 0x42A364;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367ECF
 * Original: 0x00367ECF - 0x00367ED7 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367ECF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367ECF: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_003CDF73(); return; /* tail jmp 0x003CDF73 */

}

/**
 * sub_00367ED7
 * Original: 0x00367ED7 - 0x00367EDF (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367ED7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367ED7: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_00367EDF
 * Original: 0x00367EDF - 0x00367EF1 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367EDF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367EDF: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A398;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367EF1
 * Original: 0x00367EF1 - 0x00367EF9 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367EF1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367EF1: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_003D2297(); return; /* tail jmp 0x003D2297 */

}

/**
 * sub_00367EF9
 * Original: 0x00367EF9 - 0x00367F04 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367EF9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367EF9: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003D0333(); return; /* tail jmp 0x003D0333 */

}

/**
 * sub_00367F04
 * Original: 0x00367F04 - 0x00367F0F (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367F04(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367F04: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003D0E3B(); return; /* tail jmp 0x003D0E3B */

}

/**
 * sub_00367F0F
 * Original: 0x00367F0F - 0x00367F1A (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367F0F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367F0F: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003D0E3B(); return; /* tail jmp 0x003D0E3B */

}

/**
 * sub_00367F1A
 * Original: 0x00367F1A - 0x00367F2F (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367F1A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367F1A: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003D0E3B(); return; /* tail jmp 0x003D0E3B */

    eax = 0x42A3DC;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367F2F
 * Original: 0x00367F2F - 0x00367F39 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367F2F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367F2F: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x00367F37u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00367F37: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00367F39
 * Original: 0x00367F39 - 0x00367F43 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367F39(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367F39: ;
    eax = 0x42A274;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367F43
 * Original: 0x00367F43 - 0x00367F55 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367F43(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367F43: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_003D2E46(); return; /* tail jmp 0x003D2E46 */

    eax = 0x42A400;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367F55
 * Original: 0x00367F55 - 0x00367F5D (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367F55(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367F55: ;
    ecx = MEM32(ebp + -20);
    g_seh_ebp = ebp; sub_003D2297(); return; /* tail jmp 0x003D2297 */

}

/**
 * sub_00367F5D
 * Original: 0x00367F5D - 0x00367F72 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367F5D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367F5D: ;
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003D0328(); return; /* tail jmp 0x003D0328 */

    eax = 0x42A42C;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367F72
 * Original: 0x00367F72 - 0x00367F84 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367F72(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367F72: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A450;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367F84
 * Original: 0x00367F84 - 0x00367F96 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367F84(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367F84: ;
    ecx = ebp + -48;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A474;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367F96
 * Original: 0x00367F96 - 0x00367F9E (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367F96(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367F96: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_003D2297(); return; /* tail jmp 0x003D2297 */

}

/**
 * sub_00367F9E
 * Original: 0x00367F9E - 0x00367FB3 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367F9E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367F9E: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003CDF73(); return; /* tail jmp 0x003CDF73 */

    eax = 0x42A4A0;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367FB3
 * Original: 0x00367FB3 - 0x00367FC5 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367FB3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367FB3: ;
    ecx = ebp + 0xC;
    g_seh_ebp = ebp; sub_003CDF73(); return; /* tail jmp 0x003CDF73 */

    eax = 0x42A4D4;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367FC5
 * Original: 0x00367FC5 - 0x00367FD7 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367FC5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367FC5: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A4F8;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367FD7
 * Original: 0x00367FD7 - 0x00367FE9 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367FD7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367FD7: ;
    ecx = ebp + 0x1C;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A51C;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00367FE9
 * Original: 0x00367FE9 - 0x00367FF4 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367FE9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367FE9: ;
    ecx = ebp + -160;
    g_seh_ebp = ebp; sub_003CDF73(); return; /* tail jmp 0x003CDF73 */

}

/**
 * sub_00367FF4
 * Original: 0x00367FF4 - 0x00367FFF (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367FF4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367FF4: ;
    ecx = ebp + -200;
    g_seh_ebp = ebp; sub_003CDF73(); return; /* tail jmp 0x003CDF73 */

}

/**
 * sub_00367FFF
 * Original: 0x00367FFF - 0x00368007 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00367FFF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00367FFF: ;
    ecx = ebp + -76;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_00368007
 * Original: 0x00368007 - 0x0036800F (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368007(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368007: ;
    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_0036800F
 * Original: 0x0036800F - 0x00368017 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036800F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036800F: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_00368017
 * Original: 0x00368017 - 0x0036801F (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368017(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368017: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_003CDF73(); return; /* tail jmp 0x003CDF73 */

}

/**
 * sub_0036801F
 * Original: 0x0036801F - 0x00368027 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036801F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036801F: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_00368027
 * Original: 0x00368027 - 0x0036802F (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368027(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368027: ;
    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_0036802F
 * Original: 0x0036802F - 0x00368041 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036802F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036802F: ;
    ecx = ebp + -96;
    g_seh_ebp = ebp; sub_003CDF73(); return; /* tail jmp 0x003CDF73 */

    eax = 0x42A580;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00368041
 * Original: 0x00368041 - 0x0036805A (25 bytes, 7 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368041(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368041: ;
    eax = MEM32(ebp + -16);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00368059; /* je: equal / zero */

loc_0036804D: ;
    MEM32(ebp + -16) = MEM32(ebp + -16) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ebp + -48;
    g_seh_ebp = ebp; sub_003CDF73(); return; /* tail jmp 0x003CDF73 */

loc_00368059: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0036805A
 * Original: 0x0036805A - 0x00368064 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036805A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036805A: ;
    eax = 0x42A5A4;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00368064
 * Original: 0x00368064 - 0x0036806C (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368064(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368064: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_0036806C
 * Original: 0x0036806C - 0x00368074 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036806C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036806C: ;
    ecx = ebp + 0x10;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_00368074
 * Original: 0x00368074 - 0x0036807C (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368074(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368074: ;
    ecx = ebp + -64;
    g_seh_ebp = ebp; sub_003D0350(); return; /* tail jmp 0x003D0350 */

}

/**
 * sub_0036807C
 * Original: 0x0036807C - 0x0036808E (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036807C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036807C: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_003CDF73(); return; /* tail jmp 0x003CDF73 */

    eax = 0x42A5E0;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_0036808E
 * Original: 0x0036808E - 0x00368096 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036808E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036808E: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_00368096
 * Original: 0x00368096 - 0x003680A8 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368096(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368096: ;
    ecx = ebp + 0x10;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A60C;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003680A8
 * Original: 0x003680A8 - 0x003680B0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003680A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003680A8: ;
    ecx = MEM32(ebp + -24);
    g_seh_ebp = ebp; sub_003D2297(); return; /* tail jmp 0x003D2297 */

}

/**
 * sub_003680B0
 * Original: 0x003680B0 - 0x003680BB (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003680B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003680B0: ;
    ecx = MEM32(ebp + -24);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_003680BB
 * Original: 0x003680BB - 0x003680C6 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003680BB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003680BB: ;
    ecx = MEM32(ebp + -24);
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x1C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_003680C6
 * Original: 0x003680C6 - 0x003680D1 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003680C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003680C6: ;
    ecx = MEM32(ebp + -24);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x24;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_003680D1
 * Original: 0x003680D1 - 0x003680DB (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003680D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003680D1: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x003680D9u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_003680D9: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003680DB
 * Original: 0x003680DB - 0x003680E5 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003680DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003680DB: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x003680E3u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_003680E3: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003680E5
 * Original: 0x003680E5 - 0x003680EF (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003680E5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003680E5: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x003680EDu); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_003680ED: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003680EF
 * Original: 0x003680EF - 0x003680F9 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003680EF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003680EF: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x003680F7u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_003680F7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003680F9
 * Original: 0x003680F9 - 0x00368103 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003680F9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003680F9: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x00368101u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00368101: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00368103
 * Original: 0x00368103 - 0x0036810D (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368103(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368103: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x0036810Bu); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_0036810B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036810D
 * Original: 0x0036810D - 0x00368117 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036810D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036810D: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, 0x00368115u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00368115: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00368117
 * Original: 0x00368117 - 0x00368121 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368117(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368117: ;
    eax = 0x42A680;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00368121
 * Original: 0x00368121 - 0x00368129 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368121(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368121: ;
    ecx = MEM32(ebp + -40);
    g_seh_ebp = ebp; sub_003D2297(); return; /* tail jmp 0x003D2297 */

}

/**
 * sub_00368129
 * Original: 0x00368129 - 0x00368134 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368129(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368129: ;
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003D0333(); return; /* tail jmp 0x003D0333 */

}

/**
 * sub_00368134
 * Original: 0x00368134 - 0x0036813F (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368134(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368134: ;
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003D0E3B(); return; /* tail jmp 0x003D0E3B */

}

/**
 * sub_0036813F
 * Original: 0x0036813F - 0x0036814A (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036813F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036813F: ;
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x28;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003D0E3B(); return; /* tail jmp 0x003D0E3B */

}

/**
 * sub_0036814A
 * Original: 0x0036814A - 0x00368155 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036814A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036814A: ;
    ecx = MEM32(ebp + -40);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x3C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003D0E3B(); return; /* tail jmp 0x003D0E3B */

}

/**
 * sub_00368155
 * Original: 0x00368155 - 0x0036815F (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368155(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368155: ;
    PUSH32(esp, MEM32(ebp + -20));
    PUSH32(esp, 0x0036815Du); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_0036815D: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036815F
 * Original: 0x0036815F - 0x00368169 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036815F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036815F: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x00368167u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00368167: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00368169
 * Original: 0x00368169 - 0x00368173 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368169(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368169: ;
    PUSH32(esp, MEM32(ebp + -44));
    PUSH32(esp, 0x00368171u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00368171: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00368173
 * Original: 0x00368173 - 0x0036817D (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368173(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368173: ;
    eax = 0x42A6DC;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_0036817D
 * Original: 0x0036817D - 0x00368185 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036817D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036817D: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_003D2E46(); return; /* tail jmp 0x003D2E46 */

}

/**
 * sub_00368185
 * Original: 0x00368185 - 0x0036819D (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368185(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368185: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x88) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x88;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003D0350(); return; /* tail jmp 0x003D0350 */

    eax = 0x42A708;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_0036819D
 * Original: 0x0036819D - 0x003681A5 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036819D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036819D: ;
    ecx = ebp + 0x18;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

}

/**
 * sub_003681A5
 * Original: 0x003681A5 - 0x003681B7 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003681A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003681A5: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A734;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003681B7
 * Original: 0x003681B7 - 0x003681C9 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003681B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003681B7: ;
    ecx = ebp + 0x14;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A758;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003681C9
 * Original: 0x003681C9 - 0x003681D1 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003681C9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003681C9: ;
    ecx = ebp + -60;
    g_seh_ebp = ebp; sub_003D0350(); return; /* tail jmp 0x003D0350 */

}

/**
 * sub_003681D1
 * Original: 0x003681D1 - 0x003681E3 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003681D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003681D1: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_003D035B(); return; /* tail jmp 0x003D035B */

    eax = 0x42A784;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003681E3
 * Original: 0x003681E3 - 0x003681F5 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003681E3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003681E3: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_003CDDF2(); return; /* tail jmp 0x003CDDF2 */

    eax = 0x42A7A8;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003681F5
 * Original: 0x003681F5 - 0x003681FF (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003681F5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003681F5: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x003681FDu); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_003681FD: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003681FF
 * Original: 0x003681FF - 0x00368209 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003681FF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003681FF: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x00368207u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00368207: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00368209
 * Original: 0x00368209 - 0x00368213 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368209(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368209: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, 0x00368211u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00368211: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00368213
 * Original: 0x00368213 - 0x0036821D (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368213(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368213: ;
    PUSH32(esp, MEM32(ebp + -28));
    PUSH32(esp, 0x0036821Bu); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_0036821B: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0036821D
 * Original: 0x0036821D - 0x00368227 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036821D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036821D: ;
    eax = 0x42A818;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00368227
 * Original: 0x00368227 - 0x0036822F (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368227(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368227: ;
    ecx = ebp + -116;
    g_seh_ebp = ebp; sub_003D0350(); return; /* tail jmp 0x003D0350 */

}

/**
 * sub_0036822F
 * Original: 0x0036822F - 0x00368237 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036822F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036822F: ;
    ecx = ebp + -100;
    g_seh_ebp = ebp; sub_003D0350(); return; /* tail jmp 0x003D0350 */

}

/**
 * sub_00368237
 * Original: 0x00368237 - 0x0036823F (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368237(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368237: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_003D0333(); return; /* tail jmp 0x003D0333 */

}

/**
 * sub_0036823F
 * Original: 0x0036823F - 0x00368247 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036823F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036823F: ;
    ecx = ebp + -84;
    g_seh_ebp = ebp; sub_003D0333(); return; /* tail jmp 0x003D0333 */

}

/**
 * sub_00368247
 * Original: 0x00368247 - 0x0036824F (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368247(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368247: ;
    ecx = ebp + -52;
    g_seh_ebp = ebp; sub_003D0328(); return; /* tail jmp 0x003D0328 */

}

/**
 * sub_0036824F
 * Original: 0x0036824F - 0x00368259 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036824F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036824F: ;
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, 0x00368257u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_00368257: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00368259
 * Original: 0x00368259 - 0x00368263 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368259(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368259: ;
    eax = 0x42A864;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00368263
 * Original: 0x00368263 - 0x0036826B (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368263(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368263: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_003E1818(); return; /* tail jmp 0x003E1818 */

}

/**
 * sub_0036826B
 * Original: 0x0036826B - 0x00368276 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036826B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036826B: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003E178B(); return; /* tail jmp 0x003E178B */

}

/**
 * sub_00368276
 * Original: 0x00368276 - 0x00368281 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368276(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368276: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003E178B(); return; /* tail jmp 0x003E178B */

}

/**
 * sub_00368281
 * Original: 0x00368281 - 0x0036828C (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368281(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368281: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003E178B(); return; /* tail jmp 0x003E178B */

}

/**
 * sub_0036828C
 * Original: 0x0036828C - 0x00368297 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036828C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036828C: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003E178B(); return; /* tail jmp 0x003E178B */

}

/**
 * sub_00368297
 * Original: 0x00368297 - 0x003682AC (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368297(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368297: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003E178B(); return; /* tail jmp 0x003E178B */

    eax = 0x42A8B0;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003682AC
 * Original: 0x003682AC - 0x003682B4 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003682AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003682AC: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_003C9DCA(); return; /* tail jmp 0x003C9DCA */

}

/**
 * sub_003682B4
 * Original: 0x003682B4 - 0x003682C6 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003682B4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003682B4: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_003C9DCA(); return; /* tail jmp 0x003C9DCA */

    eax = 0x42A8DC;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003682C6
 * Original: 0x003682C6 - 0x003682D1 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003682C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003682C6: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003C9DCA(); return; /* tail jmp 0x003C9DCA */

}

/**
 * sub_003682D1
 * Original: 0x003682D1 - 0x003682E6 (21 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003682D1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003682D1: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003C9DCA(); return; /* tail jmp 0x003C9DCA */

    eax = 0x42A908;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003682E6
 * Original: 0x003682E6 - 0x003682F1 (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003682E6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003682E6: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003C9DCA(); return; /* tail jmp 0x003C9DCA */

}

/**
 * sub_003682F1
 * Original: 0x003682F1 - 0x003682FC (11 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003682F1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003682F1: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003C9DCA(); return; /* tail jmp 0x003C9DCA */

}

/**
 * sub_003682FC
 * Original: 0x003682FC - 0x00368312 (22 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003682FC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003682FC: ;
    PUSH32(esp, 0x3DF228);
    PUSH32(esp, 0x11);
    PUSH32(esp, 0x4C);
    eax = MEM32(ebp + -16);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00368311u); RECOMP_ABI_CALL(0x00348953u, sub_00348953); /* call 0x00348953 */

loc_00368311: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00368312
 * Original: 0x00368312 - 0x0036832A (24 bytes, 5 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368312(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368312: ;
    ecx = MEM32(ebp + -16);
    _fb = (uint32_t)(0x54C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x54C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_003DF954(); return; /* tail jmp 0x003DF954 */

    eax = 0x42A944;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_0036832A
 * Original: 0x0036832A - 0x0036833C (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036832A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036832A: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_003DF954(); return; /* tail jmp 0x003DF954 */

    eax = 0x42A968;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_0036833C
 * Original: 0x0036833C - 0x0036834E (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036833C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036833C: ;
    ecx = ebp + -28;
    g_seh_ebp = ebp; sub_003C9DCA(); return; /* tail jmp 0x003C9DCA */

    eax = 0x42A98C;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_0036834E
 * Original: 0x0036834E - 0x00368360 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036834E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036834E: ;
    ecx = ebp + -36;
    g_seh_ebp = ebp; sub_003DF954(); return; /* tail jmp 0x003DF954 */

    eax = 0x42A9B0;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00368360
 * Original: 0x00368360 - 0x00368368 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368360(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368360: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_003C9DCA(); return; /* tail jmp 0x003C9DCA */

}

/**
 * sub_00368368
 * Original: 0x00368368 - 0x0036837A (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368368(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368368: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_003C9DCA(); return; /* tail jmp 0x003C9DCA */

    eax = 0x42A9DC;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_0036837A
 * Original: 0x0036837A - 0x00368382 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036837A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036837A: ;
    ecx = ebp + -68;
    g_seh_ebp = ebp; sub_003C9DCA(); return; /* tail jmp 0x003C9DCA */

}

/**
 * sub_00368382
 * Original: 0x00368382 - 0x00368394 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368382(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368382: ;
    ecx = ebp + -56;
    g_seh_ebp = ebp; sub_003C9DCA(); return; /* tail jmp 0x003C9DCA */

    eax = 0x42AA08;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00368394
 * Original: 0x00368394 - 0x003683A6 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368394(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368394: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_003DF954(); return; /* tail jmp 0x003DF954 */

    eax = 0x42AA2C;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003683A6
 * Original: 0x003683A6 - 0x003683B8 (18 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003683A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003683A6: ;
    ecx = ebp + -24;
    g_seh_ebp = ebp; sub_003C9DCA(); return; /* tail jmp 0x003C9DCA */

    eax = 0x42AA50;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003683B8
 * Original: 0x003683B8 - 0x003683C2 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003683B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003683B8: ;
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, 0x003683C0u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_003683C0: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003683C2
 * Original: 0x003683C2 - 0x003683CC (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003683C2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003683C2: ;
    eax = 0x42AA74;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003683CC
 * Original: 0x003683CC - 0x003683D6 (10 bytes, 4 insns)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003683CC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003683CC: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0x003683D4u); RECOMP_ABI_CALL(0x003DE87Du, sub_003DE87D); /* call 0x003DE87D */

loc_003683D4: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003683D6
 * Original: 0x003683D6 - 0x003683E0 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003683D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003683D6: ;
    eax = 0x42AA98;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003683E0
 * Original: 0x003683E0 - 0x003683E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003683E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003683E0: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_003E1664(); return; /* tail jmp 0x003E1664 */

}

/**
 * sub_003683E8
 * Original: 0x003683E8 - 0x003683F0 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003683E8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003683E8: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_003E1433(); return; /* tail jmp 0x003E1433 */

}

/**
 * sub_003683F0
 * Original: 0x003683F0 - 0x003683F8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003683F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003683F0: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_003E1433(); return; /* tail jmp 0x003E1433 */

}

/**
 * sub_003683F8
 * Original: 0x003683F8 - 0x00368410 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003683F8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003683F8: ;
    ecx = ebp + -20;
    g_seh_ebp = ebp; sub_003E1433(); return; /* tail jmp 0x003E1433 */

    eax = 0x42AAD4;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00368410
 * Original: 0x00368410 - 0x00368418 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368410(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368410: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000B5DE0(); return; /* tail jmp 0x000B5DE0 */

}

/**
 * sub_00368430
 * Original: 0x00368430 - 0x00368438 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368430(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368430: ;
    eax = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000B3420(); return; /* tail jmp 0x000B3420 */

}

/**
 * sub_00368450
 * Original: 0x00368450 - 0x0036845D (13 bytes, 3 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368450: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x2E24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2E24;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00096E70(); return; /* tail jmp 0x00096E70 */

}

/**
 * sub_00368470
 * Original: 0x00368470 - 0x0036847B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368470(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368470: ;
    eax = ebp + -2100;
    g_seh_ebp = ebp; sub_00094700(); return; /* tail jmp 0x00094700 */

}

/**
 * sub_0036847B
 * Original: 0x0036847B - 0x00368490 (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036847B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036847B: ;
    eax = ebp + -2104;
    g_seh_ebp = ebp; sub_00096E60(); return; /* tail jmp 0x00096E60 */

    eax = 0x42AD20;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00368490
 * Original: 0x00368490 - 0x0036849B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368490: ;
    eax = ebp + -544;
    g_seh_ebp = ebp; sub_00094700(); return; /* tail jmp 0x00094700 */

}

/**
 * sub_0036849B
 * Original: 0x0036849B - 0x003684A6 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036849B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036849B: ;
    eax = ebp + -536;
    g_seh_ebp = ebp; sub_000946B0(); return; /* tail jmp 0x000946B0 */

}

/**
 * sub_003684A6
 * Original: 0x003684A6 - 0x003684C0 (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003684A6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003684A6: ;
    eax = ebp + -548;
    g_seh_ebp = ebp; sub_000946B0(); return; /* tail jmp 0x000946B0 */

    eax = 0x42AD54;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003684C0
 * Original: 0x003684C0 - 0x003684CB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003684C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003684C0: ;
    eax = ebp + -532;
    g_seh_ebp = ebp; sub_00094700(); return; /* tail jmp 0x00094700 */

}

/**
 * sub_003684CB
 * Original: 0x003684CB - 0x003684D6 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003684CB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003684CB: ;
    eax = ebp + -528;
    g_seh_ebp = ebp; sub_00093210(); return; /* tail jmp 0x00093210 */

}

/**
 * sub_003684D6
 * Original: 0x003684D6 - 0x003684F0 (26 bytes, 9 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003684D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003684D6: ;
    eax = ebp + -536;
    g_seh_ebp = ebp; sub_00094690(); return; /* tail jmp 0x00094690 */

    eax = 0x42ADAC;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003684F0
 * Original: 0x003684F0 - 0x003684FA (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003684F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003684F0: ;
    eax = 0x42AE30;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00368500
 * Original: 0x00368500 - 0x00368508 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368500(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368500: ;
    eax = ebp + -24;
    g_seh_ebp = ebp; sub_000CA800(); return; /* tail jmp 0x000CA800 */

}

/**
 * sub_00368520
 * Original: 0x00368520 - 0x00368528 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368520: ;
    eax = ebp + -16;
    g_seh_ebp = ebp; sub_00094700(); return; /* tail jmp 0x00094700 */

}

/**
 * sub_00368528
 * Original: 0x00368528 - 0x00368536 (14 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368528(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00368528: ;
    eax = MEM32(0x76B42C);
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(0x76B42C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00368536
 * Original: 0x00368536 - 0x00368540 (10 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368536(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368536: ;
    eax = 0x42AE80;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_00368540
 * Original: 0x00368540 - 0x00368548 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368540(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368540: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000966F0(); return; /* tail jmp 0x000966F0 */

}

/**
 * sub_00368548
 * Original: 0x00368548 - 0x00368560 (24 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368548(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368548: ;
    eax = MEM32(ebp + 4);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00096720(); return; /* tail jmp 0x00096720 */

    eax = 0x42AEAC;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00368560
 * Original: 0x00368560 - 0x0036856B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368560(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368560: ;
    eax = ebp + -5152;
    g_seh_ebp = ebp; sub_00094700(); return; /* tail jmp 0x00094700 */

}

/**
 * sub_0036856B
 * Original: 0x0036856B - 0x00368576 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036856B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036856B: ;
    eax = ebp + -5148;
    g_seh_ebp = ebp; sub_00093210(); return; /* tail jmp 0x00093210 */

}

/**
 * sub_00368576
 * Original: 0x00368576 - 0x00368581 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368576(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368576: ;
    eax = ebp + -5156;
    g_seh_ebp = ebp; sub_00094690(); return; /* tail jmp 0x00094690 */

}

/**
 * sub_00368581
 * Original: 0x00368581 - 0x003685A0 (31 bytes, 14 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368581(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368581: ;
    eax = ebp + -5156;
    g_seh_ebp = ebp; sub_00094690(); return; /* tail jmp 0x00094690 */

    eax = 0x42AEE8;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

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
 * sub_003685A0
 * Original: 0x003685A0 - 0x003685A8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003685A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003685A0: ;
    eax = ebp + 4;
    g_seh_ebp = ebp; sub_00094700(); return; /* tail jmp 0x00094700 */

}

/**
 * sub_003685C0
 * Original: 0x003685C0 - 0x003685C8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003685C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003685C0: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_003685C8
 * Original: 0x003685C8 - 0x003685E0 (24 bytes, 10 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003685C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003685C8: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

    eax = 0x42AF38;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_003685E0
 * Original: 0x003685E0 - 0x003685E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003685E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003685E0: ;
    ecx = MEM32(ebp + -16);
    g_seh_ebp = ebp; sub_00347374(); return; /* tail jmp 0x00347374 */

}

/**
 * sub_00368600
 * Original: 0x00368600 - 0x00368608 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368600(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368600: ;
    esi = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000D10A0(); return; /* tail jmp 0x000D10A0 */

}

/**
 * sub_00368620
 * Original: 0x00368620 - 0x00368625 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368620: ;
    g_seh_ebp = ebp; sub_00049710(); return; /* tail jmp 0x00049710 */

}

/**
 * sub_00368630
 * Original: 0x00368630 - 0x00368638 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368630(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368630: ;
    ecx = ebp + -40;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00368650
 * Original: 0x00368650 - 0x00368655 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368650: ;
    g_seh_ebp = ebp; sub_00049710(); return; /* tail jmp 0x00049710 */

}

/**
 * sub_00368660
 * Original: 0x00368660 - 0x00368668 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368660(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368660: ;
    ecx = ebp + -72;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00368668
 * Original: 0x00368668 - 0x00368670 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368668(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368668: ;
    ecx = ebp + -44;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00368670
 * Original: 0x00368670 - 0x00368678 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368670(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368670: ;
    ecx = ebp + -100;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00368678
 * Original: 0x00368678 - 0x00368683 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368678(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368678: ;
    ecx = ebp + -156;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00368683
 * Original: 0x00368683 - 0x003686A0 (29 bytes, 15 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368683(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368683: ;
    ecx = ebp + -128;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

    eax = 0x42B098;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

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
 * sub_003686A0
 * Original: 0x003686A0 - 0x003686AB (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003686A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003686A0: ;
    ecx = ebp + -304;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_003686AB
 * Original: 0x003686AB - 0x003686C0 (21 bytes, 4 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003686AB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003686AB: ;
    ecx = ebp + -340;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

    eax = 0x42B0C4;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

}

/**
 * sub_003686C0
 * Original: 0x003686C0 - 0x003686E0 (32 bytes, 18 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003686C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003686C0: ;
    eax = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_000CE290(); return; /* tail jmp 0x000CE290 */

    eax = 0x42B10C;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

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
 * sub_003686E0
 * Original: 0x003686E0 - 0x003686E8 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003686E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003686E0: ;
    esi = ebp + -28;
    g_seh_ebp = ebp; sub_000D10A0(); return; /* tail jmp 0x000D10A0 */

}

/**
 * sub_00368700
 * Original: 0x00368700 - 0x00368708 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368700(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368700: ;
    ecx = MEM32(ebp + 4);
    g_seh_ebp = ebp; sub_0009A4D0(); return; /* tail jmp 0x0009A4D0 */

}

/**
 * sub_00368720
 * Original: 0x00368720 - 0x00368725 (5 bytes, 1 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368720: ;
    g_seh_ebp = ebp; sub_00049710(); return; /* tail jmp 0x00049710 */

}

/**
 * sub_00368730
 * Original: 0x00368730 - 0x00368738 (8 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368730(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368730: ;
    ecx = ebp + -48;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00368750
 * Original: 0x00368750 - 0x0036875B (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368750: ;
    ecx = ebp + -364;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_0036875B
 * Original: 0x0036875B - 0x00368766 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036875B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036875B: ;
    ecx = ebp + -392;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00368766
 * Original: 0x00368766 - 0x00368771 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368766(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368766: ;
    ecx = ebp + -448;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00368771
 * Original: 0x00368771 - 0x0036877C (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368771(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368771: ;
    ecx = ebp + -448;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_0036877C
 * Original: 0x0036877C - 0x00368787 (11 bytes, 2 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0036877C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0036877C: ;
    ecx = ebp + -448;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

}

/**
 * sub_00368787
 * Original: 0x00368787 - 0x003687A0 (25 bytes, 8 insns)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00368787(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00368787: ;
    ecx = ebp + -420;
    g_seh_ebp = ebp; sub_000119A0(); return; /* tail jmp 0x000119A0 */

    eax = 0x42B284;
    g_seh_ebp = ebp; sub_00349B4D(); return; /* tail jmp 0x00349B4D */

    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}
