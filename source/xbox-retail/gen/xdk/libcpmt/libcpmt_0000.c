/**
 * PoP SoT xbox-retail - xdk/libcpmt, chunk 0
 * Microsoft C++ library (LIBCPMT)
 * Functions: 58 (0x00346D74 - 0x003489B3)
 */

#define RECOMP_GENERATED_CODE
#include "../../recomp_funcs.h"
#include <math.h>

/**
 * sub_00346D74
 * Original: 0x00346D74 - 0x00346DB4 (64 bytes, 17 insns)
 * Folder: xdk/libcpmt (string: invalid string position)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00346D74(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00346D74: ;
    eax = 0x367D38;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346D7Eu); RECOMP_ABI_CALL(0x00349EA0u, sub_00349EA0); /* call 0x00349EA0 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00346D7E: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x41D908);
    ecx = ebp + -40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346D8Eu); RECOMP_ABI_CALL(0x00011560u, sub_00011560); /* call 0x00011560 */

loc_00346D8E: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -40;
    PUSH32(esp, eax);
    ecx = ebp + -80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346D9Eu); RECOMP_ABI_CALL(0x000115A0u, sub_000115A0); /* call 0x000115A0 */

loc_00346D9E: ;
    PUSH32(esp, 0x42AB64);
    eax = ebp + -80;
    PUSH32(esp, eax);
    MEM32(ebp + -80) = 0x41F374;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346DB3u); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_00346DB3: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00346DB4
 * Original: 0x00346DB4 - 0x00346DF4 (64 bytes, 17 insns)
 * Folder: xdk/libcpmt (string: string too long)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00346DB4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00346DB4: ;
    eax = 0x367D38;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346DBEu); RECOMP_ABI_CALL(0x00349EA0u, sub_00349EA0); /* call 0x00349EA0 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00346DBE: ;
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x41D920);
    ecx = ebp + -40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346DCEu); RECOMP_ABI_CALL(0x00011560u, sub_00011560); /* call 0x00011560 */

loc_00346DCE: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebp + -40;
    PUSH32(esp, eax);
    ecx = ebp + -80;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346DDEu); RECOMP_ABI_CALL(0x000115A0u, sub_000115A0); /* call 0x000115A0 */

loc_00346DDE: ;
    PUSH32(esp, 0x42AAF0);
    eax = ebp + -80;
    PUSH32(esp, eax);
    MEM32(ebp + -80) = 0x41F374;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346DF3u); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_00346DF3: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00346DF4
 * Original: 0x00346DF4 - 0x00346DF9 (5 bytes, 1 insns)
 * Folder: xdk/libcpmt (between: 0x00346DB4 and 0x00346E38)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00346DF4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00346DF4: ;
    g_seh_ebp = ebp; sub_00346D50(); return; /* tail jmp 0x00346D50 */

}

/**
 * sub_00346DF9
 * Original: 0x00346DF9 - 0x00346E04 (11 bytes, 2 insns)
 * Folder: xdk/libcpmt (between: 0x00346DB4 and 0x00346E38)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00346DF9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00346DF9: ;
    MEM32(ecx) = 0x41D930;
    g_seh_ebp = ebp; sub_00347374(); return; /* tail jmp 0x00347374 */

}

/**
 * sub_00346E04
 * Original: 0x00346E04 - 0x00346E20 (28 bytes, 11 insns)
 * Folder: xdk/libcpmt (between: 0x00346DB4 and 0x00346E38)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00346E04(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00346E04: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00346E0Cu); RECOMP_ABI_CALL(0x00346DF9u, sub_00346DF9); /* call 0x00346DF9 */

loc_00346E0C: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00346E1A; /* je: equal / zero */

loc_00346E13: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00346E19u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_00346E19: ;
    POP32(esp, ecx);

loc_00346E1A: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00346E20
 * Original: 0x00346E20 - 0x00346E38 (24 bytes, 8 insns)
 * Folder: xdk/libcpmt (between: 0x00346DB4 and 0x00346E38)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00346E20(void)
{

loc_00346E20: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(esp + 8));
    esi = ecx;
    PUSH32(esp, 0x00346E2Cu); RECOMP_ABI_CALL(0x00347325u, sub_00347325); /* call 0x00347325 */

loc_00346E2C: ;
    MEM32(esi) = 0x41D930;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00346E38
 * Original: 0x00346E38 - 0x00346E99 (97 bytes, 26 insns)
 * Folder: xdk/libcpmt (string: bad allocation)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00346E38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00346E38: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(0x447F54)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(0x447F54), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = 0x41D930;
    if (TEST_NZ(_fa, _fb)) goto loc_00346E7A; /* jne: not equal / not zero */

loc_00346E4D: ;
    MEM32(0x447F54) = MEM32(0x447F54) | 1;
    _fa = (uint32_t)(MEM32(0x447F54)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = ebp + -4;
    PUSH32(esp, eax);
    ecx = 0x447F48;
    MEM32(ebp + -4) = 0x41D938;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346E69u); RECOMP_ABI_CALL(0x003472E0u, sub_003472E0); /* call 0x003472E0 */

loc_00346E69: ;
    PUSH32(esp, 0x369D0E);
    MEM32(0x447F48) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346E79u); RECOMP_ABI_CALL(0x003472BDu, sub_003472BD); /* call 0x003472BD */

loc_00346E79: ;
    POP32(esp, ecx);

loc_00346E7A: ;
    PUSH32(esp, 0x447F48);
    ecx = ebp + -16;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346E87u); RECOMP_ABI_CALL(0x00347325u, sub_00347325); /* call 0x00347325 */

loc_00346E87: ;
    PUSH32(esp, 0x42A0EC);
    eax = ebp + -16;
    PUSH32(esp, eax);
    MEM32(ebp + -16) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00346E98u); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_00346E98: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00346E99
 * Original: 0x00346E99 - 0x00346E9E (5 bytes, 1 insns)
 * Folder: xdk/libcpmt (between: 0x00346E38 and 0x003471DD)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00346E99(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00346E99: ;
    g_seh_ebp = ebp; sub_00348E01(); return; /* tail jmp 0x00348E01 */

}

/**
 * sub_00346EA0
 * Original: 0x00346EA0 - 0x003471DD (829 bytes, 300 insns)
 * Folder: xdk/libcpmt (between: 0x00346E38 and 0x003471DD)
 * Category: crt
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00346EA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00346EA0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 0x10);
    edi = MEM32(ebp + 8);
    eax = ecx;
    edx = ecx;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(esi)) >> 32) & 1);
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00346EC0; /* jbe: below or equal (unsigned <=) */

loc_00346EB8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0034703C; /* jb: below (unsigned <) */

loc_00346EC0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 3 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00346EDC; /* jne: not equal / not zero */

loc_00346EC8: ;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00346EFC; /* jb: below (unsigned <) */

loc_00346ED3: ;
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
    { uint32_t _jt = MEM32(edx * 4 + 0x346FEC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00346FFCu) goto loc_00346FFC;
    if (_jt == 0x00347004u) goto loc_00347004;
    if (_jt == 0x00347010u) goto loc_00347010;
    if (_jt == 0x00347024u) goto loc_00347024;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00346EDC: ;
    eax = edi;
    edx = 3;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(4));
    ecx = ecx - 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (_cf) goto loc_00346EF4; /* jb: below (unsigned <) */

loc_00346EE8: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _jt = MEM32(eax * 4 + 0x346F00); /* switch: 3 entries, 3 targets */
    if (_jt == 0x00346F10u) goto loc_00346F10;
    if (_jt == 0x00346F3Cu) goto loc_00346F3C;
    if (_jt == 0x00346F60u) goto loc_00346F60;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00346EF4: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x346FFC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00346FFCu) goto loc_00346FFC;
    if (_jt == 0x00347004u) goto loc_00347004;
    if (_jt == 0x00347010u) goto loc_00347010;
    if (_jt == 0x00347024u) goto loc_00347024;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */

loc_00346EFC: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x346F80); /* switch: 8 entries, 8 targets */
    if (_jt == 0x00346FA0u) goto loc_00346FA0;
    if (_jt == 0x00346FA8u) goto loc_00346FA8;
    if (_jt == 0x00346FB0u) goto loc_00346FB0;
    if (_jt == 0x00346FB8u) goto loc_00346FB8;
    if (_jt == 0x00346FC0u) goto loc_00346FC0;
    if (_jt == 0x00346FC8u) goto loc_00346FC8;
    if (_jt == 0x00346FD0u) goto loc_00346FD0;
    if (_jt == 0x00346FE3u) goto loc_00346FE3;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */
    { uint64_t _t = (uint64_t)(MEM8(edi + 0x34)) + (uint64_t)(HI8(ecx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(edi + 0x34) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM8(edi + 0x34)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + ebp * 2)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(edi + ebp * 2) = MEM8(edi + ebp * 2) + HI8(ebx);
    _fa = (uint32_t)(MEM8(edi + ebp * 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint32_t _pa_esp = esp; PUSH32(esp, eax); PUSH32(esp, ecx); PUSH32(esp, edx); PUSH32(esp, ebx); PUSH32(esp, _pa_esp); PUSH32(esp, ebp); PUSH32(esp, esi); PUSH32(esp, edi); } /* pushal */
    RECOMP_UNIMPL("outsd dx, dword ptr [esi]", 0x00346F0Du); /* TODO: outsd dx, dword ptr [esi] */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00346F10: ;
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    MEM8(edi + 1) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 2));
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(edi + 2) = LO8(eax);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(3)) >> 32) & 1);
    esi = esi + 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(3)) >> 32) & 1);
    edi = edi + 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00346EFC; /* jb: below (unsigned <) */

