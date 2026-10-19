/**
 * PoP SoT xbox-retail - bink, chunk 1
 * RAD Bink video decoder
 * Functions: 9 (0x003BA200 - 0x0076E109)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_003BA200
 * Original: 0x003BA200 - 0x003BA32E (302 bytes, 90 insns)
 * Folder: bink (section: BINK16MX)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BA200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BA200: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    mm7 = MMX_MEM(0x42CFA0); /* movq */
    mm0 = MMX_MEM(0x42CF78); /* movq */
    mm2 = MMX_MEM(0x42CF90); /* movq */
    mm5 = MMX_MEM(0x42CF98); /* movq */
    esi = MEM32(0x77AA80);
    ecx = MEM32(0x77AA88);
    eax = MEM32(esp + 0x14);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */
    /* nop */

loc_003BA240: ;
    mm3 = MMX_FROM32(MEM32(ecx)); /* movd */
    mm4 = MMX_PXOR(mm4, mm4); /* pxor */
    mm6 = MMX_FROM32(MEM32(ecx + 4)); /* movd */
    mm3 = MMX_PUNPCKLBW(mm3, mm4); /* punpcklbw */
    mm3 = MMX_PSUBUSW(mm3, mm0); /* psubusw */
    mm6 = MMX_PUNPCKLBW(mm6, mm4); /* punpcklbw */
    mm6 = MMX_PSUBUSW(mm6, mm0); /* psubusw */
    mm3 = MMX_PMULHW(mm3, mm5); /* pmulhw */
    mm6 = MMX_PMULHW(mm6, mm5); /* pmulhw */
    /* nop */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm6 = MMX_PADDSW(mm6, mm7); /* paddsw */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    mm6 = MMX_PSUBUSW(mm6, mm7); /* psubusw */
    mm6 = MMX_PMULLW(mm6, mm2); /* pmullw */
    mm1 = mm3; /* movq */
    mm3 = MMX_PUNPCKLWD(mm3, mm3); /* punpcklwd */
    mm1 = MMX_PUNPCKHWD(mm1, mm1); /* punpckhwd */
    mm4 = mm6; /* movq */
    MMX_STORE(esi + -32, mm3); /* movq */
    mm6 = MMX_PUNPCKLWD(mm6, mm6); /* punpcklwd */
    MMX_STORE(esi + -24, mm1); /* movq */
    mm4 = MMX_PUNPCKHWD(mm4, mm4); /* punpckhwd */
    MMX_STORE(esi + -16, mm6); /* movq */
    MMX_STORE(esi + -8, mm4); /* movq */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003BA240; /* jb: below (unsigned <) */

loc_003BA29B: ;
    MEM32(0x77AA80) = esi;
    MEM32(0x77AA88) = ecx;
    edi = MEM32(0x77AA84);
    edx = MEM32(0x77AA8C);
    eax = MEM32(esp + 0x14);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_003BA2C0: ;
    mm3 = MMX_FROM32(MEM32(edx)); /* movd */
    mm4 = MMX_PXOR(mm4, mm4); /* pxor */
    mm6 = MMX_FROM32(MEM32(edx + 4)); /* movd */
    mm3 = MMX_PUNPCKLBW(mm3, mm4); /* punpcklbw */
    mm3 = MMX_PSUBUSW(mm3, mm0); /* psubusw */
    mm6 = MMX_PUNPCKLBW(mm6, mm4); /* punpcklbw */
    mm6 = MMX_PSUBUSW(mm6, mm0); /* psubusw */
    mm3 = MMX_PMULHW(mm3, mm5); /* pmulhw */
    mm6 = MMX_PMULHW(mm6, mm5); /* pmulhw */
    /* nop */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm6 = MMX_PADDSW(mm6, mm7); /* paddsw */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    mm6 = MMX_PSUBUSW(mm6, mm7); /* psubusw */
    mm6 = MMX_PMULLW(mm6, mm2); /* pmullw */
    mm1 = mm3; /* movq */
    mm3 = MMX_PUNPCKLWD(mm3, mm3); /* punpcklwd */
    mm1 = MMX_PUNPCKHWD(mm1, mm1); /* punpckhwd */
    mm4 = mm6; /* movq */
    MMX_STORE(edi + -32, mm3); /* movq */
    mm6 = MMX_PUNPCKLWD(mm6, mm6); /* punpcklwd */
    MMX_STORE(edi + -24, mm1); /* movq */
    mm4 = MMX_PUNPCKHWD(mm4, mm4); /* punpckhwd */
    MMX_STORE(edi + -16, mm6); /* movq */
    MMX_STORE(edi + -8, mm4); /* movq */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003BA2C0; /* jb: below (unsigned <) */

loc_003BA31B: ;
    MEM32(0x77AA84) = edi;
    MEM32(0x77AA8C) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BA340
 * Original: 0x003BA340 - 0x003BA59F (607 bytes, 137 insns)
 * Folder: bink (section: BINK16X2)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BA340(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BA340: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x77AA80);
    ebp = MEM32(0x77AA90);
    ebx = MEM32(0x77AA94);
    edx = MEM32(0x77AA88);
    eax = MEM32(esp + 0x14);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x77AA80) = eax;
    mm7 = MMX_MEM(0x42CF88); /* movq */
    /* nop */
    /* nop */
    /* nop */

