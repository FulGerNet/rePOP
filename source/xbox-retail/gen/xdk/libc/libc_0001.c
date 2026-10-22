/**
 * PoP Warrior Within Xbox retail - xdk/libc, chunk 1
 * Microsoft C runtime (LIBCMT)
 * Functions: 250 (0x003E738B - 0x003EF26A)
 */

#define RECOMP_GENERATED_CODE
#include "../../recomp_funcs.h"
#include <math.h>

/**
 * sub_003E738B
 * Original: 0x003E738B - 0x003E7412 (135 bytes, 57 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035F0A6, between)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003E738B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E738B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    ecx = MEM32(esi);
    if (CMP_GE(_fas, _fbs)) goto loc_003E73B7; /* jge: greater or equal (signed >=) */

loc_003E739C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E7404; /* jl: less (signed <) */

loc_003E73A0: ;
    if (CMP_LE(_fas, _fbs)) goto loc_003E73AD; /* jle: less or equal (signed <=) */

loc_003E73A2: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E73ABu); RECOMP_ABI_CALL(0x003E7266u, sub_003E7266); /* call 0x003E7266 */

loc_003E73AB: ;
    goto loc_003E73BF;

loc_003E73AD: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E740D; /* jge: greater or equal (signed >=) */

loc_003E73B5: ;
    goto loc_003E7404;

loc_003E73B7: ;
    if (CMP_LE(_fas, _fbs)) goto loc_003E73D4; /* jle: less or equal (signed <=) */

loc_003E73B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E73A2; /* jl: less (signed <) */

loc_003E73BD: ;
    if (CMP_LE(_fas, _fbs)) goto loc_003E73CA; /* jle: less or equal (signed <=) */

loc_003E73BF: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E73C8u); RECOMP_ABI_CALL(0x003E72A1u, sub_003E72A1); /* call 0x003E72A1 */

loc_003E73C8: ;
    goto loc_003E740D;

loc_003E73CA: ;
    eax = MEM32(esi + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003E740D; /* jle: less or equal (signed <=) */

loc_003E73D2: ;
    goto loc_003E73BF;

loc_003E73D4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E73E0; /* jge: greater or equal (signed >=) */

loc_003E73D8: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    goto loc_003E7402;

loc_003E73E0: ;
    if (CMP_LE(_fas, _fbs)) goto loc_003E73EC; /* jle: less or equal (signed <=) */

loc_003E73E2: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0xC) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E740D; /* jge: greater or equal (signed >=) */

loc_003E73EA: ;
    goto loc_003E73BF;

loc_003E73EC: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003E73FD; /* jle: less or equal (signed <=) */

loc_003E73F6: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E73BF; /* jl: less (signed <) */

loc_003E73FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */

loc_003E73FD: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003E740D; /* jge: greater or equal (signed >=) */

loc_003E73FF: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */

loc_003E7402: ;
    if (CMP_LE(_fas, _fbs)) goto loc_003E740D; /* jle: less or equal (signed <=) */

loc_003E7404: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E740Du); RECOMP_ABI_CALL(0x003E7266u, sub_003E7266); /* call 0x003E7266 */

loc_003E740D: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003E7412
 * Original: 0x003E7412 - 0x003E74A3 (145 bytes, 60 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035F12D, between)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003E7412(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E7412: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0xC);
    ecx = eax;
    SET_LO8(ecx, LO8(ecx) & 0x3F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    if (CMP_NE(_fa, _fb)) goto loc_003E7452; /* jne: not equal / not zero */

loc_003E742E: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E7437; /* jne: not equal / not zero */

loc_003E7433: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E749A; /* je: equal / zero */

loc_003E7437: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x7FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E7447; /* jne: not equal / not zero */

loc_003E743F: ;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = edi;
    goto loc_003E7452;

loc_003E7447: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E7452u); RECOMP_ABI_CALL(0x003E7306u, sub_003E7306); /* call 0x003E7306 */

loc_003E7452: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x14), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003E7489; /* jne: not equal / not zero */

loc_003E7458: ;
    eax = MEM32(esi + 8);
    ecx = eax;
    SET_LO8(ecx, LO8(ecx) & 0x3F);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E7489; /* jne: not equal / not zero */

loc_003E7465: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E746E; /* jne: not equal / not zero */

loc_003E7469: ;
    _fa = (uint32_t)(MEM32(esi + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0xC), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E749A; /* je: equal / zero */

loc_003E746E: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0x7FFFFFFF (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E747E; /* jne: not equal / not zero */

loc_003E7476: ;
    MEM32(esi + 0x10) = ebx;
    MEM32(esi + 0x14) = edi;
    goto loc_003E7489;

loc_003E747E: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E7489u); RECOMP_ABI_CALL(0x003E738Bu, sub_003E738B); /* call 0x003E738B */

loc_003E7489: ;
    eax = MEM32(esi + 8);
    MEM32(esi) = eax;
    eax = MEM32(esi + 0xC);
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = ebx;
    MEM32(esi + 0xC) = edi;

loc_003E749A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003E74A3
 * Original: 0x003E74A3 - 0x003E74E7 (68 bytes, 25 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035F1BE, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E74A3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E74A3: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0xC);
    SET_LO8(eax, LO8(eax) & 0x3F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E74C1; /* jne: not equal / not zero */

loc_003E74B1: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E74C1u); RECOMP_ABI_CALL(0x003E7306u, sub_003E7306); /* call 0x003E7306 */

loc_003E74C1: ;
    _fa = (uint32_t)(MEM8(esp + 0xC)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0xC), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003E74E1; /* jne: not equal / not zero */

loc_003E74C8: ;
    eax = MEM32(esi + 8);
    SET_LO8(eax, LO8(eax) & 0x3F);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0x20 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E74E1; /* jne: not equal / not zero */

loc_003E74D1: ;
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E74E1u); RECOMP_ABI_CALL(0x003E738Bu, sub_003E738B); /* call 0x003E738B */

loc_003E74E1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E74E7
 * Original: 0x003E74E7 - 0x003E7519 (50 bytes, 15 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035F202, between)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003E74E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E74E7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x10);
    MEM32(eax + 0xAC) = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + 0x18);
    MEM32(eax + 0xB4) = ecx;
    ecx = MEM32(ebp + 0x14);
    MEM32(eax + 0xB0) = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xB8) = ecx;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003E7519
 * Original: 0x003E7519 - 0x003E7536 (29 bytes, 9 insns)
 * Folder: xdk/libc (between: 0x003E74E7 and 0x003E7553)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7519(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E7519: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0xAC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xAC;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E7536
 * Original: 0x003E7536 - 0x003E7553 (29 bytes, 9 insns)
 * Folder: xdk/libc (between: 0x003E74E7 and 0x003E7553)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7536(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E7536: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0xB0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xB0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 3;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edx;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E7553
 * Original: 0x003E7553 - 0x003E75AC (89 bytes, 30 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035F26E, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7553(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E7553: ;
    ecx = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x28);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(esi + eax * 2 + -2);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003E75A4; /* jle: less or equal (signed <=) */

loc_003E756D: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ebx);

loc_003E7570: ;
    eax = MEM32(ecx + 0x34);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 4) = MEM16(eax + 4) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax + 4)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(eax + 2) = MEM16(eax + 2) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax + 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(eax) = MEM16(eax) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(eax + 6) = MEM16(eax + 6) & 0;
    _fa = (uint32_t)(MEM16(eax + 6)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(eax + 8) = MEM32(eax + 8) & 0;
    _fa = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x28);
    ebx = MEM32(ecx + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(ebx + eax * 2 + -2);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xC;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E7570; /* jl: less (signed <) */

loc_003E75A3: ;
    POP32(esp, ebx);

loc_003E75A4: ;
    MEM32(ecx + 0x30) = MEM32(ecx + 0x30) & 0;
    _fa = (uint32_t)(MEM32(ecx + 0x30)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E75AC
 * Original: 0x003E75AC - 0x003E7628 (124 bytes, 57 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035F2C7, between)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003E75AC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E75AC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_003E75BB; /* jns: not sign (positive) */

loc_003E75B6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003E7623;

loc_003E75BB: ;
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    ecx = MEM32(ebx + 0x34);
    eax = eax + eax * 2;
    PUSH32(esp, esi);
    esi = ecx + eax * 4;
    SET_LO16(eax, MEM16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E761A; /* je: equal / zero */

loc_003E75D5: ;
    SET_LO16(ecx, MEM16(esi + 2));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xFFFFFFFFu (16-bit) */
    eax = SX16(LO16(eax));
    if (CMP_NE(_fa, _fb)) goto loc_003E75EA; /* jne: not equal / not zero */

loc_003E75E2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E761E; /* je: equal / zero */

loc_003E75E7: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_003E760B;

loc_003E75EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E761E; /* je: equal / zero */

loc_003E75EF: ;
    ecx = SX16(LO16(ecx));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E761E; /* je: equal / zero */

loc_003E75F7: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E7603u); RECOMP_ABI_CALL(0x003E75ACu, sub_003E75AC); /* call 0x003E75AC */

loc_003E7603: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E761E; /* jne: not equal / not zero */

loc_003E7607: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 2);

loc_003E760B: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E7616u); RECOMP_ABI_CALL(0x003E75ACu, sub_003E75AC); /* call 0x003E75AC */

loc_003E7616: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E761E; /* jne: not equal / not zero */

loc_003E761A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003E7621;

loc_003E761E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003E7621: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003E7623: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003E7628
 * Original: 0x003E7628 - 0x003E7726 (254 bytes, 87 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035F343, between)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003E7628(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E7628: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E7721; /* jl: less (signed <) */

loc_003E7637: ;
    edx = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    ecx = MEM32(edx + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(ecx + eax * 2 + -2);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E7721; /* jge: greater or equal (signed >=) */

loc_003E7651: ;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E7720; /* jl: less (signed <) */

loc_003E765D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E7720; /* jge: greater or equal (signed >=) */

loc_003E7665: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E7720; /* je: equal / zero */

loc_003E766D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x64);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E7678u); RECOMP_ABI_CALL(0x003E75ACu, sub_003E75AC); /* call 0x003E75AC */

loc_003E7678: ;
    ecx = MEM32(edx + 0x34);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = edi + edi * 2;
    if (CMP_EQ(_fa, _fb)) goto loc_003E768E; /* je: equal / zero */

loc_003E7682: ;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax + ecx + 6;
    MEM8(ecx) = MEM8(ecx) | 1;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_003E76D3;

loc_003E768E: ;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM16(ecx + eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + eax), 0xFFFFFFFFu (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E76D3; /* jne: not equal / not zero */

loc_003E7698: ;
    ebx = esi + esi * 2;
    ecx = (uint32_t)(int32_t)SMEM16(ecx + ebx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E76C3; /* je: equal / zero */

loc_003E76A4: ;
    edi = MEM32(edx + 0x10);

loc_003E76A7: ;
    ebx = MEM32(edi + esi * 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + ecx * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + ecx * 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E76C0; /* jne: not equal / not zero */

loc_003E76AF: ;
    esi = ecx;
    ebx = ecx + ecx * 2;
    ecx = MEM32(edx + 0x34);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + ebx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E76A7; /* jne: not equal / not zero */

loc_003E76C0: ;
    edi = MEM32(ebp + 0x14);

loc_003E76C3: ;
    ecx = MEM32(edx + 0x34);
    MEM16(eax + ecx) = LO16(esi);
    ecx = MEM32(edx + 0x34);
    MEM16(eax + ecx + 2) = MEM16(eax + ecx + 2) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax + ecx + 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */

loc_003E76D3: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E771F; /* jne: not equal / not zero */

loc_003E76D9: ;
    ecx = MEM32(edx + 0x34);
    ebx = esi + esi * 2;
    ebx = ecx + ebx * 4;
    _fa = (uint32_t)(MEM16(ebx + 4)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebx + 4), 0xFFFFFFFFu (16-bit) */
    MEM32(ebp + 0x14) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_003E771F; /* jne: not equal / not zero */

loc_003E76EC: ;
    ebx = (uint32_t)(int32_t)SMEM16(ecx + eax + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E771F; /* je: equal / zero */

loc_003E76F5: ;
    ebx = MEM32(ebp + 0x14);
    ebx = (uint32_t)(int32_t)SMEM16(ebx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E7718; /* je: equal / zero */

loc_003E7700: ;
    ebx = ebx + ebx * 2;
    ecx = (uint32_t)(int32_t)SMEM16(ecx + ebx * 4 + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E7718; /* jne: not equal / not zero */

loc_003E770C: ;
    ecx = MEM32(edx + 0x34);
    eax = eax + ecx + 6;
    MEM8(eax) = MEM8(eax) | 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_003E771F;

loc_003E7718: ;
    eax = MEM32(ebp + 0x14);
    MEM16(eax + 4) = LO16(edi);

loc_003E771F: ;
    POP32(esp, ebx);

loc_003E7720: ;
    POP32(esp, edi);

loc_003E7721: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003E7726
 * Original: 0x003E7726 - 0x003E77C8 (162 bytes, 64 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035F441, between)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7726(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E7726: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E77C4; /* jl: less (signed <) */

loc_003E7733: ;
    edx = MEM32(esp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    ecx = MEM32(edx + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(ecx + eax * 2 + -2);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E77C4; /* jge: greater or equal (signed >=) */

loc_003E774A: ;
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E77C3; /* jl: less (signed <) */

loc_003E7753: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E77C3; /* jge: greater or equal (signed >=) */

loc_003E7757: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E77C2; /* jl: less (signed <) */

loc_003E7760: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E77C2; /* jge: greater or equal (signed >=) */

loc_003E7764: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E77C2; /* je: equal / zero */

loc_003E7768: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E77C2; /* je: equal / zero */

loc_003E776C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E77C2; /* je: equal / zero */

loc_003E7770: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, esi);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E777Au); RECOMP_ABI_CALL(0x003E75ACu, sub_003E75AC); /* call 0x003E75AC */

loc_003E777A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E77B5; /* jne: not equal / not zero */

loc_003E777E: ;
    PUSH32(esp, 0x64);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003E7788u); RECOMP_ABI_CALL(0x003E75ACu, sub_003E75AC); /* call 0x003E75AC */

loc_003E7788: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E77B5; /* jne: not equal / not zero */

loc_003E778C: ;
    ecx = MEM32(edx + 0x34);
    eax = esi + esi * 2;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx), 0xFFFFFFFFu (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E77C2; /* jne: not equal / not zero */

loc_003E779D: ;
    _fa = (uint32_t)(MEM16(ecx + 2)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 2), 0xFFFFFFFFu (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E77C2; /* jne: not equal / not zero */

loc_003E77A4: ;
    ecx = MEM32(edx + 0x34);
    MEM16(eax + ecx) = LO16(ebx);
    ecx = MEM32(edx + 0x34);
    MEM16(ecx + eax + 2) = LO16(edi);
    goto loc_003E77C2;

loc_003E77B5: ;
    ecx = MEM32(edx + 0x34);
    eax = esi + esi * 2;
    eax = ecx + eax * 4 + 6;
    MEM8(eax) = MEM8(eax) | 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_003E77C2: ;
    POP32(esp, esi);

loc_003E77C3: ;
    POP32(esp, edi);

loc_003E77C4: ;
    POP32(esp, ebx);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003E77C8
 * Original: 0x003E77C8 - 0x003E783D (117 bytes, 51 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035F4E3, between)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003E77C8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E77C8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + 0x1C) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E7839; /* je: equal / zero */

loc_003E77D3: ;
    ecx = MEM32(ebp + 0xC);
    edx = MEM32(ebp + 0x14);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 8);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(esi + ecx);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx + esi) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E77FD; /* jge: greater or equal (signed >=) */

loc_003E77F0: ;
    ebx = MEM32(esi + ecx);
    ecx = MEM32(esi + edx);
    esi = eax;
    eax = MEM32(ebp + 0x1C);
    goto loc_003E7806;

loc_003E77FD: ;
    ebx = MEM32(esi + edx);
    ecx = MEM32(esi + ecx);
    esi = MEM32(ebp + 0x1C);

loc_003E7806: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    edx = MEM32(ebp + 0x10);
    MEM32(ebp + 0x1C) = eax;
    eax = MEM32(edi + 8);
    edx = MEM32(eax + edx * 4);
    if (CMP_EQ(_fa, _fb)) goto loc_003E782C; /* je: equal / zero */

loc_003E7816: ;
    eax = ecx;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)esi);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(ebp + 0x1C));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    goto loc_003E7836;

loc_003E782C: ;
    eax = MEM32(ebp + 0x1C);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_003E7836: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003E7839: ;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003E783D
 * Original: 0x003E783D - 0x003E79E1 (420 bytes, 148 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035F558, between)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003E783D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E783D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    edx = MEM32(ebp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E7850; /* jne: not equal / not zero */

loc_003E7849: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003E79DD;

loc_003E7850: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0xC);
    ecx = MEM32(esi + 0x34);
    eax = edx + edx * 2;
    PUSH32(esp, edi);
    edi = ecx + eax * 4;
    SET_LO16(eax, MEM16(edi + 6));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E786D; /* je: equal / zero */

loc_003E7866: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003E79DB;

loc_003E786D: ;
    eax = eax | 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    MEM16(edi + 6) = LO16(eax);
    if (TEST_NZ(_fa, _fb)) goto loc_003E79D4; /* jne: not equal / not zero */

loc_003E787C: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(ecx + eax * 2 + -2);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    PUSH32(esp, ebx);
    ebx = 0x10000;
    if (CMP_G(_fas, _fbs)) goto loc_003E78A3; /* jg: greater (signed >) */

loc_003E7892: ;
    SET_LO16(ecx, MEM16(edi));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xFFFFFFFFu (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E78BF; /* jne: not equal / not zero */

loc_003E789B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(ebp + 0x10)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x10), LO16(eax) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E790F; /* je: equal / zero */

loc_003E78A3: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x24);
    eax = MEM32(eax + 0x170);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, MEM32(eax + edx * 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E78BDu); RECOMP_ABI_CALL(0x003E4DBAu, sub_003E4DBA); /* call 0x003E4DBA */

loc_003E78BD: ;
    goto loc_003E790F;

loc_003E78BF: ;
    SET_LO16(eax, MEM16(edi + 2));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E78DB; /* jne: not equal / not zero */

loc_003E78C9: ;
    eax = SX16(LO16(ecx));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E78D9u); RECOMP_ABI_CALL(0x003E783Du, sub_003E783D); /* call 0x003E783D */

loc_003E78D9: ;
    goto loc_003E790F;

loc_003E78DB: ;
    eax = SX16(LO16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E78EBu); RECOMP_ABI_CALL(0x003E783Du, sub_003E783D); /* call 0x003E783D */

loc_003E78EB: ;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E78FCu); RECOMP_ABI_CALL(0x003E783Du, sub_003E783D); /* call 0x003E783D */

loc_003E78FC: ;
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(edi + 2);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    eax = (uint32_t)(int32_t)SMEM16(edi);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E790Fu); RECOMP_ABI_CALL(0x003E77C8u, sub_003E77C8); /* call 0x003E77C8 */

loc_003E790F: ;
    _fa = (uint32_t)(MEM8(edi + 6)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 6), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003E79D3; /* jne: not equal / not zero */

loc_003E7919: ;
    SET_LO16(ecx, MEM16(edi + 4));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xFFFFFFFFu (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E7991; /* je: equal / zero */

loc_003E7923: ;
    edx = MEM32(esi + 0x34);
    ecx = SX16(LO16(ecx));
    MEM32(ebp + 0xC) = ecx;
    ecx = ecx + ecx * 2;
    ecx = edx + ecx * 4;
    _fa = (uint32_t)(MEM8(ecx + 6)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 6), 2 (8-bit) */
    MEM32(ebp + -4) = ecx;
    if (TEST_NZ(_fa, _fb)) goto loc_003E7991; /* jne: not equal / not zero */

loc_003E793B: ;
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi), 0xFFFFFFFFu (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E7948; /* je: equal / zero */

loc_003E7941: ;
    _fa = (uint32_t)(MEM16(edi + 2)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 2), 0xFFFFFFFFu (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E7973; /* jne: not equal / not zero */

loc_003E7948: ;
    ecx = MEM32(ebp + 8);
    ecx = MEM32(ecx + 0x24);
    ecx = MEM32(ecx + 0x170);
    eax = MEM32(esi);
    edx = MEM32(ebp + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0x20000);
    PUSH32(esp, ecx);
    ecx = MEM32(ebp + 0x14);
    ecx = MEM32(eax + ecx * 4);
    _fb = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax + edx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E7970u); RECOMP_ABI_CALL(0x003E4DBAu, sub_003E4DBA); /* call 0x003E4DBA */

loc_003E7970: ;
    ecx = MEM32(ebp + -4);

loc_003E7973: ;
    edx = MEM32(esi);
    ebx = MEM32(ebp + 0x14);
    edx = edx + ebx * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(int32_t)SMEM16(edi + 4);
    esi = MEM32(esi);
    edx = esi + edx * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx) = MEM32(edx) + eax;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx + 6) = MEM8(ecx + 6) | 2;
    _fa = (uint32_t)(MEM8(ecx + 6)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ecx + 8) = eax;
    goto loc_003E79CC;

loc_003E7991: ;
    _fa = (uint32_t)(MEM16(ebp + 0x10)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x10), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E79BC; /* je: equal / zero */

loc_003E7998: ;
    _fa = (uint32_t)(MEM16(edi + 2)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 2), 0xFFFFFFFFu (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E79BC; /* jne: not equal / not zero */

loc_003E799F: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x24);
    eax = MEM32(eax + 0x170);
    ecx = MEM32(ebp + 0x14);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    eax = MEM32(esi);
    PUSH32(esp, MEM32(eax + ecx * 4));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E79BCu); RECOMP_ABI_CALL(0x003E4DBAu, sub_003E4DBA); /* call 0x003E4DBA */

loc_003E79BC: ;
    _fa = (uint32_t)(MEM16(edi)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi), 0xFFFFFFFFu (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E79CC; /* je: equal / zero */

loc_003E79C2: ;
    ecx = MEM32(esi);
    edx = MEM32(ebp + 0x14);
    ecx = ecx + edx * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E79CC: ;
    MEM8(edi + 6) = MEM8(edi + 6) | 2;
    _fa = (uint32_t)(MEM8(edi + 6)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(edi + 8) = eax;

loc_003E79D3: ;
    POP32(esp, ebx);

loc_003E79D4: ;
    MEM8(edi + 6) = MEM8(edi + 6) & 0xFB;
    _fa = (uint32_t)(MEM8(edi + 6)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax = MEM32(edi + 8);

loc_003E79DB: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003E79DD: ;
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003E79E1
 * Original: 0x003E79E1 - 0x003E7A42 (97 bytes, 42 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035F6FC, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003E79E1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E79E1: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    ecx = MEM32(edi + 0x20);
    esi = (uint32_t)(int32_t)SMEM16(ecx + eax * 2 + -2);
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 5;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003E7A12; /* jle: less or equal (signed <=) */

loc_003E79FF: ;
    eax = MEM32(edi + 0x34);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E7A05: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003E7A12; /* jne: not equal / not zero */

loc_003E7A0A: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E7A05; /* jl: less (signed <) */

loc_003E7A12: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    SET_LO8(eax, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_003E7A34; /* jle: less or equal (signed <=) */

loc_003E7A22: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E7A2Fu); RECOMP_ABI_CALL(0x003E783Du, sub_003E783D); /* call 0x003E783D */

loc_003E7A2F: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E7A22; /* jl: less (signed <) */

loc_003E7A34: ;
    MEM32(edi + 0x30) = 1;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E7A42
 * Original: 0x003E7A42 - 0x003E7A73 (49 bytes, 22 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035F75D, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7A42(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E7A42: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003E7A65; /* jle: less or equal (signed <=) */

loc_003E7A50: ;
    eax = MEM32(eax + 0x20);
    PUSH32(esp, esi);

loc_003E7A54: ;
    esi = (uint32_t)(int32_t)SMEM16(eax);
    _fa = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0xC), esi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003E7A64; /* jle: less or equal (signed <=) */

loc_003E7A5D: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E7A54; /* jl: less (signed <) */

loc_003E7A64: ;
    POP32(esp, esi);

loc_003E7A65: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E7A6D; /* jge: greater or equal (signed >=) */

loc_003E7A69: ;
    eax = edx;
    goto loc_003E7A70;

loc_003E7A6D: ;
    eax = eax | 0xFFFFFFFFu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003E7A70: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E7A73
 * Original: 0x003E7A73 - 0x003E7C1B (424 bytes, 159 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035F78E, between)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003E7A73(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E7A73: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E7A89u); RECOMP_ABI_CALL(0x003E7A42u, sub_003E7A42); /* call 0x003E7A42 */

loc_003E7A89: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(ebp + -12) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_003E7C12; /* jl: less (signed <) */

loc_003E7A96: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E7A9Fu); RECOMP_ABI_CALL(0x003E7A42u, sub_003E7A42); /* call 0x003E7A42 */

loc_003E7A9F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E7C12; /* jl: less (signed <) */

loc_003E7AA7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E7ADF; /* jne: not equal / not zero */

loc_003E7AAB: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x1C);
    eax = edi + edi;
    edx = (uint32_t)(int32_t)SMEM16(edx + eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    ecx = (uint32_t)(int32_t)SMEM16(ecx + eax);
    MEM32(ebp + 0xC) = ecx;
    MEM32(ebp + -4) = edx;
    eax = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003E7ACB; /* je: equal / zero */

loc_003E7AC8: ;
    eax = ebx + 1;

loc_003E7ACB: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    ecx = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_003E7AD4; /* je: equal / zero */

loc_003E7AD1: ;
    ecx = ebx + -1;

loc_003E7AD4: ;
    edi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E7AE7; /* je: equal / zero */

loc_003E7ADB: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E7AE7; /* je: equal / zero */

loc_003E7ADF: ;
    eax = MEM32(ebp + 0x14);
    goto loc_003E7C14;

loc_003E7AE7: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    edx = MEM32(ebp + 0xC);
    if (CMP_EQ(_fa, _fb)) goto loc_003E7AF1; /* je: equal / zero */

loc_003E7AEE: ;
    edx = edi + 1;

loc_003E7AF1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0xC) (32-bit) */
    MEM32(ebp + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_003E7B01; /* jne: not equal / not zero */

loc_003E7AF9: ;
    edx = MEM32(ebp + -4);
    MEM32(ebp + 0xC) = edx;
    goto loc_003E7B05;

loc_003E7B01: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 0xC) = edi;

loc_003E7B05: ;
    edx = MEM32(esi + 0x10);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x14) = eax;
    eax = MEM32(esi + 0x14);
    edi = ecx;
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ebx;
    MEM32(ebp + -4) = edi;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(ecx + edx);
    eax = MEM32(eax + ecx);
    MEM32(ebp + -8) = ebx;
    _fb = (uint32_t)(MEM32(edx + edi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(edx + edi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 0x14);
    edi = MEM32(ebp + 0x14);
    edi = MEM32(edx + edi);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    edi = MEM32(ebp + -4);
    _fb = (uint32_t)(MEM32(edx + edi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edx + edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(ebp + 0x14);
    edx = MEM32(esi + 0x10);
    edx = MEM32(edi + edx);
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebp + -8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(esi + 0x14);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    eax = MEM32(esi + 0x10);
    ebx = MEM32(ebp + 8);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -4) = edx;
    edx = MEM32(ebp + 0xC);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x14) = edx;
    edx = MEM32(ebp + 0x10);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(edx + eax);
    MEM32(ebp + -8) = edx;
    edx = MEM32(edi + edx);
    MEM32(ebp + 0xC) = edx;
    MEM32(ebp + 0x10) = ebx;
    ebx = edx;
    edx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(MEM32(edi + edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(edi + edx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 0x10);
    edi = MEM32(ebp + 0x10);
    edi = MEM32(edi + edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = (uint32_t)((int32_t)ebx * (int32_t)edi);
    edi = MEM32(ebp + 0x14);
    _fb = (uint32_t)(MEM32(edi + edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edi + edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esi + 0x14);
    edi = MEM32(ebp + 0x10);
    edx = MEM32(edi + edx);
    _fb = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E7C12; /* jne: not equal / not zero */

loc_003E7BB8: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(ebp + -8);
    edi = MEM32(eax + edx);
    _fb = (uint32_t)(MEM32(eax + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(eax + ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_003E7BCE; /* jns: not sign (positive) */

loc_003E7BC6: ;
    edi = MEM32(eax + ecx);
    _fb = (uint32_t)(MEM32(eax + edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(eax + edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_003E7BD4;

loc_003E7BCE: ;
    edi = MEM32(eax + edx);
    _fb = (uint32_t)(MEM32(eax + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(eax + ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003E7BD4: ;
    eax = MEM32(esi + 0x14);
    ebx = MEM32(eax + edx);
    _fb = (uint32_t)(MEM32(eax + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(eax + ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = eax;
    if ((_fas >= 0)) goto loc_003E7BE9; /* jns: not sign (positive) */

loc_003E7BE1: ;
    eax = MEM32(ebx + ecx);
    _fb = (uint32_t)(MEM32(ebx + edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebx + edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_003E7BEF;

loc_003E7BE9: ;
    eax = MEM32(ebx + edx);
    _fb = (uint32_t)(MEM32(ebx + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebx + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003E7BEF: ;
    ecx = edi + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E7C12; /* jl: less (signed <) */

loc_003E7BF6: ;
    ecx = MEM32(ebp + -12);
    eax = MEM32(esi + 0x2C);
    eax = ZX8(MEM8(ecx + eax));
    eax = ~eax;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ecx;
    goto loc_003E7C14;

loc_003E7C12: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E7C14: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003E7C1B
 * Original: 0x003E7C1B - 0x003E7C58 (61 bytes, 25 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035F936, between)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003E7C1B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E7C1B: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x10);
    ecx = MEM32(esp + 8);
    ecx = MEM32(eax + ecx * 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = MEM32(eax + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003E7C3B; /* jle: less or equal (signed <=) */

loc_003E7C35: ;
    esi = ecx;
    ecx = eax;
    eax = esi;

loc_003E7C3B: ;
    esi = MEM32(esp + 0x10);
    edx = MEM32(edx + 0x10);
    edx = MEM32(edx + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    POP32(esp, esi);
    if (CMP_G(_fas, _fbs)) goto loc_003E7C53; /* jg: greater (signed >) */

loc_003E7C4A: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003E7C53; /* jg: greater (signed >) */

loc_003E7C4E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003E7C55;

loc_003E7C53: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E7C55: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003E7C58
 * Original: 0x003E7C58 - 0x003E7D4D (245 bytes, 67 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035F973, between)
 * CC: cdecl, 13 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003E7C58(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E7C58: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 0x20);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    SET_LO16(esi, MEM16(ecx + 0x18));
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), LO16(ebx) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E7C6E; /* jne: not equal / not zero */

loc_003E7C6B: ;
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003E7C6E: ;
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    MEM32(eax + 8) = edx;
    edx = MEM32(ebp + 0x10);
    MEM32(eax + 4) = edx;
    edx = MEM32(ebp + 0x14);
    MEM32(eax + 0x94) = edx;
    edx = MEM32(ebp + 0x18);
    MEM32(eax + 0x98) = edx;
    edx = MEM32(ebp + 0x1C);
    esi = ZX16(LO16(esi));
    MEM32(eax) = edx;
    edx = edx + esi * 4;
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x38);
    MEM32(eax + 0x158) = edi;
    MEM32(eax + 0x15C) = edx;
    SET_LO16(edx, MEM16(ecx + 6));
    SET_LO16(esi, MEM16(ecx + 0xA));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(esi) (16-bit) */
    POP32(esp, edi);
    edx = ZX16(LO16(edx));
    if (CMP_A(_fa, _fb)) goto loc_003E7CBE; /* ja: above (unsigned >) */

loc_003E7CBB: ;
    edx = ZX16(LO16(esi));

loc_003E7CBE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x160) = edx;
    edx = MEM32(ebp + 0x28);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E7CDF; /* je: equal / zero */

loc_003E7CCE: ;
    MEM32(eax + 0xBC) = edx;
    edx = MEM32(ebp + 0x2C);
    MEM32(eax + 0xB8) = edx;
    goto loc_003E7CEB;

loc_003E7CDF: ;
    MEM32(eax + 0xBC) = ebx;
    MEM32(eax + 0xB8) = ebx;

loc_003E7CEB: ;
    edx = MEM32(ebp + 0x30);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E7D03; /* je: equal / zero */

loc_003E7CF2: ;
    MEM32(eax + 0xB4) = edx;
    edx = MEM32(ebp + 0x34);
    MEM32(eax + 0xB0) = edx;
    goto loc_003E7D0F;

loc_003E7D03: ;
    MEM32(eax + 0xB4) = ebx;
    MEM32(eax + 0xB0) = ebx;

loc_003E7D0F: ;
    MEM32(eax + 0x130) = ecx;
    SET_LO16(ecx, MEM16(ebp + 0x24));
    POP32(esp, esi);
    MEM8(eax + 0x12D) = LO8(ebx);
    MEM8(eax + 0x14D) = LO8(ebx);
    MEM16(eax + 0x134) = LO16(ecx);
    MEM8(eax + 0x14C) = 1;
    MEM32(eax + 0x150) = 0x2710;
    MEM32(eax + 0x154) = 0x64;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 56; return; /* ret 52 */

}

/**
 * sub_003E7D4D
 * Original: 0x003E7D4D - 0x003E7D5C (15 bytes, 5 insns)
 * Folder: xdk/libc (between: 0x003E7C58 and 0x003E7D79)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7D4D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E7D4D: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x6C);
    eax = ~eax;
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E7D5C
 * Original: 0x003E7D5C - 0x003E7D79 (29 bytes, 8 insns)
 * Folder: xdk/libc (between: 0x003E7C58 and 0x003E7D79)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7D5C(void)
{

loc_003E7D5C: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(eax + 0x6A));
    edx = MEM32(esp + 8);
    MEM16(edx) = LO16(ecx);
    SET_LO16(eax, MEM16(eax + 0x68));
    ecx = MEM32(esp + 0xC);
    MEM16(ecx) = LO16(eax);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E7D79
 * Original: 0x003E7D79 - 0x003E7DA3 (42 bytes, 13 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035FA94, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7D79(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E7D79: ;
    SET_LO8(ecx, MEM8(esp + 8));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = MEM32(esp + 4);
    MEM8(eax + 0x12D) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_003E7D97; /* jne: not equal / not zero */

loc_003E7D8B: ;
    _fa = (uint32_t)(MEM8(eax + 0x14C)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x14C), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E7D97; /* je: equal / zero */

loc_003E7D93: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003E7D9A;

loc_003E7D97: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003E7D9A: ;
    MEM8(eax + 0x14D) = LO8(ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E7DA3
 * Original: 0x003E7DA3 - 0x003E7DCE (43 bytes, 13 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035FABE, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7DA3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E7DA3: ;
    eax = MEM32(esp + 4);
    _fa = (uint32_t)(MEM8(eax + 0x12D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x12D), 0 (8-bit) */
    SET_LO8(ecx, MEM8(esp + 8));
    MEM8(eax + 0x14C) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_003E7DC2; /* jne: not equal / not zero */

loc_003E7DBA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E7DC2; /* je: equal / zero */

loc_003E7DBE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003E7DC5;

loc_003E7DC2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003E7DC5: ;
    MEM8(eax + 0x14D) = LO8(ecx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E7DCE
 * Original: 0x003E7DCE - 0x003E7E4C (126 bytes, 34 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035FAE9, between)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003E7DCE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E7DCE: ;
    eax = MEM32(esp + 4);
    MEM16(eax + 0x40) = 3;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM8(eax + 0x16C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E7DEE; /* je: equal / zero */

loc_003E7DE3: ;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E7DEE; /* je: equal / zero */

loc_003E7DE9: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003E7DF0;

loc_003E7DEE: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E7DF0: ;
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ecx + 0x54BE9C);
    MEM32(eax + 0x3C) = ecx;
    ecx = 0x16C0A;
    _fb = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax + 0x38) = 0x40;
    MEM32(eax + 0x24) = 0x44;
    MEM32(eax + 0x28) = edx;
    MEM16(eax + 0x56) = LO16(edx);
    MEM8(eax + 0x58) = 1;
    MEM16(eax + 0x50) = 9;
    MEM16(eax + 0x52) = 3;
    MEM16(eax + 0x54) = 0x80;
    MEM32(eax + 0x30) = edx;
    MEM32(eax + 0x34) = edx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(eax + 0x18) = ecx;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(eax + 0x20) = edx;
    MEM32(eax + 0x14) = edx;
    MEM32(eax + 0x1C) = ecx;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E7E4C
 * Original: 0x003E7E4C - 0x003E7E5D (17 bytes, 4 insns)
 * Folder: xdk/libc (between: 0x003E7DCE and 0x003E7E5D)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E7E4C(void)
{

loc_003E7E4C: ;
    eax = MEM32(esp + 4);
    MEM32(eax + 0x6C) = 0x1101;
    eax = MEM32(eax + 0x70);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E7E5D
 * Original: 0x003E7E5D - 0x003E7F2D (208 bytes, 85 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035FB78, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003E7E5D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E7E5D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = 0x7FFF;
    ecx = 0xFFFF8000u;
    if (CMP_NE(_fa, _fb)) goto loc_003E7E8C; /* jne: not equal / not zero */

loc_003E7E77: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E7E94; /* jne: not equal / not zero */

loc_003E7E7B: ;
    eax = MEM32(ebp + 0x10);
    MEM16(eax + 2) = MEM16(eax + 2) & LO16(ebx);
    _fa = (uint32_t)(MEM16(eax + 2)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(eax) = 0x4000;
    goto loc_003E7F26;

loc_003E7E8C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E7EC0; /* jge: greater or equal (signed >=) */

loc_003E7E90: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003E7EC0; /* jle: less or equal (signed <=) */

loc_003E7E94: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E7EC0; /* jge: greater or equal (signed >=) */

loc_003E7E98: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003E7EC0; /* jle: less or equal (signed <=) */

loc_003E7E9C: ;
    esi = edi;
    eax = ebx;
    esi = (uint32_t)((int32_t)esi * (int32_t)edi);
    eax = (uint32_t)((int32_t)eax * (int32_t)ebx);
    PUSH32(esp, 0xF);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ecx);
    eax = 0x20000000;
    goto loc_003E7EB6;

loc_003E7EB2: ;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003E7EB6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E7EB2; /* jl: less (signed <) */

loc_003E7EBA: ;
    edi = edi << LO8(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx << LO8(ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_003E7EF4;

loc_003E7EC0: ;
    eax = 0x20000000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E7EE2; /* jge: greater or equal (signed >=) */

loc_003E7EC9: ;
    ecx = 0xE0000000u;

loc_003E7ECE: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003E7EE2; /* jle: less or equal (signed <=) */

loc_003E7ED2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E7EE2; /* jge: greater or equal (signed >=) */

loc_003E7ED6: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003E7EE2; /* jle: less or equal (signed <=) */

loc_003E7EDA: ;
    edi = edi << 1;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E7ECE; /* jl: less (signed <) */

loc_003E7EE2: ;
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E7EE9u); RECOMP_ABI_CALL(0x003E4FB0u, sub_003E4FB0); /* call 0x003E4FB0 */

loc_003E7EE9: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E7EF2u); RECOMP_ABI_CALL(0x003E4FB0u, sub_003E4FB0); /* call 0x003E4FB0 */

loc_003E7EF2: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E7EF4: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E7EFAu); RECOMP_ABI_CALL(0x003E5050u, sub_003E5050); /* call 0x003E5050 */

loc_003E7EFA: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    MEM32(ebp + 8) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E7F04u); RECOMP_ABI_CALL(0x003E502Au, sub_003E502A); /* call 0x003E502A */

loc_003E7F04: ;
    PUSH32(esp, MEM32(ebp + 8));
    edi = MEM32(ebp + 0x10);
    esi = 0x8000;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, ebx);
    MEM16(edi) = LO16(eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E7F1Du); RECOMP_ABI_CALL(0x003E502Au, sub_003E502A); /* call 0x003E502A */

loc_003E7F1D: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(edi + 2) = LO16(eax);

loc_003E7F26: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E7F2D
 * Original: 0x003E7F2D - 0x003E7F5B (46 bytes, 18 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035FC48, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003E7F2D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E7F2D: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 0xC);
    if (CMP_L(_fas, _fbs)) goto loc_003E7F42; /* jl: less (signed <) */

loc_003E7F39: ;
    eax = ecx + eax + 0x10;
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003E7F4C;

loc_003E7F42: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003E7F4C: ;
    edx = eax;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_003E7F58; /* jge: greater or equal (signed >=) */

loc_003E7F52: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E7F58; /* je: equal / zero */

loc_003E7F56: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E7F58: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E7F5B
 * Original: 0x003E7F5B - 0x003E7F8C (49 bytes, 21 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035FC76, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003E7F5B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E7F5B: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E7F75; /* jl: less (signed <) */

loc_003E7F6C: ;
    eax = ecx + eax + 1;
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003E7F7D;

loc_003E7F75: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003E7F7D: ;
    edx = eax;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_003E7F89; /* jge: greater or equal (signed >=) */

loc_003E7F83: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E7F89; /* je: equal / zero */

loc_003E7F87: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E7F89: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E7F8C
 * Original: 0x003E7F8C - 0x003E7FB5 (41 bytes, 17 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035FCA7, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003E7F8C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E7F8C: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 0xC);
    if (CMP_L(_fas, _fbs)) goto loc_003E7F9F; /* jl: less (signed <) */

loc_003E7F98: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003E7FA6;

loc_003E7F9F: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003E7FA6: ;
    edx = eax;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_003E7FB2; /* jge: greater or equal (signed >=) */

loc_003E7FAC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E7FB2; /* je: equal / zero */

loc_003E7FB0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E7FB2: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E7FB5
 * Original: 0x003E7FB5 - 0x003E7FE3 (46 bytes, 18 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035FCD0, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003E7FB5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E7FB5: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 0xC);
    if (CMP_L(_fas, _fbs)) goto loc_003E7FCA; /* jl: less (signed <) */

loc_003E7FC1: ;
    eax = ecx + eax + 0x3F;
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003E7FD4;

loc_003E7FCA: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003E7FD4: ;
    edx = eax;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_003E7FE0; /* jge: greater or equal (signed >=) */

loc_003E7FDA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E7FE0; /* je: equal / zero */

loc_003E7FDE: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E7FE0: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E7FE3
 * Original: 0x003E7FE3 - 0x003E8016 (51 bytes, 21 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035FCFE, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003E7FE3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E7FE3: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E7FFD; /* jl: less (signed <) */

loc_003E7FF4: ;
    eax = ecx + eax + 3;
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003E8007;

loc_003E7FFD: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003E8007: ;
    edx = eax;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_003E8013; /* jge: greater or equal (signed >=) */

loc_003E800D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8013; /* je: equal / zero */

loc_003E8011: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E8013: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E8016
 * Original: 0x003E8016 - 0x003E8044 (46 bytes, 18 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035FD31, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003E8016(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8016: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 0xC);
    if (CMP_L(_fas, _fbs)) goto loc_003E802B; /* jl: less (signed <) */

loc_003E8022: ;
    eax = ecx + eax + 0x20;
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003E8035;

loc_003E802B: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003E8035: ;
    edx = eax;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_003E8041; /* jge: greater or equal (signed >=) */

loc_003E803B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8041; /* je: equal / zero */

loc_003E803F: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E8041: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E8044
 * Original: 0x003E8044 - 0x003E8076 (50 bytes, 22 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035FD5F, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003E8044(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8044: ;
    eax = MEM32(esp + 0xC);
    ecx = MEM32(esp + 8);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E805E; /* jl: less (signed <) */

loc_003E8055: ;
    eax = ecx + eax + 2;
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003E8067;

loc_003E805E: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003E8067: ;
    edx = eax;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_003E8073; /* jge: greater or equal (signed >=) */

loc_003E806D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8073; /* je: equal / zero */

loc_003E8071: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E8073: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E8076
 * Original: 0x003E8076 - 0x003E80B5 (63 bytes, 26 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035FD91, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8076(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8076: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E808C; /* jl: less (signed <) */

loc_003E807E: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003E809A;

loc_003E808C: ;
    edx = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xFFFFFFE0u);
    edx = edx & 0xFFFFFFC0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, eax);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003E809A: ;
    edx = eax;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_003E80B2; /* jge: greater or equal (signed >=) */

loc_003E80A0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E80B2; /* je: equal / zero */

loc_003E80A4: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xFFFFFFE0u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFE0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E80B2: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E80B5
 * Original: 0x003E80B5 - 0x003E80F7 (66 bytes, 28 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035FDD0, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E80B5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E80B5: ;
    eax = MEM32(esp + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 8);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E80D2; /* jl: less (signed <) */

loc_003E80C8: ;
    eax = edx + ecx;
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003E80DC;

loc_003E80D2: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, 0xFFFFFFFEu);
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003E80DC: ;
    ecx = eax;
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_003E80F4; /* jge: greater or equal (signed >=) */

loc_003E80E2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E80F4; /* je: equal / zero */

loc_003E80E6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    SET_LO8(eax, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    eax = eax * 4 + -2;

loc_003E80F4: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E80F7
 * Original: 0x003E80F7 - 0x003E811C (37 bytes, 15 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035FE12, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003E80F7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E80F7: ;
    ecx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E8107; /* jl: less (signed <) */

loc_003E80FF: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003E810D;

loc_003E8107: ;
    eax = ecx;
    _fb = (uint32_t)(MEM32(esp + 0xC)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003E810D: ;
    edx = eax;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_003E8119; /* jge: greater or equal (signed >=) */

loc_003E8113: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8119; /* je: equal / zero */

loc_003E8117: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E8119: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E811C
 * Original: 0x003E811C - 0x003E8147 (43 bytes, 19 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035FE37, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003E811C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E811C: ;
    eax = MEM32(esp + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(esp + 8);
    ecx = eax;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E8134; /* jl: less (signed <) */

loc_003E812F: ;
    eax = edx + ecx;
    goto loc_003E8138;

loc_003E8134: ;
    eax = edx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003E8138: ;
    ecx = eax;
    ecx = ecx ^ edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_003E8144; /* jge: greater or equal (signed >=) */

loc_003E813E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8144; /* je: equal / zero */

loc_003E8142: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E8144: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E8147
 * Original: 0x003E8147 - 0x003E819A (83 bytes, 30 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035FE62, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8147(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8147: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x24);
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x86);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x84);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E8177; /* jl: less (signed <) */

loc_003E816A: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003E8184;

loc_003E8177: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & MEM32(ecx + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003E8184: ;
    edx = eax;
    edx = edx ^ esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_003E8196; /* jge: greater or equal (signed >=) */

loc_003E818A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8196; /* je: equal / zero */

loc_003E818E: ;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x28);
    if (CMP_G(_fas, _fbs)) goto loc_003E8196; /* jg: greater (signed >) */

loc_003E8194: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003E8196: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E819A
 * Original: 0x003E819A - 0x003E8228 (142 bytes, 53 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035FEB5, between)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E819A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E819A: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x24);
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x84);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x86);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x5C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0x24));
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    PUSH32(esp, ecx);
    if (CMP_L(_fas, _fbs)) goto loc_003E81EC; /* jl: less (signed <) */

loc_003E81C5: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E81D1u); RECOMP_ABI_CALL(0x003E4EDAu, sub_003E4EDA); /* call 0x003E4EDA */

loc_003E81D1: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0x24));
    eax = SX16(LO16(eax));
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E81E4u); RECOMP_ABI_CALL(0x003E4DDEu, sub_003E4DDE); /* call 0x003E4DDE */

loc_003E81E4: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003E8213;

loc_003E81EC: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E81F8u); RECOMP_ABI_CALL(0x003E4EDAu, sub_003E4EDA); /* call 0x003E4EDA */

loc_003E81F8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(esi + 0x24));
    eax = SX16(LO16(eax));
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E820Bu); RECOMP_ABI_CALL(0x003E4DDEu, sub_003E4DDE); /* call 0x003E4DDE */

loc_003E820B: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003E8213: ;
    edx = eax;
    edx = edx ^ edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_003E8223; /* jge: greater or equal (signed >=) */

loc_003E8219: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8223; /* je: equal / zero */

loc_003E821D: ;
    if (CMP_G(_fas, _fbs)) goto loc_003E8221; /* jg: greater (signed >) */

loc_003E821F: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003E8221: ;
    eax = ecx;

loc_003E8223: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E8228
 * Original: 0x003E8228 - 0x003E8301 (217 bytes, 82 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0035FF43, between)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003E8228(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8228: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = MEM32(ebp + 8);
    SET_LO16(ecx, MEM16(eax + 0x10));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax + 0x44));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0x4000 (16-bit) */
    SET_LO16(eax, MEM16(eax + 0x12));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x10);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    MEM32(ebp + -4) = edx;
    MEM16(ebp + 8) = LO16(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003E82BB; /* je: equal / zero */

loc_003E8254: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E828A; /* je: equal / zero */

loc_003E8259: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), LO16(ecx) (16-bit) */
    eax = MEM32(edi);
    if (CMP_NE(_fa, _fb)) goto loc_003E826A; /* jne: not equal / not zero */

loc_003E8260: ;
    ecx = MEM32(ebp + 0x14);
    eax = eax + esi * 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003E8282;

loc_003E826A: ;
    ebx = eax + esi * 4;
    eax = SX16(LO16(edx));
    PUSH32(esp, eax);
    eax = SX16(LO16(ecx));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E827Du); RECOMP_ABI_CALL(0x003E4DBAu, sub_003E4DBA); /* call 0x003E4DBA */

loc_003E827D: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx) = MEM32(ebx) + eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(ebp + -4);

loc_003E8282: ;
    eax = MEM32(edi + 0x24);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_003E828A: ;
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E82FA; /* je: equal / zero */

loc_003E8291: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), MEM16(ebp + 8) (16-bit) */
    eax = MEM32(edi + 4);
    if (CMP_NE(_fa, _fb)) goto loc_003E82A4; /* jne: not equal / not zero */

loc_003E829A: ;
    ecx = MEM32(ebp + 0x14);
    eax = eax + esi * 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003E82F2;

loc_003E82A4: ;
    ebx = eax + esi * 4;
    eax = (uint32_t)(int32_t)SMEM16(ebp + -4);
    PUSH32(esp, eax);
    eax = (uint32_t)(int32_t)SMEM16(ebp + 8);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0x14));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E82B9u); RECOMP_ABI_CALL(0x003E4DBAu, sub_003E4DBA); /* call 0x003E4DBA */

loc_003E82B9: ;
    goto loc_003E82F0;

loc_003E82BB: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E82D8; /* je: equal / zero */

loc_003E82C0: ;
    eax = MEM32(edi);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 0x14));
    ebx = eax + esi * 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E82CEu); RECOMP_ABI_CALL(0x003E4DDEu, sub_003E4DDE); /* call 0x003E4DDE */

loc_003E82CE: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx) = MEM32(ebx) + eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(edi + 0x24);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_003E82D8: ;
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E82FA; /* je: equal / zero */

loc_003E82DF: ;
    PUSH32(esp, MEM32(ebp + 8));
    eax = MEM32(edi + 4);
    PUSH32(esp, MEM32(ebp + 0x14));
    ebx = eax + esi * 4;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E82F0u); RECOMP_ABI_CALL(0x003E4DDEu, sub_003E4DDE); /* call 0x003E4DDE */

loc_003E82F0: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebx) = MEM32(ebx) + eax;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E82F2: ;
    eax = MEM32(edi + 0x24);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | 2;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_003E82FA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003E8301
 * Original: 0x003E8301 - 0x003E8321 (32 bytes, 12 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036001C, between)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8301(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8301: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = eax + edx * 4;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + esi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003E8321
 * Original: 0x003E8321 - 0x003E8342 (33 bytes, 12 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036003C, between)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8321(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8321: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(ecx + 4);
    edx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    eax = eax + edx * 4;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + esi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | 2;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003E8342
 * Original: 0x003E8342 - 0x003E8371 (47 bytes, 18 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036005D, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8342(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8342: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0xC));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x003E8358u); RECOMP_ABI_CALL(0x003E4DDEu, sub_003E4DDE); /* call 0x003E4DDE */

loc_003E8358: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0xE));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x003E836Au); RECOMP_ABI_CALL(0x003E4DDEu, sub_003E4DDE); /* call 0x003E4DDE */

loc_003E836A: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E8371
 * Original: 0x003E8371 - 0x003E83A0 (47 bytes, 18 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036008C, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8371(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8371: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x14));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, 0x003E8387u); RECOMP_ABI_CALL(0x003E4DDEu, sub_003E4DDE); /* call 0x003E4DDE */

loc_003E8387: ;
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x16));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x003E8399u); RECOMP_ABI_CALL(0x003E4DDEu, sub_003E4DDE); /* call 0x003E4DDE */

loc_003E8399: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E83A0
 * Original: 0x003E83A0 - 0x003E83A7 (7 bytes, 2 insns)
 * Folder: xdk/libc (between: 0x003E8371 and 0x003E83AE)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E83A0(void)
{

loc_003E83A0: ;
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E83A7
 * Original: 0x003E83A7 - 0x003E83AE (7 bytes, 2 insns)
 * Folder: xdk/libc (between: 0x003E8371 and 0x003E83AE)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E83A7(void)
{

loc_003E83A7: ;
    eax = MEM32(esp + 0xC);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E83AE
 * Original: 0x003E83AE - 0x003E845F (177 bytes, 63 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003600C9, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E83AE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003E83AE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    esi = MEM32(edi + 0x24);
    SET_LO16(ebx, MEM16(edi + 0xC));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(edi + 0xE));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8453; /* je: equal / zero */

loc_003E83CB: ;
    _fa = (uint32_t)(LO16(ebx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ebx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E844B; /* je: equal / zero */

loc_003E83D0: ;
    _fa = (uint32_t)(MEM32(edi + 0x64)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x64), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8446; /* jne: not equal / not zero */

loc_003E83D6: ;
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E83DEu); RECOMP_ABI_CALL(0x003E4E09u, sub_003E4E09); /* call 0x003E4E09 */

loc_003E83DE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    ebp = eax;
    PUSH32(esp, 0x003E83E7u); RECOMP_ABI_CALL(0x003E4E09u, sub_003E4E09); /* call 0x003E4E09 */

loc_003E83E7: ;
    ebx = eax;
    eax = MEM32(esi + 0x114);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E83F6u); RECOMP_ABI_CALL(0x003E4EEDu, sub_003E4EED); /* call 0x003E4EED */

loc_003E83F6: ;
    esi = MEM32(esi + 0x110);
    PUSH32(esp, esi);
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x003E8407u); RECOMP_ABI_CALL(0x003E4EEDu, sub_003E4EED); /* call 0x003E4EED */

loc_003E8407: ;
    PUSH32(esp, eax);
    eax = SX16(LO16(ebx));
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E8414u); RECOMP_ABI_CALL(0x003E4EEDu, sub_003E4EED); /* call 0x003E4EED */

loc_003E8414: ;
    PUSH32(esp, MEM32(esp + 0x14));
    esi = eax;
    eax = SX16(LO16(ebp));
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E8426u); RECOMP_ABI_CALL(0x003E4EEDu, sub_003E4EED); /* call 0x003E4EED */

loc_003E8426: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = 0x10000;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    POP32(esp, ebp);
    if (CMP_G(_fas, _fbs)) goto loc_003E8459; /* jg: greater (signed >) */

loc_003E8432: ;
    esi = esi << 0xE;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E843Bu); RECOMP_ABI_CALL(0x003E5050u, sub_003E5050); /* call 0x003E5050 */

loc_003E843B: ;
    _fb = (uint32_t)(0x2000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x2000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xE) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(edi + 0x64) = eax;

loc_003E8446: ;
    eax = MEM32(edi + 0x64);
    goto loc_003E8459;

loc_003E844B: ;
    eax = MEM32(esi + 0x114);
    goto loc_003E8459;

loc_003E8453: ;
    eax = MEM32(esi + 0x110);

loc_003E8459: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E845F
 * Original: 0x003E845F - 0x003E8473 (20 bytes, 6 insns)
 * Folder: xdk/libc (between: 0x003E83AE and 0x003E8473)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E845F(void)
{

loc_003E845F: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x24);
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 8);
    eax = MEM32(eax + ecx * 4);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E8473
 * Original: 0x003E8473 - 0x003E8495 (34 bytes, 12 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036018E, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8473(void)
{

loc_003E8473: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E847Eu); RECOMP_ABI_CALL(0x003E83AEu, sub_003E83AE); /* call 0x003E83AE */

loc_003E847E: ;
    ecx = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 8);
    PUSH32(esp, MEM32(eax + ecx * 4));
    PUSH32(esp, 0x003E8491u); RECOMP_ABI_CALL(0x003E4EEDu, sub_003E4EED); /* call 0x003E4EED */

loc_003E8491: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003E8495
 * Original: 0x003E8495 - 0x003E84A2 (13 bytes, 4 insns)
 * Folder: xdk/libc (between: 0x003E8473 and 0x003E84D7)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8495(void)
{

loc_003E8495: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x24);
    eax = MEM32(eax + 0x64);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E84A2
 * Original: 0x003E84A2 - 0x003E84BD (27 bytes, 10 insns)
 * Folder: xdk/libc (between: 0x003E8473 and 0x003E84D7)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E84A2(void)
{

loc_003E84A2: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E84ADu); RECOMP_ABI_CALL(0x003E83AEu, sub_003E83AE); /* call 0x003E83AE */

loc_003E84AD: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x24);
    PUSH32(esp, MEM32(eax + 0x64));
    PUSH32(esp, 0x003E84B9u); RECOMP_ABI_CALL(0x003E4EEDu, sub_003E4EED); /* call 0x003E4EED */

loc_003E84B9: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E84BD
 * Original: 0x003E84BD - 0x003E84D7 (26 bytes, 8 insns)
 * Folder: xdk/libc (between: 0x003E8473 and 0x003E84D7)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E84BD(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E84BD: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x24);
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 0xC);
    eax = eax + ecx * 4;
    ecx = MEM32(esp + 0x10);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003E84D7
 * Original: 0x003E84D7 - 0x003E84FF (40 bytes, 14 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003601F2, between)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E84D7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E84D7: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E84E2u); RECOMP_ABI_CALL(0x003E83AEu, sub_003E83AE); /* call 0x003E83AE */

loc_003E84E2: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x003E84ECu); RECOMP_ABI_CALL(0x003E4F65u, sub_003E4F65); /* call 0x003E4F65 */

loc_003E84EC: ;
    ecx = MEM32(esi + 0x24);
    ecx = MEM32(ecx + 8);
    edx = MEM32(esp + 0x10);
    ecx = ecx + edx * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003E84FF
 * Original: 0x003E84FF - 0x003E854B (76 bytes, 35 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036021A, between)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E84FF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E84FF: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(esi + 0x70) = ebx;
    MEM32(esi + 0x74) = edi;
    goto loc_003E8541;

loc_003E8516: ;
    eax = MEM32(esi + 0x28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8545; /* je: equal / zero */

loc_003E851D: ;
    MEM32(esi + 0x1C) = edi;
    SET_LO8(ecx, MEM8(edi));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM8(esi + 0x40) = LO8(ecx);
    { uint32_t _icall_target = eax; PUSH32(esp, 0x003E8529u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E8527u); } /* indirect call */
    }

loc_003E8529: ;
    _fa = (uint32_t)(MEM32(esi + 0x28)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x28), 0 (32-bit) */
    POP32(esp, ecx);
    POP32(esp, ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_003E8545; /* je: equal / zero */

loc_003E8531: ;
    eax = ZX8(MEM8(edi));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax * 4 + 0x58D360); PUSH32(esp, 0x003E853Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E8538u); } /* indirect call */
    }

loc_003E853F: ;
    edi = eax;

loc_003E8541: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003E8516; /* jb: below (unsigned <) */

loc_003E8545: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E854B
 * Original: 0x003E854B - 0x003E8578 (45 bytes, 19 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00360266, between)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E854B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E854B: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    MEM32(esi + 0x70) = edi;
    MEM32(esi + 0x74) = eax;
    goto loc_003E856F;

loc_003E8561: ;
    ecx = ZX8(MEM8(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx * 4 + 0x58D360); PUSH32(esp, 0x003E856Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E8568u); } /* indirect call */
    }

loc_003E856F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003E8561; /* jb: below (unsigned <) */

loc_003E8573: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E8578
 * Original: 0x003E8578 - 0x003E879A (546 bytes, 153 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00360293, between)
 * Category: game_vtable
 * CC: thiscall, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003E8578(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8578: ;
    PUSH32(esp, ebp);
    ebp = esp + -96;
    _fb = (uint32_t)(0xF8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xF8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x68);
    PUSH32(esp, edi);
    PUSH32(esp, 0xE);
    POP32(esp, ecx);
    eax = ebp + -152;
    MEM32(ebp + -8) = eax;
    eax = ebp + -96;
    edi = ebp + -152;
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
    esi = MEM32(ebp + 0x6C);
    MEM32(ebp + -40) = eax;
    MEM32(ebp + -36) = eax;
    MEM32(ebp + -32) = eax;
    PUSH32(esp, 0xE);
    POP32(esp, ecx);
    edi = ebp + -96;
    eax = 0x3E83A0;
    MEM32(ebp + 0x24) = eax;
    MEM32(ebp + 0x28) = eax;
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
    esi = MEM32(ebp + 0x78);
    eax = MEM32(esi + 0x150);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebp + 0x50) = eax;
    eax = MEM32(esi + 0x154);
    MEM32(ebp + 0x54) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x18), ebx (32-bit) */
    MEM32(ebp + -4) = esi;
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(MEM8(esi + 0x125)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x125), 1 (8-bit) */
    MEM32(ebp + 4) = ebx;
    MEM32(ebp + 8) = ebx;
    MEM32(ebp + 0xC) = ebx;
    MEM16(ebp + -24) = 0x4000;
    MEM16(ebp + -28) = 0x4000;
    MEM16(ebp + -20) = 0x4000;
    MEM16(ebp + -22) = LO16(ebx);
    MEM16(ebp + -26) = LO16(ebx);
    MEM16(ebp + -18) = LO16(ebx);
    MEM16(ebp + 0x1C) = 0x4000;
    MEM32(ebp + 0x20) = 0x3E8301;
    MEM32(ebp + 0x14) = ebx;
    MEM16(ebp + 0x40) = LO16(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003E8653; /* jne: not equal / not zero */

loc_003E8625: ;
    MEM16(esi + 0x78) = 3;
    MEM32(esi + 0x74) = 0x3E8016;
    MEM16(esi + 0x16E) = LO16(ebx);
    MEM32(ebp + 0x30) = 0x3E845F;
    MEM32(ebp + 0x34) = 0x3E8495;
    MEM32(ebp + 0x38) = 0x3E84BD;
    goto loc_003E8713;

loc_003E8653: ;
    MEM8(esi + 0x16E) = MEM8(esi + 0x16E) & 0xE0;
    _fa = (uint32_t)(MEM8(esi + 0x16E)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    SET_LO16(eax, MEM16(esi + 0x16C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E866E; /* je: equal / zero */

loc_003E8665: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003E866E; /* jne: not equal / not zero */

loc_003E8669: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003E8670;

loc_003E866E: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E8670: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebx) (16-bit) */
    MEM16(ebp + 0x58) = LO16(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003E868C; /* je: equal / zero */

loc_003E8679: ;
    _fa = (uint32_t)(MEM8(esi + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003E8687; /* jne: not equal / not zero */

loc_003E867F: ;
    _fa = (uint32_t)(MEM8(esi + 0x125)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x125), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E868C; /* je: equal / zero */

loc_003E8687: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003E868E;

loc_003E868C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E868E: ;
    ecx = ZX16(MEM16(esi + 0x78));
    eax = ecx + eax * 8;
    eax = MEM32(eax * 4 + 0x54BE90);
    MEM32(esi + 0x74) = eax;
    MEM16(ebp + 0x5C) = MEM16(ebp + 0x5C) | 0xFFFF;
    _fa = (uint32_t)(MEM16(ebp + 0x5C)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(ebp + 0x5A) = MEM16(ebp + 0x5A) | 0xFFFF;
    _fa = (uint32_t)(MEM16(ebp + 0x5A)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), 1 (16-bit) */
    if (CMP_A(_fa, _fb)) goto loc_003E86B7; /* ja: above (unsigned >) */

loc_003E86B0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_003E8790;

loc_003E86B7: ;
    _fa = (uint32_t)(MEM8(esi + 0x12C)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x12C), LO8(ebx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E86D6; /* je: equal / zero */

loc_003E86BF: ;
    MEM32(ebp + 0x30) = 0x3E845F;
    MEM32(ebp + 0x34) = 0x3E8495;
    MEM32(ebp + 0x38) = 0x3E84BD;
    goto loc_003E86EF;

loc_003E86D6: ;
    MEM32(ebp + 0x30) = 0x3E8473;
    MEM32(ebp + 0x34) = 0x3E84A2;
    MEM32(ebp + 0x38) = 0x3E84D7;
    MEM16(ebp + 0x40) = LO16(ebx);

loc_003E86EF: ;
    SET_LO16(eax, MEM16(esi + 0x8E));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(LO16(ebx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), LO16(ebx) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8713; /* je: equal / zero */

loc_003E86FB: ;
    eax = SX16(LO16(eax));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esi + 0x100;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0xAC); PUSH32(esp, 0x003E870Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E8706u); } /* indirect call */
    }

loc_003E870C: ;
    MEM32(esi + 0x64) = eax;
    MEM16(ebp + 0x40) = LO16(ebx);

loc_003E8713: ;
    eax = MEM32(esi);
    MEM32(ebp + -16) = eax;
    eax = MEM32(ebp + 0x7C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(ebp) = eax;
    MEM32(ebp + 0x44) = ebx;
    MEM32(ebp + 0x2C) = 0x3E84FF;
    if (CMP_NE(_fa, _fb)) goto loc_003E8733; /* jne: not equal / not zero */

loc_003E872C: ;
    MEM32(ebp + 0x2C) = 0x3E854B;

loc_003E8733: ;
    _fa = (uint32_t)(MEM8(esi + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x125), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8753; /* jne: not equal / not zero */

loc_003E873C: ;
    SET_LO16(eax, MEM16(esi + 0x16C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E8753; /* je: equal / zero */

loc_003E8747: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E8753; /* je: equal / zero */

loc_003E874B: ;
    PUSH32(esp, MEM32(ebp + -40));
    PUSH32(esp, 0x003E8753u); RECOMP_ABI_CALL(0x003E7553u, sub_003E7553); /* call 0x003E7553 */

loc_003E8753: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + 0x74));
    eax = ebp + -40;
    PUSH32(esp, MEM32(ebp + 0x70));
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(ebp + 0x2C); PUSH32(esp, 0x003E8760u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E875Du); } /* indirect call */
    }

loc_003E8760: ;
    eax = MEM32(ebp + -4);
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E878D; /* jne: not equal / not zero */

loc_003E876C: ;
    SET_LO16(eax, MEM16(eax + 0x16C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E878D; /* je: equal / zero */

loc_003E8777: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E878D; /* je: equal / zero */

loc_003E877B: ;
    eax = MEM32(ebp + -40);
    _fa = (uint32_t)(MEM32(eax + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x30), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E878D; /* jne: not equal / not zero */

loc_003E8783: ;
    PUSH32(esp, eax);
    eax = ebp + -40;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E878Du); RECOMP_ABI_CALL(0x003E79E1u, sub_003E79E1); /* call 0x003E79E1 */

loc_003E878D: ;
    eax = MEM32(ebp + 0x44);

loc_003E8790: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x60) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 0x60;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003E879A
 * Original: 0x003E879A - 0x003E87CA (48 bytes, 14 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003604B5, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E879A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E879A: ;
    ecx = MEM32(esp + 4);
    SET_LO16(eax, MEM16(ecx + 0x44));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFC00) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFC00 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003E87C7; /* jle: less or equal (signed <=) */

loc_003E87A8: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x400 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E87C7; /* jge: greater or equal (signed >=) */

loc_003E87AE: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    SET_LO8(edx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = edx & 0xFFFF8000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x4000;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(ecx + 0x44) = LO16(edx);

loc_003E87C7: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E87CA
 * Original: 0x003E87CA - 0x003E882B (97 bytes, 35 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003604E5, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E87CA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E87CA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x12));
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0xE));
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E87E3u); RECOMP_ABI_CALL(0x003E4E09u, sub_003E4E09); /* call 0x003E4E09 */

loc_003E87E3: ;
    SET_LO16(edi, LO16(eax));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x10));
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0xC));
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E87F9u); RECOMP_ABI_CALL(0x003E4E09u, sub_003E4E09); /* call 0x003E4E09 */

loc_003E87F9: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0xFC00) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0xFC00 (16-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003E881E; /* jle: less or equal (signed <=) */

loc_003E8802: ;
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0x400 (16-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E881E; /* jge: greater or equal (signed >=) */

loc_003E8809: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edi), 0 (16-bit) */
    SET_LO8(eax, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 0xFFFF8000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x4000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;

loc_003E881E: ;
    MEM32(esi + 0x64) = MEM32(esi + 0x64) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x64)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM16(esi + 0x44) = LO16(edi);
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003E882B
 * Original: 0x003E882B - 0x003E88D3 (168 bytes, 46 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00360546, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E882B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E882B: ;
    eax = MEM32(esp + 4);
    MEM16(eax + 0xC) = MEM16(eax + 0xC) & 0;
    _fa = (uint32_t)(MEM16(eax + 0xC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(eax + 0x10) = MEM16(eax + 0x10) & 0;
    _fa = (uint32_t)(MEM16(eax + 0x10)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = 0x3E83A7;
    MEM16(eax + 0xE) = 0x4000;
    MEM16(eax + 0x12) = 0x4000;
    MEM32(eax + 0x48) = 0x3E8321;
    MEM32(eax + 0x4C) = esi;
    SET_LO16(edx, MEM16(ecx + 0x16C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_003E886F; /* je: equal / zero */

loc_003E8865: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E886F; /* je: equal / zero */

loc_003E886A: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003E8871;

loc_003E886F: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E8871: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    MEM16(eax + 0x80) = LO16(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_003E8891; /* je: equal / zero */

loc_003E887D: ;
    _fa = (uint32_t)(MEM8(ecx + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003E888C; /* jne: not equal / not zero */

loc_003E8883: ;
    _fa = (uint32_t)(MEM8(ecx + 0x125)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x125), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8891; /* je: equal / zero */

loc_003E888C: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003E8893;

loc_003E8891: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E8893: ;
    edi = ZX16(MEM16(ecx + 0x78));
    edx = edi + edx * 8;
    edx = MEM32(edx * 4 + 0x54BE90);
    MEM32(ecx + 0x74) = edx;
    MEM16(eax + 0x84) = MEM16(eax + 0x84) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax + 0x84)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(eax + 0x82) = MEM16(eax + 0x82) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax + 0x82)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM16(eax + 0x68)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x68), 0 (16-bit) */
    POP32(esp, edi);
    MEM32(eax + 0x50) = esi;
    MEM16(eax + 0x44) = 0x4000;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003E88CC; /* je: equal / zero */

loc_003E88C6: ;
    MEM16(eax + 0x68) = 2;

loc_003E88CC: ;
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E88D3
 * Original: 0x003E88D3 - 0x003E897B (168 bytes, 46 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003605EE, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E88D3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E88D3: ;
    eax = MEM32(esp + 4);
    MEM16(eax + 0xE) = MEM16(eax + 0xE) & 0;
    _fa = (uint32_t)(MEM16(eax + 0xE)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(eax + 0x12) = MEM16(eax + 0x12) & 0;
    _fa = (uint32_t)(MEM16(eax + 0x12)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = 0x3E83A0;
    MEM16(eax + 0xC) = 0x4000;
    MEM16(eax + 0x10) = 0x4000;
    MEM32(eax + 0x48) = 0x3E8301;
    MEM32(eax + 0x4C) = esi;
    SET_LO16(edx, MEM16(ecx + 0x16C));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 1 (8-bit) */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_003E8917; /* je: equal / zero */

loc_003E890D: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(edx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003E8917; /* jne: not equal / not zero */

loc_003E8912: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003E8919;

loc_003E8917: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E8919: ;
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    MEM16(eax + 0x80) = LO16(edx);
    if (CMP_EQ(_fa, _fb)) goto loc_003E8939; /* je: equal / zero */

loc_003E8925: ;
    _fa = (uint32_t)(MEM8(ecx + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003E8934; /* jne: not equal / not zero */

loc_003E892B: ;
    _fa = (uint32_t)(MEM8(ecx + 0x125)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x125), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8939; /* je: equal / zero */

loc_003E8934: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003E893B;

loc_003E8939: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E893B: ;
    edi = ZX16(MEM16(ecx + 0x78));
    edx = edi + edx * 8;
    edx = MEM32(edx * 4 + 0x54BE90);
    MEM32(ecx + 0x74) = edx;
    MEM16(eax + 0x84) = MEM16(eax + 0x84) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax + 0x84)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(eax + 0x82) = MEM16(eax + 0x82) | 0xFFFF;
    _fa = (uint32_t)(MEM16(eax + 0x82)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    _fa = (uint32_t)(MEM16(eax + 0x68)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x68), 0 (16-bit) */
    POP32(esp, edi);
    MEM32(eax + 0x50) = esi;
    MEM16(eax + 0x44) = 0x4000;
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003E8974; /* je: equal / zero */

loc_003E896E: ;
    MEM16(eax + 0x68) = 1;

loc_003E8974: ;
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E897B
 * Original: 0x003E897B - 0x003E8A18 (157 bytes, 43 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00360696, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E897B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E897B: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM16(esi + 0xC) = MEM16(esi + 0xC) & 0;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esi + 0x24);
    MEM16(esi + 0xE) = 0x4000;
    MEM32(esi + 0x4C) = 0x3E83A7;
    SET_LO16(ecx, MEM16(eax + 0x16C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E89AB; /* je: equal / zero */

loc_003E89A1: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E89AB; /* je: equal / zero */

loc_003E89A6: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003E89AD;

loc_003E89AB: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E89AD: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    MEM16(esi + 0x80) = LO16(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_003E89CD; /* je: equal / zero */

loc_003E89B9: ;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003E89C8; /* jne: not equal / not zero */

loc_003E89BF: ;
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E89CD; /* je: equal / zero */

loc_003E89C8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003E89CF;

loc_003E89CD: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E89CF: ;
    edx = ZX16(MEM16(eax + 0x78));
    ecx = edx + ecx * 8;
    ecx = MEM32(ecx * 4 + 0x54BE90);
    MEM32(eax + 0x74) = ecx;
    SET_LO16(eax, MEM16(esi + 0x12));
    MEM16(esi + 0x84) = MEM16(esi + 0x84) | 0xFFFF;
    _fa = (uint32_t)(MEM16(esi + 0x84)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(esi + 0x82) = MEM16(esi + 0x82) | 0xFFFF;
    _fa = (uint32_t)(MEM16(esi + 0x82)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM16(esi + 0x44) = LO16(eax);
    PUSH32(esp, 0x003E89FEu); RECOMP_ABI_CALL(0x003E879Au, sub_003E879A); /* call 0x003E879A */

loc_003E89FE: ;
    eax = MEM32(esi + 0x4C);
    MEM16(esi + 0x68) = MEM16(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(esi + 0x50) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x48) = 0x3E8228;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E8A18
 * Original: 0x003E8A18 - 0x003E8AB5 (157 bytes, 43 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00360733, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8A18(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8A18: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    MEM16(esi + 0xE) = MEM16(esi + 0xE) & 0;
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esi + 0x24);
    MEM16(esi + 0xC) = 0x4000;
    MEM32(esi + 0x4C) = 0x3E83A0;
    SET_LO16(ecx, MEM16(eax + 0x16C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E8A48; /* je: equal / zero */

loc_003E8A3E: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003E8A48; /* jne: not equal / not zero */

loc_003E8A43: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003E8A4A;

loc_003E8A48: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E8A4A: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    MEM16(esi + 0x80) = LO16(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_003E8A6A; /* je: equal / zero */

loc_003E8A56: ;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003E8A65; /* jne: not equal / not zero */

loc_003E8A5C: ;
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8A6A; /* je: equal / zero */

loc_003E8A65: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003E8A6C;

loc_003E8A6A: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E8A6C: ;
    edx = ZX16(MEM16(eax + 0x78));
    ecx = edx + ecx * 8;
    ecx = MEM32(ecx * 4 + 0x54BE90);
    MEM32(eax + 0x74) = ecx;
    SET_LO16(eax, MEM16(esi + 0x10));
    MEM16(esi + 0x84) = MEM16(esi + 0x84) | 0xFFFF;
    _fa = (uint32_t)(MEM16(esi + 0x84)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(esi + 0x82) = MEM16(esi + 0x82) | 0xFFFF;
    _fa = (uint32_t)(MEM16(esi + 0x82)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM16(esi + 0x44) = LO16(eax);
    PUSH32(esp, 0x003E8A9Bu); RECOMP_ABI_CALL(0x003E879Au, sub_003E879A); /* call 0x003E879A */

loc_003E8A9B: ;
    eax = MEM32(esi + 0x4C);
    MEM16(esi + 0x68) = MEM16(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(esi + 0x50) = eax;
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x48) = 0x3E8228;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E8AB5
 * Original: 0x003E8AB5 - 0x003E8AE7 (50 bytes, 13 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003607D0, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8AB5(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8AB5: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO16(eax, MEM16(esi + 0xE));
    MEM16(esi + 0x10) = MEM16(esi + 0x10) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x10)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, esi);
    MEM16(esi + 0x12) = 0x4000;
    MEM16(esi + 0x44) = LO16(eax);
    PUSH32(esp, 0x003E8AD3u); RECOMP_ABI_CALL(0x003E879Au, sub_003E879A); /* call 0x003E879A */

loc_003E8AD3: ;
    MEM16(esi + 0x68) = MEM16(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x48) = 0x3E8228;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E8AE7
 * Original: 0x003E8AE7 - 0x003E8B19 (50 bytes, 13 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00360802, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8AE7(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8AE7: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    SET_LO16(eax, MEM16(esi + 0xC));
    MEM16(esi + 0x12) = MEM16(esi + 0x12) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, esi);
    MEM16(esi + 0x10) = 0x4000;
    MEM16(esi + 0x44) = LO16(eax);
    PUSH32(esp, 0x003E8B05u); RECOMP_ABI_CALL(0x003E879Au, sub_003E879A); /* call 0x003E879A */

loc_003E8B05: ;
    MEM16(esi + 0x68) = MEM16(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x48) = 0x3E8228;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E8B19
 * Original: 0x003E8B19 - 0x003E8C8E (373 bytes, 116 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00360834, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8B19(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8B19: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x18);
    ebx = MEM32(esi + 0x24);
    ecx = eax + -8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E8B38; /* jae: above or equal (unsigned >=) */

loc_003E8B2C: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003E8B70;

loc_003E8B38: ;
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    MEM32(esi + 0x18) = eax;
    eax = MEM32(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003E8B75; /* jne: not equal / not zero */

loc_003E8B53: ;
    ebx = MEM32(ebx + 0x130);
    ebx = ZX16(MEM16(ebx + 0x10));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */

loc_003E8B5F: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003E8B65; /* jge: greater or equal (signed >=) */

loc_003E8B61: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E8B7D; /* jge: greater or equal (signed >=) */

loc_003E8B65: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1112;

loc_003E8B6F: ;
    POP32(esp, edi);

loc_003E8B70: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_003E8B75: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x160) (32-bit) */
    goto loc_003E8B5F;

loc_003E8B7D: ;
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    edi = MEM32(esi + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_003E8C28; /* jne: not equal / not zero */

loc_003E8B8B: ;
    edi = MEM32(edi + 0x130);
    edi = ZX16(MEM16(edi + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */

loc_003E8B97: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003E8B65; /* jge: greater or equal (signed >=) */

loc_003E8B99: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E8B65; /* jl: less (signed <) */

loc_003E8B9D: ;
    MEM16(esi + 0x82) = LO16(ecx);
    MEM16(esi + 0x84) = LO16(eax);
    edi = esi + 0xC;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 4);
    ebx = MEM32(edx + 4);
    edx = MEM32(edx);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(edi + eax);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ebx + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(ebx + ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    edi = MEM32(edi);
    eax = MEM32(eax + edi);
    _fb = (uint32_t)(MEM32(edx + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edx + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E8BD5u); RECOMP_ABI_CALL(0x003E7E5Du, sub_003E7E5D); /* call 0x003E7E5D */

loc_003E8BD5: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E8BF2; /* je: equal / zero */

loc_003E8BDE: ;
    SET_LO16(ecx, MEM16(esi + 0xC));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0xE));
    MEM16(esi + 0xE) = LO16(ecx);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM16(esi + 0xC) = LO16(eax);

loc_003E8BF2: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E8BF8u); RECOMP_ABI_CALL(0x003E87CAu, sub_003E87CA); /* call 0x003E87CA */

loc_003E8BF8: ;
    eax = MEM32(esi + 0x24);
    MEM32(esi + 0x48) = 0x3E8228;
    MEM32(esi + 0x4C) = 0x3E8342;
    SET_LO16(ecx, MEM16(eax + 0x16C));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E8C46; /* je: equal / zero */

loc_003E8C14: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003E8C33; /* jne: not equal / not zero */

loc_003E8C19: ;
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), 0x4000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8C42; /* jne: not equal / not zero */

loc_003E8C21: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), 0 (16-bit) */
    goto loc_003E8C40;

loc_003E8C28: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x160) (32-bit) */
    goto loc_003E8B97;

loc_003E8C33: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), 0x4000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8C42; /* jne: not equal / not zero */

loc_003E8C3B: ;
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), 0 (16-bit) */

loc_003E8C40: ;
    if (CMP_EQ(_fa, _fb)) goto loc_003E8C46; /* je: equal / zero */

loc_003E8C42: ;
    ecx = ebx;
    goto loc_003E8C48;

loc_003E8C46: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E8C48: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    MEM16(esi + 0x80) = LO16(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_003E8C67; /* je: equal / zero */

loc_003E8C54: ;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003E8C63; /* jne: not equal / not zero */

loc_003E8C5A: ;
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8C67; /* je: equal / zero */

loc_003E8C63: ;
    ecx = ebx;
    goto loc_003E8C69;

loc_003E8C67: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E8C69: ;
    edx = ZX16(MEM16(eax + 0x78));
    ecx = edx + ecx * 8;
    ecx = MEM32(ecx * 4 + 0x54BE90);
    MEM32(eax + 0x74) = ecx;
    eax = MEM32(esi + 0x4C);
    MEM16(esi + 0x68) = MEM16(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(esi + 0x50) = eax;
    eax = MEM32(esp + 0x14);
    goto loc_003E8B6F;

}

/**
 * sub_003E8C8E
 * Original: 0x003E8C8E - 0x003E8E49 (443 bytes, 139 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003609A9, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8C8E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8C8E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = MEM32(esi + 0x18);
    ebx = MEM32(esi + 0x24);
    eax = ecx + -8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E8CAD; /* jae: above or equal (unsigned >=) */

loc_003E8CA1: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003E8CE5;

loc_003E8CAD: ;
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = ecx;
    eax = MEM32(ecx);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    MEM32(esi + 0x18) = ecx;
    ecx = MEM32(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_003E8CEA; /* jne: not equal / not zero */

loc_003E8CC8: ;
    ebx = MEM32(ebx + 0x130);
    ebx = ZX16(MEM16(ebx + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */

loc_003E8CD4: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003E8CDA; /* jge: greater or equal (signed >=) */

loc_003E8CD6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E8CF2; /* jge: greater or equal (signed >=) */

loc_003E8CDA: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1112;

loc_003E8CE4: ;
    POP32(esp, edi);

loc_003E8CE5: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_003E8CEA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebx + 0x160) (32-bit) */
    goto loc_003E8CD4;

loc_003E8CF2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 4) (32-bit) */
    edi = MEM32(esi + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_003E8DE2; /* jne: not equal / not zero */

loc_003E8CFE: ;
    edi = MEM32(edi + 0x130);
    edi = ZX16(MEM16(edi + 0x10));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */

loc_003E8D0A: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003E8CDA; /* jge: greater or equal (signed >=) */

loc_003E8D0C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E8CDA; /* jl: less (signed <) */

loc_003E8D10: ;
    MEM16(esi + 0x82) = LO16(eax);
    ebx = eax;
    MEM16(esi + 0x84) = LO16(ecx);
    eax = esi + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    eax = MEM32(eax + 4);
    edi = ecx;
    ecx = MEM32(edx + 4);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(eax + edi);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ecx + ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(edx);
    PUSH32(esp, eax);
    eax = MEM32(esi + 4);
    eax = MEM32(eax);
    eax = MEM32(edi + eax);
    _fb = (uint32_t)(MEM32(ecx + ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E8D4Fu); RECOMP_ABI_CALL(0x003E7E5Du, sub_003E7E5D); /* call 0x003E7E5D */

loc_003E8D4F: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx + 0xC);
    edx = esi + 0x14;
    PUSH32(esp, edx);
    edx = MEM32(eax + 0xC);
    edx = MEM32(edx + edi);
    _fb = (uint32_t)(MEM32(ecx + ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ecx + ebx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax + 8);
    eax = MEM32(esi + 8);
    eax = MEM32(eax + 8);
    ecx = MEM32(ecx + edi);
    _fb = (uint32_t)(MEM32(eax + ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003E8D7Bu); RECOMP_ABI_CALL(0x003E7E5Du, sub_003E7E5D); /* call 0x003E7E5D */

loc_003E8D7B: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), LO8(ebx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E8DAC; /* je: equal / zero */

loc_003E8D84: ;
    SET_LO16(ecx, MEM16(esi + 0xC));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0xE));
    MEM16(esi + 0xE) = LO16(ecx);
    SET_LO16(ecx, MEM16(esi + 0x14));
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM16(esi + 0xC) = LO16(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x16));
    MEM16(esi + 0x16) = LO16(ecx);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM16(esi + 0x14) = LO16(eax);

loc_003E8DAC: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E8DB2u); RECOMP_ABI_CALL(0x003E87CAu, sub_003E87CA); /* call 0x003E87CA */

loc_003E8DB2: ;
    eax = MEM32(esi + 0x24);
    MEM32(esi + 0x48) = 0x3E8228;
    MEM32(esi + 0x4C) = 0x3E8342;
    SET_LO16(ecx, MEM16(eax + 0x16C));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E8E00; /* je: equal / zero */

loc_003E8DCE: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003E8DED; /* jne: not equal / not zero */

loc_003E8DD3: ;
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), 0x4000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8DFC; /* jne: not equal / not zero */

loc_003E8DDB: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), 0 (16-bit) */
    goto loc_003E8DFA;

loc_003E8DE2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x160) (32-bit) */
    goto loc_003E8D0A;

loc_003E8DED: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), 0x4000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8DFC; /* jne: not equal / not zero */

loc_003E8DF5: ;
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), 0 (16-bit) */

loc_003E8DFA: ;
    if (CMP_EQ(_fa, _fb)) goto loc_003E8E00; /* je: equal / zero */

loc_003E8DFC: ;
    ecx = ebx;
    goto loc_003E8E02;

loc_003E8E00: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E8E02: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    MEM16(esi + 0x80) = LO16(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_003E8E21; /* je: equal / zero */

loc_003E8E0E: ;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003E8E1D; /* jne: not equal / not zero */

loc_003E8E14: ;
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8E21; /* je: equal / zero */

loc_003E8E1D: ;
    ecx = ebx;
    goto loc_003E8E23;

loc_003E8E21: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E8E23: ;
    edx = ZX16(MEM16(eax + 0x78));
    ecx = edx + ecx * 8;
    ecx = MEM32(ecx * 4 + 0x54BE90);
    MEM32(eax + 0x74) = ecx;
    MEM16(esi + 0x68) = MEM16(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x50) = 0x3E8371;
    goto loc_003E8CE4;

}

/**
 * sub_003E8E49
 * Original: 0x003E8E49 - 0x003E8F31 (232 bytes, 78 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00360B64, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8E49(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8E49: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = MEM32(esi + 0x18);
    ebx = MEM32(esi + 0x24);
    ecx = eax + -8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E8E68; /* jae: above or equal (unsigned >=) */

loc_003E8E5C: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003E8EA0;

loc_003E8E68: ;
    edx = MEM32(esi + 8);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    MEM32(esi + 0x18) = eax;
    eax = MEM32(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003E8EA5; /* jne: not equal / not zero */

loc_003E8E83: ;
    ebx = MEM32(ebx + 0x130);
    ebx = ZX16(MEM16(ebx + 0x10));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */

loc_003E8E8F: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003E8E95; /* jge: greater or equal (signed >=) */

loc_003E8E91: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E8EAD; /* jge: greater or equal (signed >=) */

loc_003E8E95: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1112;

loc_003E8E9F: ;
    POP32(esp, edi);

loc_003E8EA0: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_003E8EA5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x160) (32-bit) */
    goto loc_003E8E8F;

loc_003E8EAD: ;
    ebx = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    edi = MEM32(esi + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_003E8F29; /* jne: not equal / not zero */

loc_003E8EB7: ;
    edi = MEM32(edi + 0x130);
    edi = ZX16(MEM16(edi + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */

loc_003E8EC3: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003E8E95; /* jge: greater or equal (signed >=) */

loc_003E8EC5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E8E95; /* jl: less (signed <) */

loc_003E8EC9: ;
    edi = esi + 0x10;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 4);
    ebx = MEM32(edx + 4);
    edx = MEM32(edx);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(edi + eax);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ebx + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(ebx + ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    edi = MEM32(edi);
    eax = MEM32(eax + edi);
    _fb = (uint32_t)(MEM32(edx + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edx + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003E8EF3u); RECOMP_ABI_CALL(0x003E7E5Du, sub_003E7E5D); /* call 0x003E7E5D */

loc_003E8EF3: ;
    _fa = (uint32_t)(MEM8(esp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x18), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E8F0E; /* je: equal / zero */

loc_003E8EFA: ;
    SET_LO16(ecx, MEM16(esi + 0x10));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x12));
    MEM16(esi + 0x12) = LO16(ecx);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM16(esi + 0x10) = LO16(eax);

loc_003E8F0E: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003E8F14u); RECOMP_ABI_CALL(0x003E87CAu, sub_003E87CA); /* call 0x003E87CA */

loc_003E8F14: ;
    MEM16(esi + 0x68) = MEM16(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x48) = 0x3E8228;
    goto loc_003E8E9F;

loc_003E8F29: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x160) (32-bit) */
    goto loc_003E8EC3;

}

/**
 * sub_003E8F31
 * Original: 0x003E8F31 - 0x003E900F (222 bytes, 66 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00360C4C, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E8F31(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E8F31: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x24);
    ecx = eax + -8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E8F52; /* jae: above or equal (unsigned >=) */

loc_003E8F43: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003E900B;

loc_003E8F52: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    SET_LO16(ecx, MEM16(eax));
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 0xE) = LO16(ecx);
    MEM32(esi + 0x18) = eax;
    SET_LO16(eax, MEM16(eax));
    MEM16(esi + 0x84) = MEM16(esi + 0x84) | 0xFFFF;
    _fa = (uint32_t)(MEM16(esi + 0x84)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    MEM16(esi + 0x82) = MEM16(esi + 0x82) | 0xFFFF;
    _fa = (uint32_t)(MEM16(esi + 0x82)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    PUSH32(esp, esi);
    MEM16(esi + 0xC) = LO16(eax);
    PUSH32(esp, 0x003E8F82u); RECOMP_ABI_CALL(0x003E87CAu, sub_003E87CA); /* call 0x003E87CA */

loc_003E8F82: ;
    eax = MEM32(esi + 0x24);
    MEM32(esi + 0x48) = 0x3E8228;
    MEM32(esi + 0x4C) = 0x3E8342;
    SET_LO16(ecx, MEM16(eax + 0x16C));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E8FC7; /* je: equal / zero */

loc_003E8FA1: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003E8FB4; /* jne: not equal / not zero */

loc_003E8FA6: ;
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), 0x4000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8FC2; /* jne: not equal / not zero */

loc_003E8FAE: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), LO16(edx) (16-bit) */
    goto loc_003E8FC0;

loc_003E8FB4: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), 0x4000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E8FC2; /* jne: not equal / not zero */

loc_003E8FBC: ;
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), LO16(edx) (16-bit) */

loc_003E8FC0: ;
    if (CMP_EQ(_fa, _fb)) goto loc_003E8FC7; /* je: equal / zero */

loc_003E8FC2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003E8FC9;

loc_003E8FC7: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E8FC9: ;
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), LO16(edx) (16-bit) */
    MEM16(esi + 0x80) = LO16(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_003E8FE8; /* je: equal / zero */

loc_003E8FD5: ;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003E8FE3; /* jne: not equal / not zero */

loc_003E8FDB: ;
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(LO8(edx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), LO8(edx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E8FE8; /* je: equal / zero */

loc_003E8FE3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003E8FEA;

loc_003E8FE8: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E8FEA: ;
    PUSH32(esp, edi);
    edi = ZX16(MEM16(eax + 0x78));
    ecx = edi + ecx * 8;
    ecx = MEM32(ecx * 4 + 0x54BE90);
    MEM32(eax + 0x74) = ecx;
    eax = MEM32(esi + 0x4C);
    MEM32(esi + 0x50) = eax;
    eax = MEM32(esp + 0x10);
    MEM16(esi + 0x68) = LO16(edx);
    POP32(esp, edi);

loc_003E900B: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E900F
 * Original: 0x003E900F - 0x003E9061 (82 bytes, 25 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00360D2A, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E900F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E900F: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x24);
    edx = eax + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E902D; /* jae: above or equal (unsigned >=) */

loc_003E9021: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003E905D;

loc_003E902D: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    SET_LO16(ecx, MEM16(eax));
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(esi + 0x12) = LO16(ecx);
    MEM32(esi + 0x18) = eax;
    SET_LO16(eax, MEM16(eax));
    PUSH32(esp, esi);
    MEM16(esi + 0x10) = LO16(eax);
    PUSH32(esp, 0x003E904Du); RECOMP_ABI_CALL(0x003E87CAu, sub_003E87CA); /* call 0x003E87CA */

loc_003E904D: ;
    MEM16(esi + 0x68) = MEM16(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 0xC);
    MEM32(esi + 0x48) = 0x3E8228;

loc_003E905D: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E9061
 * Original: 0x003E9061 - 0x003E90A2 (65 bytes, 20 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00360D7C, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9061(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9061: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx + 0x15C) (32-bit) */
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_003E9084; /* jbe: below or equal (unsigned <=) */

loc_003E9078: ;
    MEM32(eax + 0x6C) = 0x1111;
    eax = MEM32(eax + 0x70);
    goto loc_003E909F;

loc_003E9084: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xC);
    MEM32(ecx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 4;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0xE);
    ecx = MEM32(eax + 0x18);
    MEM32(ecx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 4;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 8);

loc_003E909F: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E90A2
 * Original: 0x003E90A2 - 0x003E90E3 (65 bytes, 20 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00360DBD, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E90A2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E90A2: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + 8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx + 0x15C) (32-bit) */
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_003E90C5; /* jbe: below or equal (unsigned <=) */

loc_003E90B9: ;
    MEM32(eax + 0x6C) = 0x1111;
    eax = MEM32(eax + 0x70);
    goto loc_003E90E0;

loc_003E90C5: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x10);
    MEM32(ecx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 4;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x12);
    ecx = MEM32(eax + 0x18);
    MEM32(ecx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 4;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 8);

loc_003E90E0: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E90E3
 * Original: 0x003E90E3 - 0x003E9106 (35 bytes, 8 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00360DFE, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E90E3(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E90E3: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0xC);
    MEM16(eax + 0x68) = MEM16(eax + 0x68) & 0;
    _fa = (uint32_t)(MEM16(eax + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM32(eax + 0x10) = ecx;
    MEM16(eax + 0x44) = 0x4000;
    MEM32(eax + 0x48) = 0x3E8228;
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E9106
 * Original: 0x003E9106 - 0x003E945D (855 bytes, 299 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00360E21, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003E9106(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9106: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x18);
    ecx = MEM32(ebx + 0x24);
    edx = eax + -20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(ebx);
    if (CMP_AE(_fa, _fb)) goto loc_003E912C; /* jae: above or equal (unsigned >=) */

loc_003E9120: ;
    eax = MEM32(ebx + 0x70);
    MEM32(ebx + 0x6C) = 0x1110;
    goto loc_003E915C;

loc_003E912C: ;
    ecx = MEM32(ebx + 0x24);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x20), edi (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003E9162; /* jne: not equal / not zero */

loc_003E913F: ;
    ecx = MEM32(ecx + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */

loc_003E914B: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003E9151; /* jge: greater or equal (signed >=) */

loc_003E914D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E916A; /* jge: greater or equal (signed >=) */

loc_003E9151: ;
    eax = MEM32(ebx + 0x70);
    MEM32(ebx + 0x6C) = 0x1112;

loc_003E915B: ;
    POP32(esp, esi);

loc_003E915C: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_003E9162: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x160) (32-bit) */
    goto loc_003E914B;

loc_003E916A: ;
    _fa = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x20), edi (32-bit) */
    ecx = MEM32(ebx + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_003E91D8; /* jne: not equal / not zero */

loc_003E9172: ;
    ecx = MEM32(ecx + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */

loc_003E917E: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003E9151; /* jge: greater or equal (signed >=) */

loc_003E9180: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E9151; /* jl: less (signed <) */

loc_003E9184: ;
    ecx = MEM32(edi);
    esi = MEM32(ecx + esi * 4);
    MEM32(ebp + -24) = esi;
    esi = MEM32(ecx + edx * 4);
    ecx = MEM32(edi + 4);
    edi = MEM32(eax);
    edi = MEM32(ecx + edi * 4);
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(ebp + -24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -28) = edi;
    edi = MEM32(ecx + edx * 4);
    ecx = MEM32(eax);
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(ebp + -28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -36) = ecx;
    ecx = MEM32(ebx + 4);
    MEM32(ebp + -32) = edx;
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x20), ecx (32-bit) */
    ecx = MEM32(ebx + 0x24);
    MEM32(ebp + -16) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_003E91E0; /* jne: not equal / not zero */

loc_003E91C1: ;
    ecx = MEM32(ecx + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E9151; /* jge: greater or equal (signed >=) */

loc_003E91CF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E91F7; /* jge: greater or equal (signed >=) */

loc_003E91D3: ;
    goto loc_003E9151;

loc_003E91D8: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0x160) (32-bit) */
    goto loc_003E917E;

loc_003E91E0: ;
    edx = MEM32(ebp + -16);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x160) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E9151; /* jge: greater or equal (signed >=) */

loc_003E91EF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E9151; /* jl: less (signed <) */

loc_003E91F7: ;
    ecx = MEM32(ebx + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E92B0; /* jne: not equal / not zero */

loc_003E9203: ;
    ecx = MEM32(ebx + 0x24);
    ecx = MEM32(ecx + 0x130);
    edx = ZX16(MEM16(ecx + 0x10));
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */

loc_003E9214: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003E9151; /* jge: greater or equal (signed >=) */

loc_003E921A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E9151; /* jl: less (signed <) */

loc_003E9222: ;
    edx = MEM32(ebx + 4);
    edx = MEM32(edx);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -20) = ecx;
    ecx = MEM32(edx + ecx);
    edx = MEM32(ebp + -16);
    MEM32(ebp + -8) = ecx;
    ecx = MEM32(ebx + 4);
    ecx = MEM32(ecx);
    ecx = MEM32(ecx + edx * 4);
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + -20);
    MEM32(ebp + 8) = ecx;
    ecx = MEM32(ebx + 4);
    ecx = MEM32(ecx + 4);
    edx = MEM32(ecx + edx);
    MEM32(ebp + -12) = edx;
    edx = MEM32(ebp + -16);
    ecx = MEM32(ecx + edx * 4);
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ebp + -4) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_003E9268; /* jge: greater or equal (signed >=) */

loc_003E9266: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003E9268: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    ecx = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_003E9270; /* jge: greater or equal (signed >=) */

loc_003E926E: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003E9270: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003E927F; /* jle: less or equal (signed <=) */

loc_003E9274: ;
    ecx = MEM32(ebp + -16);
    MEM32(ebp + -32) = ecx;
    ecx = MEM32(eax);
    MEM32(ebp + -36) = ecx;

loc_003E927F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax);
    MEM32(ebp + -20) = ecx;
    ecx = MEM32(ebx + 8);
    _fa = (uint32_t)(MEM32(ebx + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x20), ecx (32-bit) */
    ecx = MEM32(ebx + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_003E92C0; /* jne: not equal / not zero */

loc_003E9292: ;
    ecx = MEM32(ecx + 0x130);
    edx = ZX16(MEM16(ecx + 0x10));
    ecx = MEM32(ebp + -20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E9151; /* jge: greater or equal (signed >=) */

loc_003E92A7: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E92D9; /* jge: greater or equal (signed >=) */

loc_003E92AB: ;
    goto loc_003E9151;

loc_003E92B0: ;
    ecx = MEM32(eax);
    edx = MEM32(ebx + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x160) (32-bit) */
    goto loc_003E9214;

loc_003E92C0: ;
    edx = MEM32(ebp + -20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x160) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E9151; /* jge: greater or equal (signed >=) */

loc_003E92CF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E9151; /* jl: less (signed <) */

loc_003E92D7: ;
    ecx = edx;

loc_003E92D9: ;
    edx = MEM32(ebx + 8);
    MEM32(ebx + 0x18) = eax;
    eax = MEM32(ebx + 0x20);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E930C; /* je: equal / zero */

loc_003E92E6: ;
    eax = MEM32(ebx + 0x24);
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E930C; /* jne: not equal / not zero */

loc_003E92F2: ;
    _fa = (uint32_t)(MEM8(eax + 0x16C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E930C; /* je: equal / zero */

loc_003E92FB: ;
    PUSH32(esp, MEM32(ebp + -32));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -36));
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E9309u); RECOMP_ABI_CALL(0x003E7726u, sub_003E7726); /* call 0x003E7726 */

loc_003E9309: ;
    ecx = MEM32(ebp + -20);

loc_003E930C: ;
    eax = MEM32(ebx + 8);
    eax = MEM32(eax + 0x24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | 3;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = MEM32(ebx + 8);
    edx = MEM32(ebx);
    ebx = MEM32(ebx + 4);
    MEM32(ebp + -32) = edx;
    MEM32(ebp + -36) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_003E9353; /* jne: not equal / not zero */

loc_003E9329: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E933E; /* jne: not equal / not zero */

loc_003E932E: ;
    eax = ecx;
    ecx = MEM32(ebp + -8);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + edx) = ecx;
    ecx = MEM32(ebp + -28);
    goto loc_003E936A;

loc_003E933E: ;
    ecx = MEM32(ebp + -4);
    ebx = MEM32(ebp + -12);
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + -28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ebp + -16) = eax;
    goto loc_003E93F1;

loc_003E9353: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9387; /* jne: not equal / not zero */

loc_003E9357: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9372; /* jne: not equal / not zero */

loc_003E935C: ;
    eax = ecx;
    ecx = MEM32(ebp + -24);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + edx) = ecx;
    ecx = MEM32(ebp + -12);

loc_003E936A: ;
    MEM32(eax + ebx) = ecx;
    goto loc_003E9455;

loc_003E9372: ;
    eax = MEM32(ebp + 8);
    ebx = MEM32(ebp + -8);
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + -24);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ebp + -16) = ecx;
    ecx = MEM32(ebp + -4);
    goto loc_003E93F4;

loc_003E9387: ;
    ecx = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_003E938D; /* jge: greater or equal (signed >=) */

loc_003E938B: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003E938D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = edi;
    if (CMP_GE(_fas, _fbs)) goto loc_003E9395; /* jge: greater or equal (signed >=) */

loc_003E9393: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003E9395: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E93C1; /* jl: less (signed <) */

loc_003E9399: ;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E93A7u); RECOMP_ABI_CALL(0x003E4DBAu, sub_003E4DBA); /* call 0x003E4DBA */

loc_003E93A7: ;
    ebx = MEM32(ebp + -12);
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + -28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 8));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E93B9u); RECOMP_ABI_CALL(0x003E4DBAu, sub_003E4DBA); /* call 0x003E4DBA */

loc_003E93B9: ;
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -16) = eax;
    goto loc_003E93EB;

loc_003E93C1: ;
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E93CFu); RECOMP_ABI_CALL(0x003E4DBAu, sub_003E4DBA); /* call 0x003E4DBA */

loc_003E93CF: ;
    ebx = eax;
    eax = MEM32(ebp + -24);
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -4));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + eax;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E93E3u); RECOMP_ABI_CALL(0x003E4DBAu, sub_003E4DBA); /* call 0x003E4DBA */

loc_003E93E3: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -16) = ecx;

loc_003E93EB: ;
    ecx = MEM32(ebp + -4);
    edx = MEM32(ebp + -32);

loc_003E93F1: ;
    eax = MEM32(ebp + 8);

loc_003E93F4: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E942A; /* je: equal / zero */

loc_003E93FA: ;
    PUSH32(esp, MEM32(ebp + -16));
    esi = MEM32(ebp + -20);
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E940Au); RECOMP_ABI_CALL(0x003E4DBAu, sub_003E4DBA); /* call 0x003E4DBA */

loc_003E940A: ;
    PUSH32(esp, MEM32(ebp + -16));
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + -32);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -4));
    MEM32(esi + ecx) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E941Fu); RECOMP_ABI_CALL(0x003E4DBAu, sub_003E4DBA); /* call 0x003E4DBA */

loc_003E941F: ;
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ebp + -36);
    MEM32(esi + ecx) = eax;
    goto loc_003E9455;

loc_003E942A: ;
    ebx = MEM32(ebp + -20);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(ebp + -12);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + MEM32(ebp + -24);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebp + -36);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + MEM32(ebp + -28);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((1) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ebx + edx) = esi;
    MEM32(ebx + eax) = edi;

loc_003E9455: ;
    eax = MEM32(ebp + 0xC);
    goto loc_003E915B;

}

/**
 * sub_003E945D
 * Original: 0x003E945D - 0x003E948E (49 bytes, 17 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00361178, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E945D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E945D: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003E947C; /* jae: above or equal (unsigned >=) */

loc_003E9470: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003E948B;

loc_003E947C: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    eax = MEM32(eax);
    MEM32(edx + 0x70) = eax;
    eax = MEM32(esp + 8);

loc_003E948B: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E948E
 * Original: 0x003E948E - 0x003E94BF (49 bytes, 17 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003611A9, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E948E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E948E: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003E94AD; /* jae: above or equal (unsigned >=) */

loc_003E94A1: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003E94BC;

loc_003E94AD: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    eax = MEM32(eax);
    MEM32(edx + 0x5C) = eax;
    eax = MEM32(esp + 8);

loc_003E94BC: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E94BF
 * Original: 0x003E94BF - 0x003E94F5 (54 bytes, 18 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003611DA, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E94BF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E94BF: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003E94DE; /* jae: above or equal (unsigned >=) */

loc_003E94D2: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_003E94F2;

loc_003E94DE: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ecx);
    MEM32(edx + 0x60) = ecx;
    MEM16(eax + 0x68) = MEM16(eax + 0x68) & 0;
    _fa = (uint32_t)(MEM16(eax + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 8);

loc_003E94F2: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E94F5
 * Original: 0x003E94F5 - 0x003E9543 (78 bytes, 24 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00361210, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E94F5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E94F5: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    MEM16(eax + 0x68) = MEM16(eax + 0x68) & 0;
    _fa = (uint32_t)(MEM16(eax + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x24);
    edx = ecx + -4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E9518; /* jae: above or equal (unsigned >=) */

loc_003E950C: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_003E953F;

loc_003E9518: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ecx);
    eax = SX16(LO16(ecx));
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esi + 0x100;
    PUSH32(esp, eax);
    MEM16(esi + 0x8E) = LO16(ecx);
    { uint32_t _icall_target = MEM32(esi + 0xAC); PUSH32(esp, 0x003E9538u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E9532u); } /* indirect call */
    }

loc_003E9538: ;
    MEM32(esi + 0x64) = eax;
    eax = MEM32(esp + 0xC);

loc_003E953F: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E9543
 * Original: 0x003E9543 - 0x003E9574 (49 bytes, 17 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036125E, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9543(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9543: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003E9562; /* jae: above or equal (unsigned >=) */

loc_003E9556: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_003E9571;

loc_003E9562: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ecx);
    MEM32(eax + 0x2C) = ecx;
    eax = MEM32(esp + 8);

loc_003E9571: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E9574
 * Original: 0x003E9574 - 0x003E95A5 (49 bytes, 17 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036128F, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9574(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9574: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003E9593; /* jae: above or equal (unsigned >=) */

loc_003E9587: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_003E95A2;

loc_003E9593: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ecx);
    MEM32(eax + 0x30) = ecx;
    eax = MEM32(esp + 8);

loc_003E95A2: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E95A5
 * Original: 0x003E95A5 - 0x003E95D6 (49 bytes, 17 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003612C0, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E95A5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E95A5: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003E95C4; /* jae: above or equal (unsigned >=) */

loc_003E95B8: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_003E95D3;

loc_003E95C4: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ecx);
    MEM32(eax + 0x34) = ecx;
    eax = MEM32(esp + 8);

loc_003E95D3: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E95D6
 * Original: 0x003E95D6 - 0x003E9608 (50 bytes, 18 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003612F1, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E95D6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E95D6: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003E95F5; /* jae: above or equal (unsigned >=) */

loc_003E95E9: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_003E9605;

loc_003E95F5: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ecx);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(eax + 0x3C) = ecx;
    eax = MEM32(esp + 8);

loc_003E9605: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E9608
 * Original: 0x003E9608 - 0x003E9677 (111 bytes, 41 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00361323, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9608(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9608: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003E9624; /* jae: above or equal (unsigned >=) */

loc_003E961B: ;
    MEM32(eax + 0x6C) = 0x1110;
    goto loc_003E9671;

loc_003E9624: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E966A; /* jge: greater or equal (signed >=) */

loc_003E9631: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E966A; /* jl: less (signed <) */

loc_003E9635: ;
    edx = MEM32(esp + 0xC);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x38);
    _fb = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x13) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 0x13;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003E9653; /* je: equal / zero */

loc_003E9644: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003E9665; /* je: equal / zero */

loc_003E9647: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003E9660; /* je: equal / zero */

loc_003E964A: ;
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003E9655; /* jne: not equal / not zero */

loc_003E964D: ;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 4) = ecx;

loc_003E9653: ;
    MEM32(eax) = ecx;

loc_003E9655: ;
    MEM16(eax + 0x68) = MEM16(eax + 0x68) & 0;
    _fa = (uint32_t)(MEM16(eax + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 8);
    goto loc_003E9674;

loc_003E9660: ;
    MEM32(eax + 8) = ecx;
    goto loc_003E9655;

loc_003E9665: ;
    MEM32(eax + 4) = ecx;
    goto loc_003E9655;

loc_003E966A: ;
    MEM32(eax + 0x6C) = 0x1116;

loc_003E9671: ;
    eax = MEM32(eax + 0x70);

loc_003E9674: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E9677
 * Original: 0x003E9677 - 0x003E96A1 (42 bytes, 10 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00361392, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9677(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9677: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x1C) = 3;
    ecx = ZX16(MEM16(ecx + 0x80));
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ecx + 0x54BE9C);
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E96A1
 * Original: 0x003E96A1 - 0x003E96D0 (47 bytes, 11 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003613BC, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E96A1(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E96A1: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x1C) = 4;
    edx = ZX16(MEM16(ecx + 0x80));
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(edx + 0x54BEA0);
    MEM32(eax + 0x18) = edx;
    MEM16(ecx + 0x68) = MEM16(ecx + 0x68) & 0;
    _fa = (uint32_t)(MEM16(ecx + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E96D0
 * Original: 0x003E96D0 - 0x003E96FE (46 bytes, 11 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003613EB, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E96D0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E96D0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x24);
    MEM16(eax + 0x78) = MEM16(eax + 0x78) & 0;
    _fa = (uint32_t)(MEM16(eax + 0x78)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    edx = ZX16(MEM16(ecx + 0x80));
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(edx + 0x54BE90);
    MEM32(eax + 0x18) = edx;
    MEM16(ecx + 0x68) = MEM16(ecx + 0x68) & 0;
    _fa = (uint32_t)(MEM16(ecx + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E96FE
 * Original: 0x003E96FE - 0x003E972D (47 bytes, 11 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00361419, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E96FE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E96FE: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x1C) = 5;
    edx = ZX16(MEM16(ecx + 0x80));
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(edx + 0x54BEA4);
    MEM32(eax + 0x18) = edx;
    MEM16(ecx + 0x68) = MEM16(ecx + 0x68) & 0;
    _fa = (uint32_t)(MEM16(ecx + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E972D
 * Original: 0x003E972D - 0x003E975C (47 bytes, 11 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00361448, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E972D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E972D: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x1C) = 1;
    edx = ZX16(MEM16(ecx + 0x80));
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(edx + 0x54BE94);
    MEM32(eax + 0x18) = edx;
    MEM16(ecx + 0x68) = MEM16(ecx + 0x68) & 0;
    _fa = (uint32_t)(MEM16(ecx + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E975C
 * Original: 0x003E975C - 0x003E978B (47 bytes, 11 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00361477, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E975C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E975C: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x1C) = 2;
    edx = ZX16(MEM16(ecx + 0x80));
    edx = edx << 5;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(edx + 0x54BE98);
    MEM32(eax + 0x18) = edx;
    MEM16(ecx + 0x68) = MEM16(ecx + 0x68) & 0;
    _fa = (uint32_t)(MEM16(ecx + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E978B
 * Original: 0x003E978B - 0x003E9880 (245 bytes, 81 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003614A6, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E978B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E978B: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ecx = esi;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xC0;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E97E2; /* je: equal / zero */

loc_003E97AA: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003E97D0; /* je: equal / zero */

loc_003E97AE: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003E97C8; /* je: equal / zero */

loc_003E97B3: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003E97C0; /* je: equal / zero */

loc_003E97B8: ;
    MEM16(eax + 0x26) = 0x3E7;
    goto loc_003E97D6;

loc_003E97C0: ;
    MEM16(eax + 0x26) = 0x80;
    goto loc_003E97D6;

loc_003E97C8: ;
    MEM16(eax + 0x26) = 0x40;
    goto loc_003E97D6;

loc_003E97D0: ;
    MEM16(eax + 0x26) = 0x20;

loc_003E97D6: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x26);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ~ecx;
    MEM32(eax + 0x20) = ecx;
    goto loc_003E981D;

loc_003E97E2: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM16(eax + 0x24) = 0x2D47;
    if ((_fa == 0)) goto loc_003E9806; /* je: equal / zero */

loc_003E97EC: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003E980C; /* je: equal / zero */

loc_003E97F1: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - 0x40;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003E97FE; /* je: equal / zero */

loc_003E97F6: ;
    MEM16(eax + 0x24) = 0x3E7;
    goto loc_003E980C;

loc_003E97FE: ;
    MEM16(eax + 0x24) = 0x5A8E;
    goto loc_003E980C;

loc_003E9806: ;
    MEM16(eax + 0x24) = 0x16A3;

loc_003E980C: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x24);
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x80;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((8) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(eax + 0x26) = LO16(ecx);

loc_003E981D: ;
    ecx = esi;
    ecx = ecx & 0x30;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if ((_fa == 0)) goto loc_003E9855; /* je: equal / zero */

loc_003E9824: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E984D; /* je: equal / zero */

loc_003E9829: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9844; /* je: equal / zero */

loc_003E982E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x30) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x30 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9859; /* jne: not equal / not zero */

loc_003E9833: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x26);
    ecx = ecx + ecx * 2 + 2;

loc_003E983B: ;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_003E983E: ;
    MEM16(eax + 0x28) = LO16(ecx);
    goto loc_003E9859;

loc_003E9844: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x26);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    goto loc_003E983E;

loc_003E984D: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x26);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003E983B;

loc_003E9855: ;
    MEM16(eax + 0x28) = LO16(edx);

loc_003E9859: ;
    esi = esi & 0xF;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = esi;
    POP32(esp, esi);
    if ((_fa != 0)) goto loc_003E9869; /* jne: not equal / not zero */

loc_003E9861: ;
    SET_LO16(ecx, MEM16(eax + 0x26));
    SET_LO16(ecx, LO16(ecx) - 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x7FFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_003E9879;

loc_003E9869: ;
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x26);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((3) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_003E9879: ;
    MEM16(eax + 0x2A) = LO16(ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E9880
 * Original: 0x003E9880 - 0x003E98E4 (100 bytes, 33 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036159B, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9880(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9880: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x24);
    _fa = (uint32_t)(MEM8(edi + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x125), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E989D; /* je: equal / zero */

loc_003E9891: ;
    MEM32(eax + 0x6C) = 0x110D;
    eax = MEM32(eax + 0x70);
    goto loc_003E98E0;

loc_003E989D: ;
    ecx = MEM32(eax + 0x20);
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x60);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x40);
    ecx = MEM32(ecx + 0x58);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + edx * 2 + -2);
    edx = MEM32(eax + 0x18);
    ebx = edx + 4;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x15C) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E98CC; /* jbe: below or equal (unsigned <=) */

loc_003E98C0: ;
    MEM32(eax + 0x6C) = 0x1111;
    eax = MEM32(eax + 0x70);
    goto loc_003E98DE;

loc_003E98CC: ;
    ecx = esi + ecx * 4;
    esi = MEM32(ecx + 4);
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 4;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x14);

loc_003E98DE: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003E98E0: ;
    POP32(esp, edi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E98E4
 * Original: 0x003E98E4 - 0x003E9929 (69 bytes, 23 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003615FF, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E98E4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E98E4: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E98FF; /* jae: above or equal (unsigned >=) */

loc_003E98F6: ;
    MEM32(eax + 0x6C) = 0x1110;
    goto loc_003E9916;

loc_003E98FF: ;
    esi = MEM32(ecx + -4);
    PUSH32(esp, edi);
    edi = ecx + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx + 0x15C) (32-bit) */
    POP32(esp, edi);
    if (CMP_BE(_fa, _fb)) goto loc_003E991B; /* jbe: below or equal (unsigned <=) */

loc_003E990F: ;
    MEM32(eax + 0x6C) = 0x1111;

loc_003E9916: ;
    eax = MEM32(eax + 0x70);
    goto loc_003E9925;

loc_003E991B: ;
    MEM32(ecx) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 4;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0xC);

loc_003E9925: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E9929
 * Original: 0x003E9929 - 0x003E993C (19 bytes, 6 insns)
 * Folder: xdk/libc (between: 0x003E98E4 and 0x003E993C)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9929(void)
{

loc_003E9929: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x24);
    ecx = MEM32(ecx);
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E993C
 * Original: 0x003E993C - 0x003E996E (50 bytes, 17 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00361657, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E993C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E993C: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003E995B; /* jae: above or equal (unsigned >=) */

loc_003E994F: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003E996B;

loc_003E995B: ;
    ecx = MEM32(eax + -4);
    edx = MEM32(eax + -8);
    MEM32(eax + -4) = edx;
    MEM32(eax + -8) = ecx;
    eax = MEM32(esp + 8);

loc_003E996B: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E996E
 * Original: 0x003E996E - 0x003E99A7 (57 bytes, 20 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00361689, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E996E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E996E: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x24);
    eax = edx;
    _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = edx + 4;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x15C) (32-bit) */
    POP32(esp, edi);
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_003E999A; /* jbe: below or equal (unsigned <=) */

loc_003E998E: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1111;
    goto loc_003E99A4;

loc_003E999A: ;
    MEM32(edx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) + 4;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 8);

loc_003E99A4: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E99A7
 * Original: 0x003E99A7 - 0x003E99FA (83 bytes, 32 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003616C2, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E99A7(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E99A7: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x24);
    PUSH32(esp, edi);
    edi = MEM32(esi);
    edx = eax + -4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003E99D0; /* jb: below (unsigned <) */

loc_003E99BC: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    ebx = edx;
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = eax;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    POP32(esp, ebx);
    if (CMP_AE(_fa, _fb)) goto loc_003E99D9; /* jae: above or equal (unsigned >=) */

loc_003E99D0: ;
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003E99F2;

loc_003E99D9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x15C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E99EB; /* jae: above or equal (unsigned >=) */

loc_003E99E1: ;
    ecx = MEM32(edx);
    MEM32(eax) = ecx;
    eax = MEM32(esp + 0x10);
    goto loc_003E99F5;

loc_003E99EB: ;
    MEM32(ecx + 0x6C) = 0x1113;

loc_003E99F2: ;
    eax = MEM32(ecx + 0x70);

loc_003E99F5: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E99FA
 * Original: 0x003E99FA - 0x003E9A7A (128 bytes, 51 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00361715, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003E99FA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E99FA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x24);
    ecx = MEM32(edi);
    esi = eax + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E9A1D; /* jae: above or equal (unsigned >=) */

loc_003E9A11: ;
    eax = MEM32(edx + 0x70);
    MEM32(edx + 0x6C) = 0x1110;
    goto loc_003E9A74;

loc_003E9A1D: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax);
    PUSH32(esp, ebx);
    ebx = esi;
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E9A39; /* jae: above or equal (unsigned >=) */

loc_003E9A30: ;
    MEM32(edx + 0x6C) = 0x1110;
    goto loc_003E9A70;

loc_003E9A39: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x15C) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003E9A69; /* jae: above or equal (unsigned >=) */

loc_003E9A41: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    edi = MEM32(ecx);
    MEM32(ebp + 8) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_003E9A59; /* jle: less or equal (signed <=) */

loc_003E9A4A: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edi = ecx + 4;
    ebx = MEM32(edi);
    MEM32(ecx) = ebx;
    ecx = edi;
    if ((_fa != 0)) goto loc_003E9A4A; /* jne: not equal / not zero */

loc_003E9A56: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003E9A59: ;
    ecx = MEM32(ebp + 8);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x18) = eax;
    eax = MEM32(ebp + 0xC);
    goto loc_003E9A73;

loc_003E9A69: ;
    MEM32(edx + 0x6C) = 0x1113;

loc_003E9A70: ;
    eax = MEM32(edx + 0x70);

loc_003E9A73: ;
    POP32(esp, ebx);

loc_003E9A74: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E9A7A
 * Original: 0x003E9A7A - 0x003E9AB6 (60 bytes, 22 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00361795, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003E9A7A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9A7A: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -12;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003E9A99; /* jae: above or equal (unsigned >=) */

loc_003E9A8D: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003E9AB3;

loc_003E9A99: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(eax);
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(eax);
    MEM32(eax) = edx;
    MEM32(eax + 8) = ecx;
    eax = MEM32(esp + 8);

loc_003E9AB3: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E9AB6
 * Original: 0x003E9AB6 - 0x003E9B54 (158 bytes, 63 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003617D1, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003E9AB6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9AB6: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x24);
    ebx = MEM32(esi);
    edx = eax + -4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    MEM32(ebp + 8) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_003E9ADC; /* jae: above or equal (unsigned >=) */

loc_003E9AD0: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003E9B07;

loc_003E9ADC: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), ebx (32-bit) */
    PUSH32(esp, edi);
    MEM32(esi + 0x18) = eax;
    edi = MEM32(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003E9B0D; /* jne: not equal / not zero */

loc_003E9AEA: ;
    eax = MEM32(ecx + 0x130);
    eax = ZX16(MEM16(eax + 0x10));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */

loc_003E9AF6: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003E9AFC; /* jge: greater or equal (signed >=) */

loc_003E9AF8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E9B15; /* jge: greater or equal (signed >=) */

loc_003E9AFC: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1112;

loc_003E9B06: ;
    POP32(esp, edi);

loc_003E9B07: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_003E9B0D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0x160) (32-bit) */
    goto loc_003E9AF6;

loc_003E9B15: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    MEM32(esi + 0x2C) = edi;
    MEM32(esi + 0x30) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_003E9B46; /* je: equal / zero */

loc_003E9B21: ;
    eax = MEM32(ebx + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + edi * 4));
    eax = MEM32(ebx);
    PUSH32(esp, MEM32(eax + edi * 4));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x4C); PUSH32(esp, 0x003E9B30u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E9B2Du); } /* indirect call */
    }

loc_003E9B30: ;
    ecx = MEM32(esi + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ecx + 0x14));
    MEM32(ebp + 0x10) = eax;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x74); PUSH32(esp, 0x003E9B41u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E9B3Eu); } /* indirect call */
    }

loc_003E9B41: ;
    _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_003E9B48;

loc_003E9B46: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003E9B48: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x48); PUSH32(esp, 0x003E9B4Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E9B4Cu); } /* indirect call */
    }

loc_003E9B4F: ;
    eax = MEM32(ebp + 0xC);
    goto loc_003E9B06;

}

/**
 * sub_003E9B54
 * Original: 0x003E9B54 - 0x003E9C8B (311 bytes, 113 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036186F, between)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003E9B54(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9B54: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x24);
    edx = eax + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi);
    MEM32(ebp + -8) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_003E9B7D; /* jae: above or equal (unsigned >=) */

loc_003E9B71: ;
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003E9C81;

loc_003E9B7D: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    ecx = ZX16(MEM16(ecx + 0x134));
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E9C7A; /* jge: greater or equal (signed >=) */

loc_003E9B94: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E9C7A; /* jl: less (signed <) */

loc_003E9B9C: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x58); PUSH32(esp, 0x003E9BA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E9B9Eu); } /* indirect call */
    }

loc_003E9BA1: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 0xFFFFFFFCu;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x24);
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi + 0x18);
    ebx = MEM32(eax);
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_003E9BD8; /* jne: not equal / not zero */

loc_003E9BBA: ;
    ecx = MEM32(ecx + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */

loc_003E9BC6: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003E9BCC; /* jge: greater or equal (signed >=) */

loc_003E9BC8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E9BE0; /* jge: greater or equal (signed >=) */

loc_003E9BCC: ;
    MEM32(esi + 0x6C) = 0x1112;
    goto loc_003E9C81;

loc_003E9BD8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 0x160) (32-bit) */
    goto loc_003E9BC6;

loc_003E9BE0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esi + 0x2C) = ebx;
    MEM32(esi + 0x30) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_003E9C30; /* jne: not equal / not zero */

loc_003E9BEA: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0xC));
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E9BFCu); RECOMP_ABI_CALL(0x003E4DDEu, sub_003E4DDE); /* call 0x003E4DDE */

loc_003E9BFC: ;
    ecx = MEM32(edi);
    MEM32(ebx + ecx) = eax;
    eax = MEM32(edi);
    eax = MEM32(ebx + eax);
    ecx = MEM32(edi + 8);
    MEM32(ebx + ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0xE));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E9C1Bu); RECOMP_ABI_CALL(0x003E4DDEu, sub_003E4DDE); /* call 0x003E4DDE */

loc_003E9C1B: ;
    ecx = MEM32(edi + 4);
    MEM32(ebx + ecx) = eax;
    eax = MEM32(edi + 4);
    eax = MEM32(ebx + eax);
    ecx = MEM32(edi + 0xC);
    MEM32(ebx + ecx) = eax;
    ebx = MEM32(ebp + -4);

loc_003E9C30: ;
    eax = MEM32(edi + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + ebx * 4));
    eax = MEM32(edi);
    PUSH32(esp, MEM32(eax + ebx * 4));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x4C); PUSH32(esp, 0x003E9C3Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E9C3Cu); } /* indirect call */
    }

loc_003E9C3F: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    edx = eax;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -4) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_003E9C6B; /* je: equal / zero */

loc_003E9C4D: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_003E9C53; /* jns: not sign (positive) */

loc_003E9C51: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003E9C53: ;
    ecx = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x5C) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003E9C5E; /* jle: less or equal (signed <=) */

loc_003E9C5B: ;
    MEM32(ebp + 8) = edx;

loc_003E9C5E: ;
    eax = MEM32(esi + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + 0x14));
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x74); PUSH32(esp, 0x003E9C6Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E9C68u); } /* indirect call */
    }

loc_003E9C6B: ;
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x48); PUSH32(esp, 0x003E9C75u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E9C72u); } /* indirect call */
    }

loc_003E9C75: ;
    eax = MEM32(ebp + 0xC);
    goto loc_003E9C84;

loc_003E9C7A: ;
    MEM32(esi + 0x6C) = 0x111B;

loc_003E9C81: ;
    eax = MEM32(esi + 0x70);

loc_003E9C84: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E9C8B
 * Original: 0x003E9C8B - 0x003E9FB8 (813 bytes, 295 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003619A6, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003E9C8B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9C8B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x24);
    SET_LO8(ecx, MEM8(eax + 0x125));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    MEM32(ebp + -72) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_003E9CC7; /* je: equal / zero */

loc_003E9CAA: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9CB3; /* jne: not equal / not zero */

loc_003E9CAE: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9CC2; /* je: equal / zero */

loc_003E9CB3: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x111C;
    goto loc_003E9FB2;

loc_003E9CC2: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9CF0; /* jne: not equal / not zero */

loc_003E9CC7: ;
    eax = ZX16(MEM16(eax + 0x16C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E9CF0; /* je: equal / zero */

loc_003E9CD2: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E9CF0; /* je: equal / zero */

loc_003E9CD6: ;
    ecx = MEM32(ebp + 0x10);
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx & 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), LO8(ecx) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9CF0; /* je: equal / zero */

loc_003E9CE3: ;
    _fa = (uint32_t)(MEM32(edi + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x30), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9CF0; /* jne: not equal / not zero */

loc_003E9CE9: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E9CF0u); RECOMP_ABI_CALL(0x003E79E1u, sub_003E79E1); /* call 0x003E79E1 */

loc_003E9CF0: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, ebx);
    ebx = MEM32(edi + 0x24);
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + -76) = ebx;
    MEM32(ebp + -84) = eax;
    if ((_fa == 0)) goto loc_003E9D23; /* je: equal / zero */

loc_003E9D05: ;
    _fa = (uint32_t)(MEM8(ecx + 0x14D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x14D), 0 (8-bit) */
    eax = MEM32(edi);
    MEM32(ebp + -8) = eax;
    eax = MEM32(edi + 8);
    MEM32(ebp + -28) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003E9D1C; /* jne: not equal / not zero */

loc_003E9D19: ;
    eax = MEM32(edi + 0x10);

loc_003E9D1C: ;
    SET_LO8(ecx, 1);
    MEM8(ebp + 0x13) = LO8(ecx);
    goto loc_003E9D42;

loc_003E9D23: ;
    _fa = (uint32_t)(MEM8(ecx + 0x14D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x14D), 0 (8-bit) */
    eax = MEM32(edi + 4);
    MEM32(ebp + -8) = eax;
    eax = MEM32(edi + 0xC);
    MEM32(ebp + -28) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003E9D3B; /* jne: not equal / not zero */

loc_003E9D38: ;
    eax = MEM32(edi + 0x14);

loc_003E9D3B: ;
    MEM8(ebp + 0x13) = 2;
    SET_LO8(ecx, MEM8(ebp + 0x13));

loc_003E9D42: ;
    MEM32(ebp + -48) = MEM32(ebp + -48) & 0;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(edi + 0x28)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x28), 0 (16-bit) */
    MEM32(ebp + -4) = eax;
    if (CMP_LE(_fas, _fbs)) goto loc_003E9F9B; /* jle: less or equal (signed <=) */

loc_003E9D54: ;
    edx = MEM32(ebp + -48);
    eax = MEM32(edi + 0x1C);
    esi = MEM32(edi + 0x20);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(int32_t)SMEM16(eax + edx);
    _fa = (uint32_t)(MEM8(eax + ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + ebx), LO8(ecx) (8-bit) */
    edx = (uint32_t)(int32_t)SMEM16(esi + edx);
    esi = MEM32(ebp + -4);
    esi = esi + edx * 4;
    MEM32(ebp + -80) = esi;
    MEM32(ebp + -44) = eax;
    MEM32(ebp + -40) = edx;
    esi = eax;
    if (TEST_NZ(_fa, _fb)) goto loc_003E9D8B; /* jne: not equal / not zero */

loc_003E9D7D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003E9F88; /* jg: greater (signed >) */

loc_003E9D85: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + ebx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E9D7D; /* je: equal / zero */

loc_003E9D8B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003E9F88; /* jg: greater (signed >) */

loc_003E9D93: ;
    MEM32(ebp + -60) = esi;
    goto loc_003E9D9B;

loc_003E9D98: ;
    eax = MEM32(ebp + -44);

loc_003E9D9B: ;
    edx = esi;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -40) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003E9DA5; /* jle: less or equal (signed <=) */

loc_003E9DA3: ;
    esi = eax;

loc_003E9DA5: ;
    _fa = (uint32_t)(MEM8(esi + ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + ebx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E9DAF; /* je: equal / zero */

loc_003E9DAA: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -60) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9D9B; /* jne: not equal / not zero */

loc_003E9DAF: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -60) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003E9F88; /* je: equal / zero */

loc_003E9DB8: ;
    edi = esi;

loc_003E9DBA: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + -40) (32-bit) */
    MEM32(ebp + -12) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_003E9DC8; /* jle: less or equal (signed <=) */

loc_003E9DC3: ;
    MEM32(ebp + -12) = eax;
    edi = eax;

loc_003E9DC8: ;
    _fa = (uint32_t)(MEM8(edi + ebx)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + ebx), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003E9DBA; /* je: equal / zero */

loc_003E9DCD: ;
    ecx = MEM32(ebp + -4);
    eax = MEM32(ecx + edx * 4);
    ecx = ecx + edi * 4;
    MEM32(ebp + -20) = ecx;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E9DEC; /* jge: greater or equal (signed >=) */

loc_003E9DDF: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -36) = eax;
    ebx = ecx;
    eax = edx;
    ecx = edi;
    goto loc_003E9DF7;

loc_003E9DEC: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -36) = ecx;
    ebx = eax;
    eax = edi;
    ecx = edx;

loc_003E9DF7: ;
    edx = MEM32(ebp + -8);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(eax + edx);
    edx = MEM32(ebp + -28);
    eax = MEM32(eax + edx);
    MEM32(ebp + -32) = eax;
    eax = edi;
    _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -32);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    MEM32(ebp + -68) = edi;
    MEM32(ebp + -52) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003E9F71; /* je: equal / zero */

loc_003E9E1C: ;
    eax = ecx;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(eax + edx);
    MEM32(ebp + -16) = ecx;
    ecx = MEM32(ebp + -8);
    eax = MEM32(eax + ecx);
    ecx = eax;
    _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + -16);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -24) = eax;
    eax = 0x8000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(ebp + -56) = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_003E9F0D; /* jge: greater or equal (signed >=) */

loc_003E9E47: ;
    _fa = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -24), eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E9F0D; /* jge: greater or equal (signed >=) */

loc_003E9E50: ;
    ecx = MEM32(ebp + -4);
    eax = esi;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = eax + ecx;
    ecx = MEM32(ebp + -8);
    edi = eax + edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ebp + -64) = eax;
    goto loc_003E9EA6;

loc_003E9E6C: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -32) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003E9E8C; /* jle: less or equal (signed <=) */

loc_003E9E73: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E9E91; /* jge: greater or equal (signed >=) */

loc_003E9E78: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -36);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -24));
    _fb = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fb = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003E9E9B;

loc_003E9E8C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E9E96; /* jl: less (signed <) */

loc_003E9E91: ;
    edx = MEM32(ebp + -56);
    goto loc_003E9E99;

loc_003E9E96: ;
    edx = MEM32(ebp + -52);

loc_003E9E99: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E9E9B: ;
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E9EA6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -20) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003E9E6C; /* jb: below (unsigned <) */

loc_003E9EAB: ;
    if (CMP_EQ(_fa, _fb)) goto loc_003E9F08; /* je: equal / zero */

loc_003E9EAD: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -32) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003E9ECD; /* jle: less or equal (signed <=) */

loc_003E9EB4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E9ED2; /* jge: greater or equal (signed >=) */

loc_003E9EB9: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -36);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + -24));
    _fb = (uint32_t)(MEM32(ebp + -64)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    _fb = (uint32_t)(MEM32(ebp + -68)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -68);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003E9EDC;

loc_003E9ECD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E9ED7; /* jl: less (signed <) */

loc_003E9ED2: ;
    edx = MEM32(ebp + -56);
    goto loc_003E9EDA;

loc_003E9ED7: ;
    edx = MEM32(ebp + -52);

loc_003E9EDA: ;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E9EDC: ;
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -80)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -80) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003E9F03; /* jbe: below or equal (unsigned <=) */

loc_003E9EEC: ;
    ecx = MEM32(ebp + -44);
    eax = MEM32(ebp + -4);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = ecx + eax;
    eax = MEM32(ebp + -28);
    edi = ecx + eax;
    eax = MEM32(ebp + -8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E9F03: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9EAD; /* jne: not equal / not zero */

loc_003E9F08: ;
    esi = MEM32(ebp + -12);
    goto loc_003E9F76;

loc_003E9F0D: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -24));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E9F16u); RECOMP_ABI_CALL(0x003E4F65u, sub_003E4F65); /* call 0x003E4F65 */

loc_003E9F16: ;
    ebx = eax;
    goto loc_003E9F57;

loc_003E9F1A: ;
    eax = MEM32(ebp + -28);
    eax = MEM32(eax + esi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -32) (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003E9F2A; /* jg: greater (signed >) */

loc_003E9F25: ;
    _fb = (uint32_t)(MEM32(ebp + -52)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -52);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003E9F46;

loc_003E9F2A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -16) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003E9F34; /* jl: less (signed <) */

loc_003E9F2F: ;
    _fb = (uint32_t)(MEM32(ebp + -56)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + -56);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003E9F46;

loc_003E9F34: ;
    eax = MEM32(ebp + -4);
    eax = MEM32(eax + esi * 4);
    _fb = (uint32_t)(MEM32(ebp + -36)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -36);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003E9F44u); RECOMP_ABI_CALL(0x003E4EEDu, sub_003E4EED); /* call 0x003E4EED */

loc_003E9F44: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003E9F46: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -40) (32-bit) */
    ecx = MEM32(ebp + -8);
    MEM32(ecx + esi * 4) = eax;
    if (CMP_GE(_fas, _fbs)) goto loc_003E9F54; /* jge: greater or equal (signed >=) */

loc_003E9F51: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003E9F57;

loc_003E9F54: ;
    esi = MEM32(ebp + -44);

loc_003E9F57: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -12) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9F1A; /* jne: not equal / not zero */

loc_003E9F5C: ;
    goto loc_003E9F76;

loc_003E9F5E: ;
    ecx = MEM32(ebp + -8);
    ecx = ecx + esi * 4;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + eax;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -40)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -40) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003E9F6E; /* jge: greater or equal (signed >=) */

loc_003E9F6B: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003E9F71;

loc_003E9F6E: ;
    esi = MEM32(ebp + -44);

loc_003E9F71: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -12) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003E9F5E; /* jne: not equal / not zero */

loc_003E9F76: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + -60) (32-bit) */
    ebx = MEM32(ebp + -76);
    edi = MEM32(ebp + -72);
    SET_LO8(ecx, MEM8(ebp + 0x13));
    if (CMP_NE(_fa, _fb)) goto loc_003E9D98; /* jne: not equal / not zero */

loc_003E9F88: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    MEM32(ebp + -48) = MEM32(ebp + -48) + 1;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), eax (32-bit) */
    esi = MEM32(ebp + 8);
    if (CMP_L(_fas, _fbs)) goto loc_003E9D54; /* jl: less (signed <) */

loc_003E9F9B: ;
    eax = MEM32(esi + 0x24);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -84)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -84), ecx (32-bit) */
    POP32(esp, ebx);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM16(eax + 0x16E) = MEM16(eax + 0x16E) | LO16(ecx);
    _fa = (uint32_t)(MEM16(eax + 0x16E)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    eax = MEM32(ebp + 0xC);

loc_003E9FB2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003E9FB8
 * Original: 0x003E9FB8 - 0x003EA085 (205 bytes, 80 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00361CD3, between)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003E9FB8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003E9FB8: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM8(ebp + 0x18)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x18), 1 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_003E9FCE; /* je: equal / zero */

loc_003E9FC7: ;
    eax = MEM32(esi + 0x30);
    edi = MEM32(esi);
    goto loc_003E9FD4;

loc_003E9FCE: ;
    eax = MEM32(esi + 0x34);
    edi = MEM32(esi + 4);

loc_003E9FD4: ;
    edx = MEM32(edi + 4);
    ecx = MEM32(edi + 0xC);
    MEM32(ebp + 0x18) = eax;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(edx + eax);
    _fb = (uint32_t)(MEM32(ecx + eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ecx + eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(edi + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(edi);
    edx = MEM32(edx + eax);
    _fb = (uint32_t)(MEM32(ecx + eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ecx + eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x4C); PUSH32(esp, 0x003E9FF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003E9FF4u); } /* indirect call */
    }

loc_003E9FF7: ;
    ebx = MEM32(ebp + 0xC);
    MEM32(ebp + 8) = eax;
    eax = MEM32(ebp + 0x10);
    MEM32(eax) = MEM32(eax) & 0;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebx) = MEM32(ebx) & 0;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    SET_LO16(eax, MEM16(esi + 0x44));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x4000 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA047; /* je: equal / zero */

loc_003EA010: ;
    SET_LO16(ecx, MEM16(esi + 0x10));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA02B; /* je: equal / zero */

loc_003EA019: ;
    eax = SX16(LO16(eax));
    PUSH32(esp, eax);
    eax = SX16(LO16(ecx));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EA029u); RECOMP_ABI_CALL(0x003E4DBAu, sub_003E4DBA); /* call 0x003E4DBA */

loc_003EA029: ;
    MEM32(ebx) = eax;

loc_003EA02B: ;
    SET_LO16(eax, MEM16(esi + 0x12));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA074; /* je: equal / zero */

loc_003EA034: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x44);
    eax = SX16(LO16(eax));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EA045u); RECOMP_ABI_CALL(0x003E4DBAu, sub_003E4DBA); /* call 0x003E4DBA */

loc_003EA045: ;
    goto loc_003EA06F;

loc_003EA047: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x10));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA05D; /* je: equal / zero */

loc_003EA052: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EA05Bu); RECOMP_ABI_CALL(0x003E4DDEu, sub_003E4DDE); /* call 0x003E4DDE */

loc_003EA05B: ;
    MEM32(ebx) = eax;

loc_003EA05D: ;
    esi = (uint32_t)(int32_t)SMEM16(esi + 0x12);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA074; /* je: equal / zero */

loc_003EA066: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EA06Fu); RECOMP_ABI_CALL(0x003E4DDEu, sub_003E4DDE); /* call 0x003E4DDE */

loc_003EA06F: ;
    ecx = MEM32(ebp + 0x10);
    MEM32(ecx) = eax;

loc_003EA074: ;
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x18);
    MEM32(eax) = ecx;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003EA085
 * Original: 0x003EA085 - 0x003EA1DC (343 bytes, 107 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00361DA0, between)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EA085(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EA085: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x3C);
    ebx = MEM32(esi + 8);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    MEM32(ebp + 8) = eax;
    if ((_fa == 0)) goto loc_003EA1C2; /* je: equal / zero */

loc_003EA09E: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 0xFFFFFFFCu;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 8) (32-bit) */
    edi = MEM32(eax);
    eax = MEM32(esi + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_003EA0C0; /* jne: not equal / not zero */

loc_003EA0B2: ;
    edx = MEM32(eax + 0x130);
    edx = ZX16(MEM16(edx + 0x10));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    goto loc_003EA0C6;

loc_003EA0C0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x160) (32-bit) */

loc_003EA0C6: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EA1D0; /* jge: greater or equal (signed >=) */

loc_003EA0CC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EA1D0; /* jl: less (signed <) */

loc_003EA0D4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA101; /* je: equal / zero */

loc_003EA0D8: ;
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EA101; /* jne: not equal / not zero */

loc_003EA0E1: ;
    _fa = (uint32_t)(MEM16(esi + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x80), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA101; /* je: equal / zero */

loc_003EA0EB: ;
    _fa = (uint32_t)(MEM8(eax + 0x16C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EA101; /* je: equal / zero */

loc_003EA0F4: ;
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EA101u); RECOMP_ABI_CALL(0x003E7628u, sub_003E7628); /* call 0x003E7628 */

loc_003EA101: ;
    _fa = (uint32_t)(MEM8(ebp + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + 0x14), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA186; /* je: equal / zero */

loc_003EA107: ;
    eax = MEM32(esi + 0x24);
    SET_LO16(ecx, MEM16(eax + 0x16C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EA186; /* je: equal / zero */

loc_003EA116: ;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003EA186; /* jne: not equal / not zero */

loc_003EA11C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003EA150; /* jne: not equal / not zero */

loc_003EA121: ;
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), 0x4000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EA17D; /* jne: not equal / not zero */

loc_003EA129: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EA17D; /* jne: not equal / not zero */

loc_003EA130: ;
    _fa = (uint32_t)(MEM8(eax + 0x12D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x12D), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EA186; /* jne: not equal / not zero */

loc_003EA139: ;
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx + 0x24);
    _fa = (uint32_t)(MEM8(edi + ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EA17D; /* je: equal / zero */

loc_003EA145: ;
    _fa = (uint32_t)(MEM8(eax + 0x16E)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16E), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003EA17D; /* jne: not equal / not zero */

loc_003EA14E: ;
    goto loc_003EA186;

loc_003EA150: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), 0x4000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EA17D; /* jne: not equal / not zero */

loc_003EA158: ;
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EA17D; /* jne: not equal / not zero */

loc_003EA15F: ;
    _fa = (uint32_t)(MEM8(eax + 0x12D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x12D), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EA186; /* jne: not equal / not zero */

loc_003EA168: ;
    ecx = MEM32(esi + 8);
    ecx = MEM32(ecx + 0x24);
    _fa = (uint32_t)(MEM8(edi + ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EA17D; /* je: equal / zero */

loc_003EA174: ;
    _fa = (uint32_t)(MEM8(eax + 0x16E)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16E), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EA186; /* je: equal / zero */

loc_003EA17D: ;
    _fa = (uint32_t)(MEM8(eax + 0x16E)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16E), 4 (8-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003EA1B9; /* jbe: below or equal (unsigned <=) */

loc_003EA186: ;
    _fa = (uint32_t)(MEM16(esi + 0x10)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x10), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA19F; /* je: equal / zero */

loc_003EA18D: ;
    eax = MEM32(ebx);
    ecx = MEM32(ebp + 0x18);
    eax = eax + edi * 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebx + 0x24);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_003EA19F: ;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x12), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA1B9; /* je: equal / zero */

loc_003EA1A6: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebp + 0x1C);
    eax = eax + edi * 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(ebx + 0x24);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | 2;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_003EA1B9: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003EA09E; /* jne: not equal / not zero */

loc_003EA1C2: ;
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 0xC);

loc_003EA1C9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

loc_003EA1D0: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1112;
    goto loc_003EA1C9;

}

/**
 * sub_003EA1DC
 * Original: 0x003EA1DC - 0x003EA271 (149 bytes, 54 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00361EF7, between)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EA1DC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EA1DC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    if (TEST_Z(_fa, _fb)) goto loc_003EA1FF; /* je: equal / zero */

loc_003EA1F0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    eax = MEM32(esi + 0x30);
    if (CMP_EQ(_fa, _fb)) goto loc_003EA207; /* je: equal / zero */

loc_003EA1F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x160) (32-bit) */
    goto loc_003EA213;

loc_003EA1FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    eax = MEM32(esi + 0x34);
    if (CMP_NE(_fa, _fb)) goto loc_003EA1F7; /* jne: not equal / not zero */

loc_003EA207: ;
    ecx = MEM32(ecx + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */

loc_003EA213: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EA262; /* jge: greater or equal (signed >=) */

loc_003EA215: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EA262; /* jl: less (signed <) */

loc_003EA219: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EA22Eu); RECOMP_ABI_CALL(0x003E9FB8u, sub_003E9FB8); /* call 0x003E9FB8 */

loc_003EA22E: ;
    ecx = MEM32(esi + 0x18);
    eax = 0x3FFFFFFF;
    _fb = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(esi + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ecx + eax * 4;
    ecx = MEM32(esi + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EA24C; /* jae: above or equal (unsigned >=) */

loc_003EA243: ;
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003EA269;

loc_003EA24C: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EA260u); RECOMP_ABI_CALL(0x003EA085u, sub_003EA085); /* call 0x003EA085 */

loc_003EA260: ;
    goto loc_003EA26C;

loc_003EA262: ;
    MEM32(esi + 0x6C) = 0x1112;

loc_003EA269: ;
    eax = MEM32(esi + 0x70);

loc_003EA26C: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EA271
 * Original: 0x003EA271 - 0x003EA41D (428 bytes, 146 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00361F8C, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EA271(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EA271: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_003EA298; /* je: equal / zero */

loc_003EA289: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    eax = MEM32(esi + 0x30);
    if (CMP_EQ(_fa, _fb)) goto loc_003EA2A0; /* je: equal / zero */

loc_003EA290: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x160) (32-bit) */
    goto loc_003EA2AC;

loc_003EA298: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    eax = MEM32(esi + 0x34);
    if (CMP_NE(_fa, _fb)) goto loc_003EA290; /* jne: not equal / not zero */

loc_003EA2A0: ;
    ecx = MEM32(ecx + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */

loc_003EA2AC: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EA3B0; /* jge: greater or equal (signed >=) */

loc_003EA2B2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EA3B0; /* jl: less (signed <) */

loc_003EA2BA: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + 0x10;
    PUSH32(esp, eax);
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EA2CFu); RECOMP_ABI_CALL(0x003E9FB8u, sub_003E9FB8); /* call 0x003E9FB8 */

loc_003EA2CF: ;
    ecx = MEM32(esi + 0x18);
    edx = eax;
    eax = MEM32(ebp + 8);
    MEM32(ebp + -8) = eax;
    eax = MEM32(esi + 0x24);
    edi = ecx + -4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax) (32-bit) */
    MEM32(ebp + -4) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_003EA2F3; /* jae: above or equal (unsigned >=) */

loc_003EA2E7: ;
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003EA3B7;

loc_003EA2F3: ;
    edi = MEM32(ebp + 0x10);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = ecx;
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), 2 (8-bit) */
    ebx = MEM32(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_003EA33A; /* jne: not equal / not zero */

loc_003EA307: ;
    SET_LO16(eax, MEM16(eax + 0x16C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EA33A; /* je: equal / zero */

loc_003EA312: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EA33A; /* je: equal / zero */

loc_003EA316: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003EA33A; /* jne: not equal / not zero */

loc_003EA31A: ;
    _fa = (uint32_t)(MEM32(edx + 0x30)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + 0x30), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EA33A; /* jne: not equal / not zero */

loc_003EA320: ;
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EA327u); RECOMP_ABI_CALL(0x003E79E1u, sub_003E79E1); /* call 0x003E79E1 */

loc_003EA327: ;
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx + 0x34);
    eax = edi + edi * 2;
    eax = MEM32(ecx + eax * 4 + 8);
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = eax;

loc_003EA33A: ;
    edi = MEM32(esi + 0x24);
    SET_LO8(eax, MEM8(edi + 0x125));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA35C; /* je: equal / zero */

loc_003EA347: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EA353; /* jne: not equal / not zero */

loc_003EA34B: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA35C; /* je: equal / zero */

loc_003EA353: ;
    MEM32(esi + 0x6C) = 0x111C;
    goto loc_003EA3B7;

loc_003EA35C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EA414; /* jl: less (signed <) */

loc_003EA364: ;
    eax = MEM32(esi + 8);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EA414; /* jge: greater or equal (signed >=) */

loc_003EA373: ;
    SET_LO16(ecx, MEM16(esi + 0x10));
    MEM16(ebp + 8) = LO16(ecx);
    SET_LO16(ecx, MEM16(esi + 0x12));
    edx = ebx + ebx;
    ebx = MEM32(eax + 0x20);
    MEM16(ebp + -12) = LO16(ecx);
    ecx = MEM32(eax + 0x1C);
    ecx = (uint32_t)(int32_t)SMEM16(ecx + edx);
    edx = (uint32_t)(int32_t)SMEM16(ebx + edx);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), eax (32-bit) */
    ebx = edx + ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003EA3C1; /* jne: not equal / not zero */

loc_003EA39E: ;
    edi = MEM32(edi + 0x130);
    edi = ZX16(MEM16(edi + 0x10));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */

loc_003EA3AA: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EA3B0; /* jge: greater or equal (signed >=) */

loc_003EA3AC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EA3C9; /* jge: greater or equal (signed >=) */

loc_003EA3B0: ;
    MEM32(esi + 0x6C) = 0x1112;

loc_003EA3B7: ;
    eax = MEM32(esi + 0x70);

loc_003EA3BA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_003EA3C1: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x160) (32-bit) */
    goto loc_003EA3AA;

loc_003EA3C9: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EA40F; /* jl: less (signed <) */

loc_003EA3CD: ;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003EA3CE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EA3D8; /* jne: not equal / not zero */

loc_003EA3D3: ;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -4), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA40B; /* je: equal / zero */

loc_003EA3D8: ;
    _fa = (uint32_t)(MEM16(ebp + 8)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 8), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA3F1; /* je: equal / zero */

loc_003EA3DF: ;
    esi = MEM32(eax);
    edi = MEM32(ebp + -8);
    esi = esi + ecx * 4;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + edi;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + 0x24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi) = MEM8(esi) | 1;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_003EA3F1: ;
    _fa = (uint32_t)(MEM16(ebp + -12)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -12), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA40B; /* je: equal / zero */

loc_003EA3F8: ;
    esi = MEM32(eax + 4);
    edi = MEM32(ebp + -16);
    esi = esi + ecx * 4;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + edi;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + 0x24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + ecx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(esi) = MEM8(esi) | 2;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_003EA40B: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003EA3CE; /* jne: not equal / not zero */

loc_003EA40F: ;
    eax = MEM32(ebp + 0xC);
    goto loc_003EA3BA;

loc_003EA414: ;
    MEM32(esi + 0x6C) = 0x111A;
    goto loc_003EA3B7;

}

/**
 * sub_003EA41D
 * Original: 0x003EA41D - 0x003EA5DC (447 bytes, 151 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00362138, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EA41D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EA41D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_003EA444; /* je: equal / zero */

loc_003EA435: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    eax = MEM32(esi + 0x30);
    if (CMP_EQ(_fa, _fb)) goto loc_003EA44C; /* je: equal / zero */

loc_003EA43C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x160) (32-bit) */
    goto loc_003EA458;

loc_003EA444: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 4) (32-bit) */
    eax = MEM32(esi + 0x34);
    if (CMP_NE(_fa, _fb)) goto loc_003EA43C; /* jne: not equal / not zero */

loc_003EA44C: ;
    ecx = MEM32(ecx + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */

loc_003EA458: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EA503; /* jge: greater or equal (signed >=) */

loc_003EA45E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EA503; /* jl: less (signed <) */

loc_003EA466: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = ebp + -4;
    PUSH32(esp, eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EA47Bu); RECOMP_ABI_CALL(0x003E9FB8u, sub_003E9FB8); /* call 0x003E9FB8 */

loc_003EA47B: ;
    ecx = MEM32(esi + 0x18);
    edi = MEM32(esi + 0x24);
    MEM32(ebp + 0x10) = eax;
    eax = ecx + -4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EA494; /* jae: above or equal (unsigned >=) */

loc_003EA48B: ;
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003EA50A;

loc_003EA494: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = ecx;
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EA5D0; /* jge: greater or equal (signed >=) */

loc_003EA4A5: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EA5D0; /* jl: less (signed <) */

loc_003EA4AD: ;
    SET_LO8(eax, MEM8(edi + 0x125));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA4D2; /* je: equal / zero */

loc_003EA4B7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EA4C9; /* jne: not equal / not zero */

loc_003EA4BB: ;
    eax = MEM32(esi + 0x20);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA4D2; /* je: equal / zero */

loc_003EA4C9: ;
    MEM32(esi + 0x6C) = 0x111C;
    goto loc_003EA50A;

loc_003EA4D2: ;
    eax = MEM32(esi + 0x20);
    edx = ecx;
    edx = (uint32_t)((int32_t)edx * (int32_t)0x38);
    ecx = edx + eax;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), ecx (32-bit) */
    eax = (uint32_t)(int32_t)SMEM16(ecx + 0x28);
    ebx = MEM32(ecx + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(ebx + eax * 2 + -2);
    MEM32(ebp + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003EA514; /* jne: not equal / not zero */

loc_003EA4F1: ;
    ebx = MEM32(edi + 0x130);
    ebx = ZX16(MEM16(ebx + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */

loc_003EA4FD: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EA503; /* jge: greater or equal (signed >=) */

loc_003EA4FF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EA51C; /* jge: greater or equal (signed >=) */

loc_003EA503: ;
    MEM32(esi + 0x6C) = 0x1112;

loc_003EA50A: ;
    eax = MEM32(esi + 0x70);

loc_003EA50D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_003EA514: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x160) (32-bit) */
    goto loc_003EA4FD;

loc_003EA51C: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), ecx (32-bit) */
    eax = MEM32(ecx + 0x1C);
    eax = (uint32_t)(int32_t)SMEM16(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003EA569; /* jne: not equal / not zero */

loc_003EA527: ;
    edi = MEM32(edi + 0x130);
    edi = ZX16(MEM16(edi + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */

loc_003EA533: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EA503; /* jge: greater or equal (signed >=) */

loc_003EA535: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EA503; /* jl: less (signed <) */

loc_003EA539: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EA555; /* jne: not equal / not zero */

loc_003EA53E: ;
    edi = MEM32(ebp + -4);
    ebx = MEM32(ecx);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(edi + ebx);
    MEM32(ebp + -16) = ebx;
    ebx = MEM32(ecx + 4);
    edi = MEM32(edi + ebx);
    MEM32(ebp + -20) = edi;

loc_003EA555: ;
    _fa = (uint32_t)(MEM16(esi + 0x10)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x10), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA57D; /* je: equal / zero */

loc_003EA55C: ;
    ecx = MEM32(ecx);
    ebx = MEM32(ebp + 8);
    edi = ecx + eax * 4;
    ecx = ecx + ebx * 4;
    goto loc_003EA579;

loc_003EA569: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x160) (32-bit) */
    goto loc_003EA533;

loc_003EA571: ;
    ebx = MEM32(ebp + -8);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + ebx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EA579: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003EA571; /* jbe: below or equal (unsigned <=) */

loc_003EA57D: ;
    _fa = (uint32_t)(MEM16(esi + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x12), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA5A2; /* je: equal / zero */

loc_003EA584: ;
    ecx = MEM32(esi + 0x20);
    ecx = MEM32(ecx + edx + 4);
    edi = ecx + eax * 4;
    eax = MEM32(ebp + 8);
    ecx = ecx + eax * 4;
    goto loc_003EA59E;

loc_003EA596: ;
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EA59E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003EA596; /* jbe: below or equal (unsigned <=) */

loc_003EA5A2: ;
    eax = MEM32(esi + 0x20);
    ecx = eax + edx;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EA5C8; /* jne: not equal / not zero */

loc_003EA5AD: ;
    ecx = MEM32(ecx);
    eax = MEM32(ebp + -4);
    edi = MEM32(ebp + -16);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(eax + ecx) = edi;
    ecx = MEM32(esi + 0x20);
    ecx = MEM32(ecx + edx + 4);
    edx = MEM32(ebp + -20);
    MEM32(eax + ecx) = edx;

loc_003EA5C8: ;
    eax = MEM32(ebp + 0xC);
    goto loc_003EA50D;

loc_003EA5D0: ;
    MEM32(esi + 0x6C) = 0x1116;
    goto loc_003EA50A;

}

/**
 * sub_003EA5DC
 * Original: 0x003EA5DC - 0x003EA650 (116 bytes, 47 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003622F7, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EA5DC(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EA5DC: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x24);
    ecx = 0x3FFFFFFE;
    _fb = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(esi + 0x3C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = eax + ecx * 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EA602; /* jae: above or equal (unsigned >=) */

loc_003EA5F6: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003EA64C;

loc_003EA602: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x10));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA622; /* je: equal / zero */

loc_003EA617: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003EA61Eu); RECOMP_ABI_CALL(0x003E4DDEu, sub_003E4DDE); /* call 0x003E4DDE */

loc_003EA61E: ;
    ebx = eax;
    goto loc_003EA624;

loc_003EA622: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003EA624: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x12));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA638; /* je: equal / zero */

loc_003EA62F: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, 0x003EA636u); RECOMP_ABI_CALL(0x003E4DDEu, sub_003E4DDE); /* call 0x003E4DDE */

loc_003EA636: ;
    goto loc_003EA63A;

loc_003EA638: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003EA63A: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, MEM32(esp + 0x24));
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EA64Au); RECOMP_ABI_CALL(0x003EA085u, sub_003EA085); /* call 0x003EA085 */

loc_003EA64A: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_003EA64C: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EA650
 * Original: 0x003EA650 - 0x003EAAA8 (1112 bytes, 367 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036236B, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EA650(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EA650: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x3C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x3C);
    ebx = MEM32(esi + 0x34);
    ecx = MEM32(esi + 4);
    edx = MEM32(esi + 0x30);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), eax (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    MEM32(ebp + -8) = ebx;
    ebx = MEM32(esi + 0x24);
    MEM32(ebp + -16) = ecx;
    MEM32(ebp + -12) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_003EA6A5; /* jne: not equal / not zero */

loc_003EA682: ;
    ebx = MEM32(ebx + 0x130);
    ebx = ZX16(MEM16(ebx + 0x10));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */

loc_003EA68E: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EA694; /* jge: greater or equal (signed >=) */

loc_003EA690: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EA6AD; /* jge: greater or equal (signed >=) */

loc_003EA694: ;
    MEM32(esi + 0x6C) = 0x1112;

loc_003EA69B: ;
    eax = MEM32(esi + 0x70);

loc_003EA69E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_003EA6A5: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + 0x160) (32-bit) */
    goto loc_003EA68E;

loc_003EA6AD: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), ecx (32-bit) */
    edx = MEM32(esi + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_003EA6CC; /* jne: not equal / not zero */

loc_003EA6B5: ;
    edx = MEM32(edx + 0x130);
    edx = ZX16(MEM16(edx + 0x10));
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EA694; /* jge: greater or equal (signed >=) */

loc_003EA6C4: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EA6DB; /* jge: greater or equal (signed >=) */

loc_003EA6CA: ;
    goto loc_003EA694;

loc_003EA6CC: ;
    ebx = MEM32(ebp + -8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edx + 0x160) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EA694; /* jge: greater or equal (signed >=) */

loc_003EA6D7: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EA694; /* jl: less (signed <) */

loc_003EA6DB: ;
    ebx = MEM32(esi + 0x48);
    edx = MEM32(esi + 0x18);
    MEM32(ebp + -48) = ebx;
    ebx = MEM32(esi + 0x4C);
    MEM32(ebp + -36) = ebx;
    ebx = MEM32(ebp + 8);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -4) = edx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(esi + 0x24);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EA705; /* jae: above or equal (unsigned >=) */

loc_003EA6FC: ;
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003EA69B;

loc_003EA705: ;
    edx = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA749; /* je: equal / zero */

loc_003EA70C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA749; /* je: equal / zero */

loc_003EA710: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA749; /* je: equal / zero */

loc_003EA714: ;
    _fa = (uint32_t)(MEM8(ebx + 0x14D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + 0x14D), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EA749; /* jne: not equal / not zero */

loc_003EA71D: ;
    ebx = MEM32(ebp + -12);
    edx = MEM32(eax + 0x10);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(ebx + edx);
    MEM32(ebp + -24) = edx;
    edx = MEM32(eax + 0x14);
    edx = MEM32(ebx + edx);
    MEM32(ebp + -20) = edx;
    edx = MEM32(ecx + 0x10);
    ecx = MEM32(ecx + 0x14);
    MEM32(ebp + -60) = ecx;
    ecx = MEM32(edi + 0x10);
    MEM32(ebp + -44) = ecx;
    ecx = MEM32(edi + 0x14);
    goto loc_003EA773;

loc_003EA749: ;
    ebx = MEM32(ebp + -12);
    edx = MEM32(eax + 8);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(ebx + edx);
    MEM32(ebp + -24) = edx;
    edx = MEM32(eax + 0xC);
    edx = MEM32(ebx + edx);
    MEM32(ebp + -20) = edx;
    edx = MEM32(ecx + 8);
    ecx = MEM32(ecx + 0xC);
    MEM32(ebp + -60) = ecx;
    ecx = MEM32(edi + 8);
    MEM32(ebp + -44) = ecx;
    ecx = MEM32(edi + 0xC);

loc_003EA773: ;
    MEM32(ebp + -40) = ecx;
    ecx = MEM32(eax);
    eax = MEM32(eax + 4);
    eax = MEM32(ebx + eax);
    ecx = MEM32(ebx + ecx);
    ebx = MEM32(ebp + -8);
    MEM32(ebp + -28) = eax;
    eax = MEM32(ebp + -60);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(ebx + eax);
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -32) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebx + edx);
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x50); PUSH32(esp, 0x003EA7A2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EA79Fu); } /* indirect call */
    }

loc_003EA7A2: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(ebp + -52) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003EAA0D; /* je: equal / zero */

loc_003EA7AF: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8301) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0x3E8301 (32-bit) */
    eax = MEM32(ebp + -16);
    if (CMP_NE(_fa, _fb)) goto loc_003EA86B; /* jne: not equal / not zero */

loc_003EA7BF: ;
    eax = MEM32(eax);
    ebx = MEM32(eax + ebx);
    _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + -32);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    MEM32(ebp + -16) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_003EAA96; /* je: equal / zero */

loc_003EA7D3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + -4);
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    ebx = MEM32(eax);
    eax = MEM32(esi + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_003EA7F4; /* jne: not equal / not zero */

loc_003EA7E6: ;
    edx = MEM32(eax + 0x130);
    edx = ZX16(MEM16(edx + 0x10));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    goto loc_003EA7FA;

loc_003EA7F4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0x160) (32-bit) */

loc_003EA7FA: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EA694; /* jge: greater or equal (signed >=) */

loc_003EA800: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EA694; /* jl: less (signed <) */

loc_003EA808: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA836; /* je: equal / zero */

loc_003EA80C: ;
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EA836; /* jne: not equal / not zero */

loc_003EA815: ;
    _fa = (uint32_t)(MEM16(esi + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x80), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA836; /* je: equal / zero */

loc_003EA81F: ;
    _fa = (uint32_t)(MEM8(eax + 0x16C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EA836; /* je: equal / zero */

loc_003EA828: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EA836u); RECOMP_ABI_CALL(0x003E7726u, sub_003E7726); /* call 0x003E7726 */

loc_003EA836: ;
    eax = MEM32(ebp + -44);
    eax = MEM32(eax + ebx * 4);
    PUSH32(esp, MEM32(ebp + -52));
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -16));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EA84Bu); RECOMP_ABI_CALL(0x003E4DBAu, sub_003E4DBA); /* call 0x003E4DBA */

loc_003EA84B: ;
    ecx = MEM32(ebp + -32);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi);
    MEM32(ecx + ebx * 4) = eax;
    eax = MEM32(edi + 0x24);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003EA7D3; /* jne: not equal / not zero */

loc_003EA866: ;
    goto loc_003EAA96;

loc_003EA86B: ;
    _fa = (uint32_t)(MEM32(ebp + -48)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8321) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -48), 0x3E8321 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EA926; /* jne: not equal / not zero */

loc_003EA878: ;
    eax = MEM32(eax + 4);
    ebx = MEM32(eax + ebx);
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(ebp + -28);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    MEM32(ebp + -16) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_003EAA96; /* je: equal / zero */

loc_003EA88D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + -4);
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    ebx = MEM32(eax);
    eax = MEM32(esi + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_003EA8AE; /* jne: not equal / not zero */

loc_003EA8A0: ;
    edx = MEM32(eax + 0x130);
    edx = ZX16(MEM16(edx + 0x10));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    goto loc_003EA8B4;

loc_003EA8AE: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0x160) (32-bit) */

loc_003EA8B4: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EA694; /* jge: greater or equal (signed >=) */

loc_003EA8BA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EA694; /* jl: less (signed <) */

loc_003EA8C2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA8F0; /* je: equal / zero */

loc_003EA8C6: ;
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EA8F0; /* jne: not equal / not zero */

loc_003EA8CF: ;
    _fa = (uint32_t)(MEM16(esi + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x80), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA8F0; /* je: equal / zero */

loc_003EA8D9: ;
    _fa = (uint32_t)(MEM8(eax + 0x16C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EA8F0; /* je: equal / zero */

loc_003EA8E2: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EA8F0u); RECOMP_ABI_CALL(0x003E7726u, sub_003E7726); /* call 0x003E7726 */

loc_003EA8F0: ;
    eax = MEM32(ebp + -40);
    eax = MEM32(eax + ebx * 4);
    PUSH32(esp, MEM32(ebp + -52));
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -16));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EA905u); RECOMP_ABI_CALL(0x003E4DBAu, sub_003E4DBA); /* call 0x003E4DBA */

loc_003EA905: ;
    ecx = MEM32(ebp + -28);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi + 4);
    MEM32(ecx + ebx * 4) = eax;
    eax = MEM32(edi + 0x24);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | 2;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003EA88D; /* jne: not equal / not zero */

loc_003EA921: ;
    goto loc_003EAA96;

loc_003EA926: ;
    ecx = MEM32(eax + 4);
    eax = MEM32(eax);
    ecx = MEM32(ecx + ebx);
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + -28);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(eax + ebx);
    _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -32);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebp + -36); PUSH32(esp, 0x003EA93Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EA93Au); } /* indirect call */
    }

loc_003EA93D: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    MEM32(ebp + -16) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003EAA96; /* je: equal / zero */

loc_003EA94A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + -4);
    ebx = MEM32(eax);
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    eax = MEM32(esi + 0x24);
    MEM32(ebp + -60) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_003EA96E; /* jne: not equal / not zero */

loc_003EA960: ;
    edx = MEM32(eax + 0x130);
    edx = ZX16(MEM16(edx + 0x10));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    goto loc_003EA974;

loc_003EA96E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 0x160) (32-bit) */

loc_003EA974: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EA694; /* jge: greater or equal (signed >=) */

loc_003EA97A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EA694; /* jl: less (signed <) */

loc_003EA982: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA9B0; /* je: equal / zero */

loc_003EA986: ;
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EA9B0; /* jne: not equal / not zero */

loc_003EA98F: ;
    _fa = (uint32_t)(MEM16(esi + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x80), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EA9B0; /* je: equal / zero */

loc_003EA999: ;
    _fa = (uint32_t)(MEM8(eax + 0x16C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EA9B0; /* je: equal / zero */

loc_003EA9A2: ;
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EA9B0u); RECOMP_ABI_CALL(0x003E7726u, sub_003E7726); /* call 0x003E7726 */

loc_003EA9B0: ;
    eax = MEM32(ebp + -40);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(ebx + eax);
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -44);
    eax = MEM32(ebx + eax);
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebp + -36); PUSH32(esp, 0x003EA9CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EA9C8u); } /* indirect call */
    }

loc_003EA9CB: ;
    PUSH32(esp, MEM32(ebp + -52));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -16));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EA9D7u); RECOMP_ABI_CALL(0x003E4DBAu, sub_003E4DBA); /* call 0x003E4DBA */

loc_003EA9D7: ;
    MEM32(ebp + -56) = eax;
    eax = MEM32(edi + 4);
    eax = MEM32(eax + ebx);
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    eax = MEM32(eax + ebx);
    _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -32);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebp + -36); PUSH32(esp, 0x003EA9F1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EA9EEu); } /* indirect call */
    }

loc_003EA9F1: ;
    ecx = MEM32(ebp + -56);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -60));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebp + -48); PUSH32(esp, 0x003EA9FFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EA9FCu); } /* indirect call */
    }

loc_003EA9FF: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003EA94A; /* jne: not equal / not zero */

loc_003EAA08: ;
    goto loc_003EAA96;

loc_003EAA0D: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EAA96; /* je: equal / zero */

loc_003EAA16: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) - 4;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), edi (32-bit) */
    eax = MEM32(ebp + -4);
    eax = MEM32(eax);
    ecx = MEM32(esi + 0x24);
    MEM32(ebp + -60) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003EAA38; /* jne: not equal / not zero */

loc_003EAA2A: ;
    ecx = MEM32(ecx + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    goto loc_003EAA3E;

loc_003EAA38: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x160) (32-bit) */

loc_003EAA3E: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EA694; /* jge: greater or equal (signed >=) */

loc_003EAA44: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EA694; /* jl: less (signed <) */

loc_003EAA4C: ;
    ebx = eax;
    eax = MEM32(ebp + -40);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = MEM32(ebx + eax);
    _fb = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -44);
    eax = MEM32(ebx + eax);
    _fb = (uint32_t)(MEM32(ebp + -24)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebp + -36); PUSH32(esp, 0x003EAA69u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EAA66u); } /* indirect call */
    }

loc_003EAA69: ;
    MEM32(ebp + -56) = eax;
    eax = MEM32(edi + 4);
    eax = MEM32(eax + ebx);
    _fb = (uint32_t)(MEM32(ebp + -28)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -28);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    eax = MEM32(eax + ebx);
    _fb = (uint32_t)(MEM32(ebp + -32)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -32);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebp + -36); PUSH32(esp, 0x003EAA83u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EAA80u); } /* indirect call */
    }

loc_003EAA83: ;
    ecx = MEM32(ebp + -56);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -60));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebp + -48); PUSH32(esp, 0x003EAA91u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EAA8Eu); } /* indirect call */
    }

loc_003EAA91: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003EAA16; /* jne: not equal / not zero */

loc_003EAA96: ;
    eax = MEM32(ebp + -4);
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + 0x18) = eax;
    eax = MEM32(ebp + 0xC);
    goto loc_003EA69E;

}

/**
 * sub_003EAAA8
 * Original: 0x003EAAA8 - 0x003EAC88 (480 bytes, 172 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003627C3, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EAAA8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EAAA8: ;
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
    eax = MEM32(esi);
    ecx = MEM32(esi + 0x24);
    edx = MEM32(esi + 0x2C);
    MEM32(ebp + -4) = eax;
    eax = MEM32(esi + 0x18);
    ebx = eax + -8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx) (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esi + 4);
    MEM32(ebp + 8) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_003EAAD8; /* jae: above or equal (unsigned >=) */

loc_003EAACF: ;
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003EAB0F;

loc_003EAAD8: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    ebx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    MEM32(ebp + -8) = ebx;
    ebx = MEM32(eax);
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ebp + -4) (32-bit) */
    MEM32(ebp + -12) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_003EAB19; /* jne: not equal / not zero */

loc_003EAAF6: ;
    eax = MEM32(ecx + 0x130);
    eax = ZX16(MEM16(eax + 0x10));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */

loc_003EAB02: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EAB08; /* jge: greater or equal (signed >=) */

loc_003EAB04: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EAB21; /* jge: greater or equal (signed >=) */

loc_003EAB08: ;
    MEM32(esi + 0x6C) = 0x1112;

loc_003EAB0F: ;
    eax = MEM32(esi + 0x70);

loc_003EAB12: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_003EAB19: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0x160) (32-bit) */
    goto loc_003EAB02;

loc_003EAB21: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EAC7D; /* jne: not equal / not zero */

loc_003EAB2A: ;
    eax = MEM32(ecx + 0x130);
    eax = ZX16(MEM16(eax + 0x10));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */

loc_003EAB36: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EAB08; /* jge: greater or equal (signed >=) */

loc_003EAB38: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EAB08; /* jl: less (signed <) */

loc_003EAB3C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EAB78; /* je: equal / zero */

loc_003EAB41: ;
    _fa = (uint32_t)(MEM8(ecx + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x125), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EAB73; /* jne: not equal / not zero */

loc_003EAB4A: ;
    _fa = (uint32_t)(MEM16(esi + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x80), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EAB73; /* je: equal / zero */

loc_003EAB54: ;
    _fa = (uint32_t)(MEM8(ecx + 0x16C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x16C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EAB73; /* je: equal / zero */

loc_003EAB5D: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EAB67u); RECOMP_ABI_CALL(0x003E7A73u, sub_003E7A73); /* call 0x003E7A73 */

loc_003EAB67: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EAB73u); RECOMP_ABI_CALL(0x003E7628u, sub_003E7628); /* call 0x003E7628 */

loc_003EAB73: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EABD7; /* jne: not equal / not zero */

loc_003EAB78: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0xC));
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EAB8Au); RECOMP_ABI_CALL(0x003E4DDEu, sub_003E4DDE); /* call 0x003E4DDE */

loc_003EAB8A: ;
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx + 8);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi + 8);
    MEM32(ebx + ecx) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0xE));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EABABu); RECOMP_ABI_CALL(0x003E4DDEu, sub_003E4DDE); /* call 0x003E4DDE */

loc_003EABAB: ;
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(edi + 0xC);
    MEM32(ebx + ecx) = eax;
    eax = MEM32(edi + 8);
    eax = MEM32(ebx + eax);
    ecx = MEM32(edi);
    MEM32(ebx + ecx) = eax;
    eax = MEM32(edi + 0xC);
    eax = MEM32(ebx + eax);
    ecx = MEM32(edi + 4);
    MEM32(ebx + ecx) = eax;
    ebx = MEM32(ebp + -12);

loc_003EABD7: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003EAC32; /* jne: not equal / not zero */

loc_003EABE0: ;
    _fa = (uint32_t)(MEM16(esi + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x80), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EAC32; /* je: equal / zero */

loc_003EABEA: ;
    eax = MEM32(edi + 0xC);
    eax = MEM32(eax + ebx * 4);
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi + 8);
    eax = MEM32(eax + ebx * 4);
    _fb = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x50); PUSH32(esp, 0x003EAC11u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EAC0Eu); } /* indirect call */
    }

loc_003EAC11: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EAC32; /* je: equal / zero */

loc_003EAC15: ;
    ecx = MEM32(esi + 0x24);
    edx = MEM32(ebp + -8);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x5C;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(ecx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx << 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003EAC2F; /* jg: greater (signed >) */

loc_003EAC29: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EAC32; /* jge: greater or equal (signed >=) */

loc_003EAC2F: ;
    MEM32(ebp + -8) = eax;

loc_003EAC32: ;
    eax = MEM32(edi + 4);
    eax = MEM32(eax + ebx * 4);
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx + 4);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + -4);
    ecx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(edi);
    eax = MEM32(eax + ebx * 4);
    _fb = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x4C); PUSH32(esp, 0x003EAC57u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EAC54u); } /* indirect call */
    }

loc_003EAC57: ;
    ecx = MEM32(ebp + -8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x48); PUSH32(esp, 0x003EAC63u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EAC60u); } /* indirect call */
    }

loc_003EAC63: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 1 (8-bit) */
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = ebx;
    if (TEST_Z(_fa, _fb)) goto loc_003EAC75; /* je: equal / zero */

loc_003EAC72: ;
    MEM32(esi + 0x2C) = ebx;

loc_003EAC75: ;
    eax = MEM32(ebp + 0xC);
    goto loc_003EAB12;

loc_003EAC7D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 0x160) (32-bit) */
    goto loc_003EAB36;

}

/**
 * sub_003EAC88
 * Original: 0x003EAC88 - 0x003EADCC (324 bytes, 112 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003629A3, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EAC88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EAC88: ;
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
    ecx = MEM32(esi);
    edx = MEM32(ecx);
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(ecx + 4);
    ebx = MEM32(esi + 4);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + edx);
    eax = MEM32(eax + ecx);
    MEM32(ebp + -8) = eax;
    eax = MEM32(esi + 0x3C);
    MEM32(ebp + -12) = edx;
    edx = MEM32(esi + 0x18);
    ecx = 0x3FFFFFFF;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edx + ecx * 4;
    edx = MEM32(esi + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EACD5; /* jae: above or equal (unsigned >=) */

loc_003EACC6: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003EADBA;

loc_003EACD5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_L(_fas, _fbs)) goto loc_003EADB2; /* jl: less (signed <) */

loc_003EACDE: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 0xFFFFFFFCu;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    edi = MEM32(eax);
    eax = MEM32(esi + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_003EACFF; /* jne: not equal / not zero */

loc_003EACF1: ;
    edx = MEM32(eax + 0x130);
    edx = ZX16(MEM16(edx + 0x10));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    goto loc_003EAD05;

loc_003EACFF: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x160) (32-bit) */

loc_003EAD05: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EADC0; /* jge: greater or equal (signed >=) */

loc_003EAD0B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EADC0; /* jl: less (signed <) */

loc_003EAD13: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EAD85; /* je: equal / zero */

loc_003EAD17: ;
    _fa = (uint32_t)(MEM8(eax + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x125), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EAD85; /* jne: not equal / not zero */

loc_003EAD20: ;
    _fa = (uint32_t)(MEM16(esi + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x80), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EAD85; /* je: equal / zero */

loc_003EAD2A: ;
    _fa = (uint32_t)(MEM8(eax + 0x16C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EAD85; /* je: equal / zero */

loc_003EAD33: ;
    SET_LO16(ecx, MEM16(esi + 0x82));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xFFFFFFFFu (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EAD78; /* je: equal / zero */

loc_003EAD40: ;
    SET_LO16(eax, MEM16(esi + 0x84));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0xFFFF) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0xFFFF (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EAD78; /* je: equal / zero */

loc_003EAD4D: ;
    eax = SX16(LO16(eax));
    PUSH32(esp, eax);
    ecx = SX16(LO16(ecx));
    PUSH32(esp, edi);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esi + 4));
    MEM32(ebp + 8) = eax;
    MEM32(ebp + -4) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EAD64u); RECOMP_ABI_CALL(0x003E7C1Bu, sub_003E7C1B); /* call 0x003E7C1B */

loc_003EAD64: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EAD78; /* je: equal / zero */

loc_003EAD68: ;
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EAD76u); RECOMP_ABI_CALL(0x003E7726u, sub_003E7726); /* call 0x003E7726 */

loc_003EAD76: ;
    goto loc_003EAD85;

loc_003EAD78: ;
    PUSH32(esp, 3);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x2C));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EAD85u); RECOMP_ABI_CALL(0x003E7628u, sub_003E7628); /* call 0x003E7628 */

loc_003EAD85: ;
    eax = MEM32(ebx + 4);
    eax = MEM32(eax + edi * 4);
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebx);
    eax = MEM32(eax + edi * 4);
    _fb = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -12);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x4C); PUSH32(esp, 0x003EAD9Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EAD99u); } /* indirect call */
    }

loc_003EAD9C: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x48); PUSH32(esp, 0x003EADA5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EADA2u); } /* indirect call */
    }

loc_003EADA5: ;
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x3C), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EACDE; /* jge: greater or equal (signed >=) */

loc_003EADB2: ;
    MEM32(esi + 0x3C) = MEM32(esi + 0x3C) & 0;
    _fa = (uint32_t)(MEM32(esi + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(ebp + 0xC);

loc_003EADB9: ;
    POP32(esp, edi);

loc_003EADBA: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_003EADC0: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1112;
    goto loc_003EADB9;

}

/**
 * sub_003EADCC
 * Original: 0x003EADCC - 0x003EAEC9 (253 bytes, 96 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00362AE7, between)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EADCC(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EADCC: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x18);
    ebx = MEM32(esi + 0x24);
    ecx = eax + -8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EADEF; /* jae: above or equal (unsigned >=) */

loc_003EADE3: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003EAE2D;

loc_003EADEF: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    eax = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x20);
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(ebp + -8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_003EAE33; /* jne: not equal / not zero */

loc_003EAE10: ;
    ecx = MEM32(ebx + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */

loc_003EAE1C: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EAE22; /* jge: greater or equal (signed >=) */

loc_003EAE1E: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EAE3B; /* jge: greater or equal (signed >=) */

loc_003EAE22: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1112;

loc_003EAE2C: ;
    POP32(esp, edi);

loc_003EAE2D: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_003EAE33: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebx + 0x160) (32-bit) */
    goto loc_003EAE1C;

loc_003EAE3B: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EAE58; /* jne: not equal / not zero */

loc_003EAE41: ;
    edi = MEM32(ebx + 0x130);
    edi = ZX16(MEM16(edi + 0x10));
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EAE22; /* jge: greater or equal (signed >=) */

loc_003EAE50: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EAE67; /* jge: greater or equal (signed >=) */

loc_003EAE56: ;
    goto loc_003EAE22;

loc_003EAE58: ;
    edi = MEM32(ebp + 8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 0x160) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EAE22; /* jge: greater or equal (signed >=) */

loc_003EAE63: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EAE22; /* jl: less (signed <) */

loc_003EAE67: ;
    edi = MEM32(eax);
    ebx = MEM32(ecx);
    eax = MEM32(eax + 4);
    ecx = MEM32(ecx + 4);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(edi + edx);
    MEM32(ebp + -4) = edx;
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ebx + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(ebx + edx * 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + -4);
    eax = MEM32(eax + edx);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 0x4C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E83A0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3E83A0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EAEA6; /* je: equal / zero */

loc_003EAE97: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E83A7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3E83A7 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EAEA4; /* je: equal / zero */

loc_003EAE9F: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = ecx; PUSH32(esp, 0x003EAEA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EAEA2u); } /* indirect call */
    }

loc_003EAEA4: ;
    edi = eax;

loc_003EAEA6: ;
    ebx = edi;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((1) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x48); PUSH32(esp, 0x003EAEB4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EAEB1u); } /* indirect call */
    }

loc_003EAEB4: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x48); PUSH32(esp, 0x003EAEC1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EAEBEu); } /* indirect call */
    }

loc_003EAEC1: ;
    eax = MEM32(ebp + 0xC);
    goto loc_003EAE2C;

}

/**
 * sub_003EAEC9
 * Original: 0x003EAEC9 - 0x003EAEFF (54 bytes, 17 insns)
 * Folder: xdk/libc (between: 0x003EADCC and 0x003EAEFF)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAEC9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EAEC9: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003EAEE8; /* jae: above or equal (unsigned >=) */

loc_003EAEDC: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003EAEFC;

loc_003EAEE8: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    SET_LO16(eax, MEM16(eax));
    MEM16(edx + 0x8C) = LO16(eax);
    eax = MEM32(esp + 8);

loc_003EAEFC: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EAEFF
 * Original: 0x003EAEFF - 0x003EAF7D (126 bytes, 46 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00362C1A, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EAEFF(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EAEFF: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax);
    edx = MEM32(eax + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x3C);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x18);
    ecx = 0x3FFFFFFF;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = edx + ecx * 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EAF2B; /* jae: above or equal (unsigned >=) */

loc_003EAF22: ;
    MEM32(eax + 0x6C) = 0x1110;
    goto loc_003EAF78;

loc_003EAF2B: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EAF60; /* jl: less (signed <) */

loc_003EAF2F: ;
    ebx = MEM32(eax + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax) (32-bit) */
    ecx = MEM32(edx);
    ebx = MEM32(eax + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_003EAF4C; /* jne: not equal / not zero */

loc_003EAF3E: ;
    ebx = MEM32(ebx + 0x130);
    ebx = ZX16(MEM16(ebx + 0x10));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    goto loc_003EAF52;

loc_003EAF4C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x160) (32-bit) */

loc_003EAF52: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EAF71; /* jge: greater or equal (signed >=) */

loc_003EAF54: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EAF71; /* jl: less (signed <) */

loc_003EAF58: ;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx) = MEM8(ecx) ^ 1;
    _fa = (uint32_t)(MEM8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_003EAF2F; /* jns: not sign (positive) */

loc_003EAF60: ;
    MEM32(eax + 0x3C) = MEM32(eax + 0x3C) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x3C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(eax + 0x18) = edx;
    eax = MEM32(esp + 0x14);

loc_003EAF6B: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_003EAF71: ;
    MEM32(eax + 0x6C) = 0x1112;

loc_003EAF78: ;
    eax = MEM32(eax + 0x70);
    goto loc_003EAF6B;

}

/**
 * sub_003EAF7D
 * Original: 0x003EAF7D - 0x003EB016 (153 bytes, 59 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00362C98, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EAF7D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EAF7D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    ecx = MEM32(edi + 0x18);
    MEM32(ebp + 8) = ecx;
    ecx = MEM32(eax + 0x18);
    esi = ecx + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EAFA3; /* jae: above or equal (unsigned >=) */

loc_003EAF9A: ;
    MEM32(eax + 0x6C) = 0x1110;
    goto loc_003EAFC8;

loc_003EAFA3: ;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), edi (32-bit) */
    esi = ecx + -4;
    ecx = MEM32(esi);
    if (CMP_NE(_fa, _fb)) goto loc_003EAFD1; /* jne: not equal / not zero */

loc_003EAFAD: ;
    PUSH32(esp, ebx);
    ebx = MEM32(edx + 0x130);
    ebx = ZX16(MEM16(ebx + 0x10));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    POP32(esp, ebx);

loc_003EAFBB: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EAFC1; /* jge: greater or equal (signed >=) */

loc_003EAFBD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EAFD9; /* jge: greater or equal (signed >=) */

loc_003EAFC1: ;
    MEM32(eax + 0x6C) = 0x1112;

loc_003EAFC8: ;
    eax = MEM32(eax + 0x70);

loc_003EAFCB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_003EAFD1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x160) (32-bit) */
    goto loc_003EAFBB;

loc_003EAFD9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), edi (32-bit) */
    edi = MEM32(esi);
    if (CMP_NE(_fa, _fb)) goto loc_003EB00E; /* jne: not equal / not zero */

loc_003EAFE3: ;
    edx = MEM32(edx + 0x130);
    edx = ZX16(MEM16(edx + 0x10));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */

loc_003EAFEF: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EAFC1; /* jge: greater or equal (signed >=) */

loc_003EAFF1: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EAFC1; /* jl: less (signed <) */

loc_003EAFF5: ;
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_003EB006; /* js: sign (negative) */

loc_003EAFFE: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003EAFFF: ;
    MEM8(edx) = MEM8(edx) | 1;
    _fa = (uint32_t)(MEM8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003EAFFF; /* jne: not equal / not zero */

loc_003EB006: ;
    MEM32(eax + 0x18) = esi;
    eax = MEM32(ebp + 0xC);
    goto loc_003EAFCB;

loc_003EB00E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx + 0x160) (32-bit) */
    goto loc_003EAFEF;

}

/**
 * sub_003EB016
 * Original: 0x003EB016 - 0x003EB0B4 (158 bytes, 60 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00362D31, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EB016(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB016: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x24);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    ecx = MEM32(edi + 0x18);
    MEM32(ebp + 8) = ecx;
    ecx = MEM32(eax + 0x18);
    edx = ecx + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EB03C; /* jae: above or equal (unsigned >=) */

loc_003EB033: ;
    MEM32(eax + 0x6C) = 0x1110;
    goto loc_003EB064;

loc_003EB03C: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), edi (32-bit) */
    MEM32(eax + 0x18) = ecx;
    edx = MEM32(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_003EB06D; /* jne: not equal / not zero */

loc_003EB049: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x130);
    ebx = ZX16(MEM16(ebx + 0x10));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    POP32(esp, ebx);

loc_003EB057: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EB05D; /* jge: greater or equal (signed >=) */

loc_003EB059: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EB075; /* jge: greater or equal (signed >=) */

loc_003EB05D: ;
    MEM32(eax + 0x6C) = 0x1112;

loc_003EB064: ;
    eax = MEM32(eax + 0x70);

loc_003EB067: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

loc_003EB06D: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x160) (32-bit) */
    goto loc_003EB057;

loc_003EB075: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), edi (32-bit) */
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_003EB0AC; /* jne: not equal / not zero */

loc_003EB082: ;
    esi = MEM32(esi + 0x130);
    esi = ZX16(MEM16(esi + 0x10));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */

loc_003EB08E: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EB05D; /* jge: greater or equal (signed >=) */

loc_003EB090: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EB05D; /* jl: less (signed <) */

loc_003EB094: ;
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas < 0)) goto loc_003EB0A7; /* js: sign (negative) */

loc_003EB09D: ;
    ecx = edx + 1;

loc_003EB0A0: ;
    MEM8(eax) = MEM8(eax) & 0xFE;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003EB0A0; /* jne: not equal / not zero */

loc_003EB0A7: ;
    eax = MEM32(ebp + 0xC);
    goto loc_003EB067;

loc_003EB0AC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x160) (32-bit) */
    goto loc_003EB08E;

}

/**
 * sub_003EB0B4
 * Original: 0x003EB0B4 - 0x003EB0EE (58 bytes, 19 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00362DCF, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB0B4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB0B4: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx + 0x18);
    eax = MEM32(edx + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003EB0D3; /* jae: above or equal (unsigned >=) */

loc_003EB0C7: ;
    eax = MEM32(edx + 0x70);
    MEM32(edx + 0x6C) = 0x1110;
    goto loc_003EB0EB;

loc_003EB0D3: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x18) = ecx;
    edx = MEM32(eax + 0x68);
    edx = edx & 0xFFFF0000u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx | MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x68) = edx;
    eax = MEM32(esp + 8);

loc_003EB0EB: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EB0EE
 * Original: 0x003EB0EE - 0x003EB12D (63 bytes, 21 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00362E09, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB0EE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB0EE: ;
    edx = MEM32(esp + 4);
    ecx = MEM32(edx + 0x18);
    eax = MEM32(edx + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003EB10D; /* jae: above or equal (unsigned >=) */

loc_003EB101: ;
    eax = MEM32(edx + 0x70);
    MEM32(edx + 0x6C) = 0x1110;
    goto loc_003EB12A;

loc_003EB10D: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x18) = ecx;
    edx = MEM32(eax + 0x68);
    ecx = MEM32(ecx);
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = ecx << 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx | ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    MEM32(eax + 0x68) = edx;
    eax = MEM32(esp + 8);

loc_003EB12A: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EB12D
 * Original: 0x003EB12D - 0x003EB18E (97 bytes, 33 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00362E48, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB12D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB12D: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EB14B; /* jae: above or equal (unsigned >=) */

loc_003EB13F: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003EB18A;

loc_003EB14B: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    esi = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    _fa = (uint32_t)(MEM8(edx + 0x124)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x124), 0 (8-bit) */
    eax = MEM32(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003EB186; /* je: equal / zero */

loc_003EB164: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EB16F; /* jne: not equal / not zero */

loc_003EB169: ;
    MEM32(edx + 0x6C) = MEM32(edx + 0x6C) & 0xFFFFFFFEu;
    _fa = (uint32_t)(MEM32(edx + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003EB183;

loc_003EB16F: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EB17A; /* jne: not equal / not zero */

loc_003EB174: ;
    MEM32(edx + 0x6C) = MEM32(edx + 0x6C) & 0xFFFFFFFDu;
    _fa = (uint32_t)(MEM32(edx + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003EB183;

loc_003EB17A: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 3 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EB183; /* jne: not equal / not zero */

loc_003EB17F: ;
    MEM32(edx + 0x6C) = MEM32(edx + 0x6C) & 0xFFFFFFFBu;
    _fa = (uint32_t)(MEM32(edx + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003EB183: ;
    MEM32(edx + 0x6C) = MEM32(edx + 0x6C) | eax;
    _fa = (uint32_t)(MEM32(edx + 0x6C)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003EB186: ;
    eax = MEM32(esp + 0xC);

loc_003EB18A: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EB18E
 * Original: 0x003EB18E - 0x003EB1BA (44 bytes, 15 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363711, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB18E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB18E: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003EB1AD; /* jae: above or equal (unsigned >=) */

loc_003EB1A1: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_003EB1B7;

loc_003EB1AD: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = ecx;
    eax = MEM32(esp + 8);

loc_003EB1B7: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EB1BA
 * Original: 0x003EB1BA - 0x003EB203 (73 bytes, 29 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00362EA9, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EB1BA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB1BA: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x24);
    esi = eax + edx * 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edi + 0x15C) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003EB1E2; /* jbe: below or equal (unsigned <=) */

loc_003EB1D6: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1111;
    goto loc_003EB1FD;

loc_003EB1E2: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB1F7; /* je: equal / zero */

loc_003EB1E6: ;
    esi = MEM32(ebp + 0x10);
    esi = ZX8(MEM8(esi));
    MEM32(eax) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x10) = MEM32(ebp + 0x10) + 1;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003EB1E6; /* jne: not equal / not zero */

loc_003EB1F7: ;
    MEM32(ecx + 0x18) = eax;
    eax = MEM32(ebp + 0x10);

loc_003EB1FD: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EB203
 * Original: 0x003EB203 - 0x003EB25E (91 bytes, 35 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00362EF2, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB203(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB203: ;
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    edx = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x24);
    ecx = edx + eax * 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi + 0x15C) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003EB22A; /* jbe: below or equal (unsigned <=) */

loc_003EB21E: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1111;
    goto loc_003EB259;

loc_003EB22A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB252; /* je: equal / zero */

loc_003EB22E: ;
    edi = eax;
    eax = MEM32(esp + 0x14);
    PUSH32(esp, ebx);

loc_003EB235: ;
    SET_LO16(ecx, ZX8(MEM8(eax)));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(ebx, ZX8(MEM8(eax)));
    ecx = ecx << 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = SX16(LO16(ecx));
    MEM32(edx) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003EB235; /* jne: not equal / not zero */

loc_003EB24F: ;
    POP32(esp, ebx);
    goto loc_003EB256;

loc_003EB252: ;
    eax = MEM32(esp + 0x14);

loc_003EB256: ;
    MEM32(esi + 0x18) = edx;

loc_003EB259: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EB25E
 * Original: 0x003EB25E - 0x003EB294 (54 bytes, 17 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00362F4D, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB25E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB25E: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx + 0x15C) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003EB280; /* jbe: below or equal (unsigned <=) */

loc_003EB274: ;
    MEM32(eax + 0x6C) = 0x1111;
    eax = MEM32(eax + 0x70);
    goto loc_003EB290;

loc_003EB280: ;
    edx = MEM32(esp + 0xC);
    esi = ZX8(MEM8(edx));
    MEM32(ecx) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 4;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + 1;

loc_003EB290: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EB294
 * Original: 0x003EB294 - 0x003EB2AE (26 bytes, 7 insns)
 * Folder: xdk/libc (between: 0x003EB25E and 0x003EB2C4)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB294(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB294: ;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xFFFFFF51u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFF51u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x003EB2ABu); RECOMP_ABI_CALL(0x003EB1BAu, sub_003EB1BA); /* call 0x003EB1BA */

loc_003EB2AB: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EB2AE
 * Original: 0x003EB2AE - 0x003EB2C4 (22 bytes, 8 insns)
 * Folder: xdk/libc (between: 0x003EB25E and 0x003EB2C4)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB2AE(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB2AE: ;
    eax = MEM32(esp + 8);
    ecx = ZX8(MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x003EB2C1u); RECOMP_ABI_CALL(0x003EB1BAu, sub_003EB1BA); /* call 0x003EB1BA */

loc_003EB2C1: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EB2C4
 * Original: 0x003EB2C4 - 0x003EB30A (70 bytes, 24 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00362FB3, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB2C4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB2C4: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x18);
    edx = esi + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0x15C) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003EB2E6; /* jbe: below or equal (unsigned <=) */

loc_003EB2DA: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1111;
    goto loc_003EB306;

loc_003EB2E6: ;
    edx = MEM32(esp + 0xC);
    SET_LO16(eax, ZX8(MEM8(edx)));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    SET_LO16(edi, ZX8(MEM8(edx)));
    eax = eax << 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = SX16(LO16(eax));
    MEM32(esi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx + 0x18) = MEM32(ecx + 0x18) + 4;
    _fa = (uint32_t)(MEM32(ecx + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + 1;
    POP32(esp, edi);

loc_003EB306: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EB30A
 * Original: 0x003EB30A - 0x003EB324 (26 bytes, 7 insns)
 * Folder: xdk/libc (between: 0x003EB2C4 and 0x003EB33A)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB30A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB30A: ;
    PUSH32(esp, MEM32(esp + 8));
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xFFFFFF49u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFF49u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x003EB321u); RECOMP_ABI_CALL(0x003EB203u, sub_003EB203); /* call 0x003EB203 */

loc_003EB321: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EB324
 * Original: 0x003EB324 - 0x003EB33A (22 bytes, 8 insns)
 * Folder: xdk/libc (between: 0x003EB2C4 and 0x003EB33A)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB324(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB324: ;
    eax = MEM32(esp + 8);
    ecx = ZX8(MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x003EB337u); RECOMP_ABI_CALL(0x003EB203u, sub_003EB203); /* call 0x003EB203 */

loc_003EB337: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EB33A
 * Original: 0x003EB33A - 0x003EB393 (89 bytes, 31 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363029, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB33A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB33A: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EB355; /* jae: above or equal (unsigned >=) */

loc_003EB34C: ;
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003EB38C;

loc_003EB355: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    esi = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    MEM32(ecx + 0x18) = eax;
    edi = MEM32(edx + 0x130);
    edi = ZX16(MEM16(edi + 0x12));
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    POP32(esp, edi);
    if (CMP_GE(_fas, _fbs)) goto loc_003EB385; /* jge: greater or equal (signed >=) */

loc_003EB375: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EB385; /* jl: less (signed <) */

loc_003EB379: ;
    ecx = MEM32(edx + 4);
    MEM32(ecx + eax * 4) = esi;
    eax = MEM32(esp + 0xC);
    goto loc_003EB38F;

loc_003EB385: ;
    MEM32(ecx + 0x6C) = 0x1119;

loc_003EB38C: ;
    eax = MEM32(ecx + 0x70);

loc_003EB38F: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EB393
 * Original: 0x003EB393 - 0x003EB419 (134 bytes, 44 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363082, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB393(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB393: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x18);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = edx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EB3B1; /* jae: above or equal (unsigned >=) */

loc_003EB3A5: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_003EB415;

loc_003EB3B1: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = edx;
    esi = MEM32(ecx + 0x130);
    esi = ZX16(MEM16(esi + 0x12));
    PUSH32(esp, edi);
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EB40A; /* jge: greater or equal (signed >=) */

loc_003EB3C8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EB40A; /* jl: less (signed <) */

loc_003EB3CC: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 8 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EB3F8; /* jne: not equal / not zero */

loc_003EB3D1: ;
    _fa = (uint32_t)(MEM8(ecx + 0x16C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x16C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EB3F8; /* je: equal / zero */

loc_003EB3DA: ;
    _fa = (uint32_t)(MEM8(ecx + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003EB3F8; /* jne: not equal / not zero */

loc_003EB3E0: ;
    esi = ecx + 0x16E;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fb = (uint32_t)(0x800) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(esi), 0x800 (16-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003EB3F8; /* jbe: below or equal (unsigned <=) */

loc_003EB3ED: ;
    MEM8(esi) = MEM8(esi) | 8;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    ecx = MEM32(eax + 0x18);
    MEM32(ecx) = MEM32(ecx) & 0;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003EB400;

loc_003EB3F8: ;
    ecx = MEM32(ecx + 4);
    ecx = MEM32(ecx + edi * 4);
    MEM32(edx) = ecx;

loc_003EB400: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 4;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x10);
    goto loc_003EB414;

loc_003EB40A: ;
    MEM32(eax + 0x6C) = 0x1119;
    eax = MEM32(eax + 0x70);

loc_003EB414: ;
    POP32(esp, edi);

loc_003EB415: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EB419
 * Original: 0x003EB419 - 0x003EB493 (122 bytes, 44 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363108, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB419(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB419: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x24);
    edx = eax + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EB437; /* jae: above or equal (unsigned >=) */

loc_003EB42B: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003EB48F;

loc_003EB437: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    eax = ZX16(MEM16(ecx + 0x134));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EB483; /* jge: greater or equal (signed >=) */

loc_003EB454: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EB483; /* jl: less (signed <) */

loc_003EB458: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB474; /* je: equal / zero */

loc_003EB45C: ;
    _fa = (uint32_t)(MEM32(esi + 0x58)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E845F) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x58), 0x3E845F (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB474; /* je: equal / zero */

loc_003EB465: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EB46Bu); RECOMP_ABI_CALL(0x003E83AEu, sub_003E83AE); /* call 0x003E83AE */

loc_003EB46B: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003EB472u); RECOMP_ABI_CALL(0x003E4F65u, sub_003E4F65); /* call 0x003E4F65 */

loc_003EB472: ;
    ebx = eax;

loc_003EB474: ;
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 8);
    MEM32(eax + edi * 4) = ebx;
    eax = MEM32(esp + 0x14);
    goto loc_003EB48D;

loc_003EB483: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x111B;

loc_003EB48D: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_003EB48F: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EB493
 * Original: 0x003EB493 - 0x003EB4FA (103 bytes, 35 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363182, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB493(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB493: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x24);
    edx = eax + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EB4B1; /* jae: above or equal (unsigned >=) */

loc_003EB4A5: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003EB4F6;

loc_003EB4B1: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    eax = ZX16(MEM16(esi + 0x134));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EB4EB; /* jge: greater or equal (signed >=) */

loc_003EB4CD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EB4EB; /* jl: less (signed <) */

loc_003EB4D1: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    eax = esi + 0x100;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0xAC); PUSH32(esp, 0x003EB4DFu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EB4D9u); } /* indirect call */
    }

loc_003EB4DF: ;
    ecx = MEM32(esi + 8);
    MEM32(ecx + edi * 4) = eax;
    eax = MEM32(esp + 0x10);
    goto loc_003EB4F5;

loc_003EB4EB: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x111B;

loc_003EB4F5: ;
    POP32(esp, edi);

loc_003EB4F6: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EB4FA
 * Original: 0x003EB4FA - 0x003EB560 (102 bytes, 37 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003631E9, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB4FA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB4FA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x24);
    edx = eax + -4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EB518; /* jae: above or equal (unsigned >=) */

loc_003EB50C: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003EB55C;

loc_003EB518: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, edi);
    edi = MEM32(eax);
    eax = ZX16(MEM16(ecx + 0x134));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EB534; /* jl: less (signed <) */

loc_003EB52C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFF (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003EB538; /* jg: greater (signed >) */

loc_003EB534: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EB544; /* jge: greater or equal (signed >=) */

loc_003EB538: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x111B;
    goto loc_003EB55B;

loc_003EB544: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x58); PUSH32(esp, 0x003EB549u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EB546u); } /* indirect call */
    }

loc_003EB549: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x58); PUSH32(esp, 0x003EB54Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EB54Bu); } /* indirect call */
    }

loc_003EB54E: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 4;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x10);

loc_003EB55B: ;
    POP32(esp, edi);

loc_003EB55C: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EB560
 * Original: 0x003EB560 - 0x003EB5ED (141 bytes, 48 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036324F, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB560(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB560: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x24);
    ecx = eax + -4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EB57B; /* jae: above or equal (unsigned >=) */

loc_003EB572: ;
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003EB5A4;

loc_003EB57B: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    ecx = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EB5AB; /* jne: not equal / not zero */

loc_003EB58B: ;
    edx = MEM32(edx + 0x130);
    edx = ZX16(MEM16(edx + 0x10));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */

loc_003EB597: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EB59D; /* jge: greater or equal (signed >=) */

loc_003EB599: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EB5B3; /* jge: greater or equal (signed >=) */

loc_003EB59D: ;
    MEM32(esi + 0x6C) = 0x1112;

loc_003EB5A4: ;
    eax = MEM32(esi + 0x70);

loc_003EB5A7: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

loc_003EB5AB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x160) (32-bit) */
    goto loc_003EB597;

loc_003EB5B3: ;
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(MEM8(esp + 0x10)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esp + 0x10), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EB5CF; /* je: equal / zero */

loc_003EB5BD: ;
    edx = MEM32(eax + 0xC);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edx + ecx));
    eax = MEM32(eax + 8);
    PUSH32(esp, MEM32(eax + ecx));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x50); PUSH32(esp, 0x003EB5CDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EB5CAu); } /* indirect call */
    }

loc_003EB5CD: ;
    goto loc_003EB5DE;

loc_003EB5CF: ;
    edx = MEM32(eax + 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(edx + ecx));
    eax = MEM32(eax);
    PUSH32(esp, MEM32(eax + ecx));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x4C); PUSH32(esp, 0x003EB5DEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EB5DBu); } /* indirect call */
    }

loc_003EB5DE: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 4;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0xC);
    goto loc_003EB5A7;

}

/**
 * sub_003EB5ED
 * Original: 0x003EB5ED - 0x003EB69C (175 bytes, 68 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003632DC, between)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EB5ED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB5ED: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x24);
    edx = eax + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EB60E; /* jae: above or equal (unsigned >=) */

loc_003EB602: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003EB64A;

loc_003EB60E: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = MEM32(esi + 8);
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), edi (32-bit) */
    MEM32(esi + 0x18) = eax;
    eax = MEM32(eax);
    MEM32(ebp + 8) = edx;
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003EB64F; /* jne: not equal / not zero */

loc_003EB62D: ;
    ecx = MEM32(ecx + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */

loc_003EB639: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EB63F; /* jge: greater or equal (signed >=) */

loc_003EB63B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EB657; /* jge: greater or equal (signed >=) */

loc_003EB63F: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1112;

loc_003EB649: ;
    POP32(esp, edi);

loc_003EB64A: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_003EB64F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x160) (32-bit) */
    goto loc_003EB639;

loc_003EB657: ;
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(edi + 4);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(eax + ebx));
    eax = MEM32(edi);
    PUSH32(esp, MEM32(eax + ebx));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x4C); PUSH32(esp, 0x003EB66Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EB669u); } /* indirect call */
    }

loc_003EB66C: ;
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x48); PUSH32(esp, 0x003EB67Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EB677u); } /* indirect call */
    }

loc_003EB67A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EB696; /* jne: not equal / not zero */

loc_003EB67F: ;
    eax = MEM32(edi);
    eax = MEM32(ebx + eax);
    ecx = MEM32(edi + 8);
    MEM32(ebx + ecx) = eax;
    eax = MEM32(edi + 4);
    ecx = MEM32(edi + 0xC);
    eax = MEM32(ebx + eax);
    MEM32(ebx + ecx) = eax;

loc_003EB696: ;
    eax = MEM32(ebp + 0xC);
    POP32(esp, ebx);
    goto loc_003EB649;

}

/**
 * sub_003EB69C
 * Original: 0x003EB69C - 0x003EB8A2 (518 bytes, 176 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036338B, between)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EB69C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB69C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x24);
    ecx = eax + -8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EB6BF; /* jae: above or equal (unsigned >=) */

loc_003EB6B3: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003EB6F9;

loc_003EB6BF: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    ebx = MEM32(esi + 0x20);
    MEM32(ebp + -8) = eax;
    eax = MEM32(esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    MEM32(ebp + 8) = ecx;
    MEM32(ebp + -4) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_003EB6FF; /* jne: not equal / not zero */

loc_003EB6DC: ;
    ecx = MEM32(edi + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */

loc_003EB6E8: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EB6EE; /* jge: greater or equal (signed >=) */

loc_003EB6EA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EB707; /* jge: greater or equal (signed >=) */

loc_003EB6EE: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1112;

loc_003EB6F8: ;
    POP32(esp, ebx);

loc_003EB6F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_003EB6FF: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0x160) (32-bit) */
    goto loc_003EB6E8;

loc_003EB707: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EB7A9; /* jne: not equal / not zero */

loc_003EB712: ;
    edx = MEM32(edi + 0x130);
    edx = ZX16(MEM16(edx + 0x10));
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EB6EE; /* jge: greater or equal (signed >=) */

loc_003EB721: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EB6EE; /* jl: less (signed <) */

loc_003EB727: ;
    edx = MEM32(ebp + -4);

loc_003EB72A: ;
    ebx = MEM32(ebp + 0x10);
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ebx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EB845; /* je: equal / zero */

loc_003EB737: ;
    ebx = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB814; /* je: equal / zero */

loc_003EB742: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB814; /* je: equal / zero */

loc_003EB74A: ;
    _fa = (uint32_t)(MEM8(edi + 0x14D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x14D), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EB814; /* jne: not equal / not zero */

loc_003EB757: ;
    _fa = (uint32_t)(MEM8(edi + 0x12C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x12C), 0 (8-bit) */
    ecx = MEM32(ecx + 0x14);
    if (CMP_EQ(_fa, _fb)) goto loc_003EB7C5; /* je: equal / zero */

loc_003EB763: ;
    ebx = MEM32(ebp + 8);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 0x10) = edx;
    edx = MEM32(ecx + edx);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 8) = ebx;
    ebx = MEM32(eax + 0x14);
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ebx + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ebx + ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(ebp + 0x10);
    eax = MEM32(eax + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(esi + 4);
    edx = MEM32(edx + 0x10);
    edx = MEM32(edx + ebx);
    _fb = (uint32_t)(MEM32(eax + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(eax + ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x50); PUSH32(esp, 0x003EB796u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EB793u); } /* indirect call */
    }

loc_003EB796: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = edi + 0x100;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0xAC); PUSH32(esp, 0x003EB7A4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EB79Eu); } /* indirect call */
    }

loc_003EB7A4: ;
    goto loc_003EB88F;

loc_003EB7A9: ;
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x160) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EB6EE; /* jge: greater or equal (signed >=) */

loc_003EB7B8: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EB6EE; /* jl: less (signed <) */

loc_003EB7C0: ;
    goto loc_003EB72A;

loc_003EB7C5: ;
    eax = MEM32(eax + 0x14);
    ebx = edx;
    edx = MEM32(ebp + 8);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ecx + ebx);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(eax + edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi + 0xF0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    MEM32(ebp + 8) = edx;
    { uint32_t _icall_target = MEM32(edi + 0xA8); PUSH32(esp, 0x003EB7EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EB7E4u); } /* indirect call */
    }

loc_003EB7EA: ;
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + 0x10);
    ecx = MEM32(ecx + ebx);
    edx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(esi);
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(MEM32(eax + edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi + 0xE0;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0xA4); PUSH32(esp, 0x003EB80Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EB807u); } /* indirect call */
    }

loc_003EB80D: ;
    PUSH32(esp, eax);

loc_003EB80E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x50); PUSH32(esp, 0x003EB812u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EB80Fu); } /* indirect call */
    }

loc_003EB812: ;
    goto loc_003EB88F;

loc_003EB814: ;
    edi = MEM32(ebp + 8);
    ebx = MEM32(eax + 0xC);
    eax = MEM32(eax + 8);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + 8) = edi;
    edi = MEM32(ecx + 0xC);
    ecx = MEM32(ecx + 8);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = MEM32(edi + edx);
    MEM32(ebp + 0x10) = edx;
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ebx + edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(ebx + edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    ecx = MEM32(ecx + edi);
    _fb = (uint32_t)(MEM32(eax + edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    goto loc_003EB80E;

loc_003EB845: ;
    edi = MEM32(ebp + 8);
    ebx = MEM32(eax + 4);
    eax = MEM32(eax);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(ebx + edx);
    MEM32(ebp + 8) = edi;
    edi = MEM32(ecx + 4);
    ecx = MEM32(ecx);
    MEM32(ebp + 0x10) = edx;
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(edi + edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(edi + edx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(ebp + 0x10);
    eax = MEM32(edi + eax);
    _fb = (uint32_t)(MEM32(ecx + edx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x4C); PUSH32(esp, 0x003EB876u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EB873u); } /* indirect call */
    }

loc_003EB876: ;
    ecx = MEM32(esi + 0x24);
    SET_LO8(ecx, MEM8(ecx + 0x16E));
    SET_LO8(ecx, LO8(ecx) & 0xB);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0xB) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0xB (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EB88F; /* jne: not equal / not zero */

loc_003EB887: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x40 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EB88F; /* jne: not equal / not zero */

loc_003EB88C: ;
    PUSH32(esp, 0x41);
    POP32(esp, eax);

loc_003EB88F: ;
    ecx = MEM32(ebp + -8);
    MEM32(ecx) = eax;
    eax = MEM32(ebp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = ecx;
    goto loc_003EB6F8;

}

/**
 * sub_003EB8A2
 * Original: 0x003EB8A2 - 0x003EB8F9 (87 bytes, 29 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363591, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB8A2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB8A2: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(MEM8(eax + 0x12C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x12C), 0 (8-bit) */
    PUSH32(esp, edi);
    SET_LO16(edi, MEM16(eax + 0xC));
    if (CMP_NE(_fa, _fb)) goto loc_003EB8CA; /* jne: not equal / not zero */

loc_003EB8B8: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EB8BEu); RECOMP_ABI_CALL(0x003E83AEu, sub_003E83AE); /* call 0x003E83AE */

loc_003EB8BE: ;
    PUSH32(esp, eax);
    eax = ZX16(LO16(edi));
    PUSH32(esp, eax);
    PUSH32(esp, 0x003EB8C8u); RECOMP_ABI_CALL(0x003E4EEDu, sub_003E4EED); /* call 0x003E4EED */

loc_003EB8C8: ;
    edi = eax;

loc_003EB8CA: ;
    eax = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x24);
    ecx = eax + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx + 0x15C) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003EB8E7; /* jbe: below or equal (unsigned <=) */

loc_003EB8DB: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1111;
    goto loc_003EB8F4;

loc_003EB8E7: ;
    ecx = ZX16(LO16(edi));
    MEM32(eax) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 4;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x10);

loc_003EB8F4: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EB8F9
 * Original: 0x003EB8F9 - 0x003EB92D (52 bytes, 16 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003635E8, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB8F9(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB8F9: ;
    eax = MEM32(esp + 4);
    edx = MEM32(eax + 0x18);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = edx + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x15C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 0x15C) (32-bit) */
    POP32(esp, esi);
    if (CMP_BE(_fa, _fb)) goto loc_003EB91C; /* jbe: below or equal (unsigned <=) */

loc_003EB910: ;
    MEM32(eax + 0x6C) = 0x1111;
    eax = MEM32(eax + 0x70);
    goto loc_003EB92A;

loc_003EB91C: ;
    ecx = ZX16(MEM16(ecx + 0xE));
    MEM32(edx) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + 0x18) = MEM32(eax + 0x18) + 4;
    _fa = (uint32_t)(MEM32(eax + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 8);

loc_003EB92A: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EB92D
 * Original: 0x003EB92D - 0x003EB9F8 (203 bytes, 63 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036361C, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB92D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EB92D: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x18);
    ecx = MEM32(edx + 0x24);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax + -4;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EB951; /* jae: above or equal (unsigned >=) */

loc_003EB942: ;
    eax = MEM32(edx + 0x70);
    MEM32(edx + 0x6C) = 0x1110;
    goto loc_003EB9F3;

loc_003EB951: ;
    esi = eax + -4;
    MEM32(edx + 0x18) = esi;
    eax = MEM32(esi);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EB960; /* je: equal / zero */

loc_003EB95D: ;
    PUSH32(esp, 0x25);
    POP32(esp, ebx);

loc_003EB960: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EB973; /* je: equal / zero */

loc_003EB964: ;
    _fa = (uint32_t)(MEM8(ecx + 0x119)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x119), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EB973; /* je: equal / zero */

loc_003EB96D: ;
    ebx = ebx | 0x100;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003EB973: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    PUSH32(esp, edi);
    edi = 0x200;
    if (TEST_Z(_fa, _fb)) goto loc_003EB988; /* je: equal / zero */

loc_003EB97D: ;
    _fa = (uint32_t)(MEM8(ecx + 0x119)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x119), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EB988; /* je: equal / zero */

loc_003EB986: ;
    ebx = ebx | edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003EB988: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x20) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x20 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EB99B; /* je: equal / zero */

loc_003EB98C: ;
    _fa = (uint32_t)(MEM32(ecx + 0x148)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0x148), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EB99B; /* je: equal / zero */

loc_003EB995: ;
    ebx = ebx | 0x1000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003EB99B: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EB9AE; /* je: equal / zero */

loc_003EB99F: ;
    _fa = (uint32_t)(MEM8(ecx + 0x16C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x16C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EB9AE; /* je: equal / zero */

loc_003EB9A8: ;
    ebx = ebx | 0x2000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003EB9AE: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_003EB9C1; /* jns: not sign (positive) */

loc_003EB9B2: ;
    _fa = (uint32_t)(MEM8(ecx + 0x16C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x16C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EB9C1; /* je: equal / zero */

loc_003EB9BB: ;
    ebx = ebx | 0x4000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003EB9C1: ;
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EB9D5; /* je: equal / zero */

loc_003EB9C6: ;
    _fa = (uint32_t)(MEM8(ecx + 0x16C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x16C), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EB9D5; /* je: equal / zero */

loc_003EB9CF: ;
    ebx = ebx | 0x8000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003EB9D5: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test edi, eax (32-bit) */
    POP32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_003EB9E9; /* je: equal / zero */

loc_003EB9DA: ;
    _fa = (uint32_t)(MEM8(ecx + 0x16C)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x16C), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EB9E9; /* je: equal / zero */

loc_003EB9E3: ;
    ebx = ebx | 0x10000;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_003EB9E9: ;
    eax = MEM32(esp + 0x10);
    MEM32(esi) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edx + 0x18) = MEM32(edx + 0x18) + 4;
    _fa = (uint32_t)(MEM32(edx + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EB9F3: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EB9F8
 * Original: 0x003EB9F8 - 0x003EBA0D (21 bytes, 5 insns)
 * Folder: xdk/libc (between: 0x003EB92D and 0x003EBA22)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EB9F8(void)
{

loc_003EB9F8: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x24);
    MEM8(eax + 0x90) = 1;
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBA0D
 * Original: 0x003EBA0D - 0x003EBA22 (21 bytes, 5 insns)
 * Folder: xdk/libc (between: 0x003EB92D and 0x003EBA22)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBA0D(void)
{

loc_003EBA0D: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 0x24);
    MEM8(eax + 0x90) = 0;
    eax = MEM32(esp + 8);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBA22
 * Original: 0x003EBA22 - 0x003EBA5B (57 bytes, 20 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036373D, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBA22(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBA22: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003EBA41; /* jae: above or equal (unsigned >=) */

loc_003EBA35: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003EBA58;

loc_003EBA41: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(eax + -4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    SET_LO8(edx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    MEM32(eax + -4) = edx;
    eax = MEM32(esp + 8);

loc_003EBA58: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBA5B
 * Original: 0x003EBA5B - 0x003EBA94 (57 bytes, 20 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363776, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBA5B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBA5B: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003EBA7A; /* jae: above or equal (unsigned >=) */

loc_003EBA6E: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003EBA91;

loc_003EBA7A: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(eax + -4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    MEM32(eax + -4) = edx;
    eax = MEM32(esp + 8);

loc_003EBA91: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBA94
 * Original: 0x003EBA94 - 0x003EBACD (57 bytes, 20 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003637AF, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBA94(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBA94: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003EBAB3; /* jae: above or equal (unsigned >=) */

loc_003EBAA7: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003EBACA;

loc_003EBAB3: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(eax + -4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    SET_LO8(edx, (CMP_G(_fas, _fbs)) ? 1 : 0); /* setg */
    MEM32(eax + -4) = edx;
    eax = MEM32(esp + 8);

loc_003EBACA: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBACD
 * Original: 0x003EBACD - 0x003EBB06 (57 bytes, 20 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003637E8, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBACD(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBACD: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003EBAEC; /* jae: above or equal (unsigned >=) */

loc_003EBAE0: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003EBB03;

loc_003EBAEC: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(eax + -4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    SET_LO8(edx, (CMP_GE(_fas, _fbs)) ? 1 : 0); /* setge */
    MEM32(eax + -4) = edx;
    eax = MEM32(esp + 8);

loc_003EBB03: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBB06
 * Original: 0x003EBB06 - 0x003EBB3F (57 bytes, 21 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363821, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBB06(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_003EBB06: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    _cf = (int)(_fa < _fb);
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003EBB25; /* jae: above or equal (unsigned >=) */

loc_003EBB19: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003EBB3C;

loc_003EBB25: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xFFFFFFFCu)) >> 32) & 1);
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(eax + -4);
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(ecx) < (uint32_t)(MEM32(eax)));
    ecx = ecx - MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((ecx) != 0);
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(eax + -4) = ecx;
    eax = MEM32(esp + 8);

loc_003EBB3C: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBB3F
 * Original: 0x003EBB3F - 0x003EBB78 (57 bytes, 20 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036385A, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBB3F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBB3F: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003EBB5E; /* jae: above or equal (unsigned >=) */

loc_003EBB52: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003EBB75;

loc_003EBB5E: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(eax + -4);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    MEM32(eax + -4) = edx;
    eax = MEM32(esp + 8);

loc_003EBB75: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBB78
 * Original: 0x003EBB78 - 0x003EBBB3 (59 bytes, 22 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363893, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBB78(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBB78: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003EBB97; /* jae: above or equal (unsigned >=) */

loc_003EBB8B: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003EBBB0;

loc_003EBB97: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -4), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EBBA9; /* je: equal / zero */

loc_003EBBA4: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EBBA9; /* je: equal / zero */

loc_003EBBA8: ;
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003EBBA9: ;
    MEM32(eax + -4) = ecx;
    eax = MEM32(esp + 8);

loc_003EBBB0: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBBB3
 * Original: 0x003EBBB3 - 0x003EBBF0 (61 bytes, 23 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003638CE, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBBB3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBBB3: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003EBBD2; /* jae: above or equal (unsigned >=) */

loc_003EBBC6: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003EBBED;

loc_003EBBD2: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -4), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EBBE3; /* jne: not equal / not zero */

loc_003EBBDF: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EBBE6; /* je: equal / zero */

loc_003EBBE3: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003EBBE6: ;
    MEM32(eax + -4) = ecx;
    eax = MEM32(esp + 8);

loc_003EBBED: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBBF0
 * Original: 0x003EBBF0 - 0x003EBC21 (49 bytes, 17 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036390B, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBBF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBBF0: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003EBC0F; /* jae: above or equal (unsigned >=) */

loc_003EBC03: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003EBC1E;

loc_003EBC0F: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax + -4) = MEM32(eax + -4) + ecx;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 8);

loc_003EBC1E: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBC21
 * Original: 0x003EBC21 - 0x003EBC52 (49 bytes, 17 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036393C, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBC21(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBC21: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003EBC40; /* jae: above or equal (unsigned >=) */

loc_003EBC34: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003EBC4F;

loc_003EBC40: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(eax + -4) = MEM32(eax + -4) - ecx;
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 8);

loc_003EBC4F: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBC52
 * Original: 0x003EBC52 - 0x003EBC8B (57 bytes, 19 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036396D, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBC52(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBC52: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EBC70; /* jae: above or equal (unsigned >=) */

loc_003EBC64: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_003EBC87;

loc_003EBC70: ;
    esi = ecx + -4;
    MEM32(eax + 0x18) = esi;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(esi + -4));
    PUSH32(esp, 0x003EBC80u); RECOMP_ABI_CALL(0x003E4E39u, sub_003E4E39); /* call 0x003E4E39 */

loc_003EBC80: ;
    MEM32(esi + -4) = eax;
    eax = MEM32(esp + 0xC);

loc_003EBC87: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBC76
 * Original: 0x003EBC76 - 0x003EBC8B (21 bytes, 7 insns)
 * Folder: xdk/libc (between: 0x003EBC52 and 0x003EBC8B)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBC76(void)
{

loc_003EBC76: ;
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(esi + -4));
    PUSH32(esp, 0x003EBC80u); RECOMP_ABI_CALL(0x003E4E39u, sub_003E4E39); /* call 0x003E4E39 */

loc_003EBC80: ;
    MEM32(esi + -4) = eax;
    eax = MEM32(esp + 0xC);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBC8B
 * Original: 0x003EBC8B - 0x003EBCD2 (71 bytes, 25 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003639A6, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBC8B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBC8B: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EBCA6; /* jae: above or equal (unsigned >=) */

loc_003EBC9D: ;
    MEM32(eax + 0x6C) = 0x1110;
    goto loc_003EBCB9;

loc_003EBCA6: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = ecx;
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EBCBE; /* jne: not equal / not zero */

loc_003EBCB2: ;
    MEM32(eax + 0x6C) = 0x1103;

loc_003EBCB9: ;
    eax = MEM32(eax + 0x70);
    goto loc_003EBCCE;

loc_003EBCBE: ;
    eax = MEM32(ecx + -4);
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)esi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)esi)); }
    MEM32(ecx + -4) = eax;
    eax = MEM32(esp + 0xC);

loc_003EBCCE: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBCD2
 * Original: 0x003EBCD2 - 0x003EBD08 (54 bytes, 19 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003639ED, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBCD2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBCD2: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003EBCF1; /* jae: above or equal (unsigned >=) */

loc_003EBCE5: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003EBD05;

loc_003EBCF1: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -4), ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EBD01; /* jge: greater or equal (signed >=) */

loc_003EBCFE: ;
    MEM32(eax + -4) = ecx;

loc_003EBD01: ;
    eax = MEM32(esp + 8);

loc_003EBD05: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBD08
 * Original: 0x003EBD08 - 0x003EBD3E (54 bytes, 19 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363A23, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBD08(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBD08: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003EBD27; /* jae: above or equal (unsigned >=) */

loc_003EBD1B: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003EBD3B;

loc_003EBD27: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    ecx = MEM32(eax);
    _fa = (uint32_t)(MEM32(eax + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + -4), ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003EBD37; /* jle: less or equal (signed <=) */

loc_003EBD34: ;
    MEM32(eax + -4) = ecx;

loc_003EBD37: ;
    eax = MEM32(esp + 8);

loc_003EBD3B: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBD3E
 * Original: 0x003EBD3E - 0x003EBD78 (58 bytes, 20 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363A59, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBD3E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBD3E: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x18);
    edx = esi + -4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EBD5C; /* jae: above or equal (unsigned >=) */

loc_003EBD50: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_003EBD74;

loc_003EBD5C: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + -4));
    PUSH32(esp, eax);
    PUSH32(esp, 0x003EBD67u); RECOMP_ABI_CALL(0x003E8016u, sub_003E8016); /* call 0x003E8016 */

loc_003EBD67: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((6) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + -4) = eax;
    eax = MEM32(esp + 0xC);

loc_003EBD74: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBD78
 * Original: 0x003EBD78 - 0x003EBDB3 (59 bytes, 21 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363A93, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBD78(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBD78: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x18);
    edx = esi + -4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EBD96; /* jae: above or equal (unsigned >=) */

loc_003EBD8A: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_003EBDAF;

loc_003EBD96: ;
    PUSH32(esp, 0);
    PUSH32(esp, MEM32(esi + -4));
    PUSH32(esp, eax);
    PUSH32(esp, 0x003EBDA1u); RECOMP_ABI_CALL(0x003E8016u, sub_003E8016); /* call 0x003E8016 */

loc_003EBDA1: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((6) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(esi + -4) = eax;
    eax = MEM32(esp + 0xC);

loc_003EBDAF: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBDB3
 * Original: 0x003EBDB3 - 0x003EBDE4 (49 bytes, 17 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363ACE, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBDB3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBDB3: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003EBDD2; /* jae: above or equal (unsigned >=) */

loc_003EBDC6: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_003EBDE1;

loc_003EBDD2: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + -4), eax (32-bit) */
    SET_LO8(eax, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    MEM32(ecx + -4) = eax;
    eax = MEM32(esp + 8);

loc_003EBDE1: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBDE4
 * Original: 0x003EBDE4 - 0x003EBE16 (50 bytes, 18 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363AFF, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBDE4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBDE4: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003EBE03; /* jae: above or equal (unsigned >=) */

loc_003EBDF7: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_003EBE13;

loc_003EBE03: ;
    eax = MEM32(ecx + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EBE0F; /* jge: greater or equal (signed >=) */

loc_003EBE0A: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ecx + -4) = eax;

loc_003EBE0F: ;
    eax = MEM32(esp + 8);

loc_003EBE13: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBE16
 * Original: 0x003EBE16 - 0x003EBE3F (41 bytes, 14 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363B31, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBE16(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBE16: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003EBE35; /* jae: above or equal (unsigned >=) */

loc_003EBE29: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_003EBE3C;

loc_003EBE35: ;
    MEM32(ecx + -4) = (uint32_t)(-(int32_t)MEM32(ecx + -4));
    _fa = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = MEM32(esp + 8);

loc_003EBE3C: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBE3F
 * Original: 0x003EBE3F - 0x003EBE71 (50 bytes, 17 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363B5A, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBE3F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBE3F: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003EBE5E; /* jae: above or equal (unsigned >=) */

loc_003EBE52: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_003EBE6E;

loc_003EBE5E: ;
    eax = MEM32(ecx + -4);
    _fb = (uint32_t)(0x3F) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x3F;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx + -4) = eax;
    eax = MEM32(esp + 8);

loc_003EBE6E: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBE71
 * Original: 0x003EBE71 - 0x003EBE9B (42 bytes, 14 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363B8C, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBE71(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBE71: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax + 0x24);
    PUSH32(esp, esi);
    esi = ecx + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003EBE90; /* jae: above or equal (unsigned >=) */

loc_003EBE84: ;
    MEM32(eax + 0x6C) = 0x1110;
    eax = MEM32(eax + 0x70);
    goto loc_003EBE98;

loc_003EBE90: ;
    MEM32(ecx + -4) = MEM32(ecx + -4) & 0xFFFFFFC0u;
    _fa = (uint32_t)(MEM32(ecx + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = MEM32(esp + 8);

loc_003EBE98: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBE9B
 * Original: 0x003EBE9B - 0x003EBECA (47 bytes, 16 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363BB6, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBE9B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBE9B: ;
    eax = MEM32(esp + 8);
    ecx = ZX8(MEM8(eax + -1));
    ecx = ZX8(MEM8(ecx + 0x54BED0));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EBEC7; /* je: equal / zero */

loc_003EBEAE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x15 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EBEB9; /* jne: not equal / not zero */

loc_003EBEB3: ;
    ecx = ZX8(MEM8(eax));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003EBEC5;

loc_003EBEB9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x16 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EBEC5; /* jne: not equal / not zero */

loc_003EBEBE: ;
    ecx = ZX8(MEM8(eax));
    ecx = ecx + ecx + 1;

loc_003EBEC5: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EBEC7: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EBECA
 * Original: 0x003EBECA - 0x003EBF5E (148 bytes, 59 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363BE5, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBECA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBECA: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x18);
    ecx = MEM32(edx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EBEE8; /* jae: above or equal (unsigned >=) */

loc_003EBEDC: ;
    eax = MEM32(edx + 0x70);
    MEM32(edx + 0x6C) = 0x1110;
    goto loc_003EBF5A;

loc_003EBEE8: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x18) = eax;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    eax = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003EBF59; /* jne: not equal / not zero */

loc_003EBEF8: ;
    esi = MEM32(edx + 0x70);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003EBEFE: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EBF4C; /* jae: above or equal (unsigned >=) */

loc_003EBF02: ;
    ecx = ZX8(MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x59) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x59 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EBF0E; /* jne: not equal / not zero */

loc_003EBF0B: ;
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_003EBF46;

loc_003EBF0E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x58) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x58 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EBF16; /* jne: not equal / not zero */

loc_003EBF13: ;
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003EBF46;

loc_003EBF16: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1B) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x1B (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EBF22; /* jne: not equal / not zero */

loc_003EBF1B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EBF4A; /* je: equal / zero */

loc_003EBF20: ;
    goto loc_003EBF46;

loc_003EBF22: ;
    ecx = ZX8(MEM8(ecx + 0x54BED0));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EBF46; /* je: equal / zero */

loc_003EBF2D: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x15) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x15 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EBF38; /* jne: not equal / not zero */

loc_003EBF32: ;
    ecx = ZX8(MEM8(eax));
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003EBF44;

loc_003EBF38: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x16) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x16 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EBF44; /* jne: not equal / not zero */

loc_003EBF3D: ;
    ecx = ZX8(MEM8(eax));
    ecx = ecx + ecx + 1;

loc_003EBF44: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EBF46: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EBEFE; /* jne: not equal / not zero */

loc_003EBF4A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */

loc_003EBF4C: ;
    if (CMP_NE(_fa, _fb)) goto loc_003EBF59; /* jne: not equal / not zero */

loc_003EBF4E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EBF59; /* je: equal / zero */

loc_003EBF52: ;
    MEM32(edx + 0x6C) = 0x1105;

loc_003EBF59: ;
    POP32(esp, edi);

loc_003EBF5A: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBF5E
 * Original: 0x003EBF5E - 0x003EBFA2 (68 bytes, 30 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363C79, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBF5E(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBF5E: ;
    edx = MEM32(esp + 4);
    eax = MEM32(esp + 8);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x70);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003EBF6E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EBF91; /* jae: above or equal (unsigned >=) */

loc_003EBF72: ;
    SET_LO8(ecx, MEM8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x59) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x59 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EBF7D; /* jne: not equal / not zero */

loc_003EBF7A: ;
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    goto loc_003EBF8C;

loc_003EBF7D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0x58) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0x58 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EBF85; /* jne: not equal / not zero */

loc_003EBF82: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003EBF8C;

loc_003EBF85: ;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, 0x003EBF8Cu); RECOMP_ABI_CALL(0x003EBE9Bu, sub_003EBE9B); /* call 0x003EBE9B */

loc_003EBF8C: ;
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EBF6E; /* jne: not equal / not zero */

loc_003EBF91: ;
    POP32(esp, edi);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(esi), 0 (16-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003EBF9F; /* je: equal / zero */

loc_003EBF98: ;
    MEM32(edx + 0x6C) = 0x1105;

loc_003EBF9F: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBFA2
 * Original: 0x003EBFA2 - 0x003EBFEE (76 bytes, 24 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363CBD, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBFA2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBFA2: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003EBFBE; /* jae: above or equal (unsigned >=) */

loc_003EBFB5: ;
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003EBFE8;

loc_003EBFBE: ;
    edx = MEM32(esp + 8);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    eax = MEM32(eax);
    MEM32(ecx + 0x78) = MEM32(ecx + 0x78) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = edx + eax + -1;
    if ((_fa != 0)) goto loc_003EBFDC; /* jne: not equal / not zero */

loc_003EBFD3: ;
    MEM32(ecx + 0x6C) = 0x1107;
    goto loc_003EBFE8;

loc_003EBFDC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EBFEB; /* jae: above or equal (unsigned >=) */

loc_003EBFE1: ;
    MEM32(ecx + 0x6C) = 0x110B;

loc_003EBFE8: ;
    eax = MEM32(ecx + 0x70);

loc_003EBFEB: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EBFEE
 * Original: 0x003EBFEE - 0x003EC04C (94 bytes, 31 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363D09, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EBFEE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EBFEE: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003EC00A; /* jae: above or equal (unsigned >=) */

loc_003EC001: ;
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003EC040;

loc_003EC00A: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ecx + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003EC045; /* je: equal / zero */

loc_003EC01C: ;
    eax = MEM32(eax);
    MEM32(ecx + 0x78) = MEM32(ecx + 0x78) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(esp + 8);
    eax = edx + eax + -1;
    if ((_fa != 0)) goto loc_003EC034; /* jne: not equal / not zero */

loc_003EC02B: ;
    MEM32(ecx + 0x6C) = 0x1107;
    goto loc_003EC040;

loc_003EC034: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EC049; /* jae: above or equal (unsigned >=) */

loc_003EC039: ;
    MEM32(ecx + 0x6C) = 0x110B;

loc_003EC040: ;
    eax = MEM32(ecx + 0x70);
    goto loc_003EC049;

loc_003EC045: ;
    eax = MEM32(esp + 8);

loc_003EC049: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EC04C
 * Original: 0x003EC04C - 0x003EC0AA (94 bytes, 31 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363D67, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EC04C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EC04C: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -8;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003EC068; /* jae: above or equal (unsigned >=) */

loc_003EC05F: ;
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003EC09E;

loc_003EC068: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    edx = MEM32(eax);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEM32(ecx + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003EC0A3; /* jne: not equal / not zero */

loc_003EC07A: ;
    eax = MEM32(eax);
    MEM32(ecx + 0x78) = MEM32(ecx + 0x78) - 1;
    _fa = (uint32_t)(MEM32(ecx + 0x78)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = MEM32(esp + 8);
    eax = edx + eax + -1;
    if ((_fa != 0)) goto loc_003EC092; /* jne: not equal / not zero */

loc_003EC089: ;
    MEM32(ecx + 0x6C) = 0x1107;
    goto loc_003EC09E;

loc_003EC092: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x74)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0x74) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EC0A7; /* jae: above or equal (unsigned >=) */

loc_003EC097: ;
    MEM32(ecx + 0x6C) = 0x110B;

loc_003EC09E: ;
    eax = MEM32(ecx + 0x70);
    goto loc_003EC0A7;

loc_003EC0A3: ;
    eax = MEM32(esp + 8);

loc_003EC0A7: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EC0AA
 * Original: 0x003EC0AA - 0x003EC0F1 (71 bytes, 24 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363DC5, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EC0AA(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EC0AA: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x24);
    edx = eax + -4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EC0C8; /* jae: above or equal (unsigned >=) */

loc_003EC0BC: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003EC0ED;

loc_003EC0C8: ;
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = eax;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ecx + edx * 4 + -396));
    eax = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ecx + 0x74); PUSH32(esp, 0x003EC0E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EC0DDu); } /* indirect call */
    }

loc_003EC0E0: ;
    ecx = MEM32(esi + 0x18);
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 4;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0xC);

loc_003EC0ED: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EC0F1
 * Original: 0x003EC0F1 - 0x003EC138 (71 bytes, 24 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363E0C, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EC0F1(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EC0F1: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x24);
    edx = eax + -4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EC10F; /* jae: above or equal (unsigned >=) */

loc_003EC103: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003EC134;

loc_003EC10F: ;
    PUSH32(esp, edi);
    edi = eax + -4;
    eax = MEM32(esp + 0x14);
    MEM32(esi + 0x18) = edi;
    PUSH32(esp, MEM32(ecx + eax * 4 + -412));
    PUSH32(esp, MEM32(edi));
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EC129u); RECOMP_ABI_CALL(0x003E80F7u, sub_003E80F7); /* call 0x003E80F7 */

loc_003EC129: ;
    MEM32(edi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi + 0x18) = MEM32(esi + 0x18) + 4;
    _fa = (uint32_t)(MEM32(esi + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);

loc_003EC134: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EC138
 * Original: 0x003EC138 - 0x003EC179 (65 bytes, 29 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363E53, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EC138(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EC138: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x24);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x5C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_target = MEM32(eax + 0x5C); PUSH32(esp, 0x003EC147u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EC144u); } /* indirect call */
    }

loc_003EC147: ;
    edx = eax;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EC162; /* jl: less (signed <) */

loc_003EC151: ;
    ecx = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_003EC159; /* jns: not sign (positive) */

loc_003EC157: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003EC159: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EC175; /* jge: greater or equal (signed >=) */

loc_003EC15E: ;
    eax = edx;
    goto loc_003EC175;

loc_003EC162: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = eax;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fas >= 0)) goto loc_003EC16C; /* jns: not sign (positive) */

loc_003EC16A: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003EC16C: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 4) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EC173; /* jge: greater or equal (signed >=) */

loc_003EC171: ;
    eax = edx;

loc_003EC173: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003EC175: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EC179
 * Original: 0x003EC179 - 0x003EC3FE (645 bytes, 226 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00363E94, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EC179(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EC179: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x2C);
    ecx = MEM32(esi);
    ebx = MEM32(esi + 4);
    MEM32(ebp + 8) = eax;
    eax = MEM32(esi + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(esi + 0x24);
    edx = eax + -4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi) (32-bit) */
    MEM32(ebp + -8) = ecx;
    if (CMP_AE(_fa, _fb)) goto loc_003EC1A9; /* jae: above or equal (unsigned >=) */

loc_003EC1A0: ;
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003EC1D5;

loc_003EC1A9: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), ecx (32-bit) */
    MEM32(esi + 0x18) = eax;
    eax = MEM32(eax);
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003EC1DF; /* jne: not equal / not zero */

loc_003EC1B9: ;
    ecx = MEM32(edi + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EC1CE; /* jge: greater or equal (signed >=) */

loc_003EC1C8: ;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 8), 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EC1F0; /* jge: greater or equal (signed >=) */

loc_003EC1CE: ;
    MEM32(esi + 0x6C) = 0x1112;

loc_003EC1D5: ;
    eax = MEM32(esi + 0x70);

loc_003EC1D8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

loc_003EC1DF: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi + 0x160) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EC1CE; /* jge: greater or equal (signed >=) */

loc_003EC1EA: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EC1CE; /* jl: less (signed <) */

loc_003EC1EE: ;
    goto loc_003EC1F3;

loc_003EC1F0: ;
    ecx = MEM32(ebp + -8);

loc_003EC1F3: ;
    _fa = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x20), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EC270; /* jne: not equal / not zero */

loc_003EC1F8: ;
    edx = MEM32(edi + 0x130);
    edx = ZX16(MEM16(edx + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */

loc_003EC204: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EC1CE; /* jge: greater or equal (signed >=) */

loc_003EC206: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EC1CE; /* jl: less (signed <) */

loc_003EC20A: ;
    _fa = (uint32_t)(MEM8(edi + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x125), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EC28E; /* jne: not equal / not zero */

loc_003EC213: ;
    _fa = (uint32_t)(MEM16(esi + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x80), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC28E; /* je: equal / zero */

loc_003EC21D: ;
    _fa = (uint32_t)(MEM8(edi + 0x16C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x16C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EC28E; /* je: equal / zero */

loc_003EC226: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi + 0x20) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC27B; /* je: equal / zero */

loc_003EC22B: ;
    SET_LO16(edx, MEM16(esi + 0x82));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0xFFFFFFFFu (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC27B; /* je: equal / zero */

loc_003EC238: ;
    SET_LO16(ecx, MEM16(esi + 0x84));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0xFFFFFFFFu (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC27B; /* je: equal / zero */

loc_003EC245: ;
    ecx = SX16(LO16(ecx));
    PUSH32(esp, ecx);
    edx = SX16(LO16(edx));
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    MEM32(ebp + -12) = ecx;
    MEM32(ebp + -16) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC25Au); RECOMP_ABI_CALL(0x003E7C1Bu, sub_003E7C1B); /* call 0x003E7C1B */

loc_003EC25A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC278; /* je: equal / zero */

loc_003EC25E: ;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, MEM32(ebp + -16));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC26Eu); RECOMP_ABI_CALL(0x003E7726u, sub_003E7726); /* call 0x003E7726 */

loc_003EC26E: ;
    goto loc_003EC288;

loc_003EC270: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x160) (32-bit) */
    goto loc_003EC204;

loc_003EC278: ;
    eax = MEM32(ebp + -4);

loc_003EC27B: ;
    PUSH32(esp, 3);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC288u); RECOMP_ABI_CALL(0x003E7628u, sub_003E7628); /* call 0x003E7628 */

loc_003EC288: ;
    eax = MEM32(ebp + -4);
    ecx = MEM32(ebp + -8);

loc_003EC28E: ;
    edx = MEM32(esi + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC324; /* je: equal / zero */

loc_003EC299: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC324; /* je: equal / zero */

loc_003EC2A1: ;
    edx = MEM32(esi + 0x24);
    _fa = (uint32_t)(MEM8(edx + 0x14D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14D), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EC324; /* jne: not equal / not zero */

loc_003EC2AD: ;
    edx = MEM32(ebx + 0x14);
    eax = MEM32(edx + eax * 4);
    ecx = MEM32(ecx + 0x14);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM8(edi + 0x12C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x12C), 0 (8-bit) */
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003EC2F0; /* je: equal / zero */

loc_003EC2C6: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebp + -4);
    ecx = MEM32(ecx + edx * 4);
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x10);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + edx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x50); PUSH32(esp, 0x003EC2E0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EC2DDu); } /* indirect call */
    }

loc_003EC2E0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = edi + 0x100;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0xAC); PUSH32(esp, 0x003EC2EEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EC2E8u); } /* indirect call */
    }

loc_003EC2EE: ;
    goto loc_003EC34E;

loc_003EC2F0: ;
    eax = edi + 0xF0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0xA8); PUSH32(esp, 0x003EC2FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EC2F7u); } /* indirect call */
    }

loc_003EC2FD: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(ebp + -4);
    ecx = MEM32(ecx + edx * 4);
    edx = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 0x10);
    _fb = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + edx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = edi + 0xE0;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(edi + 0xA4); PUSH32(esp, 0x003EC321u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EC31Bu); } /* indirect call */
    }

loc_003EC321: ;
    PUSH32(esp, eax);
    goto loc_003EC34A;

loc_003EC324: ;
    edx = MEM32(ebx + 0xC);
    eax = MEM32(edx + eax * 4);
    ecx = MEM32(ecx + 0xC);
    edx = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ecx + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + edx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + -4);
    ecx = MEM32(ebx + 8);
    ecx = MEM32(ecx + edx * 4);
    edx = MEM32(ebp + 8);
    PUSH32(esp, eax);
    eax = MEM32(ebp + -8);
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(MEM32(eax + edx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + edx * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);

loc_003EC34A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x50); PUSH32(esp, 0x003EC34Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EC34Bu); } /* indirect call */
    }

loc_003EC34E: ;
    _fa = (uint32_t)(MEM32(edi + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x60), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC35B; /* je: equal / zero */

loc_003EC354: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC35Bu); RECOMP_ABI_CALL(0x003EC138u, sub_003EC138); /* call 0x003EC138 */

loc_003EC35B: ;
    ecx = MEM32(ebp + 0x10);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 4 (8-bit) */
    PUSH32(esp, MEM32(edi + ecx * 4 + 0x14));
    MEM32(ebp + -16) = eax;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    if (TEST_Z(_fa, _fb)) goto loc_003EC375; /* je: equal / zero */

loc_003EC370: ;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x74); PUSH32(esp, 0x003EC373u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EC370u); } /* indirect call */
    }

loc_003EC373: ;
    goto loc_003EC37A;

loc_003EC375: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC37Au); RECOMP_ABI_CALL(0x003E80F7u, sub_003E80F7); /* call 0x003E80F7 */

loc_003EC37A: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 8 (8-bit) */
    MEM32(ebp + -12) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003EC3B0; /* je: equal / zero */

loc_003EC383: ;
    _fa = (uint32_t)(MEM16(esi + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x80), 0 (16-bit) */
    edi = MEM32(edi + 0x70);
    if (CMP_EQ(_fa, _fb)) goto loc_003EC399; /* je: equal / zero */

loc_003EC390: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = eax;

loc_003EC399: ;
    _fa = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -16), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EC3A6; /* jl: less (signed <) */

loc_003EC39F: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EC3B0; /* jge: greater or equal (signed >=) */

loc_003EC3A4: ;
    goto loc_003EC3AD;

loc_003EC3A6: ;
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003EC3B0; /* jle: less or equal (signed <=) */

loc_003EC3AD: ;
    MEM32(ebp + -12) = edi;

loc_003EC3B0: ;
    eax = MEM32(ebp + -8);
    ecx = MEM32(eax + 4);
    eax = MEM32(ebx + 4);
    edi = MEM32(ebp + -4);
    edx = MEM32(eax + edi * 4);
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(MEM32(ecx + eax * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - MEM32(ecx + eax * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebx);
    ecx = MEM32(ecx + edi * 4);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    edx = MEM32(ebp + -8);
    edx = MEM32(edx);
    _fb = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(edx + eax * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x4C); PUSH32(esp, 0x003EC3D8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EC3D5u); } /* indirect call */
    }

loc_003EC3D8: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(ebp + -12) = MEM32(ebp + -12) - eax;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x48); PUSH32(esp, 0x003EC3E4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EC3E1u); } /* indirect call */
    }

loc_003EC3E4: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 0x10 (8-bit) */
    eax = MEM32(ebp + 8);
    MEM32(esi + 0x30) = eax;
    MEM32(esi + 0x34) = edi;
    if (TEST_Z(_fa, _fb)) goto loc_003EC3F6; /* je: equal / zero */

loc_003EC3F3: ;
    MEM32(esi + 0x2C) = edi;

loc_003EC3F6: ;
    eax = MEM32(ebp + 0xC);
    goto loc_003EC1D8;

}

/**
 * sub_003EC3FE
 * Original: 0x003EC3FE - 0x003EC9DB (1501 bytes, 535 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00364119, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EC3FE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EC3FE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 8);
    eax = MEM32(ecx + 0x18);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x24);
    edx = eax + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(edi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EC424; /* jae: above or equal (unsigned >=) */

loc_003EC415: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003EC9D6;

loc_003EC424: ;
    edx = MEM32(ecx);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    MEM32(ecx + 0x18) = eax;
    ebx = ZX16(MEM16(edi + 0x134));
    MEM32(ebp + -16) = edx;
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ecx + 4);
    MEM32(ebp + -24) = edx;
    if (CMP_GE(_fas, _fbs)) goto loc_003EC9CA; /* jge: greater or equal (signed >=) */

loc_003EC448: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EC9CA; /* jl: less (signed <) */

loc_003EC450: ;
    edx = MEM32(ecx + 0x20);
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    MEM32(ecx + 0x18) = eax;
    eax = MEM32(eax);
    MEM32(ebp + -12) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003EC480; /* jne: not equal / not zero */

loc_003EC462: ;
    ebx = MEM32(edi + 0x130);
    ebx = ZX16(MEM16(ebx + 0x10));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */

loc_003EC46E: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EC474; /* jge: greater or equal (signed >=) */

loc_003EC470: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EC488; /* jge: greater or equal (signed >=) */

loc_003EC474: ;
    MEM32(ecx + 0x6C) = 0x1112;
    goto loc_003EC9D1;

loc_003EC480: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edi + 0x160) (32-bit) */
    goto loc_003EC46E;

loc_003EC488: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + -16)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + -16) (32-bit) */
    ebx = MEM32(ecx + 0x2C);
    if (CMP_NE(_fa, _fb)) goto loc_003EC5A4; /* jne: not equal / not zero */

loc_003EC494: ;
    eax = MEM32(edi + 0x130);
    eax = ZX16(MEM16(eax + 0x10));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */

loc_003EC4A0: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003EC474; /* jge: greater or equal (signed >=) */

loc_003EC4A2: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EC474; /* jl: less (signed <) */

loc_003EC4A6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    eax = MEM32(ebp + -12);
    MEM32(ecx + 0x30) = ebx;
    MEM32(ecx + 0x34) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003EC4F1; /* je: equal / zero */

loc_003EC4B3: ;
    _fa = (uint32_t)(MEM8(edi + 0x125)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x125), 2 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EC4F1; /* jne: not equal / not zero */

loc_003EC4BC: ;
    _fa = (uint32_t)(MEM16(ecx + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x80), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC4F1; /* je: equal / zero */

loc_003EC4C6: ;
    _fa = (uint32_t)(MEM8(edi + 0x16C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi + 0x16C), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EC4F1; /* je: equal / zero */

loc_003EC4CF: ;
    eax = MEM32(ebp + 0x10);
    eax = eax & 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC4E0u); RECOMP_ABI_CALL(0x003E7A73u, sub_003E7A73); /* call 0x003E7A73 */

loc_003EC4E0: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -12));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC4EEu); RECOMP_ABI_CALL(0x003E7628u, sub_003E7628); /* call 0x003E7628 */

loc_003EC4EE: ;
    ecx = MEM32(ebp + 8);

loc_003EC4F1: ;
    SET_LO16(eax, MEM16(ecx + 0x68));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EC750; /* jne: not equal / not zero */

loc_003EC4FE: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -24));
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax + 0x58); PUSH32(esp, 0x003EC508u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EC505u); } /* indirect call */
    }

loc_003EC508: ;
    _fa = (uint32_t)(MEM32(edi + 0x60)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x60), 0 (32-bit) */
    MEM32(ebp + -8) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003EC51D; /* je: equal / zero */

loc_003EC511: ;
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC51Au); RECOMP_ABI_CALL(0x003EC138u, sub_003EC138); /* call 0x003EC138 */

loc_003EC51A: ;
    MEM32(ebp + -8) = eax;

loc_003EC51D: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 0x20) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EC57D; /* jne: not equal / not zero */

loc_003EC525: ;
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xC);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC532u); RECOMP_ABI_CALL(0x003E4DDEu, sub_003E4DDE); /* call 0x003E4DDE */

loc_003EC532: ;
    ecx = MEM32(ebp + -16);
    ecx = MEM32(ecx + 8);
    _fb = (uint32_t)(MEM32(ecx + ebx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + ebx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 8);
    edx = MEM32(ebp + -12);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(esi + 8);
    eax = MEM32(eax + edx * 4);
    ecx = MEM32(esi);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(ebp + 8);
    eax = (uint32_t)(int32_t)SMEM16(eax + 0xE);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + -8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC55Fu); RECOMP_ABI_CALL(0x003E4DDEu, sub_003E4DDE); /* call 0x003E4DDE */

loc_003EC55F: ;
    ecx = MEM32(ebp + -16);
    ecx = MEM32(ecx + 0xC);
    _fb = (uint32_t)(MEM32(ecx + ebx * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + MEM32(ecx + ebx * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0xC);
    edx = MEM32(ebp + -12);
    MEM32(ecx + edx * 4) = eax;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(esi + 4);
    eax = MEM32(eax + edx * 4);
    MEM32(ecx + edx * 4) = eax;

loc_003EC57D: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x50);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E83A0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E83A0 (32-bit) */
    MEM32(ebp + -24) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003EC5AF; /* jne: not equal / not zero */

loc_003EC590: ;
    eax = MEM32(esi + 8);
    ecx = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    ecx = MEM32(ecx + 8);
    eax = MEM32(eax + edx * 4);
    _fb = (uint32_t)(MEM32(ecx + ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_003EC5F6;

loc_003EC5A4: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x160) (32-bit) */
    goto loc_003EC4A0;

loc_003EC5AF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E83A7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E83A7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EC5CD; /* jne: not equal / not zero */

loc_003EC5B6: ;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(ebp + -16);
    edx = MEM32(ebp + -12);
    ecx = MEM32(ecx + 0xC);
    eax = MEM32(eax + edx * 4);
    _fb = (uint32_t)(MEM32(ecx + ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + -20) = eax;
    goto loc_003EC5F9;

loc_003EC5CD: ;
    eax = MEM32(ebp + -16);
    edx = MEM32(eax + 0xC);
    ecx = MEM32(esi + 0xC);
    eax = MEM32(ebp + -12);
    ecx = MEM32(ecx + eax * 4);
    _fb = (uint32_t)(MEM32(edx + ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(edx + ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ebp + -16);
    edx = MEM32(edx + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 8);
    eax = MEM32(ecx + eax * 4);
    _fb = (uint32_t)(MEM32(edx + ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edx + ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(ebp + -24); PUSH32(esp, 0x003EC5F6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EC5F3u); } /* indirect call */
    }

loc_003EC5F6: ;
    MEM32(ebp + -20) = eax;

loc_003EC5F9: ;
    ecx = eax;
    ecx = ecx ^ MEM32(ebp + -8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_003EC60C; /* jge: greater or equal (signed >=) */

loc_003EC600: ;
    _fa = (uint32_t)(MEM8(edi + 0x90)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x90), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC60C; /* je: equal / zero */

loc_003EC609: ;
    MEM32(ebp + -8) = (uint32_t)(-(int32_t)MEM32(ebp + -8));
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003EC60C: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(ebp + 8);
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(MEM16(edx + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edx + 0x80), 0 (16-bit) */
    ecx = MEM32(edi + ecx * 4 + 0x14);
    MEM32(ebp + -24) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_003EC673; /* je: equal / zero */

loc_003EC626: ;
    SET_LO16(ecx, MEM16(edi + 0x6C));
    SET_LO16(ecx, LO16(ecx) & 4);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(ebp + -2) = LO16(ecx);
    if ((_fa != 0)) goto loc_003EC64C; /* jne: not equal / not zero */

loc_003EC634: ;
    ecx = MEM32(ebp + -8);
    edx = MEM32(edi + 0x5C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003EC649; /* jg: greater (signed >) */

loc_003EC643: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EC64C; /* jge: greater or equal (signed >=) */

loc_003EC649: ;
    MEM32(ebp + -8) = eax;

loc_003EC64C: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EC663; /* je: equal / zero */

loc_003EC652: ;
    _fa = (uint32_t)(MEM16(ebp + -2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC68E; /* je: equal / zero */

loc_003EC659: ;
    ecx = MEM32(ebp + -8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ecx << 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_003EC67E;

loc_003EC663: ;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC671u); RECOMP_ABI_CALL(0x003E811Cu, sub_003E811C); /* call 0x003E811C */

loc_003EC671: ;
    goto loc_003EC6A8;

loc_003EC673: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EC69C; /* je: equal / zero */

loc_003EC679: ;
    ecx = MEM32(ebp + -8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003EC67E: ;
    edx = MEM32(edi + 0x5C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003EC68B; /* jg: greater (signed >) */

loc_003EC685: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EC68E; /* jge: greater or equal (signed >=) */

loc_003EC68B: ;
    MEM32(ebp + -8) = eax;

loc_003EC68E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, MEM32(ebp + -24));
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(edi + 0x74); PUSH32(esp, 0x003EC69Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EC697u); } /* indirect call */
    }

loc_003EC69A: ;
    goto loc_003EC6A8;

loc_003EC69C: ;
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + -8));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EC6A8u); RECOMP_ABI_CALL(0x003E80F7u, sub_003E80F7); /* call 0x003E80F7 */

loc_003EC6A8: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 8 (8-bit) */
    MEM32(ebp + -8) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003EC6E1; /* je: equal / zero */

loc_003EC6B1: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM16(eax + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x80), 0 (16-bit) */
    edi = MEM32(edi + 0x70);
    if (CMP_EQ(_fa, _fb)) goto loc_003EC6CA; /* je: equal / zero */

loc_003EC6C1: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = eax;

loc_003EC6CA: ;
    _fa = (uint32_t)(MEM32(ebp + -20)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -20), 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EC6D7; /* jl: less (signed <) */

loc_003EC6D0: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EC6E1; /* jge: greater or equal (signed >=) */

loc_003EC6D5: ;
    goto loc_003EC6DE;

loc_003EC6D7: ;
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003EC6E1; /* jle: less or equal (signed <=) */

loc_003EC6DE: ;
    MEM32(ebp + -8) = edi;

loc_003EC6E1: ;
    eax = MEM32(ebp + 8);
    eax = MEM32(eax + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E83A0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E83A0 (32-bit) */
    edi = MEM32(ebp + -12);
    MEM32(ebp + -24) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003EC703; /* jne: not equal / not zero */

loc_003EC6F4: ;
    eax = MEM32(esi);
    ecx = MEM32(ebp + -16);
    ecx = MEM32(ecx);
    eax = MEM32(eax + edi * 4);
    _fb = (uint32_t)(MEM32(ebx + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebx + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_003EC73C;

loc_003EC703: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E83A7) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3E83A7 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EC71B; /* jne: not equal / not zero */

loc_003EC70A: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(ebp + -16);
    ecx = MEM32(ecx + 4);
    eax = MEM32(eax + edi * 4);
    _fb = (uint32_t)(MEM32(ecx + ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx + ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_003EC73C;

loc_003EC71B: ;
    ecx = MEM32(esi + 4);
    ecx = MEM32(ecx + edi * 4);
    eax = MEM32(ebp + -16);
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(MEM32(edx + ebx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(edx + ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = MEM32(esi);
    ecx = MEM32(ecx + edi * 4);
    _fb = (uint32_t)(MEM32(ebx + eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebx + eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(ebp + 8));
    { uint32_t _icall_target = MEM32(ebp + -24); PUSH32(esp, 0x003EC73Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EC739u); } /* indirect call */
    }

loc_003EC73C: ;
    ecx = MEM32(ebp + -8);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(eax + 0x48); PUSH32(esp, 0x003EC74Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EC748u); } /* indirect call */
    }

loc_003EC74B: ;
    goto loc_003EC9B6;

loc_003EC750: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(1) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 1 (16-bit) */
    eax = MEM32(edi + 8);
    if (CMP_NE(_fa, _fb)) goto loc_003EC895; /* jne: not equal / not zero */

loc_003EC75D: ;
    edx = MEM32(ebp + -24);
    eax = MEM32(eax + edx * 4);
    edx = MEM32(ebp + -16);
    edx = MEM32(edx + 8);
    MEM32(ebp + -8) = eax;
    eax = ebx;
    ebx = MEM32(ebp + -12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -20) = eax;
    eax = MEM32(esi + 8);
    ebx = MEM32(eax + ebx * 4);
    eax = MEM32(ebp + -20);
    _fb = (uint32_t)(MEM32(edx + eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(edx + eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebx;
    eax = eax ^ MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_003EC796; /* jge: greater or equal (signed >=) */

loc_003EC78A: ;
    _fa = (uint32_t)(MEM8(edi + 0x90)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x90), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC796; /* je: equal / zero */

loc_003EC793: ;
    MEM32(ebp + -8) = (uint32_t)(-(int32_t)MEM32(ebp + -8));
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003EC796: ;
    SET_LO16(eax, MEM16(ecx + 0x80));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC806; /* je: equal / zero */

loc_003EC7A2: ;
    SET_LO16(eax, MEM16(edi + 0x6C));
    SET_LO16(eax, LO16(eax) & 4);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(ebp + -2) = LO16(eax);
    if ((_fa != 0)) goto loc_003EC7C8; /* jne: not equal / not zero */

loc_003EC7B0: ;
    eax = MEM32(ebp + -8);
    edx = MEM32(edi + 0x5C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003EC7C5; /* jg: greater (signed >) */

loc_003EC7BF: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EC7C8; /* jge: greater or equal (signed >=) */

loc_003EC7C5: ;
    MEM32(ebp + -8) = ebx;

loc_003EC7C8: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EC841; /* je: equal / zero */

loc_003EC7CE: ;
    _fa = (uint32_t)(MEM16(ebp + -2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC7ED; /* je: equal / zero */

loc_003EC7D5: ;
    eax = MEM32(ebp + -8);
    edx = MEM32(edi + 0x5C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003EC7EA; /* jg: greater (signed >) */

loc_003EC7E4: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EC7ED; /* jge: greater or equal (signed >=) */

loc_003EC7EA: ;
    MEM32(ebp + -8) = ebx;

loc_003EC7ED: ;
    eax = MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EC7FC; /* jl: less (signed <) */

loc_003EC7F4: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003EC82F;

loc_003EC7FC: ;
    PUSH32(esp, 2);
    POP32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx & 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003EC83C;

loc_003EC806: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EC841; /* je: equal / zero */

loc_003EC80C: ;
    eax = MEM32(ebp + -8);
    edx = MEM32(edi + 0x5C);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003EC81E; /* jg: greater (signed >) */

loc_003EC818: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EC822; /* jge: greater or equal (signed >=) */

loc_003EC81E: ;
    eax = ebx;
    goto loc_003EC825;

loc_003EC822: ;
    eax = MEM32(ebp + -8);

loc_003EC825: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EC834; /* jl: less (signed <) */

loc_003EC829: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003EC82F: ;
    MEM32(ebp + -8) = eax;
    goto loc_003EC841;

loc_003EC834: ;
    PUSH32(esp, 0x20);
    POP32(esp, edx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = edx & 0xFFFFFFC0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003EC83C: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    MEM32(ebp + -8) = edx;

loc_003EC841: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EC872; /* je: equal / zero */

loc_003EC847: ;
    _fa = (uint32_t)(MEM16(ecx + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ecx + 0x80), 0 (16-bit) */
    edi = MEM32(edi + 0x70);
    if (CMP_EQ(_fa, _fb)) goto loc_003EC85D; /* je: equal / zero */

loc_003EC854: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = eax;

loc_003EC85D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EC868; /* jl: less (signed <) */

loc_003EC861: ;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EC872; /* jge: greater or equal (signed >=) */

loc_003EC866: ;
    goto loc_003EC86F;

loc_003EC868: ;
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003EC872; /* jle: less or equal (signed <=) */

loc_003EC86F: ;
    MEM32(ebp + -8) = edi;

loc_003EC872: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax);
    edx = MEM32(ebp + -20);
    edx = MEM32(edx + eax);
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(ebp + -8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(esi);
    eax = MEM32(ebp + -12);
    MEM32(edi + eax * 4) = edx;
    edx = MEM32(esi + 0x24);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | 1;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_003EC9B9;

loc_003EC895: ;
    ecx = MEM32(ebp + -24);
    ecx = MEM32(eax + ecx * 4);
    edx = MEM32(ebp + -16);
    edx = MEM32(edx + 0xC);
    eax = ebx;
    ebx = MEM32(ebp + -12);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebp + -20) = eax;
    eax = MEM32(esi + 0xC);
    ebx = MEM32(eax + ebx * 4);
    eax = MEM32(ebp + -20);
    _fb = (uint32_t)(MEM32(edx + eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(edx + eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = ebx;
    eax = eax ^ ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_003EC8C9; /* jge: greater or equal (signed >=) */

loc_003EC8BE: ;
    _fa = (uint32_t)(MEM8(edi + 0x90)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x90), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC8C9; /* je: equal / zero */

loc_003EC8C7: ;
    ecx = (uint32_t)(-(int32_t)ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003EC8C9: ;
    eax = MEM32(ebp + 8);
    SET_LO16(eax, MEM16(eax + 0x80));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC935; /* je: equal / zero */

loc_003EC8D8: ;
    SET_LO16(eax, MEM16(edi + 0x6C));
    SET_LO16(eax, LO16(eax) & 4);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(ebp + -2) = LO16(eax);
    if ((_fa != 0)) goto loc_003EC8FC; /* jne: not equal / not zero */

loc_003EC8E6: ;
    edx = MEM32(edi + 0x5C);
    eax = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003EC8FA; /* jg: greater (signed >) */

loc_003EC8F4: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EC8FC; /* jge: greater or equal (signed >=) */

loc_003EC8FA: ;
    ecx = ebx;

loc_003EC8FC: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EC966; /* je: equal / zero */

loc_003EC902: ;
    _fa = (uint32_t)(MEM16(ebp + -2)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + -2), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EC91F; /* je: equal / zero */

loc_003EC909: ;
    edx = MEM32(edi + 0x5C);
    eax = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003EC91D; /* jg: greater (signed >) */

loc_003EC917: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EC91F; /* jge: greater or equal (signed >=) */

loc_003EC91D: ;
    ecx = ebx;

loc_003EC91F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EC92B; /* jl: less (signed <) */

loc_003EC923: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003EC966;

loc_003EC92B: ;
    PUSH32(esp, 2);
    POP32(esp, eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003EC962;

loc_003EC935: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 4 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EC966; /* je: equal / zero */

loc_003EC93B: ;
    edx = MEM32(edi + 0x5C);
    eax = ecx;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003EC94C; /* jg: greater (signed >) */

loc_003EC946: ;
    edx = (uint32_t)(-(int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EC94E; /* jge: greater or equal (signed >=) */

loc_003EC94C: ;
    ecx = ebx;

loc_003EC94E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EC95A; /* jl: less (signed <) */

loc_003EC952: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFFFC0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003EC966;

loc_003EC95A: ;
    PUSH32(esp, 0x20);
    POP32(esp, eax);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003EC962: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    ecx = eax;

loc_003EC966: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(8) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 8 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EC997; /* je: equal / zero */

loc_003EC96C: ;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM16(eax + 0x80)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x80), 0 (16-bit) */
    edi = MEM32(edi + 0x70);
    if (CMP_EQ(_fa, _fb)) goto loc_003EC985; /* je: equal / zero */

loc_003EC97C: ;
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = eax;

loc_003EC985: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EC98F; /* jl: less (signed <) */

loc_003EC989: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EC997; /* jge: greater or equal (signed >=) */

loc_003EC98D: ;
    goto loc_003EC995;

loc_003EC98F: ;
    edi = (uint32_t)(-(int32_t)edi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003EC997; /* jle: less or equal (signed <=) */

loc_003EC995: ;
    ecx = edi;

loc_003EC997: ;
    eax = MEM32(ebp + -16);
    eax = MEM32(eax + 4);
    edx = MEM32(ebp + -20);
    edx = MEM32(eax + edx);
    eax = MEM32(ebp + -12);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 4);
    MEM32(ecx + eax * 4) = edx;
    ecx = MEM32(esi + 0x24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(eax) = MEM8(eax) | 2;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_003EC9B6: ;
    ecx = MEM32(ebp + 8);

loc_003EC9B9: ;
    _fa = (uint32_t)(MEM8(ebp + 0x10)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebp + 0x10), 0x10 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EC9C5; /* je: equal / zero */

loc_003EC9BF: ;
    eax = MEM32(ebp + -12);
    MEM32(ecx + 0x2C) = eax;

loc_003EC9C5: ;
    eax = MEM32(ebp + 0xC);
    goto loc_003EC9D4;

loc_003EC9CA: ;
    MEM32(ecx + 0x6C) = 0x111B;

loc_003EC9D1: ;
    eax = MEM32(ecx + 0x70);

loc_003EC9D4: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003EC9D6: ;
    POP32(esp, edi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EC9DB
 * Original: 0x003EC9DB - 0x003ECBD0 (501 bytes, 153 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003646F6, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EC9DB(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EC9DB: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x18);
    eax = MEM32(esi + 0x24);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, edi);
    edi = ecx + -4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax) (32-bit) */
    MEM8(ebp + -4) = LO8(edx);
    MEM8(ebp + -3) = LO8(edx);
    MEM8(ebp + -2) = LO8(edx);
    MEM8(ebp + -1) = LO8(edx);
    MEM32(ebp + -8) = edx;
    if (CMP_AE(_fa, _fb)) goto loc_003ECA11; /* jae: above or equal (unsigned >=) */

loc_003ECA05: ;
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003ECBC6;

loc_003ECA11: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = ecx;
    edi = MEM32(eax + 0x130);
    edi = ZX16(MEM16(edi + 0x14));
    ecx = MEM32(ecx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003ECBBF; /* jge: greater or equal (signed >=) */

loc_003ECA2B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003ECBBF; /* jl: less (signed <) */

loc_003ECA33: ;
    edx = MEM32(eax + 0x94);
    edi = edx + ecx * 8;
    SET_LO16(edx, MEM16(edi + 6));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 2 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003ECA52; /* jb: below (unsigned <) */

loc_003ECA46: ;
    MEM32(esi + 0x6C) = 0x1115;
    goto loc_003ECBC6;

loc_003ECA52: ;
    ebx = MEM32(esi + 0x70);
    edx = ZX16(LO16(edx));
    edx = MEM32(eax + edx * 8 + 0xB0);
    _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(edi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x40 (32-bit) */
    MEM32(ebp + -12) = ebx;
    ebx = MEM32(esi + 0x74);
    MEM32(ebp + -16) = ebx;
    if (CMP_L(_fas, _fbs)) goto loc_003ECA9F; /* jl: less (signed <) */

loc_003ECA6F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x42) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x42 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003ECA9F; /* jg: greater (signed >) */

loc_003ECA74: ;
    _fa = (uint32_t)(MEM8(eax + 0x16C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ECA9F; /* je: equal / zero */

loc_003ECA7D: ;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003ECA9F; /* jne: not equal / not zero */

loc_003ECA83: ;
    _fa = (uint32_t)(MEM16(eax + 0x16E)) & 0xFFFFu; _fb = (uint32_t)(0x200) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(eax + 0x16E), 0x200 (16-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003ECA9F; /* jbe: below or equal (unsigned <=) */

loc_003ECA8E: ;
    eax = MEM32(eax + 4);
    ebx = MEM32(eax + 0x58);
    MEM32(eax + 0x58) = MEM32(eax + 0x58) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x58)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ebp + 8) = ebx;
    MEM8(ebp + -4) = 1;

loc_003ECA9F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003ECAA8; /* jl: less (signed <) */

loc_003ECAA3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003ECAAD; /* jle: less or equal (signed <=) */

loc_003ECAA8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ECADA; /* jne: not equal / not zero */

loc_003ECAAD: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(MEM8(eax + 0x16C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ECADA; /* je: equal / zero */

loc_003ECAB9: ;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003ECADA; /* jne: not equal / not zero */

loc_003ECABF: ;
    _fa = (uint32_t)(MEM16(eax + 0x16E)) & 0xFFFFu; _fb = (uint32_t)(0x400) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(eax + 0x16E), 0x400 (16-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003ECADA; /* jbe: below or equal (unsigned <=) */

loc_003ECACA: ;
    eax = MEM32(eax + 4);
    ebx = MEM32(eax + 0x60);
    MEM32(eax + 0x60) = MEM32(eax + 0x60) & 0;
    _fa = (uint32_t)(MEM32(eax + 0x60)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM8(ebp + -3) = 1;
    goto loc_003ECADD;

loc_003ECADA: ;
    ebx = MEM32(ebp + 8);

loc_003ECADD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x20 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ECB07; /* jne: not equal / not zero */

loc_003ECAE2: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(MEM8(eax + 0x16C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ECB41; /* je: equal / zero */

loc_003ECAEE: ;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003ECB41; /* jne: not equal / not zero */

loc_003ECAF4: ;
    _fb = (uint32_t)(0x16E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x16E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x100) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(eax), 0x100 (16-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003ECB41; /* jbe: below or equal (unsigned <=) */

loc_003ECB00: ;
    MEM8(eax) = MEM8(eax) | 4;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ebp + -2) = 1;

loc_003ECB07: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ECB41; /* jne: not equal / not zero */

loc_003ECB0C: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(MEM8(eax + 0x16C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ECB41; /* je: equal / zero */

loc_003ECB18: ;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003ECB41; /* jne: not equal / not zero */

loc_003ECB1E: ;
    _fb = (uint32_t)(0x16E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x16E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(eax), 0x1000 (16-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003ECB41; /* jbe: below or equal (unsigned <=) */

loc_003ECB2A: ;
    MEM8(eax) = MEM8(eax) | 0x10;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax + 0x5C);
    MEM32(ebp + -8) = ecx;
    MEM32(eax + 0x5C) = 0x7FFFFFFF;
    MEM8(ebp + -1) = 1;

loc_003ECB41: ;
    MEM32(esi + 0x7C) = MEM32(esi + 0x7C) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003ECB4F; /* jne: not equal / not zero */

loc_003ECB46: ;
    MEM32(esi + 0x6C) = 0x1106;
    goto loc_003ECBC6;

loc_003ECB4F: ;
    eax = ZX16(MEM16(edi + 4));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x54); PUSH32(esp, 0x003ECB5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003ECB58u); } /* indirect call */
    }

loc_003ECB5B: ;
    MEM32(esi + 0x7C) = MEM32(esi + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECB77; /* je: equal / zero */

loc_003ECB64: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(ebp + -8);
    MEM32(eax + 0x5C) = ecx;
    eax = MEM32(esi + 0x24);
    MEM8(eax + 0x16E) = MEM8(eax + 0x16E) & 0xEF;
    _fa = (uint32_t)(MEM8(eax + 0x16E)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_003ECB77: ;
    _fa = (uint32_t)(MEM8(ebp + -2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -2), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECB87; /* je: equal / zero */

loc_003ECB7D: ;
    eax = MEM32(esi + 0x24);
    MEM8(eax + 0x16E) = MEM8(eax + 0x16E) & 0xFB;
    _fa = (uint32_t)(MEM8(eax + 0x16E)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_003ECB87: ;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -3), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECB96; /* je: equal / zero */

loc_003ECB8D: ;
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 4);
    MEM32(eax + 0x60) = ebx;

loc_003ECB96: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECBA8; /* je: equal / zero */

loc_003ECB9C: ;
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + 8);
    MEM32(eax + 0x58) = ecx;

loc_003ECBA8: ;
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x6C), 0 (32-bit) */
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -16);
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003ECBC9; /* jne: not equal / not zero */

loc_003ECBBA: ;
    eax = MEM32(ebp + 0xC);
    goto loc_003ECBC9;

loc_003ECBBF: ;
    MEM32(esi + 0x6C) = 0x1114;

loc_003ECBC6: ;
    eax = MEM32(esi + 0x70);

loc_003ECBC9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003ECB00
 * Original: 0x003ECB00 - 0x003ECBD0 (208 bytes, 66 insns)
 * Folder: xdk/libc (between: 0x003EC9DB and 0x003ECBD0)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ECB00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_003ECB00: ;
    MEM8(eax) = MEM8(eax) | 4;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(ebp + -2) = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x3A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ECB41; /* jne: not equal / not zero */

loc_003ECB0C: ;
    eax = MEM32(esi + 0x24);
    _fa = (uint32_t)(MEM8(eax + 0x16C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16C), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ECB41; /* je: equal / zero */

loc_003ECB18: ;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003ECB41; /* jne: not equal / not zero */

loc_003ECB1E: ;
    _fb = (uint32_t)(0x16E) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x16E;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x1000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* test MEM16(eax), 0x1000 (16-bit) */
    if (CMP_BE(_fa & _fb, 0)) goto loc_003ECB41; /* jbe: below or equal (unsigned <=) */

loc_003ECB2A: ;
    MEM8(eax) = MEM8(eax) | 0x10;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(esi + 0x24);
    ecx = MEM32(eax + 0x5C);
    MEM32(ebp + -8) = ecx;
    MEM32(eax + 0x5C) = 0x7FFFFFFF;
    MEM8(ebp + -1) = 1;

loc_003ECB41: ;
    MEM32(esi + 0x7C) = MEM32(esi + 0x7C) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003ECB4F; /* jne: not equal / not zero */

loc_003ECB46: ;
    MEM32(esi + 0x6C) = 0x1106;
    goto loc_003ECBC6;

loc_003ECB4F: ;
    eax = ZX16(MEM16(edi + 4));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(esi + 0x54); PUSH32(esp, 0x003ECB5Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003ECB58u); } /* indirect call */
    }

loc_003ECB5B: ;
    MEM32(esi + 0x7C) = MEM32(esi + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(ebp + -1)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -1), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECB77; /* je: equal / zero */

loc_003ECB64: ;
    eax = MEM32(esi + 0x24);
    ecx = MEM32(ebp + -8);
    MEM32(eax + 0x5C) = ecx;
    eax = MEM32(esi + 0x24);
    MEM8(eax + 0x16E) = MEM8(eax + 0x16E) & 0xEF;
    _fa = (uint32_t)(MEM8(eax + 0x16E)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_003ECB77: ;
    _fa = (uint32_t)(MEM8(ebp + -2)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -2), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECB87; /* je: equal / zero */

loc_003ECB7D: ;
    eax = MEM32(esi + 0x24);
    MEM8(eax + 0x16E) = MEM8(eax + 0x16E) & 0xFB;
    _fa = (uint32_t)(MEM8(eax + 0x16E)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_003ECB87: ;
    _fa = (uint32_t)(MEM8(ebp + -3)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -3), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECB96; /* je: equal / zero */

loc_003ECB8D: ;
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 4);
    MEM32(eax + 0x60) = ebx;

loc_003ECB96: ;
    _fa = (uint32_t)(MEM8(ebp + -4)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebp + -4), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECBA8; /* je: equal / zero */

loc_003ECB9C: ;
    eax = MEM32(esi + 0x24);
    eax = MEM32(eax + 4);
    ecx = MEM32(ebp + 8);
    MEM32(eax + 0x58) = ecx;

loc_003ECBA8: ;
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x6C), 0 (32-bit) */
    eax = MEM32(ebp + -12);
    ecx = MEM32(ebp + -16);
    MEM32(esi + 0x70) = eax;
    MEM32(esi + 0x74) = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_003ECBC9; /* jne: not equal / not zero */

loc_003ECBBA: ;
    eax = MEM32(ebp + 0xC);
    goto loc_003ECBC9;

    MEM32(esi + 0x6C) = 0x1114;

loc_003ECBC6: ;
    eax = MEM32(esi + 0x70);

loc_003ECBC9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003ECBD0
 * Original: 0x003ECBD0 - 0x003ECDED (541 bytes, 181 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003648EB, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003ECBD0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ECBD0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = MEM32(ebp + 8);
    MEM8(ebp + -56) = 1;
    MEM8(ebp + -55) = 0x20;
    MEM8(ebp + -54) = 0xB0;
    MEM8(ebp + -53) = 3;
    MEM8(ebp + -52) = 0x25;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    ecx = MEM32(edx + 0x24);
    edi = ebp + -51;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ebp + -46) = 0xB0;
    MEM8(ebp + -45) = 0x16;
    MEM8(ebp + -44) = 0x43;
    MEM8(ebp + -43) = 0x58;
    edi = ebp + -42;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ebp + -36) = 1;
    MEM8(ebp + -35) = 0xB0;
    MEM8(ebp + -34) = 0x18;
    MEM8(ebp + -33) = 0x43;
    MEM8(ebp + -32) = 0x58;
    edi = ebp + -31;
    MEM32(edi) = eax; edi += RECOMP_DF_STEP(4); /* stosd */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM8(ebp + -26) = 0x45;
    MEM8(ebp + -25) = 0x23;
    MEM8(ebp + -24) = 0x46;
    MEM8(ebp + -23) = 0x60;
    MEM8(ebp + -22) = 0x20;
    MEM8(ebp + -21) = 0xB0;
    MEM8(ebp + -20) = 0x26;
    edi = ebp + -19;
    MEM16(edi) = LO16(eax); edi += RECOMP_DF_STEP(2); /* stosw */
    MEM8(edi) = LO8(eax); edi += RECOMP_DF_STEP(1); /* stosb */
    eax = MEM32(edx + 0x18);
    esi = eax + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    MEM8(ebp + -16) = 0x20;
    MEM8(ebp + -15) = 0x20;
    MEM8(ebp + -14) = 0xB0;
    MEM8(ebp + -13) = 1;
    MEM8(ebp + -12) = 0x60;
    MEM8(ebp + -11) = 0x46;
    MEM8(ebp + -10) = 0xB0;
    MEM8(ebp + -9) = 0x40;
    MEM8(ebp + -8) = 0x23;
    MEM8(ebp + -7) = 0x42;
    if (CMP_AE(_fa, _fb)) goto loc_003ECC91; /* jae: above or equal (unsigned >=) */

loc_003ECC82: ;
    eax = MEM32(edx + 0x70);
    MEM32(edx + 0x6C) = 0x1110;
    goto loc_003ECDE7;

loc_003ECC91: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx + 0x18) = eax;
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    eax = MEM32(ecx + 0x130);
    eax = ZX16(MEM16(eax + 0x14));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003ECDDC; /* jge: greater or equal (signed >=) */

loc_003ECCAC: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003ECDDC; /* jl: less (signed <) */

loc_003ECCB4: ;
    SET_LO8(eax, MEM8(ecx + 0x125));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003ECCCA; /* jb: below (unsigned <) */

loc_003ECCBE: ;
    MEM32(edx + 0x6C) = 0x1108;
    goto loc_003ECDE3;

loc_003ECCCA: ;
    esi = MEM32(ecx + 0x94);
    SET_LO16(eax, ZX8(LO8(eax)));
    esi = esi + ebx * 8;
    MEM16(esi + 6) = LO16(eax);
    MEM32(ebp + 8) = esi;
    esi = ZX16(LO16(eax));
    eax = MEM32(ebp + 0xC);
    edi = eax;
    _fb = (uint32_t)(MEM32(ecx + esi * 8 + 0xB0)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - MEM32(ecx + esi * 8 + 0xB0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x20 (32-bit) */
    ecx = MEM32(ebp + 8);
    MEM32(ecx) = edi;
    MEM32(ebp + -4) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003ECD19; /* jne: not equal / not zero */

loc_003ECCFA: ;
    PUSH32(esp, 5);
    esi = eax;
    POP32(esp, ecx);
    edi = ebp + -56;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_003ECD9E; /* jne: not equal / not zero */

loc_003ECD0C: ;
    eax = MEM32(edx + 0x24);
    MEM8(eax + 0x16F) = MEM8(eax + 0x16F) | 1;
    _fa = (uint32_t)(MEM8(eax + 0x16F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(ebp + 0xC);

loc_003ECD19: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x40 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003ECD36; /* jl: less (signed <) */

loc_003ECD1E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x42) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x42 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003ECD36; /* jg: greater (signed >) */

loc_003ECD23: ;
    esi = MEM32(eax);
    ecx = ebp + -46;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ECD36; /* jne: not equal / not zero */

loc_003ECD2C: ;
    ecx = MEM32(edx + 0x24);
    MEM8(ecx + 0x16F) = MEM8(ecx + 0x16F) | 2;
    _fa = (uint32_t)(MEM8(ecx + 0x16F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_003ECD36: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003ECD3F; /* jl: less (signed <) */

loc_003ECD3A: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003ECD44; /* jle: less or equal (signed <=) */

loc_003ECD3F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 4 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ECD5F; /* jne: not equal / not zero */

loc_003ECD44: ;
    PUSH32(esp, 5);
    esi = eax;
    POP32(esp, ecx);
    edi = ebp + -36;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_003ECD5C; /* jne: not equal / not zero */

loc_003ECD52: ;
    eax = MEM32(edx + 0x24);
    MEM8(eax + 0x16F) = MEM8(eax + 0x16F) | 4;
    _fa = (uint32_t)(MEM8(eax + 0x16F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_003ECD5C: ;
    eax = MEM32(ebp + 0xC);

loc_003ECD5F: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ECD7E; /* jne: not equal / not zero */

loc_003ECD63: ;
    PUSH32(esp, 7);
    esi = eax;
    POP32(esp, ecx);
    edi = ebp + -26;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(1);
    while (ecx != 0) {
        _flags = (MEM8(esi) == MEM8(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsb */
    if ((_flags == 0)) goto loc_003ECD9E; /* jne: not equal / not zero */

loc_003ECD71: ;
    eax = MEM32(edx + 0x24);
    MEM8(eax + 0x16F) = MEM8(eax + 0x16F) | 8;
    _fa = (uint32_t)(MEM8(eax + 0x16F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(ebp + 0xC);

loc_003ECD7E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3A) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x3A (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ECDA1; /* jne: not equal / not zero */

loc_003ECD83: ;
    PUSH32(esp, 5);
    POP32(esp, ecx);
    edi = ebp + -16;
    esi = eax;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _flags = ((_fa == 0)) ? 1 : 0; /* ZF in: a zero count keeps it */
    { int32_t _st = RECOMP_DF_STEP(2);
    while (ecx != 0) {
        _flags = (MEM16(esi) == MEM16(edi));
        esi += _st; edi += _st; ecx--;
        if (!_flags) break;
    } } /* repe cmpsw */
    if ((_flags == 0)) goto loc_003ECDA1; /* jne: not equal / not zero */

loc_003ECD92: ;
    ecx = MEM32(edx + 0x24);
    MEM8(ecx + 0x16F) = MEM8(ecx + 0x16F) | 0x10;
    _fa = (uint32_t)(MEM8(ecx + 0x16F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    goto loc_003ECDA1;

loc_003ECD9E: ;
    eax = MEM32(ebp + 0xC);

loc_003ECDA1: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x2D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECDBA; /* je: equal / zero */

loc_003ECDA6: ;
    esi = MEM32(edx + 0x70);

loc_003ECDA9: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003ECDBB; /* jae: above or equal (unsigned >=) */

loc_003ECDAE: ;
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ECDB5u); RECOMP_ABI_CALL(0x003EBE9Bu, sub_003EBE9B); /* call 0x003EBE9B */

loc_003ECDB5: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax), 0x2D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ECDA9; /* jne: not equal / not zero */

loc_003ECDBA: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003ECDBB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0x70) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ECDCD; /* jne: not equal / not zero */

loc_003ECDC0: ;
    _fa = (uint32_t)(MEM8(eax + -1)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + -1), 0x2D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECDCD; /* je: equal / zero */

loc_003ECDC6: ;
    MEM32(edx + 0x6C) = 0x1104;

loc_003ECDCD: ;
    edx = MEM32(ebp + 8);
    ecx = eax;
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(ebp + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(edx + 4) = LO16(ecx);
    goto loc_003ECDE6;

loc_003ECDDC: ;
    MEM32(edx + 0x6C) = 0x1114;

loc_003ECDE3: ;
    eax = MEM32(edx + 0x70);

loc_003ECDE6: ;
    POP32(esp, ebx);

loc_003ECDE7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003ECDED
 * Original: 0x003ECDED - 0x003ECED5 (232 bytes, 78 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00364B08, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003ECDED(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ECDED: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    eax = MEM32(esi + 0x18);
    ecx = MEM32(esi + 0x24);
    edx = eax + -8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx) (32-bit) */
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_003ECE14; /* jae: above or equal (unsigned >=) */

loc_003ECE05: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003ECECF;

loc_003ECE14: ;
    PUSH32(esp, ebx);
    ebx = eax + -4;
    MEM32(esi + 0x18) = ebx;
    edx = MEM32(ecx + 0x130);
    edx = ZX16(MEM16(edx + 0x14));
    eax = MEM32(ebx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003ECEC4; /* jge: greater or equal (signed >=) */

loc_003ECE2F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003ECEC4; /* jl: less (signed <) */

loc_003ECE37: ;
    edx = MEM32(ecx + 0x94);
    eax = edx + eax * 8;
    SET_LO16(edx, MEM16(eax + 6));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(2) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 2 (16-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003ECE53; /* jb: below (unsigned <) */

loc_003ECE4A: ;
    MEM32(esi + 0x6C) = 0x1115;
    goto loc_003ECECB;

loc_003ECE53: ;
    edx = ZX16(LO16(edx));
    ecx = MEM32(ecx + edx * 8 + 0xB0);
    edx = MEM32(eax);
    edi = edx + ecx;
    MEM32(ebp + -4) = edi;
    edi = ZX16(MEM16(eax + 4));
    eax = MEM32(esi + 0x54);
    MEM32(ebp + -8) = eax;
    eax = ebx + -4;
    ebx = MEM32(esi + 0x70);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ecx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(esi + 0x74);
    MEM32(esi + 0x18) = eax;
    eax = MEM32(eax);
    MEM32(esi + 0x7C) = MEM32(esi + 0x7C) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + -12) = ecx;
    if ((_fa != 0)) goto loc_003ECE94; /* jne: not equal / not zero */

loc_003ECE89: ;
    MEM32(esi + 0x6C) = 0x1106;

loc_003ECE90: ;
    eax = ebx;
    goto loc_003ECECE;

loc_003ECE94: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ebp + 8) = eax;
    if ((_fas < 0)) goto loc_003ECEAD; /* js: sign (negative) */

loc_003ECE9A: ;
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x6C), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ECEAD; /* jne: not equal / not zero */

loc_003ECEA0: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + -4));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebp + -8); PUSH32(esp, 0x003ECEA8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003ECEA5u); } /* indirect call */
    }

loc_003ECEA8: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_003ECE9A; /* jns: not sign (positive) */

loc_003ECEAD: ;
    MEM32(esi + 0x7C) = MEM32(esi + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x6C), 0 (32-bit) */
    eax = MEM32(ebp + -12);
    MEM32(esi + 0x70) = ebx;
    MEM32(esi + 0x74) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003ECE90; /* jne: not equal / not zero */

loc_003ECEBF: ;
    eax = MEM32(ebp + 0xC);
    goto loc_003ECECE;

loc_003ECEC4: ;
    MEM32(esi + 0x6C) = 0x1114;

loc_003ECECB: ;
    eax = MEM32(esi + 0x70);

loc_003ECECE: ;
    POP32(esp, ebx);

loc_003ECECF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003ECED5
 * Original: 0x003ECED5 - 0x003ECEFE (41 bytes, 13 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00364BF0, between)
 * CC: cdecl, 2 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003ECED5(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ECED5: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x24);
    eax = MEM32(ecx + 0x98);
    ecx = MEM32(ecx + 0x128);
    goto loc_003ECEF6;

loc_003ECEEA: ;
    SET_LO8(edx, MEM8(eax + 7));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(MEM8(esp + 8)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), MEM8(esp + 8) (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ECEFB; /* je: equal / zero */

loc_003ECEF3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003ECEF6: ;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fas >= 0)) goto loc_003ECEEA; /* jns: not sign (positive) */

loc_003ECEF9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003ECEFB: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003ECEFE
 * Original: 0x003ECEFE - 0x003ECF79 (123 bytes, 44 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00364C19, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ECEFE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ECEFE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    ebx = MEM32(esi + 0x74);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x18));
    edi = MEM32(esi + 0x70);
    PUSH32(esp, esi);
    PUSH32(esp, 0x003ECF15u); RECOMP_ABI_CALL(0x003ECED5u, sub_003ECED5); /* call 0x003ECED5 */

loc_003ECF15: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ECF22; /* jne: not equal / not zero */

loc_003ECF19: ;
    MEM32(esi + 0x6C) = 0x1101;
    goto loc_003ECF4E;

loc_003ECF22: ;
    SET_LO8(ecx, MEM8(eax + 6));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 2 (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003ECF33; /* jb: below (unsigned <) */

loc_003ECF2A: ;
    MEM32(esi + 0x6C) = 0x1115;
    goto loc_003ECF4E;

loc_003ECF33: ;
    edx = MEM32(esi + 0x24);
    ecx = ZX8(LO8(ecx));
    ecx = MEM32(edx + ecx * 8 + 0xB0);
    _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x7C) = MEM32(esi + 0x7C) - 1;
    _fa = (uint32_t)(MEM32(esi + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003ECF52; /* jne: not equal / not zero */

loc_003ECF47: ;
    MEM32(esi + 0x6C) = 0x1106;

loc_003ECF4E: ;
    eax = edi;
    goto loc_003ECF73;

loc_003ECF52: ;
    eax = ZX16(MEM16(eax + 4));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(esi + 0x54); PUSH32(esp, 0x003ECF5Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003ECF5Bu); } /* indirect call */
    }

loc_003ECF5E: ;
    MEM32(esi + 0x7C) = MEM32(esi + 0x7C) + 1;
    _fa = (uint32_t)(MEM32(esi + 0x7C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM32(esi + 0x6C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x6C), 0 (32-bit) */
    MEM32(esi + 0x70) = edi;
    MEM32(esi + 0x74) = ebx;
    eax = edi;
    if (CMP_NE(_fa, _fb)) goto loc_003ECF73; /* jne: not equal / not zero */

loc_003ECF6F: ;
    eax = MEM32(esp + 0x14);

loc_003ECF73: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003ECF79
 * Original: 0x003ECF79 - 0x003ED07B (258 bytes, 87 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00364C94, between)
 * Category: game_vtable
 * CC: thiscall, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003ECF79(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ECF79: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 8);
    esi = MEM32(edi + 0x24);
    eax = ZX8(MEM8(esi + 0x125));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(ebp + 8) = eax;
    if (CMP_L(_fas, _fbs)) goto loc_003ECFA4; /* jl: less (signed <) */

loc_003ECF95: ;
    eax = MEM32(edi + 0x70);
    MEM32(edi + 0x6C) = 0x1109;
    goto loc_003ED075;

loc_003ECFA4: ;
    eax = MEM32(esi + eax * 8 + 0xB0);
    MEM32(ebp + -4) = eax;
    eax = MEM32(edi + 0x18);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0xC);
    ecx = eax + -4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi) (32-bit) */
    MEM32(ebp + -8) = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_003ECFCE; /* jae: above or equal (unsigned >=) */

loc_003ECFBF: ;
    MEM32(edi + 0x6C) = 0x1110;

loc_003ECFC6: ;
    eax = MEM32(edi + 0x70);
    goto loc_003ED074;

loc_003ECFCE: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edi + 0x18) = eax;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFF00u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0xFFFFFF00u (32-bit) */
    MEM32(ebp + 0xC) = eax;
    if (TEST_Z(_fa, _fb)) goto loc_003ECFE9; /* je: equal / zero */

loc_003ECFE0: ;
    MEM32(edi + 0x6C) = 0x1117;
    goto loc_003ECFC6;

loc_003ECFE9: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ECFF0u); RECOMP_ABI_CALL(0x003ECED5u, sub_003ECED5); /* call 0x003ECED5 */

loc_003ECFF0: ;
    edx = eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED027; /* jne: not equal / not zero */

loc_003ECFF6: ;
    eax = MEM32(esi + 0x130);
    eax = ZX16(MEM16(eax + 0x16));
    _fa = (uint32_t)(MEM32(esi + 0x128)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x128), eax (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003ED011; /* jl: less (signed <) */

loc_003ED008: ;
    MEM32(edi + 0x6C) = 0x1118;
    goto loc_003ECFC6;

loc_003ED011: ;
    eax = MEM32(esi + 0x128);
    ecx = MEM32(esi + 0x98);
    edx = ecx + eax * 8;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(esi + 0x128) = eax;

loc_003ED027: ;
    SET_LO8(eax, MEM8(ebp + 8));
    MEM8(edx + 6) = LO8(eax);
    SET_LO8(eax, MEM8(ebp + 0xC));
    MEM8(edx + 7) = LO8(eax);
    eax = ebx;
    _fb = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx) = eax;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0x2D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED055; /* je: equal / zero */

loc_003ED03F: ;
    esi = MEM32(edi + 0x70);

loc_003ED042: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003ED056; /* jae: above or equal (unsigned >=) */

loc_003ED047: ;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ED04Eu); RECOMP_ABI_CALL(0x003EBE9Bu, sub_003EBE9B); /* call 0x003EBE9B */

loc_003ED04E: ;
    ebx = eax;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0x2D (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED042; /* jne: not equal / not zero */

loc_003ED055: ;
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003ED056: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi + 0x70)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi + 0x70) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED068; /* jne: not equal / not zero */

loc_003ED05B: ;
    _fa = (uint32_t)(MEM8(ebx + -1)) & 0xFFu; _fb = (uint32_t)(0x2D) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx + -1), 0x2D (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED068; /* je: equal / zero */

loc_003ED061: ;
    MEM32(edi + 0x6C) = 0x1104;

loc_003ED068: ;
    eax = ebx;
    _fb = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ebp + -8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(edx + 4) = LO16(eax);
    eax = ebx;

loc_003ED074: ;
    POP32(esp, ebx);

loc_003ED075: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003ED07B
 * Original: 0x003ED07B - 0x003ED0F2 (119 bytes, 41 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00364D96, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED07B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED07B: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(eax);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x24);
    ebx = ecx + -4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi) (32-bit) */
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x24);
    if (CMP_AE(_fa, _fb)) goto loc_003ED09D; /* jae: above or equal (unsigned >=) */

loc_003ED094: ;
    MEM32(eax + 0x6C) = 0x1110;
    goto loc_003ED0C3;

loc_003ED09D: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), edx (32-bit) */
    MEM32(eax + 0x18) = ecx;
    ecx = MEM32(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_003ED0CC; /* jne: not equal / not zero */

loc_003ED0AA: ;
    edx = MEM32(esi + 0x130);
    edx = ZX16(MEM16(edx + 0x10));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */

loc_003ED0B6: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003ED0BC; /* jge: greater or equal (signed >=) */

loc_003ED0B8: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003ED0D4; /* jge: greater or equal (signed >=) */

loc_003ED0BC: ;
    MEM32(eax + 0x6C) = 0x1112;

loc_003ED0C3: ;
    eax = MEM32(eax + 0x70);

loc_003ED0C6: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

loc_003ED0CC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x160) (32-bit) */
    goto loc_003ED0B6;

loc_003ED0D4: ;
    _fa = (uint32_t)(MEM16(eax + 0x10)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x10), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED0DF; /* je: equal / zero */

loc_003ED0DB: ;
    MEM8(ecx + edi) = MEM8(ecx + edi) & 0xFE;
    _fa = (uint32_t)(MEM8(ecx + edi)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_003ED0DF: ;
    _fa = (uint32_t)(MEM16(eax + 0x12)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(eax + 0x12), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED0EC; /* je: equal / zero */

loc_003ED0E6: ;
    eax = ecx + edi;
    MEM8(eax) = MEM8(eax) & 0xFD;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */

loc_003ED0EC: ;
    eax = MEM32(esp + 0x14);
    goto loc_003ED0C6;

}

/**
 * sub_003ED0F2
 * Original: 0x003ED0F2 - 0x003ED128 (54 bytes, 17 insns)
 * Folder: xdk/libc (between: 0x003ED07B and 0x003ED15E)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED0F2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED0F2: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003ED111; /* jae: above or equal (unsigned >=) */

loc_003ED105: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003ED125;

loc_003ED111: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    SET_LO16(eax, MEM16(eax));
    MEM16(edx + 0x88) = LO16(eax);
    eax = MEM32(esp + 8);

loc_003ED125: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003ED128
 * Original: 0x003ED128 - 0x003ED15E (54 bytes, 17 insns)
 * Folder: xdk/libc (between: 0x003ED07B and 0x003ED15E)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED128(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED128: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x18);
    edx = MEM32(ecx + 0x24);
    PUSH32(esp, esi);
    esi = eax + -4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx) (32-bit) */
    POP32(esp, esi);
    if (CMP_AE(_fa, _fb)) goto loc_003ED147; /* jae: above or equal (unsigned >=) */

loc_003ED13B: ;
    eax = MEM32(ecx + 0x70);
    MEM32(ecx + 0x6C) = 0x1110;
    goto loc_003ED15B;

loc_003ED147: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 0x18) = eax;
    SET_LO16(eax, MEM16(eax));
    MEM16(edx + 0x8A) = LO16(eax);
    eax = MEM32(esp + 8);

loc_003ED15B: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003ED15E
 * Original: 0x003ED15E - 0x003ED35C (510 bytes, 163 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00364E79, between)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003ED15E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED15E: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x18);
    eax = MEM32(esi + 0x24);
    edx = ecx + -4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003ED182; /* jae: above or equal (unsigned >=) */

loc_003ED173: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003ED347;

loc_003ED182: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x18) = ecx;
    PUSH32(esp, ebx);
    ebx = MEM32(ecx);
    ebx = ebx << 1;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ebx;
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    MEM32(ebp + -4) = ebx;
    if (CMP_AE(_fa, _fb)) goto loc_003ED1AA; /* jae: above or equal (unsigned >=) */

loc_003ED19B: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003ED346;

loc_003ED1AA: ;
    MEM32(esi + 0x18) = ecx;
    _fa = (uint32_t)(MEM8(eax + 0x12C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x12C), 0 (8-bit) */
    PUSH32(esp, edi);
    edi = ZX16(MEM16(eax + 0xC));
    if (CMP_NE(_fa, _fb)) goto loc_003ED1CA; /* jne: not equal / not zero */

loc_003ED1BB: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ED1C1u); RECOMP_ABI_CALL(0x003E83AEu, sub_003E83AE); /* call 0x003E83AE */

loc_003ED1C1: ;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ED1C8u); RECOMP_ABI_CALL(0x003E4EEDu, sub_003E4EED); /* call 0x003E4EED */

loc_003ED1C8: ;
    edi = eax;

loc_003ED1CA: ;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0x10 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003ED342; /* jge: greater or equal (signed >=) */

loc_003ED1D9: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003ED342; /* jl: less (signed <) */

loc_003ED1E1: ;
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) & 0;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = edi << 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    MEM32(ebp + 8) = edi;
    if (CMP_LE(_fas, _fbs)) goto loc_003ED339; /* jle: less or equal (signed <=) */

loc_003ED1FB: ;
    edx = MEM32(esi + 0x18);

loc_003ED1FE: ;
    ecx = MEM32(ebp + 0x14);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(edx + ecx * 4);
    edi = edi & 0xFFFFFFF0u;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 8) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003ED211; /* jge: greater or equal (signed >=) */

loc_003ED20E: ;
    MEM32(ebp + 0x14) = ecx;

loc_003ED211: ;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = eax & 0xFFFFFFFEu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_003ED1FE; /* jg: greater (signed >) */

loc_003ED21B: ;
    goto loc_003ED339;

loc_003ED220: ;
    eax = MEM32(esi + 0x18);
    ecx = MEM32(ebp + 0x14);
    edx = eax + ecx * 4;
    eax = MEM32(edx);
    ecx = eax;
    ecx = ecx & 0xFFFFFFF0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED34C; /* jne: not equal / not zero */

loc_003ED239: ;
    edi = MEM32(edx + 4);
    eax = eax & 0xF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(8) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 8 (32-bit) */
    SET_LO8(ecx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fb = (uint32_t)(7) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 7;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    SET_LO8(ecx, MEM8(ebp + 0x18));
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = eax;
    eax = MEM32(ebp + 0x10);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x48)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x48) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED291; /* jne: not equal / not zero */

loc_003ED25E: ;
    eax = MEM32(esi + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi) (32-bit) */
    eax = MEM32(esi + 0x24);
    if (CMP_NE(_fa, _fb)) goto loc_003ED289; /* jne: not equal / not zero */

loc_003ED268: ;
    ecx = MEM32(eax + 0x130);
    ecx = ZX16(MEM16(ecx + 0x10));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */

loc_003ED274: ;
    if (CMP_GE(_fas, _fbs)) goto loc_003ED27A; /* jge: greater or equal (signed >=) */

loc_003ED276: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003ED2AB; /* jge: greater or equal (signed >=) */

loc_003ED27A: ;
    MEM32(esi + 0x6C) = 0x1112;

loc_003ED281: ;
    eax = MEM32(esi + 0x70);
    goto loc_003ED345;

loc_003ED289: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0x160)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(eax + 0x160) (32-bit) */
    goto loc_003ED274;

loc_003ED291: ;
    eax = MEM32(esi + 0x24);
    ecx = ZX16(MEM16(eax + 0x134));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003ED350; /* jge: greater or equal (signed >=) */

loc_003ED2A3: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003ED350; /* jl: less (signed <) */

loc_003ED2AB: ;
    ecx = MEM32(ebp + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x60)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x60) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED32A; /* je: equal / zero */

loc_003ED2B3: ;
    SET_LO16(ecx, MEM16(eax + 0x16C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ED32A; /* je: equal / zero */

loc_003ED2BF: ;
    _fa = (uint32_t)(MEM8(eax + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003ED32A; /* jne: not equal / not zero */

loc_003ED2C5: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003ED2FA; /* jne: not equal / not zero */

loc_003ED2CA: ;
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), 0x4000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED332; /* jne: not equal / not zero */

loc_003ED2D2: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED332; /* jne: not equal / not zero */

loc_003ED2D9: ;
    _fa = (uint32_t)(MEM8(eax + 0x12D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x12D), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED32A; /* jne: not equal / not zero */

loc_003ED2E2: ;
    ecx = MEM32(esi);
    edx = (uint32_t)(int32_t)SMEM16(edx + 4);
    ecx = MEM32(ecx + 0x24);
    _fa = (uint32_t)(MEM8(edx + ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ED332; /* je: equal / zero */

loc_003ED2F1: ;
    _fa = (uint32_t)(MEM8(eax + 0x16E)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16E), 2 (8-bit) */
    goto loc_003ED328;

loc_003ED2FA: ;
    _fa = (uint32_t)(MEM16(esi + 0xC)) & 0xFFFFu; _fb = (uint32_t)(0x4000) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xC), 0x4000 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED332; /* jne: not equal / not zero */

loc_003ED302: ;
    _fa = (uint32_t)(MEM16(esi + 0xE)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0xE), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED332; /* jne: not equal / not zero */

loc_003ED309: ;
    _fa = (uint32_t)(MEM8(eax + 0x12D)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x12D), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED32A; /* jne: not equal / not zero */

loc_003ED312: ;
    ecx = MEM32(esi);
    edx = (uint32_t)(int32_t)SMEM16(edx + 4);
    ecx = MEM32(ecx + 0x24);
    _fa = (uint32_t)(MEM8(edx + ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003ED332; /* je: equal / zero */

loc_003ED321: ;
    _fa = (uint32_t)(MEM8(eax + 0x16E)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x16E), 1 (8-bit) */

loc_003ED328: ;
    if (TEST_NZ(_fa, _fb)) goto loc_003ED332; /* jne: not equal / not zero */

loc_003ED32A: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebx);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(ebp + 0x10); PUSH32(esp, 0x003ED332u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003ED32Fu); } /* indirect call */
    }

loc_003ED332: ;
    ebx = MEM32(ebp + -4);

loc_003ED335: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) + 2;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003ED339: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), ebx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003ED220; /* jl: less (signed <) */

loc_003ED342: ;
    eax = MEM32(ebp + 0xC);

loc_003ED345: ;
    POP32(esp, edi);

loc_003ED346: ;
    POP32(esp, ebx);

loc_003ED347: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 24; return; /* ret 20 */

loc_003ED34C: ;
    if (CMP_G(_fas, _fbs)) goto loc_003ED342; /* jg: greater (signed >) */

loc_003ED34E: ;
    goto loc_003ED335;

loc_003ED350: ;
    MEM32(esi + 0x6C) = 0x111B;
    goto loc_003ED281;

}

/**
 * sub_003ED35C
 * Original: 0x003ED35C - 0x003ED382 (38 bytes, 13 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00365077, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED35C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED35C: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax + 0x2E));
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ecx + 0x48));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003ED37Fu); RECOMP_ABI_CALL(0x003ED15Eu, sub_003ED15E); /* call 0x003ED15E */

loc_003ED37F: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003ED382
 * Original: 0x003ED382 - 0x003ED3AC (42 bytes, 14 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036509D, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED382(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED382: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x2C));
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2E);
    _fb = (uint32_t)(0x10) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 0x10);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(edx + 0x48));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, edx);
    PUSH32(esp, 0x003ED3A9u); RECOMP_ABI_CALL(0x003ED15Eu, sub_003ED15E); /* call 0x003ED15E */

loc_003ED3A9: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003ED3AC
 * Original: 0x003ED3AC - 0x003ED3D6 (42 bytes, 14 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003650C7, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED3AC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED3AC: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x2C));
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2E);
    _fb = (uint32_t)(0x20) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 0x20);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(edx + 0x48));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, edx);
    PUSH32(esp, 0x003ED3D3u); RECOMP_ABI_CALL(0x003ED15Eu, sub_003ED15E); /* call 0x003ED15E */

loc_003ED3D3: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003ED3D6
 * Original: 0x003ED3D6 - 0x003ED3FC (38 bytes, 13 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003650F1, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED3D6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED3D6: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(edx, MEM16(eax + 0x2E));
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2C);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ecx + 0x60));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003ED3F9u); RECOMP_ABI_CALL(0x003ED15Eu, sub_003ED15E); /* call 0x003ED15E */

loc_003ED3F9: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003ED3FC
 * Original: 0x003ED3FC - 0x003ED426 (42 bytes, 14 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00365117, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED3FC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED3FC: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x2C));
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2E);
    _fb = (uint32_t)(0x10) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 0x10);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(edx + 0x60));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, edx);
    PUSH32(esp, 0x003ED423u); RECOMP_ABI_CALL(0x003ED15Eu, sub_003ED15E); /* call 0x003ED15E */

loc_003ED423: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003ED426
 * Original: 0x003ED426 - 0x003ED450 (42 bytes, 14 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00365141, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED426(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED426: ;
    edx = MEM32(esp + 4);
    eax = MEM32(edx + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, MEM16(eax + 0x2C));
    eax = (uint32_t)(int32_t)SMEM16(eax + 0x2E);
    _fb = (uint32_t)(0x20) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 0x20);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(edx + 0x60));
    PUSH32(esp, MEM32(esp + 0x14));
    PUSH32(esp, edx);
    PUSH32(esp, 0x003ED44Du); RECOMP_ABI_CALL(0x003ED15Eu, sub_003ED15E); /* call 0x003ED15E */

loc_003ED44D: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003ED450
 * Original: 0x003ED450 - 0x003ED4A3 (83 bytes, 34 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036516B, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003ED450(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED450: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    ecx = MEM32(eax + 0x24);
    _fa = (uint32_t)(MEM8(ecx + 0x6C)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + 0x6C), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003ED476; /* jne: not equal / not zero */

loc_003ED45F: ;
    _fa = (uint32_t)(MEM32(eax + 0x50)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3E8342) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x50), 0x3E8342 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED476; /* jne: not equal / not zero */

loc_003ED468: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ED474u); RECOMP_ABI_CALL(0x003E7F8Cu, sub_003E7F8C); /* call 0x003E7F8C */

loc_003ED474: ;
    goto loc_003ED49F;

loc_003ED476: ;
    eax = MEM32(ebp + 0x10);
    ecx = MEM32(ebp + 0xC);
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003ED48C; /* jl: less (signed <) */

loc_003ED485: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003ED493;

loc_003ED48C: ;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003ED493: ;
    edx = eax;
    edx = edx ^ ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    if ((_fas >= 0)) goto loc_003ED49F; /* jge: greater or equal (signed >=) */

loc_003ED499: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED49F; /* je: equal / zero */

loc_003ED49D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003ED49F: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003ED4A3
 * Original: 0x003ED4A3 - 0x003ED522 (127 bytes, 37 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003651BE, between)
 * CC: cdecl, 4 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_003ED4A3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED4A3: ;
    eax = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x130);
    MEM32(eax + 0x128) = ecx;
    MEM8(eax + 0x124) = 1;
    MEM8(eax + 0x125) = 1;
    MEM32(eax + 0x20) = ecx;
    MEM32(eax + 0x14) = ecx;
    MEM32(eax + 0x18) = ecx;
    MEM32(eax + 0x1C) = ecx;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM16(esi + 0x14)) & 0xFFFFu; _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x14), LO16(ecx) (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003ED4F4; /* jbe: below or equal (unsigned <=) */

loc_003ED4D8: ;
    esi = MEM32(eax + 0x94);
    MEM16(esi + edx * 8 + 6) = 2;
    esi = MEM32(eax + 0x130);
    esi = ZX16(MEM16(esi + 0x14));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003ED4D8; /* jl: less (signed <) */

loc_003ED4F4: ;
    edx = MEM32(eax + 0xB8);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    POP32(esp, esi);
    if (CMP_EQ(_fa, _fb)) goto loc_003ED51D; /* je: equal / zero */

loc_003ED4FF: ;
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, eax);
    eax = MEM32(eax + 0xBC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, MEM32(esp + 0x18));
    PUSH32(esp, 0x003ED51Bu); RECOMP_ABI_CALL(0x003E8578u, sub_003E8578); /* call 0x003E8578 */

loc_003ED51B: ;
    goto loc_003ED51F;

loc_003ED51D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003ED51F: ;
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003ED522
 * Original: 0x003ED522 - 0x003ED58A (104 bytes, 42 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036523D, between)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003ED522(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED522: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x10);
    eax = MEM32(ebx + 0xB0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebx + 0x24;
    edi = ebx + 0x5C;
    PUSH32(esp, 0xE);
    POP32(esp, ecx);
    MEM32(ebp + -4) = esi;
    MEM32(ebp + 0x10) = edi;
    MEM8(ebx + 0x124) = 1;
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
    MEM8(ebx + 0x125) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_003ED570; /* je: equal / zero */

loc_003ED555: ;
    PUSH32(esp, MEM32(ebp + 0x14));
    ecx = MEM32(ebx + 0xB4);
    PUSH32(esp, ebx);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ED56Eu); RECOMP_ABI_CALL(0x003E8578u, sub_003E8578); /* call 0x003E8578 */

loc_003ED56E: ;
    goto loc_003ED572;

loc_003ED570: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003ED572: ;
    _fa = (uint32_t)(MEM8(ebx + 0x6C)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x6C), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003ED583; /* jne: not equal / not zero */

loc_003ED578: ;
    esi = MEM32(ebp + 0x10);
    edi = MEM32(ebp + -4);
    PUSH32(esp, 0xE);
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

loc_003ED583: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003ED58A
 * Original: 0x003ED58A - 0x003ED5F3 (105 bytes, 40 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003652A5, between)
 * CC: cdecl, 9 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003ED58A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED58A: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 0x18);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 0xE);
    esi = ebx + 0x24;
    edi = ebx + 0x5C;
    POP32(esp, ecx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
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
    _fa = (uint32_t)(MEM8(ebx + 0x6C)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x6C), 1 (8-bit) */
    MEM8(ebx + 0x124) = LO8(eax);
    MEM8(ebx + 0x125) = 2;
    if (TEST_NZ(_fa, _fb)) goto loc_003ED5C8; /* jne: not equal / not zero */

loc_003ED5B3: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(ebp + 0x14));
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(ebp + 8));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ED5C8u); RECOMP_ABI_CALL(0x003E8578u, sub_003E8578); /* call 0x003E8578 */

loc_003ED5C8: ;
    ecx = MEM32(ebx + 0x68);
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 0x30)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + 0x30) (32-bit) */
    ecx = MEM32(ebp + 0x28);
    SET_LO8(edx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = edx;
    SET_LO16(ecx, MEM16(ebx + 0x68));
    edx = MEM32(ebp + 0x24);
    MEM16(edx) = LO16(ecx);
    SET_LO16(ecx, MEM16(ebx + 0x6A));
    edx = MEM32(ebp + 0x20);
    MEM16(edx) = LO16(ecx);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 40; return; /* ret 36 */

}

/**
 * sub_003ED5F3
 * Original: 0x003ED5F3 - 0x003ED64D (90 bytes, 27 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036530E, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED5F3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED5F3: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x24);
    ecx = eax + -4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003ED611; /* jae: above or equal (unsigned >=) */

loc_003ED605: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003ED649;

loc_003ED611: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 1);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, esi);
    PUSH32(esp, 0x003ED621u); RECOMP_ABI_CALL(0x003E978Bu, sub_003E978B); /* call 0x003E978B */

loc_003ED621: ;
    eax = MEM32(esi + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x1C) = 6;
    ecx = ZX16(MEM16(esi + 0x80));
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ecx + 0x54BEA8);
    MEM32(eax + 0x18) = ecx;
    MEM16(esi + 0x68) = MEM16(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 0xC);

loc_003ED649: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003ED64D
 * Original: 0x003ED64D - 0x003ED6A7 (90 bytes, 27 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00365368, between)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED64D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED64D: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = MEM32(esi + 0x18);
    edx = MEM32(esi + 0x24);
    ecx = eax + -4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003ED66B; /* jae: above or equal (unsigned >=) */

loc_003ED65F: ;
    eax = MEM32(esi + 0x70);
    MEM32(esi + 0x6C) = 0x1110;
    goto loc_003ED6A3;

loc_003ED66B: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0);
    MEM32(esi + 0x18) = eax;
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, esi);
    PUSH32(esp, 0x003ED67Bu); RECOMP_ABI_CALL(0x003E978Bu, sub_003E978B); /* call 0x003E978B */

loc_003ED67B: ;
    eax = MEM32(esi + 0x24);
    _fb = (uint32_t)(0x5C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x5C;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM16(eax + 0x1C) = 7;
    ecx = ZX16(MEM16(esi + 0x80));
    ecx = ecx << 5;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = MEM32(ecx + 0x54BEAC);
    MEM32(eax + 0x18) = ecx;
    MEM16(esi + 0x68) = MEM16(esi + 0x68) & 0;
    _fa = (uint32_t)(MEM16(esi + 0x68)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    eax = MEM32(esp + 0xC);

loc_003ED6A3: ;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003ED6A7
 * Original: 0x003ED6A7 - 0x003ED701 (90 bytes, 39 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003653C2, between)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003ED6A7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED6A7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    edx = MEM32(ebp + 0xC);
    PUSH32(esp, ebx);
    ecx = eax;
    eax = eax >> 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    MEM32(ebp + 8) = eax;
    eax = edx;
    PUSH32(esp, edi);
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = 0xFFFF;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax & esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = MEM32(ebp + 0x10);
    edi = edx;
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(ebp + 8));
    ebx = eax;
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(ebp + 8));
    ebx = (uint32_t)((int32_t)ebx * (int32_t)ecx);
    MEM32(esi) = edi;
    edi = MEM32(ebp + 0x14);
    MEM32(edi) = ebx;
    ecx = edx;
    ebx = eax;
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + ebx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx << 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(edi) = MEM32(edi) + edx;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_003ED701
 * Original: 0x003ED701 - 0x003ED76A (105 bytes, 42 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036541C, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003ED701(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED701: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    MEM32(ebp + -4) = eax;
    MEM32(ebp + -12) = 2;
    PUSH32(esp, edi);

loc_003ED717: ;
    edi = MEM32(ebp + -4);
    MEM32(ebp + -8) = 2;

loc_003ED721: ;
    esi = MEM32(edi);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    SET_LO8(ebx, (CMP_L(_fas, _fbs)) ? 1 : 0); /* setl */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003ED730; /* jge: greater or equal (signed >=) */

loc_003ED72E: ;
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003ED730: ;
    eax = ebp + -16;
    PUSH32(esp, eax);
    eax = ebp + 8;
    PUSH32(esp, eax);
    PUSH32(esp, 0x51E);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ED743u); RECOMP_ABI_CALL(0x003ED6A7u, sub_003ED6A7); /* call 0x003ED6A7 */

loc_003ED743: ;
    MEM32(ebp + 8) = MEM32(ebp + 8) << 0x10;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - MEM32(ebp + 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003ED750; /* je: equal / zero */

loc_003ED74E: ;
    esi = (uint32_t)(-(int32_t)esi);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003ED750: ;
    MEM32(edi) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -8) = MEM32(ebp + -8) - 1;
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003ED721; /* jne: not equal / not zero */

loc_003ED75A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + -4) = MEM32(ebp + -4) + 0xC;
    _fa = (uint32_t)(MEM32(ebp + -4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + -12) = MEM32(ebp + -12) - 1;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003ED717; /* jne: not equal / not zero */

loc_003ED763: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003ED76A
 * Original: 0x003ED76A - 0x003ED787 (29 bytes, 6 insns)
 * Folder: xdk/libc (between: 0x003ED701 and 0x003ED7A2)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED76A(void)
{

loc_003ED76A: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    MEM32(eax + 0x148) = ecx;
    SET_LO16(ecx, MEM16(esp + 0xC));
    MEM16(eax + 0x16C) = LO16(ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003ED787
 * Original: 0x003ED787 - 0x003ED7A2 (27 bytes, 9 insns)
 * Folder: xdk/libc (between: 0x003ED701 and 0x003ED7A2)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED787(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED787: ;
    ecx = MEM32(esp + 4);
    eax = MEM32(ecx + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 8));
    edx = MEM32(ecx + 4);
    ecx = MEM32(ecx + 0xC);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003ED7A2
 * Original: 0x003ED7A2 - 0x003ED7D9 (55 bytes, 21 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003654BD, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED7A2(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED7A2: ;
    _fa = (uint32_t)(MEM32(esp + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 8), 0 (32-bit) */
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 4);
    if (CMP_GE(_fas, _fbs)) goto loc_003ED7C5; /* jge: greater or equal (signed >=) */

loc_003ED7B0: ;
    edx = MEM32(eax + 8);
    edx = (uint32_t)((int32_t)edx * (int32_t)MEM32(esp + 8));
    eax = ecx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    goto loc_003ED7D6;

loc_003ED7C5: ;
    eax = MEM32(eax + 8);
    eax = (uint32_t)((int32_t)eax * (int32_t)MEM32(esp + 8));
    edx = ecx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ecx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ecx)); }

loc_003ED7D6: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003ED7D9
 * Original: 0x003ED7D9 - 0x003ED7EB (18 bytes, 5 insns)
 * Folder: xdk/libc (between: 0x003ED7A2 and 0x003ED7EB)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED7D9(void)
{

loc_003ED7D9: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, MEM32(esp + 0xC));
    PUSH32(esp, 0x003ED7E8u); RECOMP_ABI_CALL(0x003E4EEDu, sub_003E4EED); /* call 0x003E4EED */

loc_003ED7E8: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003ED7EB
 * Original: 0x003ED7EB - 0x003ED85C (113 bytes, 43 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00365506, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003ED7EB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED7EB: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x18);
    eax = ebx;
    eax = eax | edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003ED800u); RECOMP_ABI_CALL(0x003E5518u, sub_003E5518); /* call 0x003E5518 */

loc_003ED800: ;
    ecx = eax;
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003ED80B; /* jle: less or equal (signed <=) */

loc_003ED807: ;
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_003ED80B: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x2000000 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003ED818; /* jge: greater or equal (signed >=) */

loc_003ED813: ;
    ebx = ebx << 6;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_003ED81B;

loc_003ED818: ;
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((6) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_003ED81B: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003ED822u); RECOMP_ABI_CALL(0x003E4F65u, sub_003E4F65); /* call 0x003E4F65 */

loc_003ED822: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0x7FFF (32-bit) */
    esi = MEM32(esp + 0x10);
    MEM32(esi) = eax;
    if (CMP_G(_fas, _fbs)) goto loc_003ED851; /* jg: greater (signed >) */

loc_003ED830: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003ED836u); RECOMP_ABI_CALL(0x003E580Bu, sub_003E580B); /* call 0x003E580B */

loc_003ED836: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 8) = ebx;
    MEM32(esi + 4) = edi;
    if (CMP_L(_fas, _fbs)) goto loc_003ED84A; /* jl: less (signed <) */

loc_003ED840: ;
    MEM32(esi + 0xC) = eax;
    eax = 0x3ED787;
    goto loc_003ED856;

loc_003ED84A: ;
    eax = 0x3ED7A2;
    goto loc_003ED856;

loc_003ED851: ;
    eax = 0x3ED7D9;

loc_003ED856: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003ED85C
 * Original: 0x003ED85C - 0x003ED91B (191 bytes, 79 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00365577, between)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003ED85C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED85C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3ED787) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x3ED787 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003ED89E; /* jne: not equal / not zero */

loc_003ED86B: ;
    edi = MEM32(ebp + 0x18);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003ED914; /* jle: less or equal (signed <=) */

loc_003ED876: ;
    edx = MEM32(ebp + 0x14);
    esi = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003ED881: ;
    ebx = MEM32(esi + edx);
    ebx = (uint32_t)((int32_t)ebx * (int32_t)MEM32(eax + 8));
    ecx = MEM32(eax + 4);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + ecx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = MEM32(eax + 0xC);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(edx) = ebx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi--;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003ED881; /* jne: not equal / not zero */

loc_003ED89C: ;
    goto loc_003ED914;

loc_003ED89E: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3ED7A2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x3ED7A2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED8F0; /* jne: not equal / not zero */

loc_003ED8A7: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003ED914; /* jle: less or equal (signed <=) */

loc_003ED8AE: ;
    edi = MEM32(ebp + 0x10);
    esi = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x18) = eax;

loc_003ED8BC: ;
    edx = MEM32(edi);
    eax = MEM32(ecx + 8);
    ebx = MEM32(ecx + 4);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003ED8DA; /* jge: greater or equal (signed >=) */

loc_003ED8CB: ;
    edx = eax;
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    goto loc_003ED8E3;

loc_003ED8DA: ;
    edx = ebx;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((1) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }

loc_003ED8E3: ;
    MEM32(esi + edi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003ED8BC; /* jne: not equal / not zero */

loc_003ED8EE: ;
    goto loc_003ED914;

loc_003ED8F0: ;
    ebx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003ED914; /* jle: less or equal (signed <=) */

loc_003ED8F7: ;
    esi = MEM32(ebp + 0x14);
    edi = MEM32(ebp + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003ED8FF: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax));
    PUSH32(esp, MEM32(esi + edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ED90Cu); RECOMP_ABI_CALL(0x003E4EEDu, sub_003E4EED); /* call 0x003E4EED */

loc_003ED90C: ;
    MEM32(esi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx--;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003ED8FF; /* jne: not equal / not zero */

loc_003ED914: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003ED91B
 * Original: 0x003ED91B - 0x003EDA07 (236 bytes, 91 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00365636, between)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003ED91B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003ED91B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3ED787) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x3ED787 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_003ED971; /* jne: not equal / not zero */

loc_003ED92D: ;
    _fa = (uint32_t)(MEM32(esi + 8)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 8), 0x1FF (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003ED971; /* jge: greater or equal (signed >=) */

loc_003ED936: ;
    ecx = MEM32(esi + 0xC);
    edi = MEM32(ebp + 0x18);
    _fb = (uint32_t)(6) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 6;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003EDA00; /* jle: less or equal (signed <=) */

loc_003ED947: ;
    eax = MEM32(ebp + 0x14);
    edx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x18) = edi;

loc_003ED952: ;
    edi = MEM32(edx + eax);
    edi = (uint32_t)((int32_t)edi * (int32_t)MEM32(esi + 8));
    ebx = MEM32(esi + 4);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((1) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((LO8(ecx)) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(eax) = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003ED952; /* jne: not equal / not zero */

loc_003ED96C: ;
    goto loc_003EDA00;

loc_003ED971: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3ED7A2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0x3ED7A2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003ED9D6; /* jne: not equal / not zero */

loc_003ED97A: ;
    edi = MEM32(esi + 8);
    ecx = MEM32(ebp + 0x18);
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((6) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003EDA00; /* jle: less or equal (signed <=) */

loc_003ED987: ;
    edx = MEM32(ebp + 0x10);
    eax = MEM32(ebp + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x18) = edx;
    MEM32(ebp + 0x10) = eax;
    MEM32(ebp + 0x14) = ecx;

loc_003ED998: ;
    eax = MEM32(ebp + 0x18);
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    ebx = MEM32(esi + 4);
    if (CMP_GE(_fas, _fbs)) goto loc_003ED9B4; /* jge: greater or equal (signed >=) */

loc_003ED9A4: ;
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edi);
    eax = ebx;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    goto loc_003ED9C2;

loc_003ED9B4: ;
    eax = ecx;
    eax = (uint32_t)((int32_t)eax * (int32_t)edi);
    ecx = ebx;
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((1) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)ebx));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)ebx)); }

loc_003ED9C2: ;
    edx = MEM32(ebp + 0x18);
    ecx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) + 4;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x14) = MEM32(ebp + 0x14) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(ecx + edx) = eax;
    if ((_fa != 0)) goto loc_003ED998; /* jne: not equal / not zero */

loc_003ED9D4: ;
    goto loc_003EDA00;

loc_003ED9D6: ;
    esi = MEM32(esi);
    eax = MEM32(ebp + 0x18);
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((6) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003EDA00; /* jle: less or equal (signed <=) */

loc_003ED9E2: ;
    edi = MEM32(ebp + 0x14);
    ebx = MEM32(ebp + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edi;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 0x18) = eax;

loc_003ED9ED: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(edi + ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003ED9F6u); RECOMP_ABI_CALL(0x003E4EEDu, sub_003E4EED); /* call 0x003E4EED */

loc_003ED9F6: ;
    MEM32(edi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x18) = MEM32(ebp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003ED9ED; /* jne: not equal / not zero */

loc_003EDA00: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003EDA07
 * Original: 0x003EDA07 - 0x003EDA41 (58 bytes, 27 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00365722, between)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EDA07(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EDA07: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax);
    eax = MEM32(ebp + 0x18);
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((6) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003EDA3C; /* jle: less or equal (signed <=) */

loc_003EDA1A: ;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 0x14);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ebp + 8) = eax;

loc_003EDA27: ;
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(edi + esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EDA30u); RECOMP_ABI_CALL(0x003E4F65u, sub_003E4F65); /* call 0x003E4F65 */

loc_003EDA30: ;
    MEM32(esi) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 8) = MEM32(ebp + 8) - 1;
    _fa = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003EDA27; /* jne: not equal / not zero */

loc_003EDA3A: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003EDA3C: ;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003EDA41
 * Original: 0x003EDA41 - 0x003EDA66 (37 bytes, 15 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036575C, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDA41(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EDA41: ;
    edx = MEM32(esp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003EDA63; /* jle: less or equal (signed <=) */

loc_003EDA49: ;
    ecx = MEM32(esp + 8);
    eax = MEM32(esp + 4);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);

loc_003EDA54: ;
    esi = MEM32(eax + ecx);
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx) = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx--;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003EDA54; /* jne: not equal / not zero */

loc_003EDA62: ;
    POP32(esp, esi);

loc_003EDA63: ;
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EDA66
 * Original: 0x003EDA66 - 0x003EDB04 (158 bytes, 48 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00365781, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDA66(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EDA66: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    ecx = MEM32(edi + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0x14C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x14C), 0 (8-bit) */
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 8));
    PUSH32(esp, MEM32(edi + 0x10));
    if (CMP_EQ(_fa, _fb)) goto loc_003EDAC6; /* je: equal / zero */

loc_003EDA91: ;
    PUSH32(esp, MEM32(esi + 0xA4));
    eax = esi + 0xE0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003EDAA3u); RECOMP_ABI_CALL(0x003ED85Cu, sub_003ED85C); /* call 0x003ED85C */

loc_003EDAA3: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    ecx = MEM32(edi + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0xC));
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(edi + 0x14));
    PUSH32(esp, MEM32(esi + -72));
    goto loc_003EDAF9;

loc_003EDAC6: ;
    PUSH32(esp, MEM32(esi + 0x9C));
    eax = esi + 0xC0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003EDAD8u); RECOMP_ABI_CALL(0x003ED85Cu, sub_003ED85C); /* call 0x003ED85C */

loc_003EDAD8: ;
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    ecx = MEM32(edi + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0xC));
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(edi + 0x14));
    PUSH32(esp, MEM32(esi + -48));

loc_003EDAF9: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EDAFFu); RECOMP_ABI_CALL(0x003ED85Cu, sub_003ED85C); /* call 0x003ED85C */

loc_003EDAFF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EDB04
 * Original: 0x003EDB04 - 0x003EDBA4 (160 bytes, 51 insns)
 * Folder: xdk/libc (between: 0x003EDA66 and 0x003EDBA4)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDB04(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EDB04: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    edx = MEM32(edi + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    eax = MEM32(edi);
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0x14C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x14C), 0 (8-bit) */
    ecx = ZX16(LO16(ecx));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003EDB64; /* je: equal / zero */

loc_003EDB2D: ;
    PUSH32(esp, MEM32(esi + 0xA4));
    eax = esi + 0xE0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003EDB3Fu); RECOMP_ABI_CALL(0x003ED91Bu, sub_003ED91B); /* call 0x003ED91B */

loc_003EDB3F: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    edx = MEM32(edi + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    eax = MEM32(edi + 4);
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ecx));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xA8));
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003EDB99;

loc_003EDB64: ;
    PUSH32(esp, MEM32(esi + 0x9C));
    eax = esi + 0xC0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003EDB76u); RECOMP_ABI_CALL(0x003ED91Bu, sub_003ED91B); /* call 0x003ED91B */

loc_003EDB76: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    edx = MEM32(edi + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    eax = MEM32(edi + 4);
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ecx));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xA0));
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EDB99: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EDB9Fu); RECOMP_ABI_CALL(0x003ED91Bu, sub_003ED91B); /* call 0x003ED91B */

loc_003EDB9F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EDBA4
 * Original: 0x003EDBA4 - 0x003EDC40 (156 bytes, 53 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003658BF, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDBA4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EDBA4: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ebx = ZX16(LO16(eax));
    eax = MEM32(esi + 8);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(edi + 0x14C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edi + 0x14C), 0 (8-bit) */
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003EDC08; /* je: equal / zero */

loc_003EDBDA: ;
    PUSH32(esp, MEM32(edi + 0xA4));
    eax = edi + 0xE0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003EDBECu); RECOMP_ABI_CALL(0x003ED85Cu, sub_003ED85C); /* call 0x003ED85C */

loc_003EDBEC: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0xA8));
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xF0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003EDC34;

loc_003EDC08: ;
    PUSH32(esp, MEM32(edi + 0x9C));
    eax = edi + 0xC0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003EDC1Au); RECOMP_ABI_CALL(0x003ED85Cu, sub_003ED85C); /* call 0x003ED85C */

loc_003EDC1A: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(edi + 0xA0));
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xD0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EDC34: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x003EDC3Au); RECOMP_ABI_CALL(0x003ED85Cu, sub_003ED85C); /* call 0x003ED85C */

loc_003EDC3A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EDC40
 * Original: 0x003EDC40 - 0x003EDC9A (90 bytes, 33 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036595B, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDC40(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EDC40: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    eax = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    ecx = MEM32(edi + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esi = ZX16(LO16(eax));
    eax = MEM32(edi);
    PUSH32(esp, 8);
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0xA4));
    eax = ebx + 0xE0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003EDC79u); RECOMP_ABI_CALL(0x003ED91Bu, sub_003ED91B); /* call 0x003ED91B */

loc_003EDC79: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, 8);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(ebx + 0xA8));
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xF0;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, 0x003EDC94u); RECOMP_ABI_CALL(0x003ED91Bu, sub_003ED91B); /* call 0x003ED91B */

loc_003EDC94: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EDC9A
 * Original: 0x003EDC9A - 0x003EDD3A (160 bytes, 51 insns)
 * Folder: xdk/libc (between: 0x003EDC40 and 0x003EDD3A)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDC9A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EDC9A: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    edx = MEM32(edi + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    eax = MEM32(edi);
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(MEM8(esi + 0x14C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x14C), 0 (8-bit) */
    ecx = ZX16(LO16(ecx));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003EDCFA; /* je: equal / zero */

loc_003EDCC3: ;
    PUSH32(esp, MEM32(esi + 0xA4));
    eax = esi + 0xE0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003EDCD5u); RECOMP_ABI_CALL(0x003EDA07u, sub_003EDA07); /* call 0x003EDA07 */

loc_003EDCD5: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    edx = MEM32(edi + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    eax = MEM32(edi + 4);
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ecx));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xA8));
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003EDD2F;

loc_003EDCFA: ;
    PUSH32(esp, MEM32(esi + 0x9C));
    eax = esi + 0xC0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003EDD0Cu); RECOMP_ABI_CALL(0x003EDA07u, sub_003EDA07); /* call 0x003EDA07 */

loc_003EDD0C: ;
    ecx = (uint32_t)(int32_t)SMEM16(edi + 0x28);
    edx = MEM32(edi + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    eax = MEM32(edi + 4);
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ecx));
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xA0));
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EDD2F: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EDD35u); RECOMP_ABI_CALL(0x003EDA07u, sub_003EDA07); /* call 0x003EDA07 */

loc_003EDD35: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EDD3A
 * Original: 0x003EDD3A - 0x003EDDC6 (140 bytes, 47 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00365A55, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDD3A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EDD3A: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x28);
    ecx = MEM32(ebx + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    edi = ZX16(LO16(eax));
    eax = MEM32(ebx);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(MEM8(esi + 0x14C)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi + 0x14C), 0 (8-bit) */
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003EDD93; /* je: equal / zero */

loc_003EDD6A: ;
    PUSH32(esp, MEM32(esi + 0xA4));
    eax = esi + 0xE0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003EDD7Cu); RECOMP_ABI_CALL(0x003EDA07u, sub_003EDA07); /* call 0x003EDA07 */

loc_003EDD7C: ;
    eax = MEM32(ebx + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xA8));
    _fb = (uint32_t)(0xF0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xF0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_003EDDBA;

loc_003EDD93: ;
    PUSH32(esp, MEM32(esi + 0x9C));
    eax = esi + 0xC0;
    PUSH32(esp, eax);
    PUSH32(esp, 0x003EDDA5u); RECOMP_ABI_CALL(0x003EDA07u, sub_003EDA07); /* call 0x003EDA07 */

loc_003EDDA5: ;
    eax = MEM32(ebx + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 0xA0));
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EDDBA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x003EDDC0u); RECOMP_ABI_CALL(0x003EDA07u, sub_003EDA07); /* call 0x003EDA07 */

loc_003EDDC0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EDDC6
 * Original: 0x003EDDC6 - 0x003EDE08 (66 bytes, 22 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00365AE1, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDDC6(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EDDC6: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi));
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, 0x003EDDE7u); RECOMP_ABI_CALL(0x003EDA41u, sub_003EDA41); /* call 0x003EDA41 */

loc_003EDDE7: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, MEM32(esi + 0x14));
    PUSH32(esp, 0x003EDE04u); RECOMP_ABI_CALL(0x003EDA41u, sub_003EDA41); /* call 0x003EDA41 */

loc_003EDE04: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EDE08
 * Original: 0x003EDE08 - 0x003EDE4C (68 bytes, 28 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00365B23, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDE08(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EDE08: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    PUSH32(esp, edi);
    edi = ZX16(LO16(eax));
    eax = MEM32(esi);
    edi = edi << 2;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x10);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003EDE34u); RECOMP_ABI_CALL(0x003EDA41u, sub_003EDA41); /* call 0x003EDA41 */

loc_003EDE34: ;
    eax = MEM32(esi + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 8);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x14);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x003EDE47u); RECOMP_ABI_CALL(0x003EDA41u, sub_003EDA41); /* call 0x003EDA41 */

loc_003EDE47: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EDE4C
 * Original: 0x003EDE4C - 0x003EDE78 (44 bytes, 13 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00365B67, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDE4C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EDE4C: ;
    eax = MEM32(esp + 4);
    SET_LO16(ecx, MEM16(eax + 0x134));
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(ecx), 0 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003EDE75; /* jbe: below or equal (unsigned <=) */

loc_003EDE5C: ;
    ecx = ZX16(LO16(ecx));
    PUSH32(esp, ecx);
    PUSH32(esp, MEM32(eax + 8));
    _fb = (uint32_t)(0x100) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x100;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, MEM32(esp + 0x10));
    PUSH32(esp, MEM32(eax + -84));
    PUSH32(esp, eax);
    PUSH32(esp, 0x003EDE75u); RECOMP_ABI_CALL(0x003ED85Cu, sub_003ED85C); /* call 0x003ED85C */

loc_003EDE75: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EDE78
 * Original: 0x003EDE78 - 0x003EDE88 (16 bytes, 5 insns)
 * Folder: xdk/libc (between: 0x003EDE4C and 0x003EDE88)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDE78(void)
{

loc_003EDE78: ;
    eax = MEM32(esp + 4);
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 8);
    MEM32(ecx) = eax;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EDE88
 * Original: 0x003EDE88 - 0x003EDFC3 (315 bytes, 102 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00365BA3, between)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EDE88(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EDE88: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x20);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    edi = MEM32(edx + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(esi, LO16(esi) + 1);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esi = ZX16(LO16(esi));
    edi = edi + esi * 4;
    PUSH32(esp, 8);
    POP32(esp, ecx);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    esi = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    edi = MEM32(edx + 0x20);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    edi = MEM32(edx + 0x10);
    SET_LO16(esi, LO16(esi) + 1);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esi = ZX16(LO16(esi));
    edi = edi + esi * 4;
    esi = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    PUSH32(esp, 8);
    POP32(esp, ecx);
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(ecx);
    edi = MEM32(edx + 0x20);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    edi = MEM32(edx + 0x10);
    SET_LO16(esi, LO16(esi) + 1);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esi = ZX16(LO16(esi));
    MEM32(edi + esi * 4) = eax;
    edi = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    ebx = MEM32(edx + 0x20);
    SET_LO16(edi, MEM16(ebx + edi * 2 + -2));
    ebx = MEM32(edx + 0x10);
    esi = ZX16(MEM16(ebp + 0x18));
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(2) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(edi, LO16(edi) + 2);
    _fa = (uint32_t)(LO16(edi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    edi = ZX16(LO16(edi));
    MEM32(ebx + edi * 4) = esi;
    esi = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    edi = MEM32(edx + 0x20);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    edi = MEM32(edx + 0x10);
    _fb = (uint32_t)(5) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + 5);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    esi = ZX16(LO16(esi));
    MEM32(edi + esi * 4) = eax;
    esi = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    edi = MEM32(edx + 0x20);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    eax = (uint32_t)(int32_t)SMEM16(ecx);
    edi = MEM32(edx + 0x10);
    _fb = (uint32_t)(6) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + 6);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    esi = ZX16(LO16(esi));
    MEM32(edi + esi * 4) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 6);
    esi = (uint32_t)(int32_t)SMEM16(ebp + 0x14);
    edi = MEM32(edx + 0x20);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    edi = MEM32(edx + 0x14);
    _fb = (uint32_t)(3) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + 3);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    esi = ZX16(LO16(esi));
    MEM32(edi + esi * 4) = eax;
    esi = ZX16(MEM16(ebp + 0x1C));
    ebx = MEM32(edx + 0x20);
    edi = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - esi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    SET_LO16(esi, MEM16(ebx + esi * 2 + -2));
    ebx = MEM32(edx + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + 4);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    esi = ZX16(LO16(esi));
    MEM32(ebx + esi * 4) = edi;
    esi = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    edi = MEM32(edx + 0x20);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    edi = MEM32(edx + 0x14);
    _fb = (uint32_t)(7) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + 7);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    esi = ZX16(LO16(esi));
    MEM32(edi + esi * 4) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ecx + 6);
    ecx = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    esi = MEM32(edx + 0x20);
    SET_LO16(ecx, MEM16(esi + ecx * 2 + -2));
    edx = MEM32(edx + 0x14);
    _fb = (uint32_t)(8) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 8);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    POP32(esp, edi);
    ecx = ZX16(LO16(ecx));
    POP32(esp, esi);
    MEM32(edx + ecx * 4) = eax;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003EDFC3
 * Original: 0x003EDFC3 - 0x003EE03C (121 bytes, 40 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00365CDE, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EDFC3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EDFC3: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edx = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    edx = MEM32(eax + 8);
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ecx));
    edx = MEM32(edx + ecx * 4);
    ecx = MEM32(esp + 8);
    SET_LO16(ecx, MEM16(ecx + 0x16C));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EDFFB; /* je: equal / zero */

loc_003EDFEE: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003EDFFB; /* jne: not equal / not zero */

loc_003EDFF3: ;
    ecx = edx + 2;
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003EE001;

loc_003EDFFB: ;
    ecx = edx + 0x20;
    ecx = ecx & 0xFFFFFFC0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003EE001: ;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x20);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    edi = MEM32(eax + 8);
    SET_LO16(esi, LO16(esi) + 1);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esi = ZX16(LO16(esi));
    MEM32(edi + esi * 4) = ecx;
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edi = MEM32(eax + 0x20);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(2) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + 2);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    esi = ZX16(LO16(esi));
    eax = eax + esi * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + ecx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EE03C
 * Original: 0x003EE03C - 0x003EE096 (90 bytes, 34 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00365D57, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE03C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE03C: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edx = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ecx));
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(eax + 8);
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
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edx = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    esi = MEM32(eax + 4);
    edi = MEM32(eax + 0xC);
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ecx));
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EE096
 * Original: 0x003EE096 - 0x003EE0F0 (90 bytes, 34 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00365DB1, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE096(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE096: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edx = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ecx));
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = MEM32(eax);
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
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edx = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    esi = MEM32(eax + 0xC);
    edi = MEM32(eax + 4);
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ecx));
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EE0F0
 * Original: 0x003EE0F0 - 0x003EE12C (60 bytes, 26 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00365E0B, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE0F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE0F0: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edx = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    PUSH32(esp, esi);
    esi = MEM32(eax + 8);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    edx = ZX16(LO16(ecx));
    PUSH32(esp, 8);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    esi = MEM32(eax + 0xC);
    edi = MEM32(eax + 4);
    PUSH32(esp, 8);
    POP32(esp, ecx);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + edx;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
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
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EE12C
 * Original: 0x003EE12C - 0x003EE23D (273 bytes, 85 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00365E47, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE12C(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE12C: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    eax = ZX16(MEM16(ecx + eax * 2 + -2));
    ecx = MEM32(esi + 0x10);
    edx = eax + 2;
    edx = ZX16(LO16(edx));
    edx = (uint32_t)(int32_t)SMEM16(ecx + edx * 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(MEM16(ecx + eax * 4)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(edx, LO16(edx) - MEM16(ecx + eax * 4));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esp + 0x18));
    edi = MEM32(esp + 0x18);
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(edi + 0x138));
    PUSH32(esp, 0x003EE168u); RECOMP_ABI_CALL(0x003E4E21u, sub_003E4E21); /* call 0x003E4E21 */

loc_003EE168: ;
    SET_LO16(ecx, MEM16(edi + 0x16C));
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xA) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EE189; /* je: equal / zero */

loc_003EE17C: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003EE189; /* jne: not equal / not zero */

loc_003EE181: ;
    edx = eax + 2;
    edx = edx & 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003EE18F;

loc_003EE189: ;
    edx = eax + 0x20;
    edx = edx & 0xFFFFFFC0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003EE18F: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    eax = ZX16(MEM16(ecx + eax * 2 + -2));
    ecx = MEM32(esi);
    ebx = eax + 1;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ZX16(LO16(ebx));
    ebx = MEM32(ecx + ebx * 4);
    eax = ZX16(LO16(eax));
    PUSH32(esp, MEM32(esp + 0x18));
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + eax * 4) = ebx;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    eax = ZX16(MEM16(ecx + eax * 2 + -2));
    ecx = MEM32(esi + 0x14);
    edx = eax + 4;
    edx = ZX16(LO16(edx));
    edx = (uint32_t)(int32_t)SMEM16(ecx + edx * 4);
    _fb = (uint32_t)(3) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ZX16(LO16(eax));
    _fb = (uint32_t)(MEM16(ecx + eax * 4)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(edx, LO16(edx) - MEM16(ecx + eax * 4));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    PUSH32(esp, edx);
    PUSH32(esp, MEM32(edi + 0x13C));
    PUSH32(esp, 0x003EE1E4u); RECOMP_ABI_CALL(0x003E4E21u, sub_003E4E21); /* call 0x003E4E21 */

loc_003EE1E4: ;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    edx = MEM32(esi + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(3) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 3);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ZX16(LO16(ecx));
    ecx = edx + ecx * 4;
    edx = MEM32(ecx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x20;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = edx & 0xFFFFFFC0u;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    MEM32(ecx) = edx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    edx = MEM32(esi + 0x20);
    ecx = ZX16(MEM16(edx + ecx * 2 + -2));
    esi = MEM32(esi + 4);
    edx = ecx + 3;
    _fb = (uint32_t)(0x200) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x200;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ZX16(LO16(edx));
    edx = MEM32(esi + edx * 4);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0xA) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edx + eax + 0x20;
    ecx = ZX16(LO16(ecx));
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    POP32(esp, edi);
    MEM32(esi + ecx * 4) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EE23D
 * Original: 0x003EE23D - 0x003EE2B7 (122 bytes, 46 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00365F58, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE23D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE23D: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003EE27A; /* je: equal / zero */

loc_003EE24B: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edi = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(edi + ecx * 2 + -2));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003EE27A; /* je: equal / zero */

loc_003EE25D: ;
    ecx = MEM32(eax);
    ecx = ecx + edx * 4;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + esi;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edi = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(edi + ecx * 2 + -2));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ecx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003EE25D; /* jb: below (unsigned <) */

loc_003EE27A: ;
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EE2B2; /* je: equal / zero */

loc_003EE282: ;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edi = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(edi + ecx * 2 + -2));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003EE2B2; /* je: equal / zero */

loc_003EE294: ;
    ecx = MEM32(eax + 4);
    ecx = ecx + edx * 4;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + esi;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edi = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(edi + ecx * 2 + -2));
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(ecx));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003EE294; /* jb: below (unsigned <) */

loc_003EE2B2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EE2B7
 * Original: 0x003EE2B7 - 0x003EE307 (80 bytes, 35 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00365FD2, between)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EE2B7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE2B7: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EE2E0; /* je: equal / zero */

loc_003EE2C6: ;
    eax = ZX16(MEM16(ebp + 0x14));
    ecx = ZX16(MEM16(ebp + 0x18));
    edx = ecx + eax;
    goto loc_003EE2DC;

loc_003EE2D3: ;
    ecx = MEM32(esi + 8);
    ecx = ecx + eax * 4;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + edi;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003EE2DC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003EE2D3; /* jb: below (unsigned <) */

loc_003EE2E0: ;
    edi = MEM32(ebp + 0x10);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EE301; /* je: equal / zero */

loc_003EE2E7: ;
    eax = ZX16(MEM16(ebp + 0x14));
    ecx = ZX16(MEM16(ebp + 0x18));
    edx = ecx + eax;
    goto loc_003EE2FD;

loc_003EE2F4: ;
    ecx = MEM32(esi + 0xC);
    ecx = ecx + eax * 4;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(ecx) = MEM32(ecx) + edi;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_003EE2FD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003EE2F4; /* jb: below (unsigned <) */

loc_003EE301: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003EE307
 * Original: 0x003EE307 - 0x003EE45B (340 bytes, 122 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00366022, between)
 * CC: cdecl, 18 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EE307(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE307: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    if (CMP_EQ(_fa, _fb)) goto loc_003EE341; /* je: equal / zero */

loc_003EE31B: ;
    eax = esi + 0xE0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0xA4); PUSH32(esp, 0x003EE328u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EE322u); } /* indirect call */
    }

loc_003EE328: ;
    edi = MEM32(ebp + 0x48);
    MEM32(edi) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esi + 0xF0;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0xA8); PUSH32(esp, 0x003EE33Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EE339u); } /* indirect call */
    }

loc_003EE33F: ;
    goto loc_003EE365;

loc_003EE341: ;
    eax = esi + 0xC0;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0x9C); PUSH32(esp, 0x003EE34Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EE348u); } /* indirect call */
    }

loc_003EE34E: ;
    edi = MEM32(ebp + 0x48);
    MEM32(edi) = eax;
    eax = (uint32_t)(int32_t)SMEM16(ebp + 0x10);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, eax);
    eax = esi + 0xD0;
    PUSH32(esp, eax);
    { uint32_t _icall_target = MEM32(esi + 0xA0); PUSH32(esp, 0x003EE365u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x003EE35Fu); } /* indirect call */
    }

loc_003EE365: ;
    _fa = (uint32_t)(MEM32(ebp + 0x1C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x1C), 0 (32-bit) */
    ebx = MEM32(ebp + 0x4C);
    MEM32(ebx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003EE3B3; /* je: equal / zero */

loc_003EE370: ;
    PUSH32(esp, MEM32(ebp + 0x24));
    PUSH32(esp, MEM32(ebp + 0x20));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EE37Bu); RECOMP_ABI_CALL(0x003E552Bu, sub_003E552B); /* call 0x003E552B */

loc_003EE37B: ;
    PUSH32(esp, MEM32(ebp + 0x30));
    MEM32(ebp + 0xC) = eax;
    PUSH32(esp, MEM32(ebp + 0x2C));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EE389u); RECOMP_ABI_CALL(0x003E552Bu, sub_003E552B); /* call 0x003E552B */

loc_003EE389: ;
    MEM32(ebp + 0x10) = eax;
    eax = 0x10000;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EE39B; /* jne: not equal / not zero */

loc_003EE396: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EE3B3; /* je: equal / zero */

loc_003EE39B: ;
    PUSH32(esp, MEM32(ebp + 0xC));
    PUSH32(esp, MEM32(edi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EE3A5u); RECOMP_ABI_CALL(0x003E4EEDu, sub_003E4EED); /* call 0x003E4EED */

loc_003EE3A5: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    MEM32(edi) = eax;
    PUSH32(esp, MEM32(ebx));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EE3B1u); RECOMP_ABI_CALL(0x003E4EEDu, sub_003E4EED); /* call 0x003E4EED */

loc_003EE3B1: ;
    MEM32(ebx) = eax;

loc_003EE3B3: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EE422; /* je: equal / zero */

loc_003EE3B9: ;
    ecx = MEM32(ebp + 0x44);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x16C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EE3E5; /* je: equal / zero */

loc_003EE3C9: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EE3DC; /* je: equal / zero */

loc_003EE3CE: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EE3E5; /* je: equal / zero */

loc_003EE3DC: ;
    eax = MEM32(edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003EE3ED;

loc_003EE3E5: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003EE3ED: ;
    MEM32(edi) = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO16(eax, MEM16(esi + 0x16C));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_003EE418; /* je: equal / zero */

loc_003EE3FC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EE40F; /* je: equal / zero */

loc_003EE401: ;
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    eax = eax & 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    SET_LO8(edx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, eax (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EE418; /* jne: not equal / not zero */

loc_003EE40F: ;
    eax = MEM32(ebx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003EE420;

loc_003EE418: ;
    eax = MEM32(ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x20;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003EE420: ;
    MEM32(ebx) = eax;

loc_003EE422: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EE454; /* jne: not equal / not zero */

loc_003EE428: ;
    PUSH32(esp, 1);
    PUSH32(esp, edi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(esi + 0x9C));
    eax = esi + 0xC0;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EE43Eu); RECOMP_ABI_CALL(0x003EDA07u, sub_003EDA07); /* call 0x003EDA07 */

loc_003EE43E: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebx);
    PUSH32(esp, ebx);
    PUSH32(esp, MEM32(esi + 0xA0));
    _fb = (uint32_t)(0xD0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0xD0;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EE454u); RECOMP_ABI_CALL(0x003EDA07u, sub_003EDA07); /* call 0x003EDA07 */

loc_003EE454: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 76; return; /* ret 72 */

}

/**
 * sub_003EE45B
 * Original: 0x003EE45B - 0x003EE49C (65 bytes, 28 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00366176, between)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EE45B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE45B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = ZX16(MEM16(ebp + 0xC));
    ecx = ZX16(MEM16(ebp + 0x14));
    edx = MEM32(ebp + 0x10);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    ebx = MEM32(esi);
    PUSH32(esp, edi);
    edi = MEM32(edx);
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = MEM32(ebx + eax);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(MEM32(edi + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - MEM32(edi + ecx);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = MEM32(ebp + 0x18);
    MEM32(edi) = ebx;
    esi = MEM32(esi + 4);
    eax = MEM32(esi + eax);
    edx = MEM32(edx + 4);
    _fb = (uint32_t)(MEM32(edx + ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(edx + ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(ebp + 0x1C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx) = eax;
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003EE49C
 * Original: 0x003EE49C - 0x003EE4EC (80 bytes, 31 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003661B7, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE49C(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE49C: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edx = MEM32(eax + 0x20);
    SET_LO16(edx, MEM16(edx + ecx * 2 + -2));
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x10);
    ebx = MEM32(esi);
    SET_LO16(edx, LO16(edx) + 1);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(edx));
    PUSH32(esp, edi);
    edi = MEM32(eax);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + edi) = ebx;
    edi = MEM32(eax + 4);
    esi = MEM32(esi + 4);
    MEM32(ecx + edi) = esi;
    esi = MEM32(eax);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(edx));
    edx = MEM32(esp + 0x18);
    edi = MEM32(edx);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ecx + esi) = edi;
    eax = MEM32(eax + 4);
    edx = MEM32(edx + 4);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + eax) = edx;
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EE4EC
 * Original: 0x003EE4EC - 0x003EE53A (78 bytes, 29 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00366207, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE4EC(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE4EC: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edx = MEM32(eax + 0x20);
    SET_LO16(edx, MEM16(edx + ecx * 2 + -2));
    SET_LO16(edx, LO16(edx) + 1);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(edx));
    PUSH32(esp, esi);
    esi = MEM32(eax);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edi);
    edi = MEM32(ecx + esi);
    esi = MEM32(esp + 0x10);
    MEM32(esi) = edi;
    edi = MEM32(eax + 4);
    ecx = MEM32(ecx + edi);
    MEM32(esi + 4) = ecx;
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(edx));
    edx = MEM32(eax);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    esi = MEM32(ecx + edx);
    edx = MEM32(esp + 0x14);
    MEM32(edx) = esi;
    eax = MEM32(eax + 4);
    eax = MEM32(ecx + eax);
    POP32(esp, edi);
    MEM32(edx + 4) = eax;
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EE53A
 * Original: 0x003EE53A - 0x003EE55C (34 bytes, 10 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00366255, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE53A(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE53A: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(eax + 0x1C);
    MEM16(ecx) = MEM16(ecx) & 0;
    _fa = (uint32_t)(MEM16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    ecx = MEM32(esp + 8);
    edx = MEM32(eax + 0x20);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM16(edx) = LO16(ecx);
    SET_LO16(ecx, MEM16(esp + 0xC));
    MEM16(eax + 0x28) = LO16(ecx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EE55C
 * Original: 0x003EE55C - 0x003EE645 (233 bytes, 105 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00366277, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EE55C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE55C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, ecx);
    eax = ZX16(MEM16(ebp + 0xC));
    edx = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = eax;
    ebx = ebx << 2;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(edx);
    ecx = ebx;
    esi = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = esi;
    PUSH32(esp, 3);
    POP32(esp, esi);
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(edx + 8);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(edx + 0x10);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(edx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(edx + 0xC);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(edx + 0x14);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    ecx = ZX16(MEM16(ebp + 0xC));
    edi = MEM32(edx + 0x18);
    MEM32(ebp + -4) = ebx;
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    ecx = ZX16(MEM16(ebp + 0xC));
    edi = MEM32(edx + 0x24);
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    esi = ZX16(MEM16(ebp + 0x10));
    esi = esi << 1;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    ecx = esi;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edi = MEM32(edx + 0x1C);
    ebx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = ebx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    edi = MEM32(edx + 0x20);
    ecx = esi;
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EE645
 * Original: 0x003EE645 - 0x003EE674 (47 bytes, 17 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00366360, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE645(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE645: ;
    edx = MEM32(esp + 4);
    eax = (uint32_t)(int32_t)SMEM16(edx + 0x28);
    ecx = MEM32(edx + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    _fb = (uint32_t)(9) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + 9);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ZX16(LO16(eax));
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x24);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    POP32(esp, edi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EE674
 * Original: 0x003EE674 - 0x003EE722 (174 bytes, 61 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036638F, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE674(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE674: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM16(esi + 0x28)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(esi + 0x28), 0 (16-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_003EE714; /* je: equal / zero */

loc_003EE685: ;
    eax = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    ecx = MEM32(esi + 0x20);
    SET_LO16(eax, MEM16(ecx + eax * 2 + -2));
    edi = MEM32(esi);
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    ecx = ZX16(LO16(eax));
    eax = MEM32(esp + 0xC);
    edx = ecx;
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = edi;
    edi = MEM32(esi + 4);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edi;
    edi = MEM32(esi + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 8) = edi;
    edi = MEM32(esi + 0xC);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0xC) = edi;
    edi = MEM32(esi + 0x10);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x10) = edi;
    edi = MEM32(esi + 0x14);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + edx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x14) = edi;
    edx = MEM32(esi + 0x18);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x18) = edx;
    edx = MEM32(esi + 0x24);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 0x24) = edx;
    edx = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    _fb = (uint32_t)(MEM32(esi + 0x2C)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + MEM32(esi + 0x2C);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx + ecx * 2;
    MEM32(eax + 0x2C) = edx;
    edx = MEM32(esi + 0x34);
    ecx = edx + ecx * 4;
    MEM32(eax + 0x34) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    edx = MEM32(esi + 0x1C);
    ecx = edx + ecx * 2;
    MEM32(eax + 0x1C) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(esi + 0x28);
    edx = MEM32(esi + 0x20);
    MEM16(eax + 0x28) = MEM16(eax + 0x28) & 0;
    _fa = (uint32_t)(MEM16(eax + 0x28)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    ecx = edx + ecx * 2;
    MEM32(eax + 0x20) = ecx;
    goto loc_003EE71D;

loc_003EE714: ;
    edi = MEM32(esp + 0xC);
    PUSH32(esp, 0xE);
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

loc_003EE71D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EE722
 * Original: 0x003EE722 - 0x003EE77F (93 bytes, 35 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036643D, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE722(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE722: ;
    eax = MEM32(esp + 8);
    SET_LO16(edx, MEM16(eax + 0x28));
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(edx), 0 (16-bit) */
    PUSH32(esp, edi);
    edi = MEM32(esp + 8);
    if (CMP_EQ(_fa, _fb)) goto loc_003EE773; /* je: equal / zero */

loc_003EE734: ;
    ecx = SX16(LO16(edx));
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(esi + ecx * 2 + -2));
    esi = ZX16(LO16(edx));
    edx = ZX16(MEM16(edi + 0x28));
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO16(ecx, LO16(ecx) + 1);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_003EE772; /* jae: above or equal (unsigned >=) */

loc_003EE74F: ;
    PUSH32(esp, ebx);

loc_003EE750: ;
    edx = MEM32(eax + 0x1C);
    edx = edx + esi * 2;
    _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(edx) = MEM16(edx) + LO16(ecx);
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    edx = MEM32(eax + 0x20);
    edx = edx + esi * 2;
    _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(edx) = MEM16(edx) + LO16(ecx);
    _fa = (uint32_t)(MEM16(edx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    edx = ZX16(MEM16(edi + 0x28));
    ebx = ZX16(MEM16(eax + 0x28));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_003EE750; /* jb: below (unsigned <) */

loc_003EE771: ;
    POP32(esp, ebx);

loc_003EE772: ;
    POP32(esp, esi);

loc_003EE773: ;
    SET_LO16(ecx, MEM16(edi + 0x28));
    _fb = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    MEM16(eax + 0x28) = MEM16(eax + 0x28) + LO16(ecx);
    _fa = (uint32_t)(MEM16(eax + 0x28)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    POP32(esp, edi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EE77F
 * Original: 0x003EE77F - 0x003EE7DE (95 bytes, 37 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036649A, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE77F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE77F: ;
    eax = MEM32(esp + 8);
    edx = MEM32(eax);
    SET_LO16(edx, MEM16(edx));
    ecx = MEM32(esp + 4);
    MEM16(ecx + 0x28) = LO16(edx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + 2;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(ecx + 0x1C) = edx;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x28);
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(eax);
    MEM32(ecx + 0x20) = edx;
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x28);
    PUSH32(esp, esi);
    edx = edx << 1;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = (uint32_t)(int32_t)SMEM16(ecx + 0x28);
    esi = MEM32(eax);
    PUSH32(esp, edi);
    edi = MEM32(ecx + 0x20);
    SET_LO16(edx, MEM16(edi + edx * 2 + -2));
    MEM32(ecx) = esi;
    SET_LO16(edx, LO16(edx) + 1);
    _fa = (uint32_t)(LO16(edx)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    edx = ZX16(LO16(edx));
    esi = edx;
    esi = esi << 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + esi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = MEM32(eax);
    MEM32(ecx + 4) = edi;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + esi;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax);
    MEM32(ecx + 0x18) = esi;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(eax) = MEM32(eax) + edx;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EE7DE
 * Original: 0x003EE7DE - 0x003EE87B (157 bytes, 54 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003664F9, between)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EE7DE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE7DE: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EE80D; /* je: equal / zero */

loc_003EE7E7: ;
    PUSH32(esp, MEM32(ebp + 0x18));
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(eax + 0x140));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EE7FBu); RECOMP_ABI_CALL(0x003E4E21u, sub_003E4E21); /* call 0x003E4E21 */

loc_003EE7FB: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003EE877; /* je: equal / zero */

loc_003EE804: ;
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    goto loc_003EE877;

loc_003EE80D: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EE81Au); RECOMP_ABI_CALL(0x003E4F8Bu, sub_003E4F8B); /* call 0x003E4F8B */

loc_003EE81A: ;
    esi = MEM32(ebp + 0xC);
    edi = MEM32(ebp + 8);
    MEM32(esi) = eax;
    ecx = MEM32(edi + 0x140);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0x10000 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EE85D; /* je: equal / zero */

loc_003EE830: ;
    _fa = (uint32_t)(MEM16(edi + 0x166)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(edi + 0x166), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EE85D; /* je: equal / zero */

loc_003EE83A: ;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EE841u); RECOMP_ABI_CALL(0x003E4EEDu, sub_003E4EED); /* call 0x003E4EED */

loc_003EE841: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003EE84E; /* je: equal / zero */

loc_003EE847: ;
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = eax;

loc_003EE84E: ;
    PUSH32(esp, MEM32(edi + 0x140));
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EE85Bu); RECOMP_ABI_CALL(0x003E4F65u, sub_003E4F65); /* call 0x003E4F65 */

loc_003EE85B: ;
    goto loc_003EE866;

loc_003EE85D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EE868; /* je: equal / zero */

loc_003EE861: ;
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_003EE866: ;
    MEM32(esi) = eax;

loc_003EE868: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    eax = esi + 4;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EE875u); RECOMP_ABI_CALL(0x003E50A4u, sub_003E50A4); /* call 0x003E50A4 */

loc_003EE875: ;
    POP32(esp, edi);
    POP32(esp, esi);

loc_003EE877: ;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003EE87B
 * Original: 0x003EE87B - 0x003EE8D2 (87 bytes, 30 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00366596, between)
 * CC: cdecl, 6 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EE87B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE87B: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), 0 (32-bit) */
    PUSH32(esp, MEM32(ebp + 0x18));
    PUSH32(esp, MEM32(ebp + 0x10));
    if (CMP_EQ(_fa, _fb)) goto loc_003EE8AC; /* je: equal / zero */

loc_003EE88A: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, MEM32(eax + 0x144));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EE898u); RECOMP_ABI_CALL(0x003E4E21u, sub_003E4E21); /* call 0x003E4E21 */

loc_003EE898: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = MEM32(ebp + 0xC);
    MEM32(ecx + 4) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003EE8CE; /* je: equal / zero */

loc_003EE8A2: ;
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx + 4) = eax;
    goto loc_003EE8CE;

loc_003EE8AC: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EE8B1u); RECOMP_ABI_CALL(0x003E4F8Bu, sub_003E4F8B); /* call 0x003E4F8B */

loc_003EE8B1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(ebp + 0xC);
    ecx = edx + 4;
    MEM32(ecx) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003EE8C4; /* je: equal / zero */

loc_003EE8BD: ;
    _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;

loc_003EE8C4: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EE8CEu); RECOMP_ABI_CALL(0x003E50A4u, sub_003E50A4); /* call 0x003E50A4 */

loc_003EE8CE: ;
    POP32(esp, ebp);
    esp += 28; return; /* ret 24 */

}

/**
 * sub_003EE8D2
 * Original: 0x003EE8D2 - 0x003EE949 (119 bytes, 39 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003665ED, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE8D2(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE8D2: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edx = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    edx = MEM32(eax);
    _fb = (uint32_t)(2) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 2);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ZX16(LO16(ecx));
    ecx = MEM32(edx + ecx * 4);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x20);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    edi = MEM32(eax);
    SET_LO16(esi, LO16(esi) + 1);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esi = ZX16(LO16(esi));
    _fb = (uint32_t)(MEM32(edi + esi * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(edi + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    esi = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(esi + ecx * 2 + -2));
    esi = MEM32(eax + 4);
    _fb = (uint32_t)(2) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 2);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ZX16(LO16(ecx));
    ecx = MEM32(esi + ecx * 4);
    MEM32(edx + 4) = ecx;
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edi = MEM32(eax + 0x20);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    eax = MEM32(eax + 4);
    SET_LO16(esi, LO16(esi) + 1);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    esi = ZX16(LO16(esi));
    _fb = (uint32_t)(MEM32(eax + esi * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM32(edx + 4) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EE949
 * Original: 0x003EE949 - 0x003EE9C4 (123 bytes, 39 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00366664, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE949(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE949: ;
    eax = MEM32(esp + 4);
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edx = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(edx + ecx * 2 + -2));
    edx = MEM32(eax);
    _fb = (uint32_t)(3) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 3);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ZX16(LO16(ecx));
    ecx = MEM32(edx + ecx * 4);
    edx = MEM32(esp + 8);
    MEM32(edx) = ecx;
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    PUSH32(esp, edi);
    edi = MEM32(eax + 0x20);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    edi = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + 4);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    esi = ZX16(LO16(esi));
    _fb = (uint32_t)(MEM32(edi + esi * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(edi + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    esi = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(esi + ecx * 2 + -2));
    esi = MEM32(eax + 4);
    _fb = (uint32_t)(3) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 3);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ZX16(LO16(ecx));
    ecx = MEM32(esi + ecx * 4);
    MEM32(edx + 4) = ecx;
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edi = MEM32(eax + 0x20);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + 4);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    esi = ZX16(LO16(esi));
    _fb = (uint32_t)(MEM32(eax + esi * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM32(edx + 4) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EE97F
 * Original: 0x003EE97F - 0x003EE9C4 (69 bytes, 22 insns)
 * Folder: xdk/libc (between: 0x003EE949 and 0x003EE9C4)
 * Category: game_vtable
 * CC: thiscall, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE97F(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE97F: ;
    esi = ZX16(LO16(esi));
    _fb = (uint32_t)(MEM32(edi + esi * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(edi + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(edx) = ecx;
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    esi = MEM32(eax + 0x20);
    SET_LO16(ecx, MEM16(esi + ecx * 2 + -2));
    esi = MEM32(eax + 4);
    _fb = (uint32_t)(3) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(ecx, LO16(ecx) + 3);
    _fa = (uint32_t)(LO16(ecx)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    ecx = ZX16(LO16(ecx));
    ecx = MEM32(esi + ecx * 4);
    MEM32(edx + 4) = ecx;
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    edi = MEM32(eax + 0x20);
    SET_LO16(esi, MEM16(edi + esi * 2 + -2));
    eax = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + 4);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    esi = ZX16(LO16(esi));
    _fb = (uint32_t)(MEM32(eax + esi * 4)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - MEM32(eax + esi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    POP32(esp, edi);
    MEM32(edx + 4) = ecx;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EE9C4
 * Original: 0x003EE9C4 - 0x003EE9F6 (50 bytes, 15 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003666DF, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE9C4(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE9C4: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(ecx + 0x138);
    eax = 0x8000;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0x10) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(esi) = LO16(edx);
    ecx = MEM32(ecx + 0x13C);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x10);
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0x10) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(eax) = LO16(ecx);
    POP32(esp, esi);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EE9F6
 * Original: 0x003EE9F6 - 0x003EEA1C (38 bytes, 14 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00366711, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EE9F6(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EE9F6: ;
    eax = MEM32(esp + 4);
    edx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    ecx = MEM32(eax);
    eax = MEM32(eax + 0x20);
    eax = (uint32_t)(int32_t)SMEM16(eax + edx * 2 + -2);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0 (16-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EEA19; /* jl: less (signed <) */

loc_003EEA0D: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = ZX16(LO16(eax));

loc_003EEA11: ;
    MEM32(ecx) = MEM32(ecx) + 1;
    _fa = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_003EEA11; /* jne: not equal / not zero */

loc_003EEA19: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EEA1C
 * Original: 0x003EEA1C - 0x003EEA6D (81 bytes, 23 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00366737, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EEA1C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EEA1C: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(eax + 0x174)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x174), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EEA39; /* je: equal / zero */

loc_003EEA2B: ;
    PUSH32(esp, MEM32(eax + 0x13C));
    PUSH32(esp, MEM32(eax + 0x138));
    goto loc_003EEA45;

loc_003EEA39: ;
    PUSH32(esp, MEM32(eax + 0x144));
    PUSH32(esp, MEM32(eax + 0x140));

loc_003EEA45: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    eax = MEM32(ebp + 0xC);
    PUSH32(esp, MEM32(eax + 4));
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    PUSH32(esp, MEM32(eax));
    eax = MEM32(eax + 0x20);
    SET_LO16(eax, MEM16(eax + ecx * 2 + -2));
    _fb = (uint32_t)(9) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + 9);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EEA69u); RECOMP_ABI_CALL(0x003E55AAu, sub_003E55AA); /* call 0x003E55AA */

loc_003EEA69: ;
    POP32(esp, ebp);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_003EEA6D
 * Original: 0x003EEA6D - 0x003EEAFF (146 bytes, 58 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00366788, between)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EEA6D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EEA6D: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    edx = MEM32(ebp + 0xC);
    ecx = MEM32(edx + 8);
    edx = MEM32(edx + 0x14);
    eax = 0x200;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((0xA) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EEA95; /* je: equal / zero */

loc_003EEA90: ;
    ecx = ecx + ecx * 2;
    ecx = ecx << 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_003EEA95: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EEAB2; /* je: equal / zero */

loc_003EEA9A: ;
    _fa = (uint32_t)(MEM32(ebp + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x14), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EEAB2; /* jne: not equal / not zero */

loc_003EEA9F: ;
    _fa = (uint32_t)(MEM32(ebp + 0x18)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x18), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EEAAC; /* je: equal / zero */

loc_003EEAA4: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003EEAB2;

loc_003EEAAC: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x20;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFFFC0u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003EEAB2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EEABA; /* jne: not equal / not zero */

loc_003EEAB6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EEAFA; /* je: equal / zero */

loc_003EEABA: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, ebx);
    ebx = MEM32(eax + 0x20);
    PUSH32(esp, esi);
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    SET_LO16(esi, MEM16(ebx + esi * 2 + -2));
    _fb = (uint32_t)(9) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + 9);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    if ((_fa == 0)) goto loc_003EEAF8; /* je: equal / zero */

loc_003EEAD1: ;
    esi = MEM32(eax);
    esi = esi + edi * 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + ecx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = MEM32(eax + 4);
    esi = esi + edi * 4;
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    MEM32(esi) = MEM32(esi) + edx;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    ebx = MEM32(eax + 0x20);
    SET_LO16(esi, MEM16(ebx + esi * 2 + -2));
    _fb = (uint32_t)(9) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(esi, LO16(esi) + 9);
    _fa = (uint32_t)(LO16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    esi = ZX16(LO16(esi));
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_003EEAD1; /* jl: less (signed <) */

loc_003EEAF8: ;
    POP32(esp, esi);
    POP32(esp, ebx);

loc_003EEAFA: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_003EEAFF
 * Original: 0x003EEAFF - 0x003EEB2F (48 bytes, 15 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036681A, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EEAFF(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EEAFF: ;
    eax = 0x10000;
    PUSH32(esp, eax);
    PUSH32(esp, eax);
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esp + 0x10);
    PUSH32(esp, MEM32(eax + 4));
    ecx = (uint32_t)(int32_t)SMEM16(eax + 0x28);
    PUSH32(esp, MEM32(eax));
    eax = MEM32(eax + 0x20);
    SET_LO16(eax, MEM16(eax + ecx * 2 + -2));
    _fb = (uint32_t)(9) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* add source, before the write */
    SET_LO16(eax, LO16(eax) + 9);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* add result */
    eax = ZX16(LO16(eax));
    PUSH32(esp, eax);
    PUSH32(esp, 0x003EEB2Cu); RECOMP_ABI_CALL(0x003E55AAu, sub_003E55AA); /* call 0x003E55AA */

loc_003EEB2C: ;
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EEB2F
 * Original: 0x003EEB2F - 0x003EEB7A (75 bytes, 29 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036684A, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EEB2F(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EEB2F: ;
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
    if ((_fa == 0)) goto loc_003EEB76; /* je: equal / zero */

loc_003EEB48: ;
    PUSH32(esp, edi);

loc_003EEB49: ;
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
    if (CMP_L(_fas, _fbs)) goto loc_003EEB49; /* jl: less (signed <) */

loc_003EEB75: ;
    POP32(esp, edi);

loc_003EEB76: ;
    POP32(esp, esi);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_003EEB7A
 * Original: 0x003EEB7A - 0x003EEBC4 (74 bytes, 26 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00366895, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EEB7A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EEB7A: ;
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
    if ((_fa == 0)) goto loc_003EEBBF; /* je: equal / zero */

loc_003EEB94: ;
    PUSH32(esp, MEM32(esp + 0x10));
    eax = MEM32(esi);
    PUSH32(esp, MEM32(eax + edi * 4));
    PUSH32(esp, 0x003EEBA2u); RECOMP_ABI_CALL(0x003E4EEDu, sub_003E4EED); /* call 0x003E4EED */

loc_003EEBA2: ;
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
    if (CMP_L(_fas, _fbs)) goto loc_003EEB94; /* jl: less (signed <) */

loc_003EEBBF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EEBC4
 * Original: 0x003EEBC4 - 0x003EEC24 (96 bytes, 33 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003668DF, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EEBC4(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EEBC4: ;
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
    if ((_fa == 0)) goto loc_003EEBFC; /* je: equal / zero */

loc_003EEBDB: ;
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
    if (CMP_L(_fas, _fbs)) goto loc_003EEBDB; /* jl: less (signed <) */

loc_003EEBFC: ;
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
 * sub_003EEC24
 * Original: 0x003EEC24 - 0x003EECBE (154 bytes, 57 insns)
 * Folder: xdk/libc (match: xbox-retail 0x0036693F, between)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EEC24(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EEC24: ;
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
    if ((_fa == 0)) goto loc_003EECAD; /* je: equal / zero */

loc_003EEC84: ;
    ecx = MEM32(eax);
    ecx = MEM32(ecx + edi * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebp + 0x10) (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_003EEC91; /* jle: less or equal (signed <=) */

loc_003EEC8E: ;
    MEM32(ebp + 0x10) = ecx;

loc_003EEC91: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi) (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EEC97; /* jge: greater or equal (signed >=) */

loc_003EEC95: ;
    MEM32(esi) = ecx;

loc_003EEC97: ;
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
    if (CMP_L(_fas, _fbs)) goto loc_003EEC84; /* jl: less (signed <) */

loc_003EECAD: ;
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
 * sub_003EECBE
 * Original: 0x003EECBE - 0x003EF1AF (1265 bytes, 380 insns)
 * Folder: xdk/libc (match: xbox-retail 0x003669D9, between)
 * CC: cdecl, 15 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EECBE(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EECBE: ;
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
    PUSH32(esp, 0x003EECE3u); RECOMP_ABI_CALL(0x003E56A3u, sub_003E56A3); /* call 0x003E56A3 */

loc_003EECE3: ;
    _fa = (uint32_t)(MEM16(ebp + 0x24)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x24), 0 (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EECF1; /* jne: not equal / not zero */

loc_003EECEA: ;
    _fa = (uint32_t)(MEM16(ebp + 0x28)) & 0xFFFFu; _fb = (uint32_t)(0) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x28), 0 (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EED12; /* je: equal / zero */

loc_003EECF1: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EECFEu); RECOMP_ABI_CALL(0x003E4E21u, sub_003E4E21); /* call 0x003E4E21 */

loc_003EECFE: ;
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(0x32) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 0x32 (16-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_003EED12; /* jbe: below or equal (unsigned <=) */

loc_003EED0C: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EED12u); RECOMP_ABI_CALL(0x003ED701u, sub_003ED701); /* call 0x003ED701 */

loc_003EED12: ;
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EED18u); RECOMP_ABI_CALL(0x003E5548u, sub_003E5548); /* call 0x003E5548 */

loc_003EED18: ;
    edi = ZX16(MEM16(ebp + 0x14));
    eax = MEM32(ebp + 0x3C);
    ebx = MEM32(ebp + 8);
    esi = MEM32(ebp + 0x10);
    edi = edi << 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x174) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003EED61; /* je: equal / zero */

loc_003EED32: ;
    MEM32(ebx + 0x138) = edi;
    MEM32(ebx + 0x13C) = edi;
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EED48u); RECOMP_ABI_CALL(0x003E552Bu, sub_003E552B); /* call 0x003E552B */

loc_003EED48: ;
    MEM32(ebx + 0x140) = eax;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, MEM32(esi + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EED59u); RECOMP_ABI_CALL(0x003E552Bu, sub_003E552B); /* call 0x003E552B */

loc_003EED59: ;
    MEM32(ebx + 0x144) = eax;
    goto loc_003EEDBA;

loc_003EED61: ;
    PUSH32(esp, MEM32(esi + 4));
    PUSH32(esp, MEM32(esi));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EED6Bu); RECOMP_ABI_CALL(0x003E552Bu, sub_003E552B); /* call 0x003E552B */

loc_003EED6B: ;
    MEM32(ebx + 0x138) = eax;
    PUSH32(esp, MEM32(esi + 0x10));
    PUSH32(esp, MEM32(esi + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EED7Cu); RECOMP_ABI_CALL(0x003E552Bu, sub_003E552B); /* call 0x003E552B */

loc_003EED7C: ;
    _fa = (uint32_t)(MEM32(ebp + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0xC), 0 (32-bit) */
    ecx = MEM32(ebx + 0x138);
    MEM32(ebx + 0x13C) = eax;
    MEM32(ebx + 0x140) = ecx;
    MEM32(ebx + 0x144) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_003EEDBA; /* je: equal / zero */

loc_003EED9A: ;
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

loc_003EEDBA: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebx + 0x138));
    esi = ebx + 0xE0;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EEDCDu); RECOMP_ABI_CALL(0x003ED7EBu, sub_003ED7EB); /* call 0x003ED7EB */

loc_003EEDCD: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebx + 0x13C));
    MEM32(ebx + 0xA4) = eax;
    eax = ebx + 0xF0;
    PUSH32(esp, eax);
    MEM32(ebp + -4) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EEDE9u); RECOMP_ABI_CALL(0x003ED7EBu, sub_003ED7EB); /* call 0x003ED7EB */

loc_003EEDE9: ;
    ecx = MEM32(ebx + 0x138);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(ebx + 0xA8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003EEE0B; /* jne: not equal / not zero */

loc_003EEDF9: ;
    _fa = (uint32_t)(MEM32(ebx + 0x13C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebx + 0x13C), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EEE0B; /* jne: not equal / not zero */

loc_003EEE01: ;
    eax = 0x1901;
    goto loc_003EF1A8;

loc_003EEE0B: ;
    edx = MEM32(ebx + 0x13C);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    edi = ebx + 0x100;
    if (CMP_L(_fas, _fbs)) goto loc_003EEE4A; /* jl: less (signed <) */

loc_003EEE1B: ;
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
    PUSH32(esp, 0x003EEE3Cu); RECOMP_ABI_CALL(0x003E4F65u, sub_003E4F65); /* call 0x003E4F65 */

loc_003EEE3C: ;
    esi = MEM32(ebx + 0x138);
    MEM32(ebx + 0x114) = eax;
    goto loc_003EEE74;

loc_003EEE4A: ;
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
    PUSH32(esp, 0x003EEE5Eu); RECOMP_ABI_CALL(0x003E4F65u, sub_003E4F65); /* call 0x003E4F65 */

loc_003EEE5E: ;
    esi = MEM32(ebx + 0x13C);
    MEM32(ebx + 0x110) = eax;
    MEM32(ebx + 0x114) = 0x10000;

loc_003EEE74: ;
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
    PUSH32(esp, 0x003EEE9Bu); RECOMP_ABI_CALL(0x003E52E2u, sub_003E52E2); /* call 0x003E52E2 */

loc_003EEE9B: ;
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
    PUSH32(esp, 0x003EEEC9u); RECOMP_ABI_CALL(0x003E5233u, sub_003E5233); /* call 0x003E5233 */

loc_003EEEC9: ;
    MEM8(ebx + 0x118) = LO8(eax);
    eax = ebp + -12;
    PUSH32(esp, eax);
    eax = ebp + -8;
    PUSH32(esp, eax);
    eax = ebp + -48;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EEEE0u); RECOMP_ABI_CALL(0x003E542Fu, sub_003E542F); /* call 0x003E542F */

loc_003EEEE0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(MEM32(ebp + -8)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -8), eax (32-bit) */
    MEM8(ebx + 0x119) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_003EEEF5; /* je: equal / zero */

loc_003EEEEE: ;
    MEM8(ebx + 0x119) = 1;

loc_003EEEF5: ;
    _fa = (uint32_t)(MEM32(ebp + -12)) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + -12), eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EEF01; /* je: equal / zero */

loc_003EEEFA: ;
    MEM8(ebx + 0x119) = MEM8(ebx + 0x119) | 2;
    _fa = (uint32_t)(MEM8(ebx + 0x119)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_003EEF01: ;
    _fa = (uint32_t)(MEM16(ebp + 0x24)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x24), LO16(eax) (16-bit) */
    ecx = MEM32(ebp + 0x34);
    esi = MEM32(ebp + 0x38);
    MEM16(ecx) = LO16(eax);
    MEM16(esi) = LO16(eax);
    if (CMP_NE(_fa, _fb)) goto loc_003EEF32; /* jne: not equal / not zero */

loc_003EEF13: ;
    _fa = (uint32_t)(MEM16(ebp + 0x28)) & 0xFFFFu; _fb = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp MEM16(ebp + 0x28), LO16(eax) (16-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EEF32; /* jne: not equal / not zero */

loc_003EEF19: ;
    MEM16(ebx + 0x166) = LO16(eax);
    MEM16(ebx + 0x164) = LO16(eax);

loc_003EEF27: ;
    MEM32(ebx + 0x168) = eax;
    goto loc_003EF1A6;

loc_003EEF32: ;
    PUSH32(esp, 0x48);
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EEF3Du); RECOMP_ABI_CALL(0x003E4E21u, sub_003E4E21); /* call 0x003E4E21 */

loc_003EEF3D: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    edi = eax;
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x8000;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((0x10) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EEF50u); RECOMP_ABI_CALL(0x003E5315u, sub_003E5315); /* call 0x003E5315 */

loc_003EEF50: ;
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(4) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), 4 (16-bit) */
    MEM32(ebp + 0xC) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_003EEF64; /* jne: not equal / not zero */

loc_003EEF59: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EEF61u); RECOMP_ABI_CALL(0x003E5372u, sub_003E5372); /* call 0x003E5372 */

loc_003EEF61: ;
    MEM32(ebp + 0xC) = eax;

loc_003EEF64: ;
    _fa = (uint32_t)(MEM32(ebp + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x3C), 0 (32-bit) */
    ecx = 0x3E8;
    if (CMP_EQ(_fa, _fb)) goto loc_003EEF87; /* je: equal / zero */

loc_003EEF6F: ;
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

loc_003EEF87: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_003EEFC5; /* jne: not equal / not zero */

loc_003EEFC2: ;
    MEM16(esi) = LO16(edi);

loc_003EEFC5: ;
    eax = ZX16(MEM16(ebp + 0xC));
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_003EF016; /* je: equal / zero */

loc_003EEFCD: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003EEFFE; /* je: equal / zero */

loc_003EEFD0: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003EEFEF; /* je: equal / zero */

loc_003EEFD3: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_003EEFE1; /* je: equal / zero */

loc_003EEFD6: ;
    eax = MEM32(ebp + 0x34);
    MEM16(eax) = LO16(ecx);
    MEM16(esi) = LO16(ecx);
    goto loc_003EF024;

loc_003EEFE1: ;
    SET_LO16(eax, MEM16(esi));
    edx = MEM32(ebp + 0x34);
    MEM16(edx) = LO16(eax);
    MEM16(esi) = MEM16(esi) + 1;
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    goto loc_003EF024;

loc_003EEFEF: ;
    edx = MEM32(ebp + 0x34);
    SET_LO16(eax, LO16(eax) | 0xFFFF);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* or result */
    _fb = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fbs = (int32_t)(int16_t)(_fb); /* sub source, before the write */
    SET_LO16(eax, LO16(eax) - MEM16(esi));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* sub result */
    MEM16(edx) = LO16(eax);
    goto loc_003EF024;

loc_003EEFFE: ;
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
    goto loc_003EF024;

loc_003EF016: ;
    SET_LO16(eax, MEM16(esi));
    edx = MEM32(ebp + 0x34);
    SET_LO16(eax, LO16(eax) + 1);
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fb = (_fa == 0x8000u); /* inc result/SF/OF; CF unchanged */
    MEM16(edx) = LO16(eax);
    MEM16(esi) = (uint32_t)(-(int32_t)MEM16(esi));
    _fa = (uint32_t)(MEM16(esi)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* neg result */

loc_003EF024: ;
    _fa = (uint32_t)(MEM32(ebp + 0x3C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x3C), ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EF16B; /* jne: not equal / not zero */

loc_003EF02D: ;
    SET_LO16(eax, MEM16(ebp + 0x20));
    _fa = (uint32_t)(LO16(eax)) & 0xFFFFu; _fb = (uint32_t)(MEM16(ebp + 0x1C)) & 0xFFFFu;
    _fas = (int32_t)(int16_t)(_fa); _fbs = (int32_t)(int16_t)(_fb); /* cmp LO16(eax), MEM16(ebp + 0x1C) (16-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_003EF16B; /* je: equal / zero */

loc_003EF03B: ;
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
    PUSH32(esp, 0x003EF060u); RECOMP_ABI_CALL(0x003E4EEDu, sub_003E4EED); /* call 0x003E4EED */

loc_003EF060: ;
    PUSH32(esp, MEM32(ebp + -32));
    esi = eax;
    PUSH32(esp, MEM32(ebp + -48));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EF06Du); RECOMP_ABI_CALL(0x003E4EEDu, sub_003E4EED); /* call 0x003E4EED */

loc_003EF06D: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, MEM32(ebp + -36));
    PUSH32(esp, MEM32(ebp + -44));
    if ((_fas >= 0)) goto loc_003EF08D; /* jns: not sign (positive) */

loc_003EF077: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EF07Cu); RECOMP_ABI_CALL(0x003E4EEDu, sub_003E4EED); /* call 0x003E4EED */

loc_003EF07C: ;
    PUSH32(esp, MEM32(ebp + -32));
    esi = eax;
    PUSH32(esp, MEM32(ebp + -48));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EF089u); RECOMP_ABI_CALL(0x003E4EEDu, sub_003E4EED); /* call 0x003E4EED */

loc_003EF089: ;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    goto loc_003EF0A3;

loc_003EF08D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EF092u); RECOMP_ABI_CALL(0x003E4EEDu, sub_003E4EED); /* call 0x003E4EED */

loc_003EF092: ;
    PUSH32(esp, MEM32(ebp + -32));
    edi = eax;
    PUSH32(esp, MEM32(ebp + -48));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EF09Fu); RECOMP_ABI_CALL(0x003E4EEDu, sub_003E4EED); /* call 0x003E4EED */

loc_003EF09F: ;
    esi = eax;
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_003EF0A3: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_003EF0BA; /* jne: not equal / not zero */

loc_003EF0A7: ;
    MEM16(ebx + 0x166) = MEM16(ebx + 0x166) & LO16(esi);
    _fa = (uint32_t)(MEM16(ebx + 0x166)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    MEM16(ebx + 0x164) = MEM16(ebx + 0x164) & LO16(esi);
    _fa = (uint32_t)(MEM16(ebx + 0x164)) & 0xFFFFu; _fas = (int32_t)(int16_t)(_fa); /* and result */
    goto loc_003EF16B;

loc_003EF0BA: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -48));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EF0C3u); RECOMP_ABI_CALL(0x003E4F65u, sub_003E4F65); /* call 0x003E4F65 */

loc_003EF0C3: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -44));
    MEM32(ebp + -48) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EF0CFu); RECOMP_ABI_CALL(0x003E4F65u, sub_003E4F65); /* call 0x003E4F65 */

loc_003EF0CF: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -36));
    MEM32(ebp + -44) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EF0DBu); RECOMP_ABI_CALL(0x003E4F65u, sub_003E4F65); /* call 0x003E4F65 */

loc_003EF0DB: ;
    PUSH32(esp, esi);
    PUSH32(esp, MEM32(ebp + -32));
    MEM32(ebp + -36) = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EF0E7u); RECOMP_ABI_CALL(0x003E4F65u, sub_003E4F65); /* call 0x003E4F65 */

loc_003EF0E7: ;
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
    PUSH32(esp, 0x003EF115u); RECOMP_ABI_CALL(0x003E55AAu, sub_003E55AA); /* call 0x003E55AA */

loc_003EF115: ;
    PUSH32(esp, MEM32(ebp + 0x20));
    PUSH32(esp, MEM32(ebp + 0x1C));
    PUSH32(esp, MEM32(ebp + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EF123u); RECOMP_ABI_CALL(0x003E4E21u, sub_003E4E21); /* call 0x003E4E21 */

loc_003EF123: ;
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
    PUSH32(esp, 0x003EF13Bu); RECOMP_ABI_CALL(0x003E55AAu, sub_003E55AA); /* call 0x003E55AA */

loc_003EF13B: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EF144; /* jge: greater or equal (signed >=) */

loc_003EF142: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003EF144: ;
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(ebx + 0x166) = LO16(eax);
    eax = MEM32(ebp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_003EF15C; /* jge: greater or equal (signed >=) */

loc_003EF15A: ;
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */

loc_003EF15C: ;
    _fb = (uint32_t)(0x8000) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x8000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((0x10) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM16(ebx + 0x164) = LO16(eax);

loc_003EF16B: ;
    _fa = (uint32_t)(MEM8(ebx + 0x119)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 0x119), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003EF181; /* jne: not equal / not zero */

loc_003EF174: ;
    eax = MEM32(ebp + 0x30);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = eax << 6;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_003EEF27;

loc_003EF181: ;
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
    PUSH32(esp, 0x003EF1A3u); RECOMP_ABI_CALL(0x003ED85Cu, sub_003ED85C); /* call 0x003ED85C */

loc_003EF1A3: ;
    MEM32(esi) = MEM32(esi) & 0xFFFFFFC0u;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003EF1A6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_003EF1A8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp); /* leave */
    esp += 64; return; /* ret 60 */

}

/**
 * sub_003EF1AF
 * Original: 0x003EF1AF - 0x003EF21B (108 bytes, 38 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00366ECA, between)
 * CC: cdecl, 11 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_003EF1AF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EF1AF: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_003EF1CF; /* je: equal / zero */

loc_003EF1C8: ;
    ebx = edi;
    MEM32(ebp + 0x30) = edi;
    goto loc_003EF1EA;

loc_003EF1CF: ;
    PUSH32(esp, MEM32(ebp + 0x10));
    PUSH32(esp, MEM32(ebp + 0xC));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EF1DAu); RECOMP_ABI_CALL(0x003E552Bu, sub_003E552B); /* call 0x003E552B */

loc_003EF1DA: ;
    PUSH32(esp, MEM32(ebp + 0x1C));
    ebx = eax;
    PUSH32(esp, MEM32(ebp + 0x18));
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EF1E7u); RECOMP_ABI_CALL(0x003E552Bu, sub_003E552B); /* call 0x003E552B */

loc_003EF1E7: ;
    MEM32(ebp + 0x30) = eax;

loc_003EF1EA: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    eax = esi + 0xC0;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EF1F8u); RECOMP_ABI_CALL(0x003ED7EBu, sub_003ED7EB); /* call 0x003ED7EB */

loc_003EF1F8: ;
    PUSH32(esp, edi);
    PUSH32(esp, MEM32(ebp + 0x30));
    MEM32(esi + 0x9C) = eax;
    eax = esi + 0xD0;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x003EF20Eu); RECOMP_ABI_CALL(0x003ED7EBu, sub_003ED7EB); /* call 0x003ED7EB */

loc_003EF20E: ;
    POP32(esp, edi);
    MEM32(esi + 0xA0) = eax;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ebp);
    esp += 48; return; /* ret 44 */

}

/**
 * sub_003EF21B
 * Original: 0x003EF21B - 0x003EF26A (79 bytes, 29 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00366F36, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF21B(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EF21B: ;
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
    if (TEST_Z(_fa, _fb)) goto loc_003EF252; /* je: equal / zero */

loc_003EF246: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003EF252; /* jne: not equal / not zero */

loc_003EF24A: ;
    eax = edx + 2;
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003EF258;

loc_003EF252: ;
    eax = edx + 0x20;
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003EF258: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003EF266u); RECOMP_ABI_CALL(0x003EE2B7u, sub_003EE2B7); /* call 0x003EE2B7 */

loc_003EF266: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}

/**
 * sub_003EF26A
 * Original: 0x003EF26A - 0x003EF2B9 (79 bytes, 29 insns)
 * Folder: xdk/libc (match: xbox-retail 0x00366F85, between)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_003EF26A(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_003EF26A: ;
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
    if (TEST_Z(_fa, _fb)) goto loc_003EF2A1; /* je: equal / zero */

loc_003EF295: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_003EF2A1; /* jne: not equal / not zero */

loc_003EF299: ;
    eax = edx + 2;
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    goto loc_003EF2A7;

loc_003EF2A1: ;
    eax = edx + 0x20;
    eax = eax & 0xFFFFFFC0u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_003EF2A7: ;
    PUSH32(esp, 8);
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x003EF2B5u); RECOMP_ABI_CALL(0x003EE2B7u, sub_003EE2B7); /* call 0x003EE2B7 */

loc_003EF2B5: ;
    POP32(esp, esi);
    esp += 12; return; /* ret 8 */

}