loc_00346F30: ;
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
    { uint32_t _jt = MEM32(edx * 4 + 0x346FEC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00346FFCu) goto loc_00346FFC;
    if (_jt == 0x00347004u) goto loc_00347004;
    if (_jt == 0x00347010u) goto loc_00347010;
    if (_jt == 0x00347024u) goto loc_00347024;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */

loc_00346F3C: ;
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(edi + 1) = LO8(eax);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(2)) >> 32) & 1);
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(2)) >> 32) & 1);
    edi = edi + 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00346EFC; /* jb: below (unsigned <) */

loc_00346F56: ;
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
    { uint32_t _jt = MEM32(edx * 4 + 0x346FEC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00346FFCu) goto loc_00346FFC;
    if (_jt == 0x00347004u) goto loc_00347004;
    if (_jt == 0x00347010u) goto loc_00347010;
    if (_jt == 0x00347024u) goto loc_00347024;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */

loc_00346F60: ;
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(1)) >> 32) & 1);
    esi = esi + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(1)) >> 32) & 1);
    edi = edi + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00346EFC; /* jb: below (unsigned <) */

loc_00346F74: ;
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
    { uint32_t _jt = MEM32(edx * 4 + 0x346FEC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00346FFCu) goto loc_00346FFC;
    if (_jt == 0x00347004u) goto loc_00347004;
    if (_jt == 0x00347010u) goto loc_00347010;
    if (_jt == 0x00347024u) goto loc_00347024;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */
    if (ecx == 0) (void)0; /* goto loc_00346FF1 - dead code, label not in function */ /* jecxz */

loc_00346F82: ;
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    if (1) _cf = (int)(((MEM8(edi + 0x34)) >> ((1) - 1)) & 1);
    MEM8(edi + 0x34) = MEM8(edi + 0x34) >> 1;
    _fa = (uint32_t)(MEM8(edi + 0x34)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("outsd dx, dword ptr [esi]", 0x00346F89u); /* TODO: outsd dx, dword ptr [esi] */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    if (0) _cf = (int)(((MEM8(edi + 0x34)) >> ((0) - 1)) & 1);
    MEM8(edi + 0x34) = MEM8(edi + 0x34) >> 0;
    _fa = (uint32_t)(MEM8(edi + 0x34)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    eax = 0xB000346Fu;
    RECOMP_UNIMPL("outsd dx, dword ptr [esi]", 0x00346F95u); /* TODO: outsd dx, dword ptr [esi] */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x6F) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x6F (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00346FA0: ;
    eax = MEM32(esi + ecx * 4 + -28);
    MEM32(edi + ecx * 4 + -28) = eax;

loc_00346FA8: ;
    eax = MEM32(esi + ecx * 4 + -24);
    MEM32(edi + ecx * 4 + -24) = eax;

loc_00346FB0: ;
    eax = MEM32(esi + ecx * 4 + -20);
    MEM32(edi + ecx * 4 + -20) = eax;

loc_00346FB8: ;
    eax = MEM32(esi + ecx * 4 + -16);
    MEM32(edi + ecx * 4 + -16) = eax;

loc_00346FC0: ;
    eax = MEM32(esi + ecx * 4 + -12);
    MEM32(edi + ecx * 4 + -12) = eax;

loc_00346FC8: ;
    eax = MEM32(esi + ecx * 4 + -8);
    MEM32(edi + ecx * 4 + -8) = eax;

loc_00346FD0: ;
    eax = MEM32(esi + ecx * 4 + -4);
    MEM32(edi + ecx * 4 + -4) = eax;
    eax = ecx * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00346FE3: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x346FEC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00346FFCu) goto loc_00346FFC;
    if (_jt == 0x00347004u) goto loc_00347004;
    if (_jt == 0x00347010u) goto loc_00347010;
    if (_jt == 0x00347024u) goto loc_00347024;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    edi = edi;
    g_df = 0; /* cld */
    RECOMP_UNIMPL("outsd dx, dword ptr [esi]", 0x00346FEDu); /* TODO: outsd dx, dword ptr [esi] */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x70) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0x70)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0x70);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    { uint64_t _t = (uint64_t)(MEM8(eax + 0x34)) + (uint64_t)(HI8(edx)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(eax + 0x34) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM8(eax + 0x34)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + esi * 2)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax + esi * 2) = MEM8(eax + esi * 2) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax + esi * 2)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_00346FFC: ;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00347004: ;
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00347010: ;
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    MEM8(edi + 1) = LO8(eax);
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_00347024: ;
    SET_LO8(eax, MEM8(esi));
    MEM8(edi) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    MEM8(edi + 1) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 2));
    MEM8(edi + 2) = LO8(eax);
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_0034703C: ;
    esi = ecx + esi + -4;
    edi = ecx + edi + -4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 3 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00347070; /* jne: not equal / not zero */

loc_0034704C: ;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    edx = edx & 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00347064; /* jb: below (unsigned <) */

loc_00347057: ;
    g_df = 1; /* std */
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
    g_df = 0; /* cld */
    { uint32_t _jt = MEM32(edx * 4 + 0x347188); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00347198u) goto loc_00347198;
    if (_jt == 0x003471A0u) goto loc_003471A0;
    if (_jt == 0x003471B0u) goto loc_003471B0;
    if (_jt == 0x003471C4u) goto loc_003471C4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    edi = edi;

loc_00347064: ;
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    { uint32_t _jt = MEM32(ecx * 4 + 0x347138); /* switch: 8 entries, 8 targets */
    if (_jt == 0x0034713Cu) goto loc_0034713C;
    if (_jt == 0x00347144u) goto loc_00347144;
    if (_jt == 0x0034714Cu) goto loc_0034714C;
    if (_jt == 0x00347154u) goto loc_00347154;
    if (_jt == 0x0034715Cu) goto loc_0034715C;
    if (_jt == 0x00347164u) goto loc_00347164;
    if (_jt == 0x0034716Cu) goto loc_0034716C;
    if (_jt == 0x0034717Fu) goto loc_0034717F;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */

loc_00347070: ;
    eax = edi;
    edx = 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00347088; /* jb: below (unsigned <) */

loc_0034707C: ;
    _cf = 0; /* logical op clears CF */
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(eax));
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _jt = MEM32(eax * 4 + 0x34708C); /* switch: 3 entries, 3 targets */
    if (_jt == 0x0034709Cu) goto loc_0034709C;
    if (_jt == 0x003470C0u) goto loc_003470C0;
    if (_jt == 0x003470E8u) goto loc_003470E8;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_00347088: ;
    { uint32_t _jt = MEM32(ecx * 4 + 0x347188); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00347198u) goto loc_00347198;
    if (_jt == 0x003471A0u) goto loc_003471A0;
    if (_jt == 0x003471B0u) goto loc_003471B0;
    if (_jt == 0x003471C4u) goto loc_003471C4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */
    PUSH32(esp, g_recomp_eflags); /* pushfd */
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003470C7 - dead code, label not in function */

loc_00347093: ;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (_flags /* jo: overflow */) goto loc_003470CB;

loc_00347097: ;
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + HI8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (_flags /* jo: overflow */) (void)0; /* goto loc_003470CF - dead code, label not in function */

loc_0034709C: ;
    SET_LO8(eax, MEM8(esi + 3));
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(edi + 3) = LO8(eax);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(1));
    esi = esi - 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(1));
    edi = edi - 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00347064; /* jb: below (unsigned <) */

loc_003470B2: ;
    g_df = 1; /* std */
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
    g_df = 0; /* cld */
    { uint32_t _jt = MEM32(edx * 4 + 0x347188); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00347198u) goto loc_00347198;
    if (_jt == 0x003471A0u) goto loc_003471A0;
    if (_jt == 0x003471B0u) goto loc_003471B0;
    if (_jt == 0x003471C4u) goto loc_003471C4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */

loc_003470C0: ;
    SET_LO8(eax, MEM8(esi + 3));
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(edi + 3) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 2));

loc_003470CB: ;
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(edi + 2) = LO8(eax);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(2));
    esi = esi - 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(2));
    edi = edi - 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00347064; /* jb: below (unsigned <) */

loc_003470DC: ;
    g_df = 1; /* std */
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
    g_df = 0; /* cld */
    { uint32_t _jt = MEM32(edx * 4 + 0x347188); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00347198u) goto loc_00347198;
    if (_jt == 0x003471A0u) goto loc_003471A0;
    if (_jt == 0x003471B0u) goto loc_003471B0;
    if (_jt == 0x003471C4u) goto loc_003471C4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */

loc_003470E8: ;
    SET_LO8(eax, MEM8(esi + 3));
    _cf = 0; /* logical op clears CF */
    edx = edx & ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(edi + 3) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 2));
    MEM8(edi + 2) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    if (2) _cf = (int)(((ecx) >> ((2) - 1)) & 1);
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(edi + 1) = LO8(eax);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esi) < (uint32_t)(3));
    esi = esi - 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(edi) < (uint32_t)(3));
    edi = edi - 3;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 8 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00347064; /* jb: below (unsigned <) */

loc_0034710E: ;
    g_df = 1; /* std */
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
    g_df = 0; /* cld */
    { uint32_t _jt = MEM32(edx * 4 + 0x347188); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00347198u) goto loc_00347198;
    if (_jt == 0x003471A0u) goto loc_003471A0;
    if (_jt == 0x003471B0u) goto loc_003471B0;
    if (_jt == 0x003471C4u) goto loc_003471C4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    /* nop */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x71) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x71 (8-bit) */
    _cf = (int)(_fa < _fb);
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esp++;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if ((_fb == 0)) (void)0; /* goto loc_00347157 - dead code, label not in function */ /* jno: not overflow */