loc_003BA380: ;
    mm4 = MMX_FROM32(MEM32(edx)); /* movd */
    mm0 = MMX_PXOR(mm0, mm0); /* pxor */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(ebp));
    mm4 = MMX_PUNPCKLBW(mm4, mm0); /* punpcklbw */
    mm2 = MMX_FROM32(MEM32(eax * 4 + 0x77C2A8)); /* movd */
    mm1 = MMX_FROM32(MEM32(eax * 4 + 0x77BAA8)); /* movd */
    SET_LO8(eax, MEM8(ebp + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm4 = MMX_PSUBUSW(mm4, MMX_MEM(0x42CF78)); /* psubusw */
    mm6 = MMX_FROM32(MEM32(eax * 4 + 0x77C2A8)); /* movd */
    mm1 = MMX_PUNPCKLDQ(mm1, MMX_MEM(eax * 4 + 0x77BAA8)); /* punpckldq */
    SET_LO8(eax, MEM8(ebx));
    mm4 = MMX_PSLLW(mm4, 2u); /* psllw */
    mm4 = MMX_PMULHW(mm4, MMX_MEM(0x42CF80)); /* pmulhw */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x77BEA8)); /* movd */
    mm3 = MMX_FROM32(MEM32(eax * 4 + 0x77C6A8)); /* movd */
    mm2 = MMX_PADDW(mm2, mm5); /* paddw */
    SET_LO8(eax, MEM8(ebx + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x77BEA8)); /* movd */
    mm3 = MMX_PUNPCKLDQ(mm3, MMX_MEM(eax * 4 + 0x77C6A8)); /* punpckldq */
    mm6 = MMX_PADDW(mm6, mm5); /* paddw */
    mm2 = MMX_PUNPCKLDQ(mm2, mm6); /* punpckldq */
    mm1 = MMX_PADDW(mm1, mm4); /* paddw */
    mm2 = MMX_PADDW(mm2, mm4); /* paddw */
    mm1 = MMX_PADDSW(mm1, mm7); /* paddsw */
    mm3 = MMX_PADDW(mm3, mm4); /* paddw */
    mm1 = MMX_PSUBUSW(mm1, mm7); /* psubusw */
    mm1 = MMX_PSRLW(mm1, MMX_MEM(0x77CAC0).q); /* psrlw */
    mm2 = MMX_PADDSW(mm2, mm7); /* paddsw */
    mm1 = MMX_PSLLW(mm1, MMX_MEM(0x77CAA8).q); /* psllw */
    mm2 = MMX_PSUBUSW(mm2, mm7); /* psubusw */
    mm2 = MMX_PSRLW(mm2, MMX_MEM(0x77CAC8).q); /* psrlw */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm2 = MMX_PSLLW(mm2, MMX_MEM(0x77CAB0).q); /* psllw */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm3 = MMX_PSRLW(mm3, MMX_MEM(0x77CAD0).q); /* psrlw */
    mm1 = MMX_POR(mm1, mm2); /* por */
    mm3 = MMX_PSLLW(mm3, MMX_MEM(0x77CAB8).q); /* psllw */
    mm1 = MMX_POR(mm1, mm3); /* por */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm3 = mm1; /* movq */
    mm1 = MMX_PUNPCKLWD(mm1, mm1); /* punpcklwd */
    eax = MEM32(0x77AA80);
    mm3 = MMX_PUNPCKHWD(mm3, mm3); /* punpckhwd */
    MMX_STORE(edi + -16, mm1); /* movq */
    MMX_STORE(edi + -8, mm3); /* movq */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003BA380; /* jb: below (unsigned <) */

loc_003BA466: ;
    MEM32(0x77AA88) = edx;
    edi = MEM32(0x77AA84);
    ebp = MEM32(0x77AA90);
    ebx = MEM32(0x77AA94);
    edx = MEM32(0x77AA8C);
    eax = MEM32(esp + 0x14);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x77AA84) = eax;
    mm7 = MMX_MEM(0x42CF88); /* movq */
    /* nop */

loc_003BA4A0: ;
    mm4 = MMX_FROM32(MEM32(edx)); /* movd */
    mm0 = MMX_PXOR(mm0, mm0); /* pxor */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(ebp));
    mm4 = MMX_PUNPCKLBW(mm4, mm0); /* punpcklbw */
    mm2 = MMX_FROM32(MEM32(eax * 4 + 0x77C2A8)); /* movd */
    mm1 = MMX_FROM32(MEM32(eax * 4 + 0x77BAA8)); /* movd */
    SET_LO8(eax, MEM8(ebp + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm4 = MMX_PSUBUSW(mm4, MMX_MEM(0x42CF78)); /* psubusw */
    mm6 = MMX_FROM32(MEM32(eax * 4 + 0x77C2A8)); /* movd */
    mm1 = MMX_PUNPCKLDQ(mm1, MMX_MEM(eax * 4 + 0x77BAA8)); /* punpckldq */
    SET_LO8(eax, MEM8(ebx));
    mm4 = MMX_PSLLW(mm4, 2u); /* psllw */
    mm4 = MMX_PMULHW(mm4, MMX_MEM(0x42CF80)); /* pmulhw */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x77BEA8)); /* movd */
    mm3 = MMX_FROM32(MEM32(eax * 4 + 0x77C6A8)); /* movd */
    mm2 = MMX_PADDW(mm2, mm5); /* paddw */
    SET_LO8(eax, MEM8(ebx + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x77BEA8)); /* movd */
    mm3 = MMX_PUNPCKLDQ(mm3, MMX_MEM(eax * 4 + 0x77C6A8)); /* punpckldq */
    mm6 = MMX_PADDW(mm6, mm5); /* paddw */
    mm2 = MMX_PUNPCKLDQ(mm2, mm6); /* punpckldq */
    mm1 = MMX_PADDW(mm1, mm4); /* paddw */
    mm2 = MMX_PADDW(mm2, mm4); /* paddw */
    mm1 = MMX_PADDSW(mm1, mm7); /* paddsw */
    mm3 = MMX_PADDW(mm3, mm4); /* paddw */
    mm1 = MMX_PSUBUSW(mm1, mm7); /* psubusw */
    mm1 = MMX_PSRLW(mm1, MMX_MEM(0x77CAC0).q); /* psrlw */
    mm2 = MMX_PADDSW(mm2, mm7); /* paddsw */
    mm1 = MMX_PSLLW(mm1, MMX_MEM(0x77CAA8).q); /* psllw */
    mm2 = MMX_PSUBUSW(mm2, mm7); /* psubusw */
    mm2 = MMX_PSRLW(mm2, MMX_MEM(0x77CAC8).q); /* psrlw */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm2 = MMX_PSLLW(mm2, MMX_MEM(0x77CAB0).q); /* psllw */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm3 = MMX_PSRLW(mm3, MMX_MEM(0x77CAD0).q); /* psrlw */
    mm1 = MMX_POR(mm1, mm2); /* por */
    mm3 = MMX_PSLLW(mm3, MMX_MEM(0x77CAB8).q); /* psllw */
    mm1 = MMX_POR(mm1, mm3); /* por */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm3 = mm1; /* movq */
    mm1 = MMX_PUNPCKLWD(mm1, mm1); /* punpcklwd */
    eax = MEM32(0x77AA84);
    mm3 = MMX_PUNPCKHWD(mm3, mm3); /* punpckhwd */
    MMX_STORE(edi + -16, mm1); /* movq */
    MMX_STORE(edi + -8, mm3); /* movq */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003BA4A0; /* jb: below (unsigned <) */

