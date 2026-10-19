/**
 * PoP SoT xbox-retail - xdk/wmadec, chunk 0
 * WMA decoder (WMADEC section)
 * Functions: 8 (0x00403064 - 0x00409709)
 */

#define RECOMP_GENERATED_CODE
#include "../../recomp_funcs.h"
#include <math.h>

/**
 * sub_00403064
 * Original: 0x00403064 - 0x0040306A (6 bytes, 2 insns)
 * Folder: xdk/wmadec (section: WMADEC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00403064(void)
{

loc_00403064: ;
    ebx = 0x7E04AD04;
    esp += 4; return; /* ret */

}

/**
 * sub_004032C6
 * Original: 0x004032C6 - 0x004032D8 (18 bytes, 8 insns)
 * Folder: xdk/wmadec (section: WMADEC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004032C6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_004032C6: ;
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
 * sub_004034C6
 * Original: 0x004034C6 - 0x004034C9 (3 bytes, 2 insns)
 * Folder: xdk/wmadec (section: WMADEC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_004034C6(void)
{

loc_004034C6: ;
    SET_LO8(ecx, 0xCA);
    esp += 4; return; /* ret */

}

/**
 * sub_0040392D
 * Original: 0x0040392D - 0x0040393D (16 bytes, 7 insns)
 * Folder: xdk/wmadec (section: WMADEC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0040392D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0040392D: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    RECOMP_UNIMPL("iretd", 0x0040392Eu); /* TODO: iretd */

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
 * sub_00403BE8
 * Original: 0x00403BE8 - 0x00403BEE (6 bytes, 2 insns)
 * Folder: xdk/wmadec (section: WMADEC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00403BE8(void)
{

loc_00403BE8: ;
    edi = 0xFD040004u;
    esp += 4; return; /* ret */

}

/**
 * sub_00404069
 * Original: 0x00404069 - 0x00404FE0 (3959 bytes, 150 insns)
 * Folder: xdk/wmadec (section: WMADEC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404069(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00404069: ;
    RECOMP_UNIMPL("into", 0x00404069u); /* TODO: into */
    ecx = 0x2CE43CE;
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(ecx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax + eax) = MEM8(eax + eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(0xCE) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(LO8(eax)) < (uint32_t)(0xCE));
    SET_LO8(eax, LO8(eax) - 0xCE);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    g_df = 0; /* cld */
    RECOMP_UNIMPL("iretd", 0x00404079u); /* TODO: iretd */

    RECOMP_UNIMPL("in al, dx", 0x0040407Au); /* TODO: in al, dx */
    _fb = (uint32_t)(0x29) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0x29)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0x29);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("into", 0x0040407Du); /* TODO: into */
    edx = 0x40002CE;
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(esi + ecx * 8 + 0x50ECFFC)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(esi + ecx * 8 + 0x50ECFFC) = MEM8(esi + ecx * 8 + 0x50ECFFC) + LO8(edx);
    _fa = (uint32_t)(MEM8(esi + ecx * 8 + 0x50ECFFC)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ebp = 0x2CFA8CE;
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + LO8(eax);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(-1798497841)) + (uint64_t)(HI8(eax))) >> 8) & 1);
    MEM8(-1798497841) = MEM8(-1798497841) + HI8(eax);
    _fa = (uint32_t)(MEM8(-1798497841)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    /* int3: debug-trap slide byte, stepped over */
    RECOMP_UNIMPL("out dx, eax", 0x0040409Cu); /* TODO: out dx, eax */
    RECOMP_UNIMPL("into", 0x0040409Du); /* TODO: into */
    _fb = (uint32_t)(MEM8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(eax))) >> 32) & 1);
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(HI8(ebx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_HI8(ebx, HI8(ebx) + LO8(ecx));
    _fa = (uint32_t)(HI8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    RECOMP_UNIMPL("int 0x7a", 0x004040A5u); /* TODO: int 0x7a */
    RECOMP_UNIMPL("iretd", 0x004040A7u); /* TODO: iretd */

    g_df = 0; /* cld */
    RECOMP_UNIMPL("iretd", 0x004040A9u); /* TODO: iretd */

    { uint64_t _t = (uint64_t)(MEM8(0x70002)) - (uint64_t)(LO8(eax)) - (uint64_t)_cf; _cf = (int)((_t >> 8) & 1); MEM8(0x70002) = (uint32_t)_t; }  /* sbb */
    _fa = (uint32_t)(MEM8(0x70002)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sbb result */
    _fb = (uint32_t)(MEM8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(eax))) >> 32) & 1);
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    /* sahf - store AH to flags */
    /* int3: debug-trap slide byte, stepped over */
    _cf = 0; /* logical op clears CF */
    SET_HI8(edx, HI8(edx) | LO8(ecx));
    _fa = (uint32_t)(HI8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    RECOMP_UNIMPL("outsd dx, dword ptr [esi]", 0x004040B8u); /* TODO: outsd dx, dword ptr [esi] */
    RECOMP_UNIMPL("iretd", 0x004040B9u); /* TODO: iretd */

    POP32(esp, edx);
    RECOMP_UNIMPL("iretd", 0x004040BBu); /* TODO: iretd */

    _fb = (uint32_t)(MEM8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(MEM32(eax))) >> 32) & 1);
    eax = eax + MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    RECOMP_UNIMPL("iretd", 0x004040C1u); /* TODO: iretd */

    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0xCF) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0xCF (8-bit) */
    _cf = (int)(_fa < _fb);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(edi));
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _tmp = edx;
    edx = eax;
    eax = _tmp; }
    RECOMP_UNIMPL("iretd", 0x004040C7u); /* TODO: iretd */

    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(MEM32(eax)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop ds - segment register */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ecx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ecx) = MEM8(ecx) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edi)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edi) = MEM8(edi) + LO8(eax);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebp + -389160241)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ebp + -389160241) = MEM8(ebp + -389160241) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebp + -389160241)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("into", 0x004040DDu); /* TODO: into */
    g_seh_ebp = ebp; sub_034043B1(); return; /* tail jmp 0x034043B1 */

    _fb = (uint32_t)(LO8(ebx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax)) + (uint64_t)(LO8(ebx))) >> 8) & 1);
    MEM8(eax) = MEM8(eax) + LO8(ebx);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("iretd", 0x004040E5u); /* TODO: iretd */

    SET_LO8(ecx, 0xCD);
    RECOMP_UNIMPL("insb byte ptr es:[edi], dx", 0x004040E8u); /* TODO: insb byte ptr es:[edi], dx */
    RECOMP_UNIMPL("int 0xac", 0x004040E9u); /* TODO: int 0xac */
    RECOMP_UNIMPL("int 2", 0x004040EBu); /* TODO: int 2 */
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
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx + 0x6CD1FCD)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(ebx + 0x6CD1FCD) = MEM8(ebx + 0x6CD1FCD) + HI8(ecx);
    _fa = (uint32_t)(MEM8(ebx + 0x6CD1FCD)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("iretd", 0x004040F9u); /* TODO: iretd */

    g_df = 0; /* cld */
    RECOMP_UNIMPL("iretd", 0x004040FBu); /* TODO: iretd */

    RECOMP_UNIMPL("aaa", 0x004040FCu); /* TODO: aaa */
    _fb = (uint32_t)(0x30002) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30002)) >> 32) & 1);
    eax = eax + 0x30002;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0 /* seg:ss */);
    RECOMP_UNIMPL("int 1", 0x00404103u); /* TODO: int 1 */
    RECOMP_UNIMPL("iretd", 0x00404105u); /* TODO: iretd */

    RECOMP_UNIMPL("in eax, 0xcf", 0x00404106u); /* TODO: in eax, 0xcf */
    _cf = 0; /* logical op clears CF */
    ecx = ecx | ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(MEM8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(MEM8(eax))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    { uint32_t _tmp; POP32(esp, _tmp); } /* pop es - segment register */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(ebx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(ebx) = MEM8(ebx) + LO8(eax);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + HI8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    RECOMP_UNIMPL("iretd", 0x00404113u); /* TODO: iretd */

    PUSH32(esp, 0 /* seg:cs */);
    RECOMP_UNIMPL("iretd", 0x00404115u); /* TODO: iretd */

    RECOMP_UNIMPL("int 0xef", 0x00404116u); /* TODO: int 0xef */
    RECOMP_UNIMPL("iretd", 0x00404119u); /* TODO: iretd */

    g_df = 1; /* std */
    esp += 4; return; /* ret */

loc_00404131: ;
    _fb = (uint32_t)(4) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(4)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(edx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(-2097132632)) + (uint64_t)(LO8(edx))) >> 8) & 1);
    MEM8(-2097132632) = MEM8(-2097132632) + LO8(edx);
    _fa = (uint32_t)(MEM8(-2097132632)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(HI8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(HI8(ecx))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + HI8(ecx);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = MEM32(esi); esi += RECOMP_DF_STEP(4); /* lodsd */
    _fb = (uint32_t)(MEM8(ebp + 0x3E0002)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(HI8(ecx)) < (uint32_t)(MEM8(ebp + 0x3E0002)));
    SET_HI8(ecx, HI8(ecx) - MEM8(ebp + 0x3E0002));
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* sub result */
    _fb = (uint32_t)(0) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(0)) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) & 0);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _cf = 0; /* logical op clears CF */
    MEM8(eax) = MEM8(eax) ^ LO8(eax);
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax + eax) = MEM8(eax + eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _cf = 0; /* logical op clears CF */
    SET_LO8(eax, LO8(eax) | MEM8(eax));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    { uint64_t _t = (uint64_t)(MEM32(eax)) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); MEM32(eax) = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    PUSH32(esp, 0 /* seg:ss */);
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(edx)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(edx) = MEM8(edx) + LO8(eax);
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(MEM8(eax + eax)) + (uint64_t)(LO8(eax))) >> 8) & 1);
    MEM8(eax + eax) = MEM8(eax + eax) + LO8(eax);
    _fa = (uint32_t)(MEM8(eax + eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    g_df = 1; /* std */
    esp += 4; return; /* ret */

    g_df = 0; /* cld */
    esp += 4; return; /* ret */

    g_seh_ebp = ebp; sub_00404FE0(); return; /* fallthrough 0x00404FE0 */

}

/**
 * sub_00404FE0
 * Original: 0x00404FE0 - 0x00404FE5 (5 bytes, 3 insns)
 * Folder: xdk/wmadec (section: WMADEC)
 * CC: cdecl, 3122 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00404FE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00404FE0: ;
    PUSH32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 12493; return; /* ret 12489 */

}

/**
 * sub_00409709
 * Original: 0x00409709 - 0x0040971B (18 bytes, 9 insns)
 * Folder: xdk/wmadec (section: WMADEC)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00409709(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00409709: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi + 0x3F) = MEM32(edi + 0x3F) + eax;
    _fa = (uint32_t)(MEM32(edi + 0x3F)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    RECOMP_UNIMPL("cli", 0x0040970Cu); /* TODO: cli */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    RECOMP_UNIMPL("aas", 0x0040970Fu); /* TODO: aas */
    MEM8(eax + -1090961593) = MEM8(eax + -1090961593) | LO8(eax);
    _fa = (uint32_t)(MEM8(eax + -1090961593)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    RECOMP_UNIMPL("aas", 0x00409717u); /* TODO: aas */
    esp += 18433; return; /* ret 18429 */

}