loc_00347123: ;
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + esi * 2 + 0x34)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(ecx + esi * 2 + 0x34) = MEM8(ecx + esi * 2 + 0x34) + LO8(ecx);
    _fa = (uint32_t)(MEM8(ecx + esi * 2 + 0x34)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + esi * 2 + 0x34)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(ecx + esi * 2 + 0x34) = MEM8(ecx + esi * 2 + 0x34) + LO8(edx);
    _fa = (uint32_t)(MEM8(ecx + esi * 2 + 0x34)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + esi * 2 + 0x34)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(ecx + esi * 2 + 0x34) = MEM8(ecx + esi * 2 + 0x34) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ecx + esi * 2 + 0x34)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + esi * 2 + 0x34)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(ecx + esi * 2 + 0x34) = MEM8(ecx + esi * 2 + 0x34) + HI8(eax);
    _fa = (uint32_t)(MEM8(ecx + esi * 2 + 0x34)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx + esi * 2 + 0x34)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ecx + esi * 2 + 0x34) = MEM8(ecx + esi * 2 + 0x34) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ecx + esi * 2 + 0x34)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi + 0x71)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    MEM8(edi + 0x71) = MEM8(edi + 0x71) + HI8(ebx);
    _fa = (uint32_t)(MEM8(edi + 0x71)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

loc_0034713C: ;
    eax = MEM32(esi + ecx * 4 + 0x1C);
    MEM32(edi + ecx * 4 + 0x1C) = eax;

loc_00347144: ;
    eax = MEM32(esi + ecx * 4 + 0x18);
    MEM32(edi + ecx * 4 + 0x18) = eax;

loc_0034714C: ;
    eax = MEM32(esi + ecx * 4 + 0x14);
    MEM32(edi + ecx * 4 + 0x14) = eax;

loc_00347154: ;
    eax = MEM32(esi + ecx * 4 + 0x10);
    MEM32(edi + ecx * 4 + 0x10) = eax;

loc_0034715C: ;
    eax = MEM32(esi + ecx * 4 + 0xC);
    MEM32(edi + ecx * 4 + 0xC) = eax;

loc_00347164: ;
    eax = MEM32(esi + ecx * 4 + 8);
    MEM32(edi + ecx * 4 + 8) = eax;

loc_0034716C: ;
    eax = MEM32(esi + ecx * 4 + 4);
    MEM32(edi + ecx * 4 + 4) = eax;
    eax = ecx * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(eax)) >> 32) & 1);
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(eax)) >> 32) & 1);
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0034717F: ;
    { uint32_t _jt = MEM32(edx * 4 + 0x347188); /* switch: 4 entries, 4 targets */
    if (_jt == 0x00347198u) goto loc_00347198;
    if (_jt == 0x003471A0u) goto loc_003471A0;
    if (_jt == 0x003471B0u) goto loc_003471B0;
    if (_jt == 0x003471C4u) goto loc_003471C4;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

    edi = edi;
    eax = SX16(eax); /* cwde */
    if (_flags /* jno: not overflow */) goto loc_003471BF;

loc_0034718B: ;
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + -1342163855)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(eax + -1342163855) = MEM8(eax + -1342163855) + HI8(eax);
    _fa = (uint32_t)(MEM8(eax + -1342163855)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (_flags /* jno: not overflow */) goto loc_003471C7;

loc_00347193: ;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + LO8(eax));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    if (_flags /* jno: not overflow */) (void)0; /* goto loc_003471CB - dead code, label not in function */

loc_00347198: ;
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_003471A0: ;
    SET_LO8(eax, MEM8(esi + 3));
    MEM8(edi + 3) = LO8(eax);
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_003471B0: ;
    SET_LO8(eax, MEM8(esi + 3));
    MEM8(edi + 3) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 2));
    MEM8(edi + 2) = LO8(eax);
    eax = MEM32(ebp + 8);

loc_003471BF: ;
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

loc_003471C4: ;
    SET_LO8(eax, MEM8(esi + 3));

loc_003471C7: ;
    MEM8(edi + 3) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 2));
    MEM8(edi + 2) = LO8(eax);
    SET_LO8(eax, MEM8(esi + 1));
    MEM8(edi + 1) = LO8(eax);
    eax = MEM32(ebp + 8);
    POP32(esp, esi);
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003471DD
 * Original: 0x003471DD - 0x0034725D (128 bytes, 45 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028B043, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003471DD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003471DD: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x76C6D4));
    PUSH32(esp, 0x003471E9u); RECOMP_ABI_CALL(0x00349EF8u, sub_00349EF8); /* call 0x00349EF8 */

loc_003471E9: ;
    POP32(esp, ecx);
    ecx = MEM32(0x76C6D0);
    esi = eax;
    eax = MEM32(0x76C6D4);
    edx = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00347250; /* jae: above or equal (unsigned >=) */

loc_00347202: ;
    ecx = 0x800;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0034720D; /* jae: above or equal (unsigned >=) */

loc_0034720B: ;
    ecx = esi;

loc_0034720D: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00347216u); RECOMP_ABI_CALL(0x00348E59u, sub_00348E59); /* call 0x00348E59 */

loc_00347216: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00347233; /* jne: not equal / not zero */

loc_0034721C: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x10;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(0x76C6D4));
    PUSH32(esp, 0x0034722Bu); RECOMP_ABI_CALL(0x00348E59u, sub_00348E59); /* call 0x00348E59 */

loc_0034722B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_NE(_fa, _fb)) goto loc_00347233; /* jne: not equal / not zero */