loc_003BA586: ;
    MEM32(0x77AA90) = ebp;
    MEM32(0x77AA94) = ebx;
    MEM32(0x77AA8C) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BA5A0
 * Original: 0x003BA5A0 - 0x003BA898 (760 bytes, 170 insns)
 * Folder: bink (section: BINK16X2)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BA5A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BA5A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x77AA80);
    ebp = MEM32(0x77AA90);
    ebx = MEM32(0x77AA94);
    edx = MEM32(0x77AA88);
    eax = MEM32(esp + 0x14);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x77AA80) = eax;
    mm7 = MMX_MEM(0x42CF88); /* movq */
    /* nop */
    /* nop */
    /* nop */

loc_003BA5E0: ;
    mm4 = MMX_FROM32(MEM32(edx)); /* movd */
    mm0 = MMX_PXOR(mm0, mm0); /* pxor */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(ebp));
    mm4 = MMX_PUNPCKLBW(mm4, mm0); /* punpcklbw */
    mm2 = MMX_FROM32(MEM32(eax * 4 + 0x77C2A8)); /* movd */
    mm1 = MMX_FROM32(MEM32(eax * 4 + 0x77BAA8)); /* movd */
    SET_LO8(eax, MEM8(ebp + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm4 = MMX_PSUBUSW(mm4, MMX_MEM(0x42CF78)); /* psubusw */
    mm6 = MMX_FROM32(MEM32(eax * 4 + 0x77C2A8)); /* movd */
    mm1 = MMX_PUNPCKLDQ(mm1, MMX_MEM(eax * 4 + 0x77BAA8)); /* punpckldq */
    SET_LO8(eax, MEM8(ebx));
    mm4 = MMX_PSLLW(mm4, 2u); /* psllw */
    mm4 = MMX_PMULHW(mm4, MMX_MEM(0x42CF80)); /* pmulhw */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x77BEA8)); /* movd */
    mm3 = MMX_FROM32(MEM32(eax * 4 + 0x77C6A8)); /* movd */
    mm2 = MMX_PADDW(mm2, mm5); /* paddw */
    SET_LO8(eax, MEM8(ebx + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x77BEA8)); /* movd */
    mm3 = MMX_PUNPCKLDQ(mm3, MMX_MEM(eax * 4 + 0x77C6A8)); /* punpckldq */
    mm6 = MMX_PADDW(mm6, mm5); /* paddw */
    SET_LO8(eax, MEM8(ebp));
    mm2 = MMX_PUNPCKLDQ(mm2, mm6); /* punpckldq */
    mm1 = MMX_PSRLQ(mm1, 16u); /* psrlq */
    mm6 = MMX_FROM32(MEM32(eax * 4 + 0x77BAA8)); /* movd */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x77C2A8)); /* movd */
    mm3 = MMX_PSRLQ(mm3, 16u); /* psrlq */
    SET_LO8(eax, MEM8(ebx));
    mm6 = MMX_PSLLQ(mm6, 48u); /* psllq */
    mm1 = MMX_POR(mm1, mm6); /* por */
    mm6 = MMX_FROM32(MEM32(eax * 4 + 0x77BEA8)); /* movd */
    mm5 = MMX_PADDW(mm5, mm6); /* paddw */
    mm6 = MMX_FROM32(MEM32(eax * 4 + 0x77C6A8)); /* movd */
    mm5 = MMX_PSLLQ(mm5, 48u); /* psllq */
    mm6 = MMX_PSLLQ(mm6, 48u); /* psllq */
    mm2 = MMX_POR(mm2, mm5); /* por */
    mm3 = MMX_POR(mm3, mm6); /* por */
    mm1 = MMX_PADDW(mm1, mm4); /* paddw */
    mm2 = MMX_PADDW(mm2, mm4); /* paddw */
    mm1 = MMX_PADDSW(mm1, mm7); /* paddsw */
    mm3 = MMX_PADDW(mm3, mm4); /* paddw */
    mm1 = MMX_PSUBUSW(mm1, mm7); /* psubusw */
    mm1 = MMX_PSRLW(mm1, MMX_MEM(0x77CAC0).q); /* psrlw */
    mm2 = MMX_PADDSW(mm2, mm7); /* paddsw */
    mm1 = MMX_PSLLW(mm1, MMX_MEM(0x77CAA8).q); /* psllw */
    mm2 = MMX_PSUBUSW(mm2, mm7); /* psubusw */
    mm2 = MMX_PSRLW(mm2, MMX_MEM(0x77CAC8).q); /* psrlw */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm2 = MMX_PSLLW(mm2, MMX_MEM(0x77CAB0).q); /* psllw */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm3 = MMX_PSRLW(mm3, MMX_MEM(0x77CAD0).q); /* psrlw */
    mm1 = MMX_POR(mm1, mm2); /* por */
    mm3 = MMX_PSLLW(mm3, MMX_MEM(0x77CAB8).q); /* psllw */
    mm1 = MMX_POR(mm1, mm3); /* por */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm3 = mm1; /* movq */
    mm1 = MMX_PUNPCKLWD(mm1, mm1); /* punpcklwd */
    eax = MEM32(0x77AA80);
    mm3 = MMX_PUNPCKHWD(mm3, mm3); /* punpckhwd */
    MMX_STORE(edi + -16, mm1); /* movq */
    MMX_STORE(edi + -8, mm3); /* movq */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003BA5E0; /* jb: below (unsigned <) */

loc_003BA70F: ;
    MEM32(0x77AA88) = edx;
    edi = MEM32(0x77AA84);
    ebp = MEM32(0x77AA90);
    ebx = MEM32(0x77AA94);
    edx = MEM32(0x77AA8C);
    eax = MEM32(esp + 0x14);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x77AA84) = eax;
    mm7 = MMX_MEM(0x42CF88); /* movq */
    /* nop */
    /* nop */

