/**
 * PoP SoT xbox-demo - xdk/wmadec, chunk 0
 * WMA decoder (WMADEC section)
 * Functions: 8 (0x00307BC4 - 0x0030E269)
 */

#define RECOMP_GENERATED_CODE
#include "../../recomp_funcs.h"
#include <math.h>

/**
 * sub_00307BC4
 * Original: 0x00307BC4 - 0x00307BCA (6 bytes, 2 insns)
 * Folder: xdk/wmadec (section: WMADEC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307BC4(void)
{

loc_00307BC4: ;
    ebx = 0x7E04AD04;
    esp += 4; return; /* ret */

}

/**
 * sub_00307E26
 * Original: 0x00307E26 - 0x00307E38 (18 bytes, 8 insns)
 * Folder: xdk/wmadec (section: WMADEC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00307E26(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00307E26: ;
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
 * sub_00308026
 * Original: 0x00308026 - 0x00308029 (3 bytes, 2 insns)
 * Folder: xdk/wmadec (section: WMADEC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308026(void)
{

loc_00308026: ;
    SET_LO8(ecx, 0xCA);
    esp += 4; return; /* ret */

}

/**
 * sub_00308193
 * Original: 0x00308193 - 0x0030848D (762 bytes, 64 insns)
 * Folder: xdk/wmadec (section: WMADEC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308193(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00308193: ;
    RECOMP_UNIMPL("int 0x25", 0x00308193u); /* TODO: int 0x25 */
    RECOMP_UNIMPL("into", 0x00308195u); /* TODO: into */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xCE);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    g_df = 0; /* cld */
    RECOMP_UNIMPL("iretd", 0x00308199u); /* TODO: iretd */

    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) ^ MEM8(0xA0002));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(MEM8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0xFDCFFD00u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFDCFFD00u)) >> 32) & 1);
    eax = eax + 0xFDCFFD00u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    RECOMP_UNIMPL("iretd", 0x003081A7u); /* TODO: iretd */

    esp += 56840; return; /* ret 56836 */

    _cf = 0; /* logical op clears CF */
    eax = eax | 0x3000205;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ecx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    SET_HI8(ecx, HI8(ecx) + LO8(edx));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("into", 0x003081B7u); /* TODO: into */
    esp--;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = (uint32_t)((int32_t)ebp * (int32_t)0x2CED6);
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) | LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fb = (uint32_t)(MEM8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    edi = ROR32(edi, 1);
    g_df = 0; /* cld */
    RECOMP_UNIMPL("iretd", 0x003081C9u); /* TODO: iretd */

    ecx -= 1; /* loope: count down */
    if ((ecx != 0) && (_flags)) goto loc_003081D0; /* loope: ecx is non-zero and zero flag set */

loc_003081CC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    RECOMP_UNIMPL("iretd", 0x003081CDu); /* TODO: iretd */

    RECOMP_UNIMPL("aam 0xcf", 0x003081CEu); /* TODO: aam 0xcf */

loc_003081D0: ;
    _fb = (uint32_t)(MEM8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    g_df = 1; /* std */
    RECOMP_UNIMPL("iretd", 0x003081D5u); /* TODO: iretd */

    /* sahf - store AH to flags */
    RECOMP_UNIMPL("int 0xf2", 0x003081D7u); /* TODO: int 0xf2 */
    _fb = (uint32_t)(0xFD) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0xFD)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0xFD);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("iretd", 0x003081DBu); /* TODO: iretd */

    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0x51DCD) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    SET_LO8(eax, MEM8(esi)); esi += RECOMP_DF_STEP(1); /* lodsb */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx + eax + 0x4B01F00)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(edx + eax + 0x4B01F00) = MEM8(edx + eax + 0x4B01F00) + HI8(ecx);
    _fa = (uint32_t)(MEM8(edx + eax + 0x4B01F00)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + HI8(ecx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + 0x4B5B6B5)) + (uint64_t)(HI8(edx))) >> 8) & 1);
    MEM8(esi + 0x4B5B6B5) = MEM8(esi + 0x4B5B6B5) + HI8(edx);
    _fa = (uint32_t)(MEM8(esi + 0x4B5B6B5)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(edx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(ebx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(esi) = MEM8(esi) + LO8(ebx);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(-322007347)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(-322007347) = MEM8(-322007347) + LO8(ebx);
    _fa = (uint32_t)(MEM8(-322007347)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("int 0xfc", 0x00308205u); /* TODO: int 0xfc */
    RECOMP_UNIMPL("iretd", 0x00308207u); /* TODO: iretd */

    RECOMP_UNIMPL("into", 0x00308208u); /* TODO: into */
    _fb = (uint32_t)(3) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(3)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(eax)) + (uint64_t)(HI8(ebx))) >> 8) & 1);
    SET_HI8(eax, HI8(eax) + HI8(ebx));
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0xCF);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    MEM32(edx + eax) = ROL32(MEM32(edx + eax), LO8(ecx));
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + -55)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(ebx + -55) = MEM8(ebx + -55) + LO8(ebx);
    _fa = (uint32_t)(MEM8(ebx + -55)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("int 0xc9", 0x0030821Cu); /* TODO: int 0xc9 */

    g_seh_ebp = ebp; sub_0030848D(); return; /* fallthrough 0x0030848D */

}

/**
 * sub_0030848D
 * Original: 0x0030848D - 0x0030849D (16 bytes, 7 insns)
 * Folder: xdk/wmadec (section: WMADEC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030848D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0030848D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    RECOMP_UNIMPL("iretd", 0x0030848Eu); /* TODO: iretd */

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
 * sub_00308748
 * Original: 0x00308748 - 0x0030874E (6 bytes, 2 insns)
 * Folder: xdk/wmadec (section: WMADEC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00308748(void)
{

loc_00308748: ;
    edi = 0xFD040004u;
    esp += 4; return; /* ret */

}

/**
 * sub_00309B40
 * Original: 0x00309B40 - 0x00309B45 (5 bytes, 3 insns)
 * Folder: xdk/wmadec (section: WMADEC)
 * CC: cdecl, 3122 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00309B40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00309B40: ;
    PUSH32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12493; return; /* ret 12489 */

}

/**
 * sub_0030E269
 * Original: 0x0030E269 - 0x0030E27B (18 bytes, 9 insns)
 * Folder: xdk/wmadec (section: WMADEC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0030E269(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0030E269: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi + 0x3F) = MEM32(edi + 0x3F) + eax;
    _fa = (uint32_t)(MEM32(edi + 0x3F)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    RECOMP_UNIMPL("cli", 0x0030E26Cu); /* TODO: cli */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    RECOMP_UNIMPL("aas", 0x0030E26Fu); /* TODO: aas */
    MEM8(eax + -1090961593) = MEM8(eax + -1090961593) | LO8(eax);
    _fa = (uint32_t)(MEM8(eax + -1090961593)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    RECOMP_UNIMPL("aas", 0x0030E277u); /* TODO: aas */
    esp += 18433; return; /* ret 18429 */

}