loc_00347231: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00347233: ;
    ecx = MEM32(0x76C6D0);
    _fb = (uint32_t)(MEM32(0x76C6D4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(0x76C6D4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x76C6D4) = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = eax + ecx * 4;
    MEM32(0x76C6D0) = ecx;

loc_00347250: ;
    MEM32(ecx) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(0x76C6D0) = MEM32(0x76C6D0) + 4;
    _fa = (uint32_t)(MEM32(0x76C6D0)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0034725D
 * Original: 0x0034725D - 0x00347285 (40 bytes, 14 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028B0C3, between)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0034725D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034725D: ;
    PUSH32(esp, 0x80);
    PUSH32(esp, 0x00347267u); RECOMP_ABI_CALL(0x00348DEFu, sub_00348DEF); /* call 0x00348DEF */

loc_00347267: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    MEM32(0x76C6D4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_00347275; /* jne: not equal / not zero */

loc_00347271: ;
    PUSH32(esp, 0x18);
    POP32(esp, eax);
    esp += 4; return; /* ret */

loc_00347275: ;
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(0x76C6D4);
    MEM32(0x76C6D0) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00347285
 * Original: 0x00347285 - 0x003472B7 (50 bytes, 13 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028B0EB, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347285(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00347285: ;
    PUSH32(esp, 0xC);
    PUSH32(esp, 0x41D948);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347291u); RECOMP_ABI_CALL(0x00347864u, sub_00347864); /* call 0x00347864 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00347291: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347296u); RECOMP_ABI_CALL(0x00348CBAu, sub_00348CBA); /* call 0x00348CBA */

loc_00347296: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = MEM32(ebp + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003472A2u); RECOMP_ABI_CALL(0x003471DDu, sub_003471DD); /* call 0x003471DD */

loc_003472A2: ;
    MEM32(ebp + -28) = eax;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003472AEu); RECOMP_ABI_CALL(0x003472B7u, sub_003472B7); /* call 0x003472B7 */

loc_003472AE: ;
    eax = MEM32(ebp + -28);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003472B6u); RECOMP_ABI_CALL(0x0034789Fu, sub_0034789F); /* call 0x0034789F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003472B6: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003472B7
 * Original: 0x003472B7 - 0x003472BD (6 bytes, 2 insns)
 * Folder: xdk/libcpmt (between: 0x00347285 and 0x003472E0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003472B7(void)
{

loc_003472B7: ;
    PUSH32(esp, 0x003472BCu); RECOMP_ABI_CALL(0x00348CC3u, sub_00348CC3); /* call 0x00348CC3 */

loc_003472BC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003472BD
 * Original: 0x003472BD - 0x003472CF (18 bytes, 8 insns)
 * Folder: xdk/libcpmt (between: 0x00347285 and 0x003472E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003472BD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003472BD: ;
    PUSH32(esp, MEM32(esp + 4));
    PUSH32(esp, 0x003472C6u); RECOMP_ABI_CALL(0x00347285u, sub_00347285); /* call 0x00347285 */

loc_003472C6: ;
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_003472CF
 * Original: 0x003472CF - 0x003472E0 (17 bytes, 5 insns)
 * Folder: xdk/libcpmt (between: 0x00347285 and 0x003472E0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003472CF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003472CF: ;
    eax = ecx;
    MEM32(eax + 4) = MEM32(eax + 4) & 0;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax) = 0x41D954;
    esp += 4; return; /* ret */

}

/**
 * sub_003472E0
 * Original: 0x003472E0 - 0x00347325 (69 bytes, 31 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028B29D, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003472E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003472E0: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(esi) = 0x41D954;
    eax = MEM32(edi);
    ecx = eax + 1;

loc_003472F3: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003472F3; /* jne: not equal / not zero */

loc_003472FA: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00347303u); RECOMP_ABI_CALL(0x00348DEFu, sub_00348DEF); /* call 0x00348DEF */

loc_00347303: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00347317; /* je: equal / zero */

loc_0034730B: ;
    edx = MEM32(edi);

loc_0034730D: ;
    SET_LO8(ecx, MEM8(edx));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034730D; /* jne: not equal / not zero */

loc_00347317: ;
    POP32(esp, edi);
    MEM32(esi + 8) = 1;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00347325
 * Original: 0x00347325 - 0x00347374 (79 bytes, 36 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028B2E2, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347325(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00347325: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    MEM32(esi) = 0x41D954;
    eax = MEM32(edi + 8);
    MEM32(esi + 8) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(edi + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0034736A; /* je: equal / zero */

loc_00347340: ;
    ecx = eax + 1;

loc_00347343: ;
    SET_LO8(edx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00347343; /* jne: not equal / not zero */

loc_0034734A: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00347353u); RECOMP_ABI_CALL(0x00348DEFu, sub_00348DEF); /* call 0x00348DEF */

loc_00347353: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    POP32(esp, ecx);
    MEM32(esi + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0034736D; /* je: equal / zero */

loc_0034735B: ;
    edi = MEM32(edi + 4);

loc_0034735E: ;
    SET_LO8(ecx, MEM8(edi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = LO8(ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034735E; /* jne: not equal / not zero */

loc_00347368: ;
    goto loc_0034736D;

loc_0034736A: ;
    MEM32(esi + 4) = eax;

loc_0034736D: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00347374
 * Original: 0x00347374 - 0x0034738A (22 bytes, 7 insns)
 * Folder: xdk/libcpmt (between: 0x00347325 and 0x0034738A)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347374(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00347374: ;
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), 0 (32-bit) */
    MEM32(ecx) = 0x41D954;
    if (CMP_EQ(_fa, _fb)) goto loc_00347389; /* je: equal / zero */

loc_00347380: ;
    PUSH32(esp, MEM32(ecx + 4));
    PUSH32(esp, 0x00347388u); RECOMP_ABI_CALL(0x00348E01u, sub_00348E01); /* call 0x00348E01 */

loc_00347388: ;
    POP32(esp, ecx);

loc_00347389: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0034738A
 * Original: 0x0034738A - 0x00347397 (13 bytes, 5 insns)
 * Folder: xdk/libcpmt (string: Unknown exception)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034738A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034738A: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00347396; /* jne: not equal / not zero */

loc_00347391: ;
    eax = 0x41D95C;

loc_00347396: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00347397
 * Original: 0x00347397 - 0x003473B3 (28 bytes, 11 insns)
 * Folder: xdk/libcpmt (between: 0x0034738A and 0x003473B3)
 * Category: game_vtable
 * CC: thiscall, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347397(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00347397: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0034739Fu); RECOMP_ABI_CALL(0x00347374u, sub_00347374); /* call 0x00347374 */

loc_0034739F: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003473AD; /* je: equal / zero */

loc_003473A6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003473ACu); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_003473AC: ;
    POP32(esp, ecx);

loc_003473AD: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003473B3
 * Original: 0x003473B3 - 0x003473F0 (61 bytes, 19 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028B135, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003473B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003473B3: ;
    PUSH32(esp, 8);
    PUSH32(esp, 0x41D978);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003473BFu); RECOMP_ABI_CALL(0x00347864u, sub_00347864); /* call 0x00347864 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003473BF: ;
    esi = ecx;
    MEM32(esi) = 0x41D970;
    PUSH32(esp, 0xE);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003473CEu); RECOMP_ABI_CALL(0x0034A075u, sub_0034A075); /* call 0x0034A075 */

loc_003473CE: ;
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(esi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003473E1; /* je: equal / zero */

loc_003473DA: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003473E0u); RECOMP_ABI_CALL(0x00348E01u, sub_00348E01); /* call 0x00348E01 */

loc_003473E0: ;
    POP32(esp, ecx);

loc_003473E1: ;
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003473EAu); RECOMP_ABI_CALL(0x003473F0u, sub_003473F0); /* call 0x003473F0 */

loc_003473EA: ;
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003473EFu); RECOMP_ABI_CALL(0x0034789Fu, sub_0034789F); /* call 0x0034789F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003473EF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_003473F0
 * Original: 0x003473F0 - 0x003473F9 (9 bytes, 4 insns)
 * Folder: xdk/libcpmt (between: 0x003473B3 and 0x00347456)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003473F0(void)
{

loc_003473F0: ;
    PUSH32(esp, 0xE);
    PUSH32(esp, 0x003473F7u); RECOMP_ABI_CALL(0x00349FC3u, sub_00349FC3); /* call 0x00349FC3 */

loc_003473F7: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_003473F9
 * Original: 0x003473F9 - 0x00347415 (28 bytes, 11 insns)
 * Folder: xdk/libcpmt (between: 0x003473B3 and 0x00347456)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003473F9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003473F9: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00347401u); RECOMP_ABI_CALL(0x003473B3u, sub_003473B3); /* call 0x003473B3 */

loc_00347401: ;
    _fa = (uint32_t)(MEM8(esp + 8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 8), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0034740F; /* je: equal / zero */

loc_00347408: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0034740Eu); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_0034740E: ;
    POP32(esp, ecx);

loc_0034740F: ;
    eax = esi;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00347415
 * Original: 0x00347415 - 0x00347456 (65 bytes, 32 insns)
 * Folder: xdk/libcpmt (between: 0x003473B3 and 0x00347456)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00347415(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00347415: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    PUSH32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_00347444; /* je: equal / zero */

loc_00347422: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00347453; /* je: equal / zero */

loc_00347427: ;
    if (CMP_BE(_fa, _fb)) goto loc_00347453; /* jbe: below or equal (unsigned <=) */

loc_00347429: ;
    ecx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(esi, ZX8(MEM8(ecx)));
    MEM16(edx) = LO16(esi);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00347453; /* je: equal / zero */

loc_0034743A: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00347429; /* jb: below (unsigned <) */

loc_00347442: ;
    goto loc_00347453;

loc_00347444: ;
    eax = MEM32(ebp + 0xC);
    edx = eax + 1;

loc_0034744A: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034744A; /* jne: not equal / not zero */

loc_00347451: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00347453: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00347456
 * Original: 0x00347456 - 0x003474AE (88 bytes, 36 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028A4FD, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00347456(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00347456: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    eax = ebp + -32;
    PUSH32(esp, eax);
    MEM32(ebp + -28) = 0x7FFFFFFF;
    MEM32(ebp + -20) = 0x42;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -32) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347485u); RECOMP_ABI_CALL(0x0034A24Au, sub_0034A24A); /* call 0x0034A24A */

loc_00347485: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003474A8; /* je: equal / zero */

loc_0034748E: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_0034749B; /* js: sign (negative) */

loc_00347493: ;
    eax = MEM32(ebp + -32);
    MEM8(eax) = 0;
    goto loc_003474A8;

loc_0034749B: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003474A6u); RECOMP_ABI_CALL(0x0034A0A3u, sub_0034A0A3); /* call 0x0034A0A3 */

loc_003474A6: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_003474A8: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003474AE
 * Original: 0x003474AE - 0x00347553 (165 bytes, 78 insns)
 * Folder: xdk/libcpmt (between: 0x00347456 and 0x0034761D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003474AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003474AE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x20));
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003474BFu); RECOMP_ABI_CALL(0x0034A9D1u, sub_0034A9D1); /* call 0x0034A9D1 */

loc_003474BF: ;
    PUSH32(esp, 8);
    POP32(esp, ecx);
    MEM32(ebp + 0xC) = eax;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = ebp + -32;
    PUSH32(esp, 7);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    POP32(esp, edi);

loc_003474CF: ;
    SET_LO8(edx, MEM8(esi));
    ecx = ZX8(LO8(edx));
    eax = ecx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO8(ebx, 1);
    if (LO8(ecx)) _cf = (int)(((LO8(ebx)) >> (8 - (LO8(ecx)))) & 1);
    SET_LO8(ebx, LO8(ebx) << LO8(ecx));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* shift result */
    if (3) _cf = (int)(((eax) >> ((3) - 1)) & 1);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ebp + eax + -32;
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(ebx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003474CF; /* jne: not equal / not zero */

loc_003474EA: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_003474FE; /* jne: not equal / not zero */

loc_003474F1: ;
    eax = MEM32(ebp + 0xC);
    edx = MEM32(eax + 0x18);
    goto loc_003474FE;

loc_003474F9: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00347517; /* je: equal / zero */

loc_003474FD: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003474FE: ;
    SET_LO8(eax, MEM8(edx));
    esi = ZX8(LO8(eax));
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (LO8(ecx)) _cf = (int)(((ebx) >> (32 - (LO8(ecx)))) & 1);
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (3) _cf = (int)(((esi) >> ((3) - 1)) & 1);
    esi = esi >> 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(ebp + esi + -32));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(ebx) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_003474F9; /* jne: not equal / not zero */

loc_00347517: ;
    ebx = edx;
    goto loc_00347533;

loc_0034751B: ;
    esi = ZX8(MEM8(edx));
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = esi;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    if (LO8(ecx)) _cf = (int)(((eax) >> (32 - (LO8(ecx)))) & 1);
    eax = eax << LO8(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (3) _cf = (int)(((esi) >> ((3) - 1)) & 1);
    esi = esi >> 3;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(ecx, MEM8(ebp + esi + -32));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), LO8(eax) (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0034753A; /* jne: not equal / not zero */

loc_00347532: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00347533: ;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0034751B; /* jne: not equal / not zero */

loc_00347538: ;
    goto loc_0034753E;

loc_0034753A: ;
    MEM8(edx) = 0;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0034753E: ;
    eax = MEM32(ebp + 0xC);
    MEM32(eax + 0x18) = edx;
    eax = ebx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(edx));
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    POP32(esp, edi);
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    POP32(esp, esi);
    _cf = 0; /* logical op clears CF */
    eax = eax & ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00347553
 * Original: 0x00347553 - 0x00347558 (5 bytes, 1 insns)
 * Folder: xdk/libcpmt (between: 0x00347456 and 0x0034761D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347553(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00347553: ;
    g_seh_ebp = ebp; sub_00346E99(); return; /* tail jmp 0x00346E99 */

}

/**
 * sub_00347558
 * Original: 0x00347558 - 0x0034756E (22 bytes, 10 insns)
 * Folder: xdk/libcpmt (between: 0x00347456 and 0x0034761D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347558(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00347558: ;
    eax = MEM32(esp + 4);

loc_0034755C: ;
    SET_LO16(ecx, MEM16(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034755C; /* jne: not equal / not zero */

loc_00347566: ;
    _fb = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esp += 4; return; /* ret */

}

/**
 * sub_00347570
 * Original: 0x00347570 - 0x0034761D (173 bytes, 76 insns)
 * Folder: xdk/libcpmt (between: 0x00347456 and 0x0034761D)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347570(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00347570: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_003475CB; /* je: equal / zero */

loc_00347579: ;
    edx = MEM32(esp + 8);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(ebx, MEM8(esp + 0xC));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 3 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_003475A1; /* je: equal / zero */

loc_0034758B: ;
    SET_LO8(ecx, MEM8(edx));
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(1)) >> 32) & 1);
    edx = edx + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    if ((_fa == 0)) goto loc_00347606; /* je: equal / zero */