loc_003BA750: ;
    mm4 = MMX_FROM32(MEM32(edx)); /* movd */
    mm0 = MMX_PXOR(mm0, mm0); /* pxor */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(ebp));
    mm4 = MMX_PUNPCKLBW(mm4, mm0); /* punpcklbw */
    mm2 = MMX_FROM32(MEM32(eax * 4 + 0x77C2A8)); /* movd */
    mm1 = MMX_FROM32(MEM32(eax * 4 + 0x77BAA8)); /* movd */
    SET_LO8(eax, MEM8(ebp + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm4 = MMX_PSUBUSW(mm4, MMX_MEM(0x42CF78)); /* psubusw */
    mm6 = MMX_FROM32(MEM32(eax * 4 + 0x77C2A8)); /* movd */
    mm1 = MMX_PUNPCKLDQ(mm1, MMX_MEM(eax * 4 + 0x77BAA8)); /* punpckldq */
    SET_LO8(eax, MEM8(ebx));
    mm4 = MMX_PSLLW(mm4, 2u); /* psllw */
    mm4 = MMX_PMULHW(mm4, MMX_MEM(0x42CF80)); /* pmulhw */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x77BEA8)); /* movd */
    mm3 = MMX_FROM32(MEM32(eax * 4 + 0x77C6A8)); /* movd */
    mm2 = MMX_PADDW(mm2, mm5); /* paddw */
    SET_LO8(eax, MEM8(ebx + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x77BEA8)); /* movd */
    mm3 = MMX_PUNPCKLDQ(mm3, MMX_MEM(eax * 4 + 0x77C6A8)); /* punpckldq */
    mm6 = MMX_PADDW(mm6, mm5); /* paddw */
    SET_LO8(eax, MEM8(ebp));
    mm2 = MMX_PUNPCKLDQ(mm2, mm6); /* punpckldq */
    mm1 = MMX_PSRLQ(mm1, 16u); /* psrlq */
    mm6 = MMX_FROM32(MEM32(eax * 4 + 0x77BAA8)); /* movd */
    mm2 = MMX_PSRLQ(mm2, 16u); /* psrlq */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x77C2A8)); /* movd */
    mm3 = MMX_PSRLQ(mm3, 16u); /* psrlq */
    SET_LO8(eax, MEM8(ebx));
    mm6 = MMX_PSLLQ(mm6, 48u); /* psllq */
    mm1 = MMX_POR(mm1, mm6); /* por */
    mm6 = MMX_FROM32(MEM32(eax * 4 + 0x77BEA8)); /* movd */
    mm5 = MMX_PADDW(mm5, mm6); /* paddw */
    mm6 = MMX_FROM32(MEM32(eax * 4 + 0x77C6A8)); /* movd */
    mm5 = MMX_PSLLQ(mm5, 48u); /* psllq */
    mm6 = MMX_PSLLQ(mm6, 48u); /* psllq */
    mm2 = MMX_POR(mm2, mm5); /* por */
    mm3 = MMX_POR(mm3, mm6); /* por */
    mm1 = MMX_PADDW(mm1, mm4); /* paddw */
    mm2 = MMX_PADDW(mm2, mm4); /* paddw */
    mm1 = MMX_PADDSW(mm1, mm7); /* paddsw */
    mm3 = MMX_PADDW(mm3, mm4); /* paddw */
    mm1 = MMX_PSUBUSW(mm1, mm7); /* psubusw */
    mm1 = MMX_PSRLW(mm1, MMX_MEM(0x77CAC0).q); /* psrlw */
    mm2 = MMX_PADDSW(mm2, mm7); /* paddsw */
    mm1 = MMX_PSLLW(mm1, MMX_MEM(0x77CAA8).q); /* psllw */
    mm2 = MMX_PSUBUSW(mm2, mm7); /* psubusw */
    mm2 = MMX_PSRLW(mm2, MMX_MEM(0x77CAC8).q); /* psrlw */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm2 = MMX_PSLLW(mm2, MMX_MEM(0x77CAB0).q); /* psllw */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm3 = MMX_PSRLW(mm3, MMX_MEM(0x77CAD0).q); /* psrlw */
    mm1 = MMX_POR(mm1, mm2); /* por */
    mm3 = MMX_PSLLW(mm3, MMX_MEM(0x77CAB8).q); /* psllw */
    mm1 = MMX_POR(mm1, mm3); /* por */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm3 = mm1; /* movq */
    mm1 = MMX_PUNPCKLWD(mm1, mm1); /* punpcklwd */
    eax = MEM32(0x77AA84);
    mm3 = MMX_PUNPCKHWD(mm3, mm3); /* punpckhwd */
    MMX_STORE(edi + -16, mm1); /* movq */
    MMX_STORE(edi + -8, mm3); /* movq */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003BA750; /* jb: below (unsigned <) */

loc_003BA87F: ;
    MEM32(0x77AA90) = ebp;
    MEM32(0x77AA94) = ebx;
    MEM32(0x77AA8C) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BA8A0
 * Original: 0x003BA8A0 - 0x003BA9A4 (260 bytes, 75 insns)
 * Folder: bink (section: BINK16M)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BA8A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BA8A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    mm7 = MMX_MEM(0x42CFA0); /* movq */
    mm0 = MMX_MEM(0x42CF78); /* movq */
    mm2 = MMX_MEM(0x42CF90); /* movq */
    mm5 = MMX_MEM(0x42CF98); /* movq */
    esi = MEM32(0x77AA80);
    ecx = MEM32(0x77AA88);
    eax = MEM32(esp + 0x14);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */
    /* nop */

loc_003BA8E0: ;
    mm3 = MMX_FROM32(MEM32(ecx)); /* movd */
    mm4 = MMX_PXOR(mm4, mm4); /* pxor */
    mm6 = MMX_FROM32(MEM32(ecx + 4)); /* movd */
    mm3 = MMX_PUNPCKLBW(mm3, mm4); /* punpcklbw */
    mm3 = MMX_PSUBUSW(mm3, mm0); /* psubusw */
    mm6 = MMX_PUNPCKLBW(mm6, mm4); /* punpcklbw */
    mm6 = MMX_PSUBUSW(mm6, mm0); /* psubusw */
    mm3 = MMX_PMULHW(mm3, mm5); /* pmulhw */
    mm6 = MMX_PMULHW(mm6, mm5); /* pmulhw */
    /* nop */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm6 = MMX_PADDSW(mm6, mm7); /* paddsw */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    mm6 = MMX_PSUBUSW(mm6, mm7); /* psubusw */
    mm6 = MMX_PMULLW(mm6, mm2); /* pmullw */
    MMX_STORE(esi + -16, mm3); /* movq */
    MMX_STORE(esi + -8, mm6); /* movq */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003BA8E0; /* jb: below (unsigned <) */

loc_003BA921: ;
    MEM32(0x77AA80) = esi;
    MEM32(0x77AA88) = ecx;
    edi = MEM32(0x77AA84);
    edx = MEM32(0x77AA8C);
    eax = MEM32(esp + 0x14);
    eax = eax << 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */
    /* nop */

