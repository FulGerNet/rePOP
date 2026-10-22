/**
 * PoP Warrior Within Xbox retail - xdk/wmadec, chunk 0
 * WMA decoder (WMADEC section)
 * Functions: 7 (0x005351E4 - 0x0053B889)
 */

#define RECOMP_GENERATED_CODE
#include "../../recomp_funcs.h"
#include <math.h>

/**
 * sub_005351E4
 * Original: 0x005351E4 - 0x005351EA (6 bytes, 2 insns)
 * Folder: xdk/wmadec (section: WMADEC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_005351E4(void)
{

loc_005351E4: ;
    ebx = 0x7E04AD04;
    esp += 4; return; /* ret */

}

/**
 * sub_00535446
 * Original: 0x00535446 - 0x00535458 (18 bytes, 8 insns)
 * Folder: xdk/wmadec (section: WMADEC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00535446(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00535446: ;
    PUSH32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    eax = eax | MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    { uint64_t _t = (uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax)) + (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); SET_LO8(eax, (uint32_t)_t); }  /* adc */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* adc result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x4000200) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(edx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esp += 52224; return; /* ret 52220 */

}

/**
 * sub_00535646
 * Original: 0x00535646 - 0x00535649 (3 bytes, 2 insns)
 * Folder: xdk/wmadec (section: WMADEC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00535646(void)
{

loc_00535646: ;
    SET_LO8(ecx, 0xCA);
    esp += 4; return; /* ret */

}

/**
 * sub_00535AAD
 * Original: 0x00535AAD - 0x00535ABD (16 bytes, 7 insns)
 * Folder: xdk/wmadec (section: WMADEC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00535AAD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00535AAD: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    RECOMP_UNIMPL("iretd", 0x00535AAEu); /* TODO: iretd */

    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(edx) = MEM8(edx) + LO8(ecx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(0x2000F00) = MEM8(0x2000F00) + LO8(ecx);
    _fa = (uint32_t)(MEM8(0x2000F00)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    MEM8(eax + eax) = MEM8(eax + eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00535D68
 * Original: 0x00535D68 - 0x00535D6E (6 bytes, 2 insns)
 * Folder: xdk/wmadec (section: WMADEC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00535D68(void)
{

loc_00535D68: ;
    edi = 0xFD040004u;
    esp += 4; return; /* ret */

}

/**
 * sub_00537160
 * Original: 0x00537160 - 0x00537165 (5 bytes, 3 insns)
 * Folder: xdk/wmadec (section: WMADEC)
 * CC: cdecl, 3122 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00537160(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00537160: ;
    PUSH32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12493; return; /* ret 12489 */

}

/**
 * sub_0053B889
 * Original: 0x0053B889 - 0x0053B89B (18 bytes, 9 insns)
 * Folder: xdk/wmadec (section: WMADEC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0053B889(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0053B889: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi + 0x3F) = MEM32(edi + 0x3F) + eax;
    _fa = (uint32_t)(MEM32(edi + 0x3F)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    RECOMP_UNIMPL("cli", 0x0053B88Cu); /* TODO: cli */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    RECOMP_UNIMPL("aas", 0x0053B88Fu); /* TODO: aas */
    MEM8(eax + -1090961593) = MEM8(eax + -1090961593) | LO8(eax);
    _fa = (uint32_t)(MEM8(eax + -1090961593)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    RECOMP_UNIMPL("aas", 0x0053B897u); /* TODO: aas */
    esp += 18433; return; /* ret 18429 */

}