loc_00347594: ;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    eax = eax - 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003475CB; /* je: equal / zero */

loc_00347599: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 3 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0034758B; /* jne: not equal / not zero */

loc_003475A1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (_cf) goto loc_003475B8; /* jb: below (unsigned <) */

loc_003475A6: ;
    PUSH32(esp, edi);
    edi = ebx;
    if (8) _cf = (int)(((ebx) >> (32 - (8))) & 1);
    ebx = ebx << 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edi)) >> 32) & 1);
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = ebx;
    if (0x10) _cf = (int)(((ebx) >> (32 - (0x10))) & 1);
    ebx = ebx << 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(edi)) >> 32) & 1);
    ebx = ebx + edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003475D2;

loc_003475B7: ;
    POP32(esp, edi);

loc_003475B8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_003475CB; /* je: equal / zero */

loc_003475BD: ;
    SET_LO8(ecx, MEM8(edx));
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(1)) >> 32) & 1);
    edx = edx + 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    if ((_fa == 0)) goto loc_00347606; /* je: equal / zero */

loc_003475C6: ;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(1));
    eax = eax - 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_003475BD; /* jne: not equal / not zero */

loc_003475CB: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_003475CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(4));
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if (_cf) goto loc_003475B7; /* jb: below (unsigned <) */

loc_003475D2: ;
    ecx = MEM32(edx);
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0x7EFEFEFF;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(ecx)) >> 32) & 1);
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ 0xFFFFFFFFu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(4)) >> 32) & 1);
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0x81010100u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_003475CD; /* je: equal / zero */

loc_003475ED: ;
    ecx = MEM32(edx + -4);
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    if ((_fa == 0)) goto loc_00347617; /* je: equal / zero */

loc_003475F4: ;
    _cf = 0; /* logical op clears CF */
    SET_HI8(ecx, HI8(ecx) ^ LO8(ebx));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    if ((_fa == 0)) goto loc_00347611; /* je: equal / zero */

loc_003475F8: ;
    if (0x10) _cf = (int)(((ecx) >> ((0x10) - 1)) & 1);
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(ecx, LO8(ecx) ^ LO8(ebx));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    if ((_fa == 0)) goto loc_0034760B; /* je: equal / zero */

loc_003475FF: ;
    _cf = 0; /* logical op clears CF */
    SET_HI8(ecx, HI8(ecx) ^ LO8(ebx));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    if ((_fa == 0)) goto loc_00347605; /* je: equal / zero */

loc_00347603: ;
    goto loc_003475CD;

loc_00347605: ;
    POP32(esp, edi);

loc_00347606: ;
    eax = edx + -1;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0034760B: ;
    eax = edx + -2;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00347611: ;
    eax = edx + -3;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00347617: ;
    eax = edx + -4;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0034761D
 * Original: 0x0034761D - 0x00347660 (67 bytes, 30 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028A8B1, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034761D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034761D: ;
    _fa = (uint32_t)(MEM32(0x448124)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x448124), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0034762B; /* jne: not equal / not zero */

loc_00347626: ;
    g_seh_ebp = ebp; sub_0034ABF0(); return; /* tail jmp 0x0034ABF0 */

loc_0034762B: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);

loc_00347636: ;
    eax = ZX8(MEM8(esi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x0034763Fu); RECOMP_ABI_CALL(0x003490BDu, sub_003490BD); /* call 0x003490BD */

loc_0034763F: ;
    ebx = eax;
    eax = ZX8(MEM8(edi));
    PUSH32(esp, eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, 0x0034764Bu); RECOMP_ABI_CALL(0x003490BDu, sub_003490BD); /* call 0x003490BD */

loc_0034764B: ;
    POP32(esp, ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    POP32(esp, ecx);
    ecx = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00347658; /* je: equal / zero */

loc_00347654: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00347636; /* je: equal / zero */

loc_00347658: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00347864
 * Original: 0x00347864 - 0x0034789F (59 bytes, 19 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028A558, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347864(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00347864: ;
    PUSH32(esp, 0x3478B8);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x10) = ebp;
    ebp = esp + 0x10;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - eax;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(ebp + -8);
    MEM32(ebp + -24) = esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -4);
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    MEM32(ebp + -8) = eax;
    eax = ebp + -16;
    MEM32(XBOX_FS_BASE) = eax;
    g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_0034789F
 * Original: 0x0034789F - 0x003478B0 (17 bytes, 9 insns)
 * Folder: xdk/libcpmt (between: 0x00347864 and 0x003478B8)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034789F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034789F: ;
    ecx = MEM32(ebp + -16);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ecx);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    PUSH32(esp, ecx);
    g_seh_ebp = ebp; esp += 4; return; /* ret */

}

/**
 * sub_003478B0
 * Original: 0x003478B0 - 0x003478B8 (8 bytes, 6 insns)
 * Folder: xdk/libcpmt (between: 0x00347864 and 0x003478B8)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003478B0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003478B0: ;
    PUSH32(esp, esi);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_HI8(edx, HI8(edx) ^ MEM8(eax));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    POP32(esp, eax);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(eax) = MEM8(eax) ^ HI8(edx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */

    g_seh_ebp = ebp; sub_003478B8(); return; /* fallthrough 0x003478B8 */

}

/**
 * sub_003478B8
 * Original: 0x003478B8 - 0x0034798A (210 bytes, 85 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028A5AC, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003478B8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003478B8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    g_df = 0; /* cld */
    ebx = MEM32(ebp + 0xC);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 4), 6 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0034796D; /* jne: not equal / not zero */

loc_003478D6: ;
    MEM32(ebp + -8) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(ebp + -4) = eax;
    eax = ebp + -8;
    MEM32(ebx + -4) = eax;
    esi = MEM32(ebx + 0xC);
    edi = MEM32(ebx + 8);

loc_003478EB: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00347966; /* je: equal / zero */

loc_003478F0: ;
    ecx = esi + esi * 2;
    eax = MEM32(edi + ecx * 4 + 4);
    eax = eax | eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00347954; /* je: equal / zero */

loc_003478FB: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebp);
    ebp = ebx + 0x10;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x0034790Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0034790Au); } /* indirect call */
    }

loc_0034790C: ;
    POP32(esp, ebp);
    POP32(esp, esi);
    ebx = MEM32(ebp + 0xC);
    eax = eax | eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa == 0)) goto loc_00347954; /* je: equal / zero */

loc_00347915: ;
    if ((_fas < 0)) goto loc_0034795F; /* js: sign (negative) */

loc_00347917: ;
    edi = MEM32(ebx + 8);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347920u); RECOMP_ABI_CALL(0x00347F38u, sub_00347F38); /* call 0x00347F38 */

loc_00347920: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebp = ebx + 0x10;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034792Du); RECOMP_ABI_CALL(0x00347F7Au, sub_00347F7A); /* call 0x00347F7A */

loc_0034792D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi + esi * 2;
    PUSH32(esp, 1);
    eax = MEM32(edi + ecx * 4 + 8);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0034793Eu); RECOMP_ABI_CALL(0x0034800Eu, sub_0034800E); /* call 0x0034800E */

loc_0034793E: ;
    eax = MEM32(edi + ecx * 4);
    MEM32(ebx + 0xC) = eax;
    eax = MEM32(edi + ecx * 4 + 8);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = eax; PUSH32(esp, 0x00347954u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00347952u); } /* indirect call */
    }

loc_00347954: ;
    edi = MEM32(ebx + 8);
    ecx = esi + esi * 2;
    esi = MEM32(edi + ecx * 4);
    goto loc_003478EB;

loc_0034795F: ;
    eax = 0;
    goto loc_00347982;

loc_00347966: ;
    eax = 1;
    goto loc_00347982;

loc_0034796D: ;
    PUSH32(esp, ebp);
    ebp = ebx + 0x10;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347979u); RECOMP_ABI_CALL(0x00347F7Au, sub_00347F7A); /* call 0x00347F7A */