loc_003BA950: ;
    mm3 = MMX_FROM32(MEM32(edx)); /* movd */
    mm4 = MMX_PXOR(mm4, mm4); /* pxor */
    mm6 = MMX_FROM32(MEM32(edx + 4)); /* movd */
    mm3 = MMX_PUNPCKLBW(mm3, mm4); /* punpcklbw */
    mm3 = MMX_PSUBUSW(mm3, mm0); /* psubusw */
    mm6 = MMX_PUNPCKLBW(mm6, mm4); /* punpcklbw */
    mm6 = MMX_PSUBUSW(mm6, mm0); /* psubusw */
    mm3 = MMX_PMULHW(mm3, mm5); /* pmulhw */
    mm6 = MMX_PMULHW(mm6, mm5); /* pmulhw */
    /* nop */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm6 = MMX_PADDSW(mm6, mm7); /* paddsw */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    mm6 = MMX_PSUBUSW(mm6, mm7); /* psubusw */
    mm6 = MMX_PMULLW(mm6, mm2); /* pmullw */
    MMX_STORE(edi + -16, mm3); /* movq */
    MMX_STORE(edi + -8, mm6); /* movq */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003BA950; /* jb: below (unsigned <) */

loc_003BA991: ;
    MEM32(0x77AA84) = edi;
    MEM32(0x77AA8C) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BAAA0
 * Original: 0x003BAAA0 - 0x003BAC5A (442 bytes, 129 insns)
 * Folder: bink (section: BINK32MX)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BAAA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BAAA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    mm0 = MMX_MEM(0x42CF78); /* movq */
    mm2 = MMX_MEM(0x42CF50); /* movq */
    mm5 = MMX_MEM(0x42CF80); /* movq */
    esi = MEM32(0x77AA80);
    ecx = MEM32(0x77AA88);
    eax = MEM32(esp + 0x14);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi;

loc_003BAAD0: ;
    mm3 = MMX_FROM32(MEM32(ecx)); /* movd */
    mm4 = MMX_PXOR(mm4, mm4); /* pxor */
    mm6 = MMX_FROM32(MEM32(ecx + 4)); /* movd */
    mm3 = MMX_PUNPCKLBW(mm3, mm4); /* punpcklbw */
    mm3 = MMX_PSUBUSW(mm3, mm0); /* psubusw */
    mm6 = MMX_PUNPCKLBW(mm6, mm4); /* punpcklbw */
    mm6 = MMX_PSUBUSW(mm6, mm0); /* psubusw */
    mm3 = MMX_PSLLW(mm3, 2u); /* psllw */
    mm3 = MMX_PMULHW(mm3, mm5); /* pmulhw */
    mm6 = MMX_PSLLW(mm6, 2u); /* psllw */
    mm7 = MMX_MEM(0x42CF88); /* movq */
    mm6 = MMX_PMULHW(mm6, mm5); /* pmulhw */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x40;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm6 = MMX_PADDSW(mm6, mm7); /* paddsw */
    mm1 = mm3; /* movq */
    mm3 = MMX_PUNPCKLWD(mm3, mm3); /* punpcklwd */
    mm1 = MMX_PUNPCKHWD(mm1, mm1); /* punpckhwd */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    mm1 = MMX_PMULLW(mm1, mm2); /* pmullw */
    mm6 = MMX_PSUBUSW(mm6, mm7); /* psubusw */
    mm4 = mm6; /* movq */
    mm6 = MMX_PUNPCKLWD(mm6, mm6); /* punpcklwd */
    mm4 = MMX_PUNPCKHWD(mm4, mm4); /* punpckhwd */
    mm6 = MMX_PMULLW(mm6, mm2); /* pmullw */
    mm7 = mm3; /* movq */
    mm3 = MMX_PUNPCKLDQ(mm3, mm3); /* punpckldq */
    mm7 = MMX_PUNPCKHDQ(mm7, mm7); /* punpckhdq */
    mm4 = MMX_PMULLW(mm4, mm2); /* pmullw */
    MMX_STORE(esi + -64, mm3); /* movq */
    mm3 = mm1; /* movq */
    MMX_STORE(esi + -56, mm7); /* movq */
    mm1 = MMX_PUNPCKLDQ(mm1, mm1); /* punpckldq */
    mm3 = MMX_PUNPCKHDQ(mm3, mm3); /* punpckhdq */
    mm7 = mm6; /* movq */
    MMX_STORE(esi + -48, mm1); /* movq */
    mm6 = MMX_PUNPCKLDQ(mm6, mm6); /* punpckldq */
    MMX_STORE(esi + -40, mm3); /* movq */
    mm7 = MMX_PUNPCKHDQ(mm7, mm7); /* punpckhdq */
    MMX_STORE(esi + -32, mm6); /* movq */
    mm3 = mm4; /* movq */
    MMX_STORE(esi + -24, mm7); /* movq */
    mm4 = MMX_PUNPCKLDQ(mm4, mm4); /* punpckldq */
    mm3 = MMX_PUNPCKHDQ(mm3, mm3); /* punpckhdq */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MMX_STORE(esi + -16, mm4); /* movq */
    MMX_STORE(esi + -8, mm3); /* movq */
    if (CMP_B(_fa, _fb)) goto loc_003BAAD0; /* jb: below (unsigned <) */

loc_003BAB77: ;
    MEM32(0x77AA80) = esi;
    MEM32(0x77AA88) = ecx;
    edi = MEM32(0x77AA84);
    edx = MEM32(0x77AA8C);
    eax = MEM32(esp + 0x14);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */
    /* nop */