loc_00347979: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebp);
    eax = 1;

loc_00347982: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_003479A5
 * Original: 0x003479A5 - 0x00347A43 (158 bytes, 69 insns)
 * Folder: xdk/libcpmt (between: 0x003478B8 and 0x00347AA0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003479A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003479A5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00347A41; /* je: equal / zero */

loc_003479B3: ;
    _fa = (uint32_t)(MEM32(0x448124)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x448124), eax (32-bit) */
    PUSH32(esp, ebx);
    if (CMP_NE(_fa, _fb)) goto loc_00347A01; /* jne: not equal / not zero */

loc_003479BC: ;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(ebp + 8);

loc_003479C2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(ecx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x41 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003479D6; /* jb: below (unsigned <) */

loc_003479CD: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x5A (16-bit) */
    ebx = eax + 0x20;
    if (CMP_BE(_fa, _fb)) goto loc_003479D8; /* jbe: below or equal (unsigned <=) */

loc_003479D6: ;
    ebx = eax;

loc_003479D8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edx));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x41) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x41 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003479EC; /* jb: below (unsigned <) */

loc_003479E3: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x5A) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x5A (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003479EC; /* ja: above (unsigned >) */

loc_003479E9: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003479EC: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00347A38; /* je: equal / zero */

loc_003479F5: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00347A38; /* je: equal / zero */

loc_003479FA: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), LO16(eax) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003479C2; /* je: equal / zero */

loc_003479FF: ;
    goto loc_00347A38;

loc_00347A01: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);

loc_00347A09: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347A14u); RECOMP_ABI_CALL(0x0034854Fu, sub_0034854F); /* call 0x0034854F */

loc_00347A14: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ebx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347A23u); RECOMP_ABI_CALL(0x0034854Fu, sub_0034854F); /* call 0x0034854F */

loc_00347A23: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    if ((_fa == 0)) goto loc_00347A36; /* je: equal / zero */

loc_00347A2C: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00347A36; /* je: equal / zero */

loc_00347A31: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), LO16(eax) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00347A09; /* je: equal / zero */

loc_00347A36: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_00347A38: ;
    ecx = ZX16(LO16(eax));
    eax = ZX16(LO16(ebx));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebx);

loc_00347A41: ;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00347A43
 * Original: 0x00347A43 - 0x00347A5F (28 bytes, 12 insns)
 * Folder: xdk/libcpmt (between: 0x003478B8 and 0x00347AA0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347A43(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00347A43: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);

loc_00347A4B: ;
    SET_LO16(eax, MEM16(edx));
    MEM16(ecx) = LO16(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00347A4B; /* jne: not equal / not zero */

loc_00347A5A: ;
    eax = MEM32(esp + 4);
    esp += 4; return; /* ret */

}

/**
 * sub_00347A5F
 * Original: 0x00347A5F - 0x00347A9C (61 bytes, 31 insns)
 * Folder: xdk/libcpmt (between: 0x003478B8 and 0x00347AA0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347A5F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00347A5F: ;
    ecx = MEM32(esp + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    esi = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00347A97; /* je: equal / zero */

loc_00347A6F: ;
    edx = MEM32(esp + 0x10);

loc_00347A73: ;
    SET_LO16(eax, MEM16(edx));
    MEM16(edi) = LO16(eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00347A85; /* je: equal / zero */

loc_00347A82: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00347A73; /* jne: not equal / not zero */

loc_00347A85: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00347A97; /* je: equal / zero */

loc_00347A89: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00347A97; /* je: equal / zero */

loc_00347A8C: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if (1) _cf = (int)(((ecx) >> ((1) - 1)) & 1);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    { uint64_t _t = (uint64_t)(ecx) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); ecx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(2); for (_i = 0; _i < ecx; _i++) MEM16(edi + _i*_st) = LO16(eax); edi += ecx * _st; }
    ecx = 0; /* rep stosw */

loc_00347A97: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00347AA0
 * Original: 0x00347AA0 - 0x00347B08 (104 bytes, 43 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028A900, between)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347AA0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00347AA0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    eax = MEM32(esp + 0x18);
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_00347AC2; /* jne: not equal / not zero */

loc_00347AAA: ;
    ecx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ebx = eax;
    eax = MEM32(esp + 0xC);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = ebx;
    goto loc_00347B03;

loc_00347AC2: ;
    ecx = eax;
    ebx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0xC);

loc_00347AD0: ;
    if (1) _cf = (int)(((ecx) >> ((1) - 1)) & 1);
    ecx = ecx >> 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _rcv = RC_ROT((uint32_t)(ebx), (unsigned)(1), &_cf, 32, 0);
      ebx = _rcv; } /* rcr */
    if (1) _cf = (int)(((edx) >> ((1) - 1)) & 1);
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _rcv = RC_ROT((uint32_t)(eax), (unsigned)(1), &_cf, 32, 0);
      eax = _rcv; } /* rcr */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | ecx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_00347AD0; /* jne: not equal / not zero */