loc_003BABA0: ;
    mm3 = MMX_FROM32(MEM32(edx)); /* movd */
    mm4 = MMX_PXOR(mm4, mm4); /* pxor */
    mm6 = MMX_FROM32(MEM32(edx + 4)); /* movd */
    mm3 = MMX_PUNPCKLBW(mm3, mm4); /* punpcklbw */
    mm3 = MMX_PSUBUSW(mm3, mm0); /* psubusw */
    mm6 = MMX_PUNPCKLBW(mm6, mm4); /* punpcklbw */
    mm6 = MMX_PSUBUSW(mm6, mm0); /* psubusw */
    mm3 = MMX_PSLLW(mm3, 2u); /* psllw */
    mm3 = MMX_PMULHW(mm3, mm5); /* pmulhw */
    mm6 = MMX_PSLLW(mm6, 2u); /* psllw */
    mm7 = MMX_MEM(0x42CF88); /* movq */
    mm6 = MMX_PMULHW(mm6, mm5); /* pmulhw */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x40;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm6 = MMX_PADDSW(mm6, mm7); /* paddsw */
    mm1 = mm3; /* movq */
    mm3 = MMX_PUNPCKLWD(mm3, mm3); /* punpcklwd */
    mm1 = MMX_PUNPCKHWD(mm1, mm1); /* punpckhwd */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    mm1 = MMX_PMULLW(mm1, mm2); /* pmullw */
    mm6 = MMX_PSUBUSW(mm6, mm7); /* psubusw */
    mm4 = mm6; /* movq */
    mm6 = MMX_PUNPCKLWD(mm6, mm6); /* punpcklwd */
    mm4 = MMX_PUNPCKHWD(mm4, mm4); /* punpckhwd */
    mm6 = MMX_PMULLW(mm6, mm2); /* pmullw */
    mm7 = mm3; /* movq */
    mm3 = MMX_PUNPCKLDQ(mm3, mm3); /* punpckldq */
    mm7 = MMX_PUNPCKHDQ(mm7, mm7); /* punpckhdq */
    mm4 = MMX_PMULLW(mm4, mm2); /* pmullw */
    MMX_STORE(edi + -64, mm3); /* movq */
    mm3 = mm1; /* movq */
    MMX_STORE(edi + -56, mm7); /* movq */
    mm1 = MMX_PUNPCKLDQ(mm1, mm1); /* punpckldq */
    mm3 = MMX_PUNPCKHDQ(mm3, mm3); /* punpckhdq */
    mm7 = mm6; /* movq */
    MMX_STORE(edi + -48, mm1); /* movq */
    mm6 = MMX_PUNPCKLDQ(mm6, mm6); /* punpckldq */
    MMX_STORE(edi + -40, mm3); /* movq */
    mm7 = MMX_PUNPCKHDQ(mm7, mm7); /* punpckhdq */
    MMX_STORE(edi + -32, mm6); /* movq */
    mm3 = mm4; /* movq */
    MMX_STORE(edi + -24, mm7); /* movq */
    mm4 = MMX_PUNPCKLDQ(mm4, mm4); /* punpckldq */
    mm3 = MMX_PUNPCKHDQ(mm3, mm3); /* punpckhdq */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MMX_STORE(edi + -16, mm4); /* movq */
    MMX_STORE(edi + -8, mm3); /* movq */
    if (CMP_B(_fa, _fb)) goto loc_003BABA0; /* jb: below (unsigned <) */

loc_003BAC47: ;
    MEM32(0x77AA84) = edi;
    MEM32(0x77AA8C) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BAC60
 * Original: 0x003BAC60 - 0x003BAED9 (633 bytes, 161 insns)
 * Folder: bink (section: BINK32X2)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BAC60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BAC60: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x77AA80);
    edx = MEM32(0x77AA88);
    ebp = MEM32(0x77AA90);
    ebx = MEM32(0x77AA94);
    eax = MEM32(esp + 0x14);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x77AA80) = eax;
    mm7 = MMX_MEM(0x42CF88); /* movq */

loc_003BAC91: ;
    mm4 = MMX_FROM32(MEM32(edx)); /* movd */
    mm0 = MMX_PXOR(mm0, mm0); /* pxor */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(ebp));
    mm4 = MMX_PUNPCKLBW(mm4, mm0); /* punpcklbw */
    mm2 = MMX_FROM32(MEM32(eax * 4 + 0x77C2A8)); /* movd */
    mm1 = MMX_FROM32(MEM32(eax * 4 + 0x77BAA8)); /* movd */
    SET_LO8(eax, MEM8(ebp + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm4 = MMX_PSUBUSW(mm4, MMX_MEM(0x42CF78)); /* psubusw */
    mm6 = MMX_FROM32(MEM32(eax * 4 + 0x77C2A8)); /* movd */
    mm1 = MMX_PUNPCKLDQ(mm1, MMX_MEM(eax * 4 + 0x77BAA8)); /* punpckldq */
    SET_LO8(eax, MEM8(ebx));
    mm4 = MMX_PSLLW(mm4, 2u); /* psllw */
    mm4 = MMX_PMULHW(mm4, MMX_MEM(0x42CF80)); /* pmulhw */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x77BEA8)); /* movd */
    mm3 = MMX_FROM32(MEM32(eax * 4 + 0x77C6A8)); /* movd */
    mm2 = MMX_PADDW(mm2, mm5); /* paddw */
    SET_LO8(eax, MEM8(ebx + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x77BEA8)); /* movd */
    mm3 = MMX_PUNPCKLDQ(mm3, MMX_MEM(eax * 4 + 0x77C6A8)); /* punpckldq */
    mm6 = MMX_PADDW(mm6, mm5); /* paddw */
    mm2 = MMX_PUNPCKLDQ(mm2, mm6); /* punpckldq */
    mm1 = MMX_PADDW(mm1, mm4); /* paddw */
    mm2 = MMX_PADDW(mm2, mm4); /* paddw */
    mm1 = MMX_PADDSW(mm1, mm7); /* paddsw */
    mm3 = MMX_PADDW(mm3, mm4); /* paddw */
    mm1 = MMX_PSUBUSW(mm1, mm7); /* psubusw */
    mm2 = MMX_PADDSW(mm2, mm7); /* paddsw */
    mm4 = mm1; /* movq */
    mm2 = MMX_PSUBUSW(mm2, mm7); /* psubusw */
    mm1 = MMX_PUNPCKLWD(mm1, mm0); /* punpcklwd */
    mm5 = mm2; /* movq */
    mm2 = MMX_PUNPCKLWD(mm2, mm0); /* punpcklwd */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm2 = MMX_PSLLD(mm2, 8u); /* pslld */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm4 = MMX_PUNPCKHWD(mm4, mm0); /* punpckhwd */
    mm6 = mm3; /* movq */
    mm3 = MMX_PUNPCKLWD(mm3, mm0); /* punpcklwd */
    mm3 = MMX_PSLLD(mm3, 16u); /* pslld */
    mm1 = MMX_POR(mm1, mm2); /* por */
    mm1 = MMX_POR(mm1, mm3); /* por */
    mm5 = MMX_PUNPCKHWD(mm5, mm0); /* punpckhwd */
    mm3 = mm1; /* movq */
    mm6 = MMX_PUNPCKHWD(mm6, mm0); /* punpckhwd */
    mm5 = MMX_PSLLD(mm5, 8u); /* pslld */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm1 = MMX_PUNPCKLDQ(mm1, mm1); /* punpckldq */
    mm4 = MMX_POR(mm4, mm5); /* por */
    mm3 = MMX_PUNPCKHDQ(mm3, mm3); /* punpckhdq */
    MMX_STORE(edi + -32, mm1); /* movq */
    mm6 = MMX_PSLLD(mm6, 16u); /* pslld */
    MMX_STORE(edi + -24, mm3); /* movq */
    mm4 = MMX_POR(mm4, mm6); /* por */
    mm6 = mm4; /* movq */
    mm4 = MMX_PUNPCKLDQ(mm4, mm4); /* punpckldq */
    mm6 = MMX_PUNPCKHDQ(mm6, mm6); /* punpckhdq */
    eax = MEM32(0x77AA80);
    MMX_STORE(edi + -16, mm4); /* movq */
    MMX_STORE(edi + -8, mm6); /* movq */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003BAC91; /* jb: below (unsigned <) */

loc_003BAD8F: ;
    MEM32(0x77AA88) = edx;
    edi = MEM32(0x77AA84);
    edx = MEM32(0x77AA8C);
    ebp = MEM32(0x77AA90);
    ebx = MEM32(0x77AA94);
    eax = MEM32(esp + 0x14);
    eax = eax << 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x77AA84) = eax;
    mm7 = MMX_MEM(0x42CF88); /* movq */

loc_003BADC2: ;
    mm4 = MMX_FROM32(MEM32(edx)); /* movd */
    mm0 = MMX_PXOR(mm0, mm0); /* pxor */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, MEM8(ebp));
    mm4 = MMX_PUNPCKLBW(mm4, mm0); /* punpcklbw */
    mm2 = MMX_FROM32(MEM32(eax * 4 + 0x77C2A8)); /* movd */
    mm1 = MMX_FROM32(MEM32(eax * 4 + 0x77BAA8)); /* movd */
    SET_LO8(eax, MEM8(ebp + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 2;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm4 = MMX_PSUBUSW(mm4, MMX_MEM(0x42CF78)); /* psubusw */
    mm6 = MMX_FROM32(MEM32(eax * 4 + 0x77C2A8)); /* movd */
    mm1 = MMX_PUNPCKLDQ(mm1, MMX_MEM(eax * 4 + 0x77BAA8)); /* punpckldq */
    SET_LO8(eax, MEM8(ebx));
    mm4 = MMX_PSLLW(mm4, 2u); /* psllw */
    mm4 = MMX_PMULHW(mm4, MMX_MEM(0x42CF80)); /* pmulhw */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x77BEA8)); /* movd */
    mm3 = MMX_FROM32(MEM32(eax * 4 + 0x77C6A8)); /* movd */
    mm2 = MMX_PADDW(mm2, mm5); /* paddw */
    SET_LO8(eax, MEM8(ebx + 1));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm5 = MMX_FROM32(MEM32(eax * 4 + 0x77BEA8)); /* movd */
    mm3 = MMX_PUNPCKLDQ(mm3, MMX_MEM(eax * 4 + 0x77C6A8)); /* punpckldq */
    mm6 = MMX_PADDW(mm6, mm5); /* paddw */
    mm2 = MMX_PUNPCKLDQ(mm2, mm6); /* punpckldq */
    mm1 = MMX_PADDW(mm1, mm4); /* paddw */
    mm2 = MMX_PADDW(mm2, mm4); /* paddw */
    mm1 = MMX_PADDSW(mm1, mm7); /* paddsw */
    mm3 = MMX_PADDW(mm3, mm4); /* paddw */
    mm1 = MMX_PSUBUSW(mm1, mm7); /* psubusw */
    mm2 = MMX_PADDSW(mm2, mm7); /* paddsw */
    mm4 = mm1; /* movq */
    mm2 = MMX_PSUBUSW(mm2, mm7); /* psubusw */
    mm1 = MMX_PUNPCKLWD(mm1, mm0); /* punpcklwd */
    mm5 = mm2; /* movq */
    mm2 = MMX_PUNPCKLWD(mm2, mm0); /* punpcklwd */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm2 = MMX_PSLLD(mm2, 8u); /* pslld */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm4 = MMX_PUNPCKHWD(mm4, mm0); /* punpckhwd */
    mm6 = mm3; /* movq */
    mm3 = MMX_PUNPCKLWD(mm3, mm0); /* punpcklwd */
    mm3 = MMX_PSLLD(mm3, 16u); /* pslld */
    mm1 = MMX_POR(mm1, mm2); /* por */
    mm1 = MMX_POR(mm1, mm3); /* por */
    mm5 = MMX_PUNPCKHWD(mm5, mm0); /* punpckhwd */
    mm3 = mm1; /* movq */
    mm6 = MMX_PUNPCKHWD(mm6, mm0); /* punpckhwd */
    mm5 = MMX_PSLLD(mm5, 8u); /* pslld */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm1 = MMX_PUNPCKLDQ(mm1, mm1); /* punpckldq */
    mm4 = MMX_POR(mm4, mm5); /* por */
    mm3 = MMX_PUNPCKHDQ(mm3, mm3); /* punpckhdq */
    MMX_STORE(edi + -32, mm1); /* movq */
    mm6 = MMX_PSLLD(mm6, 16u); /* pslld */
    MMX_STORE(edi + -24, mm3); /* movq */
    mm4 = MMX_POR(mm4, mm6); /* por */
    mm6 = mm4; /* movq */
    mm4 = MMX_PUNPCKLDQ(mm4, mm4); /* punpckldq */
    mm6 = MMX_PUNPCKHDQ(mm6, mm6); /* punpckhdq */
    eax = MEM32(0x77AA84);
    MMX_STORE(edi + -16, mm4); /* movq */
    MMX_STORE(edi + -8, mm6); /* movq */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003BADC2; /* jb: below (unsigned <) */