loc_00347ADC: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ebx);
      edx = (uint32_t)(_dividend % (uint32_t)ebx); }
    esi = eax;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x18);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = eax;
    eax = MEM32(esp + 0x14);
    { uint64_t _r = (uint64_t)eax * (uint64_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (_cf) goto loc_00347AFE; /* jb: below (unsigned <) */

loc_00347AF0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_00347AFE; /* ja: above (unsigned >) */

loc_00347AF6: ;
    if (CMP_B(_fa, _fb)) goto loc_00347AFF; /* jb: below (unsigned <) */

loc_00347AF8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00347AFF; /* jbe: below or equal (unsigned <=) */

loc_00347AFE: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00347AFF: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;

loc_00347B03: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00347B10
 * Original: 0x00347B10 - 0x00347B31 (33 bytes, 15 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028A970, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347B10(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00347B10: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x40 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00347B2B; /* jae: above or equal (unsigned >=) */

loc_00347B15: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00347B20; /* jae: above or equal (unsigned >=) */

loc_00347B1A: ;
    { uint32_t _c = (uint32_t)(LO8(ecx)) & 31u; if (_c && _c < 32u) { eax = (eax >> _c) | (edx << (32 - _c)); _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shrd result */ } }  /* shrd */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

loc_00347B20: ;
    eax = edx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x1F) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    SET_LO8(ecx, LO8(ecx) & 0x1F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 4; return; /* ret */

loc_00347B2B: ;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x1F) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00347B40
 * Original: 0x00347B40 - 0x00347B74 (52 bytes, 19 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028A9A0, between)
 * Category: crt
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347B40(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00347B40: ;
    eax = MEM32(esp + 8);
    ecx = MEM32(esp + 0x10);
    ecx = ecx | eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esp + 0xC);
    if ((_fa != 0)) goto loc_00347B59; /* jne: not equal / not zero */

loc_00347B50: ;
    eax = MEM32(esp + 4);
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    esp += 20; return; /* ret 16 */

loc_00347B59: ;
    PUSH32(esp, ebx);
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ebx = eax;
    eax = MEM32(esp + 8);
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x14);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 8);
    { uint64_t _r = (uint64_t)eax * (uint64_t)ecx;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_00347B74
 * Original: 0x00347B74 - 0x00347BCB (87 bytes, 37 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028A699, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00347B74(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00347B74: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    MEM32(ebp + -28) = eax;
    PUSH32(esp, edi);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -32;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0x42;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -32) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347BA2u); RECOMP_ABI_CALL(0x0034A24Au, sub_0034A24A); /* call 0x0034A24A */

loc_00347BA2: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00347BC5; /* je: equal / zero */

loc_00347BAB: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00347BB8; /* js: sign (negative) */

loc_00347BB0: ;
    eax = MEM32(ebp + -32);
    MEM8(eax) = 0;
    goto loc_00347BC5;

loc_00347BB8: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347BC3u); RECOMP_ABI_CALL(0x0034A0A3u, sub_0034A0A3); /* call 0x0034A0A3 */

loc_00347BC3: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00347BC5: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00347BD0
 * Original: 0x00347BD0 - 0x00347CF4 (292 bytes, 109 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028A6F0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347BD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00347BD0: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00347C6F; /* je: equal / zero */

loc_00347BDD: ;
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    ebx = ecx;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 3 (32-bit) */
    edi = MEM32(esp + 0x10);
    if (TEST_NZ(_fa, _fb)) goto loc_00347BFC; /* jne: not equal / not zero */

loc_00347BF1: ;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if ((_fa != 0)) goto loc_00347C7F; /* jne: not equal / not zero */

loc_00347BFA: ;
    goto loc_00347C23;

loc_00347BFC: ;
    SET_LO8(eax, MEM8(esi));
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi) = LO8(eax);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00347C36; /* je: equal / zero */

loc_00347C0B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00347C3E; /* je: equal / zero */

loc_00347C0F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test esi, 3 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00347BFC; /* jne: not equal / not zero */

loc_00347C17: ;
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if ((_fa != 0)) goto loc_00347C7F; /* jne: not equal / not zero */

loc_00347C1E: ;
    ebx = ebx & 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_00347C36; /* je: equal / zero */

loc_00347C23: ;
    SET_LO8(eax, MEM8(esi));
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(edi) = LO8(eax);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00347C68; /* je: equal / zero */

loc_00347C31: ;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00347C23; /* jne: not equal / not zero */

loc_00347C36: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00347C3E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 3 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00347C5C; /* je: equal / zero */

loc_00347C46: ;
    MEM8(edi) = LO8(eax);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00347CEC; /* je: equal / zero */

loc_00347C54: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, 3 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00347C46; /* jne: not equal / not zero */

loc_00347C5C: ;
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if ((_fa != 0)) goto loc_00347CD7; /* jne: not equal / not zero */

loc_00347C63: ;
    MEM8(edi) = LO8(eax);
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00347C68: ;
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00347C63; /* jne: not equal / not zero */

loc_00347C6D: ;
    POP32(esp, ebx);
    POP32(esp, esi);

loc_00347C6F: ;
    eax = MEM32(esp + 8);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00347C75: ;
    MEM32(edi) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00347C1E; /* je: equal / zero */

loc_00347C7F: ;
    edx = 0x7EFEFEFF;
    eax = MEM32(esi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax ^ 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax ^ edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x81010100u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x81010100u (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00347C75; /* je: equal / zero */

loc_00347C99: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00347CC9; /* je: equal / zero */

loc_00347C9D: ;
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp HI8(edx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00347CBF; /* je: equal / zero */

loc_00347CA1: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF0000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFF0000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00347CB5; /* je: equal / zero */

loc_00347CA9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF000000u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0xFF000000u (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00347C75; /* jne: not equal / not zero */

loc_00347CB1: ;
    MEM32(edi) = edx;
    goto loc_00347CCD;

loc_00347CB5: ;
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = edx;
    goto loc_00347CCD;

loc_00347CBF: ;
    edx = edx & 0xFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(edi) = edx;
    goto loc_00347CCD;

loc_00347CC9: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(edi) = edx;

loc_00347CCD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00347CE3; /* je: equal / zero */

loc_00347CD7: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00347CD9: ;
    MEM32(edi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(1) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00347CD9; /* jne: not equal / not zero */

loc_00347CE3: ;
    ebx = ebx & 3;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa != 0)) goto loc_00347C63; /* jne: not equal / not zero */

loc_00347CEC: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00347CF4
 * Original: 0x00347CF4 - 0x00347D49 (85 bytes, 41 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028A814, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00347CF4(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00347CF4: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00347D45; /* je: equal / zero */

loc_00347CFD: ;
    _fa = (uint32_t)(MEM32(0x448124)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x448124), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00347D0C; /* jne: not equal / not zero */

loc_00347D06: ;
    POP32(esp, ebp);
    g_seh_ebp = ebp; sub_0034BC90(); return; /* tail jmp 0x0034BC90 */

loc_00347D0C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);

loc_00347D15: ;
    eax = ZX8(MEM8(esi));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347D1Eu); RECOMP_ABI_CALL(0x003490BDu, sub_003490BD); /* call 0x003490BD */

loc_00347D1E: ;
    ebx = eax;
    eax = ZX8(MEM8(edi));
    PUSH32(esp, eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347D2Au); RECOMP_ABI_CALL(0x003490BDu, sub_003490BD); /* call 0x003490BD */

loc_00347D2A: ;
    POP32(esp, ecx);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    POP32(esp, ecx);
    ecx = eax;
    if ((_fa == 0)) goto loc_00347D3C; /* je: equal / zero */

loc_00347D34: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00347D3C; /* je: equal / zero */

loc_00347D38: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00347D15; /* je: equal / zero */

loc_00347D3C: ;
    POP32(esp, edi);
    eax = ebx;
    POP32(esp, esi);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00347D45: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00347D50
 * Original: 0x00347D50 - 0x00347D91 (65 bytes, 27 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028A870, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347D50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00347D50: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00347D68; /* je: equal / zero */

loc_00347D54: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00347D69; /* jae: above or equal (unsigned >=) */

loc_00347D5B: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fb = (uint32_t)(esp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), eax (32-bit) */
    { uint32_t _tmp = esp;
    esp = eax;
    eax = _tmp; }
    eax = MEM32(eax);
    PUSH32(esp, eax);

loc_00347D68: ;
    esp += 4; return; /* ret */

loc_00347D69: ;
    PUSH32(esp, ecx);
    ecx = esp + 8;

loc_00347D6E: ;
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x1000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x1000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx), eax (32-bit) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1000 (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00347D6E; /* jae: above or equal (unsigned >=) */

loc_00347D82: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esp;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx), eax (32-bit) */
    esp = ecx;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    PUSH32(esp, eax);
    esp += 4; return; /* ret */

}

/**
 * sub_00347EC5
 * Original: 0x00347EC5 - 0x00347F35 (112 bytes, 46 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028A9D4, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00347EC5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00347EC5: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    MEM32(ebp + -24) = eax;
    MEM32(ebp + -32) = eax;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -28) = eax;
    PUSH32(esp, esi);
    eax = ebp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -32;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0x42;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347EF4u); RECOMP_ABI_CALL(0x0034B4C6u, sub_0034B4C6); /* call 0x0034B4C6 */

loc_00347EF4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    esi = eax;
    if ((_fas < 0)) goto loc_00347F09; /* js: sign (negative) */

loc_00347EFE: ;
    eax = MEM32(ebp + -32);
    MEM8(eax) = 0;
    MEM32(ebp + -32) = MEM32(ebp + -32) + 1;
    _fa = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00347F16;

loc_00347F09: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347F14u); RECOMP_ABI_CALL(0x0034A0A3u, sub_0034A0A3); /* call 0x0034A0A3 */

loc_00347F14: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00347F16: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_00347F23; /* js: sign (negative) */

loc_00347F1B: ;
    eax = MEM32(ebp + -32);
    MEM8(eax) = 0;
    goto loc_00347F30;

loc_00347F23: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347F2Eu); RECOMP_ABI_CALL(0x0034A0A3u, sub_0034A0A3); /* call 0x0034A0A3 */

loc_00347F2E: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_00347F30: ;
    eax = esi;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_00347F38
 * Original: 0x00347F38 - 0x00347F58 (32 bytes, 18 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028AD90, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00347F38(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */

loc_00347F38: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x347F50);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00347F50u); RECOMP_ABI_CALL(0x003673CCu, sub_003673CC); /* call 0x003673CC */

loc_00347F50: ;
    POP32(esp, ebp);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00347F58
 * Original: 0x00347F58 - 0x00347F7A (34 bytes, 9 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028ADB0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347F58(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00347F58: ;
    ecx = MEM32(esp + 4);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(6) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ecx + 4), 6 (32-bit) */
    eax = 1;
    if (TEST_Z(_fa, _fb)) goto loc_00347F79; /* je: equal / zero */

loc_00347F6A: ;
    eax = MEM32(esp + 8);
    edx = MEM32(esp + 0x10);
    MEM32(edx) = eax;
    eax = 3;

loc_00347F79: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00347F7A
 * Original: 0x00347F7A - 0x00347FE2 (104 bytes, 33 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028ADD2, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347F7A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00347F7A: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    PUSH32(esp, 0xFFFFFFFEu);
    PUSH32(esp, 0x347F58);
    PUSH32(esp, MEM32(XBOX_FS_BASE));
    MEM32(XBOX_FS_BASE) = esp;

loc_00347F97: ;
    eax = MEM32(esp + 0x20);
    ebx = MEM32(eax + 8);
    esi = MEM32(eax + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00347FD4; /* je: equal / zero */

loc_00347FA6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x24) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00347FD4; /* je: equal / zero */

loc_00347FAC: ;
    esi = esi + esi * 2;
    ecx = MEM32(ebx + esi * 4);
    MEM32(esp + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    _fa = (uint32_t)(MEM32(ebx + esi * 4 + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + esi * 4 + 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00347FD2; /* jne: not equal / not zero */

loc_00347FC0: ;
    PUSH32(esp, 0x101);
    eax = MEM32(ebx + esi * 4 + 8);
    PUSH32(esp, 0x00347FCEu); RECOMP_ABI_CALL(0x0034800Eu, sub_0034800E); /* call 0x0034800E */

loc_00347FCE: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(ebx + esi * 4 + 8); PUSH32(esp, 0x00347FD2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00347FCEu); } /* indirect call */
    }

loc_00347FD2: ;
    goto loc_00347F97;

loc_00347FD4: ;
    { uint32_t _tmp; POP32(esp, _tmp); MEM32(XBOX_FS_BASE) = _tmp; }
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00347FE2
 * Original: 0x00347FE2 - 0x00348005 (35 bytes, 10 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028AE3A, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00347FE2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00347FE2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(XBOX_FS_BASE);
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x347F58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 4), 0x347F58 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00348004; /* jne: not equal / not zero */

loc_00347FF4: ;
    edx = MEM32(ecx + 0xC);
    edx = MEM32(edx + 0xC);
    _fa = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 8), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00348004; /* jne: not equal / not zero */

loc_00347FFF: ;
    eax = 1;

loc_00348004: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00348005
 * Original: 0x00348005 - 0x0034800E (9 bytes, 4 insns)
 * Folder: xdk/libcpmt (between: 0x00347FE2 and 0x00348030)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348005(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00348005: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ebx = 0x42CFE0;
    g_seh_ebp = ebp; sub_00348018(); return; /* tail jmp 0x00348018 */

}

/**
 * sub_0034800E
 * Original: 0x0034800E - 0x00348026 (24 bytes, 10 insns)
 * Folder: xdk/libcpmt (between: 0x00347FE2 and 0x00348030)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0034800E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0034800E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    ebx = 0x42CFE0;
    ecx = MEM32(ebp + 8);
    MEM32(ebx + 8) = ecx;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 0xC) = ebp;
    POP32(esp, ecx);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00348018
 * Original: 0x00348018 - 0x00348026 (14 bytes, 6 insns)
 * Folder: xdk/libcpmt (between: 0x00347FE2 and 0x00348030)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348018(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00348018: ;
    MEM32(ebx + 8) = ecx;
    MEM32(ebx + 4) = eax;
    MEM32(ebx + 0xC) = ebp;
    POP32(esp, ecx);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00348030
 * Original: 0x00348030 - 0x003480DA (170 bytes, 70 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028AE80, between)
 * Category: crt
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348030(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00348030: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = MEM32(esp + 0x14);
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas >= 0)) goto loc_00348051; /* jge: greater or equal (signed >=) */

loc_0034803D: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(esp + 0x10);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x10) = edx;

loc_00348051: ;
    eax = MEM32(esp + 0x1C);
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fas >= 0)) goto loc_0034806D; /* jge: greater or equal (signed >=) */