loc_003BAEC0: ;
    MEM32(0x77AA8C) = edx;
    MEM32(0x77AA90) = ebp;
    MEM32(0x77AA94) = ebx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003BB200
 * Original: 0x003BB200 - 0x003BB34C (332 bytes, 98 insns)
 * Folder: bink (section: BINK32M)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003BB200(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003BB200: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    mm7 = MMX_MEM(0x42CF88); /* movq */
    mm0 = MMX_MEM(0x42CF78); /* movq */
    mm2 = MMX_MEM(0x42CF60); /* movq */
    mm5 = MMX_MEM(0x42CF80); /* movq */
    esi = MEM32(0x77AA80);
    ecx = MEM32(0x77AA88);
    eax = MEM32(esp + 0x14);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */
    /* nop */

loc_003BB240: ;
    mm3 = MMX_FROM32(MEM32(ecx)); /* movd */
    mm4 = MMX_PXOR(mm4, mm4); /* pxor */
    mm6 = MMX_FROM32(MEM32(ecx + 4)); /* movd */
    mm3 = MMX_PUNPCKLBW(mm3, mm4); /* punpcklbw */
    mm3 = MMX_PSUBUSW(mm3, mm0); /* psubusw */
    mm6 = MMX_PUNPCKLBW(mm6, mm4); /* punpcklbw */
    mm6 = MMX_PSUBUSW(mm6, mm0); /* psubusw */
    mm3 = MMX_PSLLW(mm3, 2u); /* psllw */
    mm3 = MMX_PMULHW(mm3, mm5); /* pmulhw */
    mm6 = MMX_PSLLW(mm6, 2u); /* psllw */
    mm6 = MMX_PMULHW(mm6, mm5); /* pmulhw */
    /* nop */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x20;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm6 = MMX_PADDSW(mm6, mm7); /* paddsw */
    mm1 = mm3; /* movq */
    mm3 = MMX_PUNPCKLWD(mm3, mm3); /* punpcklwd */
    mm1 = MMX_PUNPCKHWD(mm1, mm1); /* punpckhwd */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    mm1 = MMX_PMULLW(mm1, mm2); /* pmullw */
    mm6 = MMX_PSUBUSW(mm6, mm7); /* psubusw */
    mm4 = mm6; /* movq */
    mm6 = MMX_PUNPCKLWD(mm6, mm6); /* punpcklwd */
    mm4 = MMX_PUNPCKHWD(mm4, mm4); /* punpckhwd */
    mm6 = MMX_PMULLW(mm6, mm2); /* pmullw */
    MMX_STORE(esi + -32, mm3); /* movq */
    mm4 = MMX_PMULLW(mm4, mm2); /* pmullw */
    MMX_STORE(esi + -24, mm1); /* movq */
    MMX_STORE(esi + -16, mm6); /* movq */
    MMX_STORE(esi + -8, mm4); /* movq */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003BB240; /* jb: below (unsigned <) */

loc_003BB2A9: ;
    MEM32(0x77AA80) = esi;
    MEM32(0x77AA88) = ecx;
    edi = MEM32(0x77AA84);
    edx = MEM32(0x77AA8C);
    eax = MEM32(esp + 0x14);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* nop */

loc_003BB2D0: ;
    mm3 = MMX_FROM32(MEM32(edx)); /* movd */
    mm4 = MMX_PXOR(mm4, mm4); /* pxor */
    mm6 = MMX_FROM32(MEM32(edx + 4)); /* movd */
    mm3 = MMX_PUNPCKLBW(mm3, mm4); /* punpcklbw */
    mm3 = MMX_PSUBUSW(mm3, mm0); /* psubusw */
    mm6 = MMX_PUNPCKLBW(mm6, mm4); /* punpcklbw */
    mm6 = MMX_PSUBUSW(mm6, mm0); /* psubusw */
    mm3 = MMX_PSLLW(mm3, 2u); /* psllw */
    mm3 = MMX_PMULHW(mm3, mm5); /* pmulhw */
    mm6 = MMX_PSLLW(mm6, 2u); /* psllw */
    mm6 = MMX_PMULHW(mm6, mm5); /* pmulhw */
    /* nop */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x20;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    mm3 = MMX_PADDSW(mm3, mm7); /* paddsw */
    mm3 = MMX_PSUBUSW(mm3, mm7); /* psubusw */
    mm6 = MMX_PADDSW(mm6, mm7); /* paddsw */
    mm1 = mm3; /* movq */
    mm3 = MMX_PUNPCKLWD(mm3, mm3); /* punpcklwd */
    mm1 = MMX_PUNPCKHWD(mm1, mm1); /* punpckhwd */
    mm3 = MMX_PMULLW(mm3, mm2); /* pmullw */
    mm1 = MMX_PMULLW(mm1, mm2); /* pmullw */
    mm6 = MMX_PSUBUSW(mm6, mm7); /* psubusw */
    mm4 = mm6; /* movq */
    mm6 = MMX_PUNPCKLWD(mm6, mm6); /* punpcklwd */
    mm4 = MMX_PUNPCKHWD(mm4, mm4); /* punpckhwd */
    mm6 = MMX_PMULLW(mm6, mm2); /* pmullw */
    MMX_STORE(edi + -32, mm3); /* movq */
    mm4 = MMX_PMULLW(mm4, mm2); /* pmullw */
    MMX_STORE(edi + -24, mm1); /* movq */
    MMX_STORE(edi + -16, mm6); /* movq */
    MMX_STORE(edi + -8, mm4); /* movq */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003BB2D0; /* jb: below (unsigned <) */

loc_003BB339: ;
    MEM32(0x77AA84) = edi;
    MEM32(0x77AA8C) = edx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0076E05A
 * Original: 0x0076E05A - 0x0076E067 (13 bytes, 6 insns)
 * Folder: bink (section: BINKDATA)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0076E05A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0076E05A: ;
    PUSH32(esp, esi);
    RECOMP_UNIMPL("salc", 0x0076E05Bu); /* TODO: salc */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)MEM32(ebx + 0x60));
      edx = (uint32_t)(_dividend % (uint32_t)MEM32(ebx + 0x60)); }
    SET_LO8(eax, MEM8(ebx + LO8(eax))); /* xlatb */
    if (ecx == 0) { g_seh_ebp = ebp; sub_0076E0C0(); return; } /* jecxz */

loc_0076E062: ;
    ebx = 0x6D4E324B;

}

/**
 * sub_0076E109
 * Original: 0x0076E109 - 0x0076E10F (6 bytes, 2 insns)
 * Folder: bink (section: BINKDATA)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0076E109(void)
{

loc_0076E109: ;
    edi = 0xDA9FFEFEu;
    esp += 4; return; /* ret */

}