loc_00348059: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = MEM32(esp + 0x18);
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = edx;

loc_0034806D: ;
    _cf = 0; /* logical op clears CF */
    eax = eax | eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_00348089; /* jne: not equal / not zero */

loc_00348071: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x14);
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    ebx = eax;
    eax = MEM32(esp + 0x10);
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    edx = ebx;
    goto loc_003480CA;

loc_00348089: ;
    ebx = eax;
    ecx = MEM32(esp + 0x18);
    edx = MEM32(esp + 0x14);
    eax = MEM32(esp + 0x10);

loc_00348097: ;
    if (1) _cf = (int)(((ebx) >> ((1) - 1)) & 1);
    ebx = ebx >> 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _rcv = RC_ROT((uint32_t)(ecx), (unsigned)(1), &_cf, 32, 0);
      ecx = _rcv; } /* rcr */
    if (1) _cf = (int)(((edx) >> ((1) - 1)) & 1);
    edx = edx >> 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _rcv = RC_ROT((uint32_t)(eax), (unsigned)(1), &_cf, 32, 0);
      eax = _rcv; } /* rcr */
    _cf = 0; /* logical op clears CF */
    ebx = ebx | ebx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    if ((_fa != 0)) goto loc_00348097; /* jne: not equal / not zero */

loc_003480A3: ;
    { uint64_t _dividend = ((uint64_t)edx << 32) | eax;
      eax = (uint32_t)(_dividend / (uint32_t)ecx);
      edx = (uint32_t)(_dividend % (uint32_t)ecx); }
    esi = eax;
    { uint64_t _r = (uint64_t)eax * (uint64_t)MEM32(esp + 0x1C);
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    ecx = eax;
    eax = MEM32(esp + 0x18);
    { uint64_t _r = (uint64_t)eax * (uint64_t)esi;
      eax = (uint32_t)_r; edx = (uint32_t)(_r >> 32); }
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    if (_cf) goto loc_003480C5; /* jb: below (unsigned <) */

loc_003480B7: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esp + 0x14) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_A(_fa, _fb)) goto loc_003480C5; /* ja: above (unsigned >) */

loc_003480BD: ;
    if (CMP_B(_fa, _fb)) goto loc_003480C6; /* jb: below (unsigned <) */

loc_003480BF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esp + 0x10) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_003480C6; /* jbe: below or equal (unsigned <=) */

loc_003480C5: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_003480C6: ;
    _cf = 0; /* xor clears CF */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = esi;

loc_003480CA: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003480D4; /* jne: not equal / not zero */

loc_003480CD: ;
    _cf = (int)((edx) != 0);
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */

loc_003480D4: ;
    POP32(esp, ebx);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003480DA
 * Original: 0x003480DA - 0x00348112 (56 bytes, 8 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028AF2B, between)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003480DA(void)
{

loc_003480DA: ;
    eax = 0x34C09C;
    MEM32(0x42D540) = eax;
    MEM32(0x42D544) = 0x34BD49;
    MEM32(0x42D548) = 0x34BDAE;
    MEM32(0x42D54C) = 0x34BCF1;
    MEM32(0x42D550) = 0x34BD94;
    MEM32(0x42D554) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00348112
 * Original: 0x00348112 - 0x00348128 (22 bytes, 8 insns)
 * Folder: xdk/libcpmt (between: 0x003480DA and 0x00348128)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00348112(void)
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

loc_00348112: ;
    PUSH32(esp, 0x00348117u); RECOMP_ABI_CALL(0x003480DAu, sub_003480DA); /* call 0x003480DA */

loc_00348117: ;
    _fa = (uint32_t)(MEM32(esp + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00348123; /* je: equal / zero */

loc_0034811E: ;
    PUSH32(esp, 0x00348123u); RECOMP_ABI_CALL(0x0034C0EDu, sub_0034C0ED); /* call 0x0034C0ED */

loc_00348123: ;
    /* FPU: fnclex  */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00348128
 * Original: 0x00348128 - 0x0034819D (117 bytes, 37 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028AF78, between)
 * Category: crt
 * CC: cdecl, 0 params, returns float_sse
 * Frame: standard_frame
 */
void sub_00348128(void)
{
    extern void sub_00348128_enter(void);
    sub_00348128_enter();
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00348128: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x20));
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    MEMF(esp + 0x18) = (float)fp_top(); /* fst */
    SMEM64(esp + 0x10) = (int64_t)recomp_fist(fp_top(), g_fp_control_word, 64); fp_pop(); /* fistp */
    fp_push((double)SMEM64(esp + 0x10)); /* fild */
    edx = MEM32(esp + 0x18);
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00348187; /* je: equal / zero */

loc_0034814B: ;
    fp_st1() = RECOMP_FP_PC(fp_st1() - fp_top()); fp_pop(); /* fsubp st(1) */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint32_t)((uint32_t)(_fa) - (uint32_t)(_fb)) >> 31) == 0)) goto loc_0034816F; /* jns: not sign (positive) */

loc_00348151: ;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp);
    _cf = 0; /* logical op clears CF */
    ecx = ecx ^ 0x80000000u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x7FFFFFFF)) >> 32) & 1);
    ecx = ecx + 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    edx = MEM32(esp + 0x14);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    goto loc_0034819B;

loc_0034816F: ;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = MEM32(esp);
    _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(0x7FFFFFFF)) >> 32) & 1);
    ecx = ecx + 0x7FFFFFFF;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    edx = MEM32(esp + 0x14);
    { uint64_t _t = (uint64_t)(edx) - (uint64_t)(0) - (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    goto loc_0034819B;

loc_00348187: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edx, 0x7FFFFFFF (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0034814B; /* jne: not equal / not zero */

loc_00348193: ;
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */

loc_0034819B: ;
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
 * sub_0034819D
 * Original: 0x0034819D - 0x003481F3 (86 bytes, 36 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028AFED, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0034819D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0034819D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x14));
    MEM32(ebp + -28) = eax;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -32;
    PUSH32(esp, eax);
    MEM32(ebp + -20) = 0x42;
    MEM32(ebp + -24) = esi;
    MEM32(ebp + -32) = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003481CAu); RECOMP_ABI_CALL(0x0034A24Au, sub_0034A24A); /* call 0x0034A24A */

loc_003481CA: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003481ED; /* je: equal / zero */

loc_003481D3: ;
    MEM32(ebp + -28) = MEM32(ebp + -28) - 1;
    _fa = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas < 0)) goto loc_003481E0; /* js: sign (negative) */

loc_003481D8: ;
    eax = MEM32(ebp + -32);
    MEM8(eax) = 0;
    goto loc_003481ED;

loc_003481E0: ;
    eax = ebp + -32;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003481EBu); RECOMP_ABI_CALL(0x0034A0A3u, sub_0034A0A3); /* call 0x0034A0A3 */

loc_003481EB: ;
    POP32(esp, ecx);
    POP32(esp, ecx);

loc_003481ED: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 4; return; /* ret */

}

/**
 * sub_003489B3
 * Original: 0x003489B3 - 0x00348A09 (86 bytes, 28 insns)
 * Folder: xdk/libcpmt (match: xbox-demo 0x0028B226, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003489B3(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003489B3: ;
    PUSH32(esp, 0x10);
    PUSH32(esp, 0x41D9E8);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003489BFu); RECOMP_ABI_CALL(0x00347864u, sub_00347864); /* call 0x00347864 */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_003489BF: ;
    esi = 0x42D178;
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003489CCu); RECOMP_ABI_CALL(0x0034AD2Au, sub_0034AD2A); /* call 0x0034AD2A */

loc_003489CC: ;
    POP32(esp, ecx);
    POP32(esp, ecx);
    MEM32(ebp + -4) = MEM32(ebp + -4) & 0;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003489D8u); RECOMP_ABI_CALL(0x0034C205u, sub_0034C205); /* call 0x0034C205 */

loc_003489D8: ;
    MEM32(ebp + -28) = eax;
    eax = ebp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003489E8u); RECOMP_ABI_CALL(0x0034A24Au, sub_0034A24A); /* call 0x0034A24A */

loc_003489E8: ;
    MEM32(ebp + -32) = eax;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -28));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003489F4u); RECOMP_ABI_CALL(0x0034C28Du, sub_0034C28D); /* call 0x0034C28D */

loc_003489F4: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -4) = MEM32(ebp + -4) | 0xFFFFFFFFu;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00348A00u); RECOMP_ABI_CALL(0x00348A0Eu, sub_00348A0E); /* call 0x00348A0E */

loc_00348A00: ;
    eax = MEM32(ebp + -32);
    g_seh_ebp = ebp; /* publish frame to SEH helper */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00348A08u); RECOMP_ABI_CALL(0x0034789Fu, sub_0034789F); /* call 0x0034789F */
    ebp = g_seh_ebp; /* read back frame from SEH helper */

loc_00348A08: ;
    esp += 4; return; /* ret */

}
