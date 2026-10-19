/**
 * PoP SoT xbox-retail - world, chunk 0
 * Worlds, streaming and the AI grid (Jade ENGine WORld, GRId, DynamicLoading)
 * Functions: 113 (0x00030ED0 - 0x00036940)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_00030ED0
 * Original: 0x00030ED0 - 0x00030FAA (218 bytes, 80 insns)
 * Folder: world (match: xbox-demo 0x00029510, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00030ED0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00030ED0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x6EB00);
    edi = esp + 0x18;
    esi = eax;
    PUSH32(esp, 0x00030EE7u); RECOMP_ABI_CALL(0x000D8510u, sub_000D8510); /* call 0x000D8510 */

loc_00030EE7: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00030EEFu); RECOMP_ABI_CALL(0x000D8790u, sub_000D8790); /* call 0x000D8790 */

loc_00030EEF: ;
    eax = MEM32(0x7585A8);
    MEM32(0x44AA20) = eax;
    eax = MEM32(esp + 0x10);
    ebx = MEM32(eax + 0x14);
    ebp = MEM32(eax + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00030F9B; /* ja: above (unsigned >) */

loc_00030F0E: ;
    edi = edi;

loc_00030F10: ;
    esi = MEM32(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030F8C; /* je: equal / zero */

loc_00030F17: ;
    ecx = esi;
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00030F8C; /* je: equal / zero */

loc_00030F21: ;
    _fa = (uint32_t)(MEM8(esi + 0x1F)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1F), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00030F8C; /* jne: not equal / not zero */

loc_00030F27: ;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00030F8C; /* jne: not equal / not zero */

loc_00030F2D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00030F33u); RECOMP_ABI_CALL(0x00020B00u, sub_00020B00); /* call 0x00020B00 */

loc_00030F33: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x00030F3Du); RECOMP_ABI_CALL(0x0008C250u, sub_0008C250); /* call 0x0008C250 */

loc_00030F3D: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00030F4D; /* je: equal / zero */

loc_00030F44: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00030F4Au); RECOMP_ABI_CALL(0x0008E6B0u, sub_0008E6B0); /* call 0x0008E6B0 */

loc_00030F4A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00030F4D: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00030F7C; /* je: equal / zero */

loc_00030F52: ;
    edx = MEM32(esi + 0x14);
    edi = MEM32(edx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00030F7C; /* jne: not equal / not zero */

loc_00030F5C: ;
    eax = MEM32(0x44AA20);
    ecx = MEM32(edi + 4);
    edx = MEM32(edi + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00030F73u); RECOMP_ABI_CALL(0x00075310u, sub_00075310); /* call 0x00075310 */

loc_00030F73: ;
    SET_LO8(eax, MEM8(edi));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edi) = LO8(eax);

loc_00030F7C: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x00030F89u); RECOMP_ABI_CALL(0x0006E0E0u, sub_0006E0E0); /* call 0x0006E0E0 */

loc_00030F89: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00030F8C: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00030F10; /* jbe: below or equal (unsigned <=) */

loc_00030F97: ;
    eax = MEM32(esp + 0x10);

loc_00030F9B: ;
    PUSH32(esp, 0x00030FA0u); RECOMP_ABI_CALL(0x00015AA0u, sub_00015AA0); /* call 0x00015AA0 */

loc_00030FA0: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00032010
 * Original: 0x00032010 - 0x0003208B (123 bytes, 34 insns)
 * Folder: world (match: xbox-demo 0x0002A670, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00032010: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368F48);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032034; /* jne: not equal / not zero */

loc_0003202F: ;
    PUSH32(esp, 0x00032034u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00032034: ;
    edx = 0x4068;
    ecx = eax;
    PUSH32(esp, 0x00032040u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00032040: ;
    MEM32(esp) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00032075; /* je: equal / zero */

loc_0003204F: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(0x758D04);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032061u); RECOMP_ABI_CALL(0x00032C10u, sub_00032C10); /* call 0x00032C10 */

loc_00032061: ;
    MEM32(0x451B4C) = eax;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00032075: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x451B4C) = eax;
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00032090
 * Original: 0x00032090 - 0x00032147 (183 bytes, 78 insns)
 * Folder: world (match: xbox-demo 0x0002A6F0, between)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032090(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032090: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    esi = MEM32(edi + 4);
    eax = MEM32(esi + 4);
    SET_LO8(edx, MEM8(eax + 0x11));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    SET_LO8(ecx, 1);
    MEM8(esp + 0xC) = LO8(ecx);
    if (CMP_NE(_fa, _fb)) goto loc_000320CD; /* jne: not equal / not zero */

loc_000320AD: ;
    edx = MEM32(ebx);
    /* nop */

loc_000320B0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0xC) (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    esi = eax;
    MEM8(esp + 0xC) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_000320C4; /* je: equal / zero */

loc_000320C0: ;
    eax = MEM32(eax);
    goto loc_000320C7;

loc_000320C4: ;
    eax = MEM32(eax + 8);

loc_000320C7: ;
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000320B0; /* je: equal / zero */

loc_000320CD: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esi;
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0003210C; /* je: equal / zero */

loc_000320D7: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000320FF; /* jne: not equal / not zero */

loc_000320DE: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000320EDu); RECOMP_ABI_CALL(0x00032280u, sub_00032280); /* call 0x00032280 */

loc_000320ED: ;
    edx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = edx;
    MEM8(ebp + 4) = 1;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_000320FF: ;
    edx = esp + 0x14;
    PUSH32(esp, 0x00032108u); RECOMP_ABI_CALL(0x000324C0u, sub_000324C0); /* call 0x000324C0 */

loc_00032108: ;
    eax = MEM32(esp + 0x14);

loc_0003210C: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00032137; /* jae: above or equal (unsigned >=) */

loc_00032113: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x00032125u); RECOMP_ABI_CALL(0x00032280u, sub_00032280); /* call 0x00032280 */

loc_00032125: ;
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = ecx;
    MEM8(ebp + 4) = 1;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_00032137: ;
    POP32(esp, edi);
    MEM32(ebp) = eax;
    POP32(esp, esi);
    MEM8(ebp + 4) = 0;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00032150
 * Original: 0x00032150 - 0x00032162 (18 bytes, 5 insns)
 * Folder: world (between: 0x00032090 and 0x00032280)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032150(void)
{

loc_00032150: ;
    PUSH32(esp, 0x00032155u); RECOMP_ABI_CALL(0x00098990u, sub_00098990); /* call 0x00098990 */

loc_00032155: ;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_00032170
 * Original: 0x00032170 - 0x0003217C (12 bytes, 5 insns)
 * Folder: world (between: 0x00032090 and 0x00032280)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032170(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00032170: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 4) = ecx;
    MEM32(eax + 8) = ecx;
    MEM32(eax + 0xC) = ecx;
    esp += 4; return; /* ret */

}

/**
 * sub_00032180
 * Original: 0x00032180 - 0x0003226A (234 bytes, 83 insns)
 * Folder: world (between: 0x00032090 and 0x00032280)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00032180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00032180: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368990);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0x3FFFFFFF (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(ebp + -16) = esp;
    esi = ecx;
    if (CMP_BE(_fa, _fb)) goto loc_000321B0; /* jbe: below or equal (unsigned <=) */

loc_000321AB: ;
    g_seh_ebp = ebp; sub_00039360(); return; /* tail jmp 0x00039360 */

loc_000321B0: ;
    ecx = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000321BD; /* jne: not equal / not zero */

loc_000321B9: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_000321C5;

loc_000321BD: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_000321C5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00032259; /* jae: above or equal (unsigned >=) */

loc_000321CD: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = edx * 4;
    MEM32(ebp + -24) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_000321E5; /* jne: not equal / not zero */

loc_000321E0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000321E5u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000321E5: ;
    edx = edi;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000321EEu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_000321EE: ;
    MEM32(ebp + -4) = ebx;
    edx = MEM32(ebp + -24);
    ecx = MEM32(esi + 4);
    edi = eax;
    eax = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = edi;
    MEM32(ebp + -20) = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00032209u); RECOMP_ABI_CALL(0x00032930u, sub_00032930); /* call 0x00032930 */

loc_00032209: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    MEM32(ebp + -20) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00032225; /* je: equal / zero */

loc_0003221D: ;
    ebx = MEM32(esi + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((2) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00032225: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032248; /* je: equal / zero */

loc_00032229: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003223A; /* jne: not equal / not zero */

loc_00032232: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00032237u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00032237: ;
    edx = MEM32(ebp + -20);

loc_0003223A: ;
    ecx = MEM32(eax);
    MEM32(ebp + -20) = ecx;
    ecx = eax;
    eax = MEM32(ebp + -20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00032248u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032245u); } /* indirect call */
    }

loc_00032248: ;
    eax = MEM32(ebp + -24);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi + ebx * 4;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 4) = edi;

loc_00032259: ;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00032209
 * Original: 0x00032209 - 0x0003226A (97 bytes, 36 insns)
 * Folder: world (between: 0x00032090 and 0x00032280)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032209(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032209: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    edx = MEM32(esi + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    MEM32(ebp + -20) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00032225; /* je: equal / zero */

loc_0003221D: ;
    ebx = MEM32(esi + 8);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - edx;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = (uint32_t)(((int32_t)(int32_t)(ebx)) >> ((2) & 31u));
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_00032225: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032248; /* je: equal / zero */

loc_00032229: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003223A; /* jne: not equal / not zero */

loc_00032232: ;
    PUSH32(esp, 0x00032237u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00032237: ;
    edx = MEM32(ebp + -20);

loc_0003223A: ;
    ecx = MEM32(eax);
    MEM32(ebp + -20) = ecx;
    ecx = eax;
    eax = MEM32(ebp + -20);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00032248u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032245u); } /* indirect call */
    }

loc_00032248: ;
    eax = MEM32(ebp + -24);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = edi + ebx * 4;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = ecx;
    MEM32(esi + 4) = edi;
    ecx = MEM32(ebp + -12);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0003226A
 * Original: 0x0003226A - 0x00032280 (22 bytes, 10 insns)
 * Folder: world (between: 0x00032090 and 0x00032280)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003226A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003226A: ;
    esi = MEM32(ebp + -20);
    PUSH32(esp, 0x00032272u); RECOMP_ABI_CALL(0x00097970u, sub_00097970); /* call 0x00097970 */

loc_00032272: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0003227Bu); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_0003227B: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00032280
 * Original: 0x00032280 - 0x0003241E (414 bytes, 139 insns)
 * Folder: world (match: xbox-demo 0x0002A8D0, between)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032280(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032280: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x368C78);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x3FFFFFFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x3FFFFFFE (32-bit) */
    PUSH32(esp, esi);
    esi = ecx;
    if (CMP_B(_fa, _fb)) goto loc_000322F1; /* jb: below (unsigned <) */

loc_000322A5: ;
    PUSH32(esp, 0x13);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x41F398);
    ecx = esp + 0xC;
    MEM32(esp + 0x24) = 0xF;
    MEM32(esp + 0x20) = esi;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x000322C8u); RECOMP_ABI_CALL(0x00011600u, sub_00011600); /* call 0x00011600 */

loc_000322C8: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    MEM32(esp + 0x54) = esi;
    PUSH32(esp, 0x000322DAu); RECOMP_ABI_CALL(0x000115A0u, sub_000115A0); /* call 0x000115A0 */

loc_000322DA: ;
    PUSH32(esp, 0x42AAF0);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = 0x41F374;
    PUSH32(esp, 0x000322F1u); RECOMP_ABI_CALL(0x00349EBFu, sub_00349EBF); /* call 0x00349EBF */

loc_000322F1: ;
    edx = MEM32(esp + 0x60);
    eax = MEM32(edi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032304u); RECOMP_ABI_CALL(0x00032420u, sub_00032420); /* call 0x00032420 */

loc_00032304: ;
    ebx = MEM32(edi + 8);
    ecx = eax;
    eax = MEM32(edi + 4);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x64) = ecx;
    MEM32(edi + 8) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_00032328; /* jne: not equal / not zero */

loc_00032318: ;
    MEM32(eax + 4) = ecx;
    eax = MEM32(edi + 4);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(edx + 8) = ecx;
    goto loc_0003234B;

loc_00032328: ;
    SET_LO8(eax, MEM8(esp + 0x60));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003233D; /* je: equal / zero */

loc_00032330: ;
    MEM32(esi) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003234B; /* jne: not equal / not zero */

loc_00032339: ;
    MEM32(eax) = ecx;
    goto loc_0003234B;

loc_0003233D: ;
    MEM32(esi + 8) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003234B; /* jne: not equal / not zero */

loc_00032348: ;
    MEM32(eax + 8) = ecx;

loc_0003234B: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(edx + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x10), 0 (8-bit) */
    eax = ecx + 4;
    esi = ecx;
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_000323FC; /* jne: not equal / not zero */

loc_0003235F: ;
    PUSH32(esp, ebp);

loc_00032360: ;
    ecx = MEM32(eax);
    ebp = MEM32(ecx + 4);
    edx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000323B8; /* jne: not equal / not zero */

loc_0003236C: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(edx + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x10), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003238D; /* jne: not equal / not zero */

loc_00032375: ;
    ecx = MEM32(eax);
    MEM8(ecx + 0x10) = LO8(ebx);
    MEM8(edx + 0x10) = LO8(ebx);
    edx = MEM32(eax);
    ecx = MEM32(edx + 4);
    MEM8(ecx + 0x10) = 0;
    edx = MEM32(eax);
    esi = MEM32(edx + 4);
    goto loc_000323E6;

loc_0003238D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003239A; /* jne: not equal / not zero */

loc_00032392: ;
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0003239Au); RECOMP_ABI_CALL(0x00020670u, sub_00020670); /* call 0x00020670 */

loc_0003239A: ;
    eax = MEM32(esi + 4);
    MEM8(eax + 0x10) = LO8(ebx);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x10) = 0;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000323B6u); RECOMP_ABI_CALL(0x000206F0u, sub_000206F0); /* call 0x000206F0 */

loc_000323B6: ;
    goto loc_000323E6;

loc_000323B8: ;
    _fa = (uint32_t)(MEM8(edx + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032375; /* je: equal / zero */

loc_000323BE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000323CA; /* jne: not equal / not zero */

loc_000323C2: ;
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x000323CAu); RECOMP_ABI_CALL(0x000206F0u, sub_000206F0); /* call 0x000206F0 */

loc_000323CA: ;
    eax = MEM32(esi + 4);
    MEM8(eax + 0x10) = LO8(ebx);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x10) = 0;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x000323E6u); RECOMP_ABI_CALL(0x00020670u, sub_00020670); /* call 0x00020670 */

loc_000323E6: ;
    ecx = MEM32(esi + 4);
    SET_LO8(edx, MEM8(ecx + 0x10));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = esi + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00032360; /* je: equal / zero */

loc_000323F7: ;
    ecx = MEM32(esp + 0x68);
    POP32(esp, ebp);

loc_000323FC: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edx + 4);
    MEM8(eax + 0x10) = LO8(ebx);
    eax = MEM32(esp + 0x5C);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x4C);
    POP32(esp, ebx);
    POP32(esp, esi);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00032420
 * Original: 0x00032420 - 0x00032469 (73 bytes, 22 insns)
 * Folder: world (match: xbox-demo 0x0002AA70, between)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032420(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00032420: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003242E; /* jne: not equal / not zero */

loc_00032429: ;
    PUSH32(esp, 0x0003242Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0003242E: ;
    edx = 0x14;
    ecx = eax;
    PUSH32(esp, 0x0003243Au); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0003243A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032466; /* je: equal / zero */

loc_0003243E: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 4) = edx;
    edx = MEM32(esp + 0x10);
    MEM32(eax + 8) = ecx;
    ecx = MEM32(edx);
    SET_LO8(edx, MEM8(esp + 0x14));
    MEM32(eax + 0xC) = ecx;
    MEM8(eax + 0x10) = LO8(edx);
    MEM8(eax + 0x11) = 0;

loc_00032466: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00032470
 * Original: 0x00032470 - 0x000324B2 (66 bytes, 27 insns)
 * Folder: world (between: 0x00032420 and 0x000324C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00032470: ;
    eax = MEM32(ebx + 4);
    PUSH32(esp, esi);
    esi = MEM32(eax);
    MEM32(eax) = eax;
    eax = MEM32(ebx + 4);
    MEM32(eax + 4) = eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebx + 4) (32-bit) */
    MEM32(ebx + 8) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_000324B0; /* je: equal / zero */

loc_0003248A: ;
    PUSH32(esp, edi);
    goto loc_00032490;

    /* nop */

loc_00032490: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esi);
    if (CMP_NE(_fa, _fb)) goto loc_000324A0; /* jne: not equal / not zero */

loc_0003249B: ;
    PUSH32(esp, 0x000324A0u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000324A0: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000324A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000324A5u); } /* indirect call */
    }

loc_000324A8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 4) (32-bit) */
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00032490; /* jne: not equal / not zero */

loc_000324AF: ;
    POP32(esp, edi);

loc_000324B0: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0003248D
 * Original: 0x0003248D - 0x000324B2 (37 bytes, 16 insns)
 * Folder: world (between: 0x00032420 and 0x000324C0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003248D(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003248D: ;
    /* nop */

loc_00032490: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = MEM32(esi);
    if (CMP_NE(_fa, _fb)) goto loc_000324A0; /* jne: not equal / not zero */

loc_0003249B: ;
    PUSH32(esp, 0x000324A0u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000324A0: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000324A8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000324A5u); } /* indirect call */
    }

loc_000324A8: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebx + 4) (32-bit) */
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_00032490; /* jne: not equal / not zero */

loc_000324AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000324C0
 * Original: 0x000324C0 - 0x0003251D (93 bytes, 43 insns)
 * Folder: world (match: xbox-demo 0x0002AAC0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000324C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000324C0: ;
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(eax + 0x11));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000324CF; /* je: equal / zero */

loc_000324C9: ;
    eax = MEM32(eax + 8);
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

loc_000324CF: ;
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x11));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000324F3; /* jne: not equal / not zero */

loc_000324D9: ;
    eax = MEM32(ecx + 8);
    SET_LO8(ebx, MEM8(eax + 0x11));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000324EF; /* jne: not equal / not zero */

loc_000324E3: ;
    ecx = eax;
    eax = MEM32(ecx + 8);
    SET_LO8(ebx, MEM8(eax + 0x11));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000324E3; /* je: equal / zero */

loc_000324EF: ;
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_000324F3: ;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x11));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003251B; /* jne: not equal / not zero */

loc_000324FD: ;
    /* nop */

loc_00032500: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032512; /* jne: not equal / not zero */

loc_00032506: ;
    MEM32(edx) = eax;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x11));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032500; /* je: equal / zero */

loc_00032512: ;
    SET_LO8(ecx, MEM8(eax + 0x11));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003251B; /* jne: not equal / not zero */

loc_00032519: ;
    MEM32(edx) = eax;

loc_0003251B: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00032520
 * Original: 0x00032520 - 0x00032589 (105 bytes, 46 insns)
 * Folder: world (match: xbox-demo 0x0002AB20, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032520(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032520: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    if (CMP_EQ(_fa, _fb)) goto loc_00032567; /* je: equal / zero */

loc_00032534: ;
    ebp = MEM32(esp + 0x24);

loc_00032538: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00032567; /* je: equal / zero */

loc_00032540: ;
    eax = MEM32(esi);
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_00032555; /* jbe: below or equal (unsigned <=) */

loc_00032549: ;
    ecx = edi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00032563;

loc_00032555: ;
    edx = esp + 0x20;
    if (CMP_B(_fa, _fb)) goto loc_0003255E; /* jb: below (unsigned <) */

loc_0003255B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0003255E: ;
    PUSH32(esp, 0x00032563u); RECOMP_ABI_CALL(0x0001FFB0u, sub_0001FFB0); /* call 0x0001FFB0 */

loc_00032563: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00032538; /* jne: not equal / not zero */

loc_00032567: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edi;
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0003257E; /* je: equal / zero */

loc_0003256F: ;
    /* nop */

loc_00032570: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(4)) >> 32) & 1);
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(4)) >> 32) & 1);
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00032570; /* jne: not equal / not zero */

loc_0003257E: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00032590
 * Original: 0x00032590 - 0x00032605 (117 bytes, 47 insns)
 * Folder: world (match: xbox-demo 0x0002AB90, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032590(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032590: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x28);
    if (CMP_EQ(_fa, _fb)) goto loc_000325EA; /* je: equal / zero */

loc_000325A4: ;
    ebx = MEM32(esp + 0x24);
    esi = MEM32(esp + 0x20);
    /* nop */

loc_000325B0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000325EA; /* je: equal / zero */

loc_000325B4: ;
    eax = MEM32(edx + 0xC);
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_000325CF; /* jbe: below or equal (unsigned <=) */

loc_000325BD: ;
    ecx = edi;
    edx = esp + 0x18;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    PUSH32(esp, 0x000325CDu); RECOMP_ABI_CALL(0x0001FFB0u, sub_0001FFB0); /* call 0x0001FFB0 */

loc_000325CD: ;
    goto loc_000325E2;

loc_000325CF: ;
    if (CMP_AE(_fa, _fb)) goto loc_000325D6; /* jae: above or equal (unsigned >=) */

loc_000325D1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_000325E6;

loc_000325D6: ;
    edx = esp + 0x18;
    PUSH32(esp, 0x000325DFu); RECOMP_ABI_CALL(0x0001FFB0u, sub_0001FFB0); /* call 0x0001FFB0 */

loc_000325DF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000325E2: ;
    edx = MEM32(esp + 0x18);

loc_000325E6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000325B0; /* jne: not equal / not zero */

loc_000325EA: ;
    eax = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000325FBu); RECOMP_ABI_CALL(0x000326E0u, sub_000326E0); /* call 0x000326E0 */

loc_000325FB: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00032610
 * Original: 0x00032610 - 0x000326D7 (199 bytes, 90 insns)
 * Folder: world (match: xbox-demo 0x0002AC10, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032610(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032610: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x20);
    eax = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00032693; /* jle: less or equal (signed <=) */

loc_0003262B: ;
    esi = MEM32(esp + 0x24);
    /* nop */

loc_00032630: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000326AA; /* jle: less or equal (signed <=) */

loc_00032634: ;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032640u); RECOMP_ABI_CALL(0x00032720u, sub_00032720); /* call 0x00032720 */

loc_00032640: ;
    ebp = MEM32(esp + 0x20);
    eax = esi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    esi = eax;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(esp + 0x1C);
    ecx = edi;
    edx = eax;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ebx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ecx & 0xFFFFFFFCu;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = edx & 0xFFFFFFFCu;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    PUSH32(esp, esi);
    if (CMP_GE(_fas, _fbs)) goto loc_00032679; /* jge: greater or equal (signed >=) */

loc_0003266E: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00032675u); RECOMP_ABI_CALL(0x00032610u, sub_00032610); /* call 0x00032610 */

loc_00032675: ;
    ebx = ebp;
    goto loc_00032684;

loc_00032679: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00032680u); RECOMP_ABI_CALL(0x00032610u, sub_00032610); /* call 0x00032610 */

loc_00032680: ;
    edi = MEM32(esp + 0x1C);

loc_00032684: ;
    eax = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00032630; /* jg: greater (signed >) */

loc_00032693: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000326A2; /* jle: less or equal (signed <=) */

loc_00032698: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0003269Fu); RECOMP_ABI_CALL(0x000328C0u, sub_000328C0); /* call 0x000328C0 */

loc_0003269F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000326A2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000326AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00032693; /* jle: less or equal (signed <=) */

loc_000326AF: ;
    eax = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000326C5; /* jle: less or equal (signed <=) */

loc_000326BB: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000326C2u); RECOMP_ABI_CALL(0x00032AA0u, sub_00032AA0); /* call 0x00032AA0 */

loc_000326C2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000326C5: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000326CCu); RECOMP_ABI_CALL(0x00032870u, sub_00032870); /* call 0x00032870 */

loc_000326CC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000326E0
 * Original: 0x000326E0 - 0x0003271C (60 bytes, 25 insns)
 * Folder: world (match: xbox-demo 0x0002ACE0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000326E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000326E0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032712; /* je: equal / zero */

loc_000326ED: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);

loc_000326F2: ;
    eax = MEM32(eax + 0xC);
    MEM32(esi) = eax;
    edx = esp + 0xC;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00032703u); RECOMP_ABI_CALL(0x0001FFB0u, sub_0001FFB0); /* call 0x0001FFB0 */

loc_00032703: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000326F2; /* jne: not equal / not zero */

loc_0003270B: ;
    MEM32(ebx) = esi;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00032712: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ebx) = ecx;
    eax = ebx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_00032720
 * Original: 0x00032720 - 0x0003286A (330 bytes, 139 insns)
 * Folder: world (match: xbox-demo 0x0002AD20, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032720(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032720: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x14);
    eax = ebx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebp;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    PUSH32(esp, esi);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, edi);
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edi = ebp + eax * 4;
    eax = ebx + -4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x00032748u); RECOMP_ABI_CALL(0x00032960u, sub_00032960); /* call 0x00032960 */

loc_00032748: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    eax = edi;
    esi = edi + 4;
    if (CMP_AE(_fa, _fb)) goto loc_00032766; /* jae: above or equal (unsigned >=) */

loc_00032754: ;
    ecx = MEM32(eax + -4);
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00032766; /* ja: above (unsigned >) */

loc_0003275D: ;
    if (CMP_B(_fa, _fb)) goto loc_00032766; /* jb: below (unsigned <) */

loc_0003275F: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00032754; /* jb: below (unsigned <) */

loc_00032766: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0003277F; /* jae: above or equal (unsigned >=) */

loc_0003276A: ;
    edx = MEM32(eax);
    /* nop */

loc_00032770: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0003277F; /* ja: above (unsigned >) */

loc_00032776: ;
    if (CMP_B(_fa, _fb)) goto loc_0003277F; /* jb: below (unsigned <) */

loc_00032778: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00032770; /* jb: below (unsigned <) */

loc_0003277F: ;
    ecx = esi;
    ebp = eax;

loc_00032783: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000327A9; /* jae: above or equal (unsigned >=) */

loc_00032787: ;
    edx = MEM32(eax);
    edi = MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000327A2; /* ja: above (unsigned >) */

loc_0003278F: ;
    if (CMP_B(_fa, _fb)) goto loc_000327A9; /* jb: below (unsigned <) */

loc_00032791: ;
    ebx = MEM32(ecx);
    edx = esi;
    edi = MEM32(edx);
    MEM32(edx) = ebx;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edi;

loc_000327A2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00032787; /* jb: below (unsigned <) */

loc_000327A9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000327E0; /* jbe: below or equal (unsigned <=) */

loc_000327AF: ;
    edx = ebp + -4;

loc_000327B2: ;
    edi = MEM32(edx);
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000327C8; /* ja: above (unsigned >) */

loc_000327BA: ;
    if (CMP_B(_fa, _fb)) goto loc_000327D6; /* jb: below (unsigned <) */

loc_000327BC: ;
    ebx = MEM32(edx);
    edi = MEM32(eax + -4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = ebx;
    MEM32(edx) = edi;

loc_000327C8: ;
    edi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000327B2; /* jb: below (unsigned <) */

loc_000327D6: ;
    edx = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */

loc_000327E0: ;
    if (CMP_NE(_fa, _fb)) goto loc_00032818; /* jne: not equal / not zero */

loc_000327E2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032859; /* je: equal / zero */

loc_000327E6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000327F2; /* je: equal / zero */

loc_000327EA: ;
    edi = MEM32(esi);
    edx = MEM32(eax);
    MEM32(eax) = edi;
    MEM32(esi) = edx;

loc_000327F2: ;
    edi = eax;
    ebx = MEM32(edi);
    edx = ecx;
    MEM32(esp + 0x10) = ebx;
    ebx = MEM32(edx);
    MEM32(edi) = ebx;
    edi = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = edi;
    goto loc_00032783;

loc_00032818: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032841; /* jne: not equal / not zero */

loc_0003281F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032830; /* je: equal / zero */

loc_00032826: ;
    edi = MEM32(eax);
    edx = MEM32(ebp);
    MEM32(ebp) = edi;
    MEM32(eax) = edx;

loc_00032830: ;
    edi = MEM32(esi + -4);
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = edi;
    MEM32(esi) = edx;
    goto loc_00032783;

loc_00032841: ;
    ebx = MEM32(ebp);
    edx = ecx;
    edi = MEM32(edx);
    MEM32(edx) = ebx;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = edi;
    goto loc_00032783;

loc_00032859: ;
    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(ecx + 4) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx) = eax;
    eax = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000327EA
 * Original: 0x000327EA - 0x0003286A (128 bytes, 51 insns)
 * Folder: world (between: 0x00032720 and 0x00032870)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000327EA(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000327EA: ;
    edi = MEM32(esi);
    edx = MEM32(eax);
    MEM32(eax) = edi;
    MEM32(esi) = edx;
    edi = eax;
    ebx = MEM32(edi);
    edx = ecx;
    MEM32(esp + 0x10) = ebx;
    ebx = MEM32(edx);
    MEM32(edi) = ebx;
    edi = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(edx) = edi;
    g_seh_ebp = ebp; sub_00032783(); return; /* tail jmp 0x00032783 */

    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032841; /* jne: not equal / not zero */

loc_0003281F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032830; /* je: equal / zero */

loc_00032826: ;
    edi = MEM32(eax);
    edx = MEM32(ebp);
    MEM32(ebp) = edi;
    MEM32(eax) = edx;

loc_00032830: ;
    edi = MEM32(esi + -4);
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = edi;
    MEM32(esi) = edx;
    g_seh_ebp = ebp; sub_00032783(); return; /* tail jmp 0x00032783 */

loc_00032841: ;
    ebx = MEM32(ebp);
    edx = ecx;
    edi = MEM32(edx);
    MEM32(edx) = ebx;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = edi;
    g_seh_ebp = ebp; sub_00032783(); return; /* tail jmp 0x00032783 */

    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(ecx + 4) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx) = eax;
    eax = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00032830
 * Original: 0x00032830 - 0x0003286A (58 bytes, 24 insns)
 * Folder: world (between: 0x00032720 and 0x00032870)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032830(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032830: ;
    edi = MEM32(esi + -4);
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = edi;
    MEM32(esi) = edx;
    g_seh_ebp = ebp; sub_00032783(); return; /* tail jmp 0x00032783 */

    ebx = MEM32(ebp);
    edx = ecx;
    edi = MEM32(edx);
    MEM32(edx) = ebx;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = edi;
    g_seh_ebp = ebp; sub_00032783(); return; /* tail jmp 0x00032783 */

    ecx = MEM32(esp + 0x18);
    POP32(esp, edi);
    MEM32(ecx + 4) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(ecx) = eax;
    eax = ecx;
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00032870
 * Original: 0x00032870 - 0x000328B3 (67 bytes, 28 insns)
 * Folder: world (match: xbox-demo 0x0002AE70, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032870(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00032870: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - edi;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_000328B0; /* jle: less or equal (signed <=) */

loc_00032886: ;
    PUSH32(esp, ebx);

loc_00032887: ;
    eax = MEM32(edi);
    ebx = MEM32(edi + esi + -4);
    MEM32(edi + esi + -4) = eax;
    edx = esi + -4;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0003289Fu); RECOMP_ABI_CALL(0x00032AE0u, sub_00032AE0); /* call 0x00032AE0 */

loc_0003289F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = esi;
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00032887; /* jg: greater (signed >) */

loc_000328AF: ;
    POP32(esp, ebx);

loc_000328B0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000328B4
 * Original: 0x000328B4 - 0x000328C0 (12 bytes, 12 insns)
 * Folder: world (between: 0x00032870 and 0x000328C0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000328B4(void)
{

loc_000328B4: ;
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
 * sub_000328C0
 * Original: 0x000328C0 - 0x00032925 (101 bytes, 50 insns)
 * Folder: world (match: xbox-demo 0x0002AEC0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000328C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000328C0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032922; /* je: equal / zero */

loc_000328CE: ;
    PUSH32(esp, esi);
    esi = edi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032921; /* je: equal / zero */

loc_000328D6: ;
    PUSH32(esp, ebp);

loc_000328D7: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000328ED; /* jae: above or equal (unsigned >=) */

loc_000328DD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    eax = esi + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_00032919; /* je: equal / zero */

loc_000328E4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032919; /* je: equal / zero */

loc_000328E8: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_00032911;

loc_000328ED: ;
    edx = MEM32(esi + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    eax = esi + -4;
    if (CMP_AE(_fa, _fb)) goto loc_00032919; /* jae: above or equal (unsigned >=) */

loc_000328F7: ;
    ebp = MEM32(eax + -4);
    edx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000328F7; /* jb: below (unsigned <) */

loc_00032903: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032919; /* je: equal / zero */

loc_00032907: ;
    eax = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032919; /* je: equal / zero */

loc_0003290E: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edx);

loc_00032911: ;
    PUSH32(esp, 0x00032916u); RECOMP_ABI_CALL(0x00032B50u, sub_00032B50); /* call 0x00032B50 */

loc_00032916: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00032919: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000328D7; /* jne: not equal / not zero */

loc_00032920: ;
    POP32(esp, ebp);

loc_00032921: ;
    POP32(esp, esi);

loc_00032922: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00032930
 * Original: 0x00032930 - 0x00032954 (36 bytes, 16 insns)
 * Folder: world (match: xbox-demo 0x0002AF30, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032930(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00032930: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032953; /* je: equal / zero */

loc_0003293C: ;
    PUSH32(esp, esi);
    /* nop */

loc_00032940: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032948; /* je: equal / zero */

loc_00032944: ;
    esi = MEM32(ecx);
    MEM32(eax) = esi;

loc_00032948: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032940; /* jne: not equal / not zero */

loc_00032952: ;
    POP32(esp, esi);

loc_00032953: ;
    esp += 4; return; /* ret */

}

/**
 * sub_00032960
 * Original: 0x00032960 - 0x00032A9A (314 bytes, 134 insns)
 * Folder: world (match: xbox-demo 0x0002AF60, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032960(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032960: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x10);
    eax = ebp;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x28) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x28 (32-bit) */
    PUSH32(esp, esi);
    esi = MEM32(ecx);
    if (CMP_LE(_fas, _fbs)) goto loc_00032A6D; /* jle: less or equal (signed <=) */

loc_0003297C: ;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    edx = edx & 7;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((3) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, ebx);
    ebx = eax * 8;
    eax = eax << 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = MEM32(eax + ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_AE(_fa, _fb)) goto loc_0003299E; /* jae: above or equal (unsigned >=) */

loc_00032999: ;
    MEM32(eax + ecx) = esi;
    MEM32(ecx) = edx;

loc_0003299E: ;
    edx = MEM32(ebx + ecx);
    esi = MEM32(eax + ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000329AE; /* jae: above or equal (unsigned >=) */

loc_000329A8: ;
    MEM32(ebx + ecx) = esi;
    MEM32(eax + ecx) = edx;

loc_000329AE: ;
    edx = MEM32(eax + ecx);
    esi = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000329BC; /* jae: above or equal (unsigned >=) */

loc_000329B7: ;
    MEM32(eax + ecx) = esi;
    MEM32(ecx) = edx;

loc_000329BC: ;
    edx = MEM32(esp + 0x18);
    edi = MEM32(edx);
    esi = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000329D8; /* jae: above or equal (unsigned >=) */

loc_000329CA: ;
    MEM32(esp + 0x1C) = edi;
    edi = MEM32(esi);
    MEM32(edx) = edi;
    edi = MEM32(esp + 0x1C);
    MEM32(esi) = edi;

loc_000329D8: ;
    edi = MEM32(eax + edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000329EE; /* jae: above or equal (unsigned >=) */

loc_000329DF: ;
    MEM32(esp + 0x1C) = edi;
    edi = MEM32(edx);
    MEM32(eax + edx) = edi;
    edi = MEM32(esp + 0x1C);
    MEM32(edx) = edi;

loc_000329EE: ;
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00032A02; /* jae: above or equal (unsigned >=) */

loc_000329F4: ;
    MEM32(esp + 0x1C) = edi;
    edi = MEM32(esi);
    MEM32(edx) = edi;
    edi = MEM32(esp + 0x1C);
    MEM32(esi) = edi;

loc_00032A02: ;
    esi = ebp;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = ebp;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebx;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ebx = MEM32(esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00032A1E; /* jae: above or equal (unsigned >=) */

loc_00032A10: ;
    MEM32(esp + 0x1C) = ebx;
    ebx = MEM32(edi);
    MEM32(esi) = ebx;
    ebx = MEM32(esp + 0x1C);
    MEM32(edi) = ebx;

loc_00032A1E: ;
    ebx = MEM32(ebp);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00032A34; /* jae: above or equal (unsigned >=) */

loc_00032A25: ;
    MEM32(esp + 0x1C) = ebx;
    ebx = MEM32(esi);
    MEM32(ebp) = ebx;
    ebx = MEM32(esp + 0x1C);
    MEM32(esi) = ebx;

loc_00032A34: ;
    ebx = MEM32(esi);
    ebp = MEM32(edi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00032A40; /* jae: above or equal (unsigned >=) */

loc_00032A3C: ;
    MEM32(esi) = ebp;
    MEM32(edi) = ebx;

loc_00032A40: ;
    edi = MEM32(edx);
    ebx = MEM32(eax + ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00032A4E; /* jae: above or equal (unsigned >=) */

loc_00032A49: ;
    MEM32(edx) = ebx;
    MEM32(eax + ecx) = edi;

loc_00032A4E: ;
    edi = MEM32(esi);
    ebx = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00032A5A; /* jae: above or equal (unsigned >=) */

loc_00032A56: ;
    MEM32(esi) = ebx;
    MEM32(edx) = edi;

loc_00032A5A: ;
    esi = MEM32(edx);
    edi = MEM32(eax + ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00032A68; /* jae: above or equal (unsigned >=) */

loc_00032A63: ;
    MEM32(edx) = edi;
    MEM32(eax + ecx) = esi;

loc_00032A68: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_00032A6A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00032A6D: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00032A7D; /* jae: above or equal (unsigned >=) */

loc_00032A77: ;
    esi = MEM32(ecx);
    MEM32(eax) = esi;
    MEM32(ecx) = edx;

loc_00032A7D: ;
    edx = MEM32(ebp);
    esi = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00032A8B; /* jae: above or equal (unsigned >=) */

loc_00032A86: ;
    MEM32(ebp) = esi;
    MEM32(eax) = edx;

loc_00032A8B: ;
    edx = MEM32(eax);
    esi = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00032A6A; /* jae: above or equal (unsigned >=) */

loc_00032A93: ;
    MEM32(eax) = esi;
    POP32(esp, esi);
    MEM32(ecx) = edx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00032AA0
 * Original: 0x00032AA0 - 0x00032ADB (59 bytes, 30 insns)
 * Folder: world (match: xbox-demo 0x0002B0A0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00032AA0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00032AA0: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 8);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x14);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edi = edi - ebp;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edi = (uint32_t)(((int32_t)(int32_t)(edi)) >> ((2) & 31u));
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    eax = edi;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = eax;
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((1) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00032AD7; /* jle: less or equal (signed <=) */

loc_00032ABD: ;
    PUSH32(esp, ebx);
    edi = edi;

loc_00032AC0: ;
    ebx = MEM32(ebp + esi * 4 + -4);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    edx = edi;
    eax = esi;
    PUSH32(esp, 0x00032ACFu); RECOMP_ABI_CALL(0x00032AE0u, sub_00032AE0); /* call 0x00032AE0 */

loc_00032ACF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00032AC0; /* jg: greater (signed >) */

loc_00032AD6: ;
    POP32(esp, ebx);

loc_00032AD7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00032AE0
 * Original: 0x00032AE0 - 0x00032B42 (98 bytes, 45 insns)
 * Folder: world (match: xbox-demo 0x0002B0E0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032AE0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032AE0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + esi + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, edi);
    edi = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_00032B0E; /* jge: greater or equal (signed >=) */

loc_00032AF2: ;
    PUSH32(esp, ebp);

loc_00032AF3: ;
    ebp = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + eax * 4 + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ecx + eax * 4 + -4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00032AFD; /* jae: above or equal (unsigned >=) */

loc_00032AFC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_00032AFD: ;
    ebp = MEM32(ecx + eax * 4);
    MEM32(ecx + esi * 4) = ebp;
    esi = eax;
    eax = eax + eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00032AF3; /* jl: less (signed <) */

loc_00032B0D: ;
    POP32(esp, ebp);

loc_00032B0E: ;
    if (CMP_NE(_fa, _fb)) goto loc_00032B1A; /* jne: not equal / not zero */

loc_00032B10: ;
    eax = MEM32(ecx + edx * 4 + -4);
    MEM32(ecx + esi * 4) = eax;
    esi = edx + -1;

loc_00032B1A: ;
    eax = esi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00032B3C; /* jge: greater or equal (signed >=) */

loc_00032B26: ;
    edx = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00032B3C; /* jae: above or equal (unsigned >=) */

loc_00032B2D: ;
    MEM32(ecx + esi * 4) = edx;
    esi = eax;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_00032B26; /* jl: less (signed <) */

loc_00032B3C: ;
    POP32(esp, edi);
    MEM32(ecx + esi * 4) = ebx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00032B2D
 * Original: 0x00032B2D - 0x00032B42 (21 bytes, 12 insns)
 * Folder: world (between: 0x00032AE0 and 0x00032B50)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032B2D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032B2D: ;
    MEM32(ecx + esi * 4) = edx;
    esi = eax;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_00032B26(); return; } /* jl: less (signed <) */

loc_00032B3C: ;
    POP32(esp, edi);
    MEM32(ecx + esi * 4) = ebx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00032B50
 * Original: 0x00032B50 - 0x00032C09 (185 bytes, 75 insns)
 * Folder: world (match: xbox-demo 0x0002B150, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032B50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032B50: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x1C);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x20);
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - ebp;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = ebx;
    _fb = (uint32_t)(ebp) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - ebp;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esi = (uint32_t)(((int32_t)(int32_t)(esi)) >> ((2) & 31u));
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    PUSH32(esp, edi);
    eax = ecx;
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00032B82; /* je: equal / zero */

loc_00032B77: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edi = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00032B77; /* jne: not equal / not zero */

loc_00032B82: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_00032C01; /* jge: greater or equal (signed >=) */

loc_00032B86: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00032C01; /* jle: less or equal (signed <=) */

loc_00032B8A: ;
    edx = ebp + eax * 4;
    MEM32(esp + 0x24) = eax;

loc_00032B92: ;
    eax = MEM32(edx);
    MEM32(esp + 0x18) = eax;
    eax = edx + esi * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00032BA7; /* jne: not equal / not zero */

loc_00032BA1: ;
    eax = esp + 0x20;
    goto loc_00032BAF;

loc_00032BA7: ;
    MEM32(esp + 0x28) = eax;
    eax = esp + 0x28;

loc_00032BAF: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032BED; /* je: equal / zero */

loc_00032BB5: ;
    eax = MEM32(ecx);
    MEM32(edi) = eax;
    eax = ebx;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    edi = ecx;
    if (CMP_GE(_fas, _fbs)) goto loc_00032BD3; /* jge: greater or equal (signed >=) */

loc_00032BC6: ;
    ecx = ecx + esi * 4;
    MEM32(esp + 0x10) = ecx;
    eax = esp + 0x10;
    goto loc_00032BE7;

loc_00032BD3: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3FFFFFFF);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + eax * 4;
    MEM32(esp + 0x14) = eax;
    eax = esp + 0x14;

loc_00032BE7: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032BB5; /* jne: not equal / not zero */

loc_00032BED: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    MEM32(edi) = ecx;
    MEM32(esp + 0x24) = eax;
    if ((_fa != 0)) goto loc_00032B92; /* jne: not equal / not zero */

loc_00032C01: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00032C10
 * Original: 0x00032C10 - 0x00032E12 (514 bytes, 141 insns)
 * Folder: world (between: 0x00032B50 and 0x00034090)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032C10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032C10: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x3692BA);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x00032C32u); RECOMP_ABI_CALL(0x00020750u, sub_00020750); /* call 0x00020750 */

loc_00032C32: ;
    MEM32(esi + 0x4018) = eax;
    ebx = 1;
    MEM8(eax + 0x11) = LO8(ebx);
    eax = MEM32(esi + 0x4018);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 0x4018);
    MEM32(eax) = eax;
    eax = MEM32(esi + 0x4018);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(eax + 8) = eax;
    MEM32(esi + 0x401C) = ebp;
    MEM32(esp + 0x18) = ebp;
    PUSH32(esp, 0x00032C6Bu); RECOMP_ABI_CALL(0x000348A0u, sub_000348A0); /* call 0x000348A0 */

loc_00032C6B: ;
    MEM32(esi + 0x4060) = eax;
    MEM8(eax + 0x15) = LO8(ebx);
    eax = MEM32(esi + 0x4060);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 0x4060);
    MEM32(eax) = eax;
    eax = MEM32(esi + 0x4060);
    MEM32(eax + 8) = eax;
    MEM32(esi + 0x4064) = ebp;
    ecx = MEM32(esp + 0x28);
    MEM8(esp + 0x18) = LO8(ebx);
    eax = MEM32(esp + 0x24);
    MEM32(esi + 0x4000) = ebp;
    MEM32(esi + 0x4008) = ebp;
    MEM32(esi + 0x4010) = eax;
    MEM32(esi + 0x4028) = ecx;
    MEM32(esi + 0x4048) = ebp;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032CCC; /* jne: not equal / not zero */

loc_00032CC7: ;
    PUSH32(esp, 0x00032CCCu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00032CCC: ;
    edx = 0xC;
    ecx = eax;
    PUSH32(esp, 0x00032CD8u); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00032CD8: ;
    edi = eax;
    MEM32(esp + 0x24) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM8(esp + 0x18) = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_00032D08; /* je: equal / zero */

loc_00032CE7: ;
    PUSH32(esp, 0x00032CECu); RECOMP_ABI_CALL(0x00020750u, sub_00020750); /* call 0x00020750 */

loc_00032CEC: ;
    MEM32(edi + 4) = eax;
    MEM8(eax + 0x11) = LO8(ebx);
    eax = MEM32(edi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(edi + 4);
    MEM32(eax) = eax;
    eax = MEM32(edi + 4);
    MEM32(eax + 8) = eax;
    MEM32(edi + 8) = ebp;
    goto loc_00032D0A;

loc_00032D08: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00032D0A: ;
    MEM8(esp + 0x18) = LO8(ebx);
    MEM32(esi + 0x4020) = edi;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032D22; /* jne: not equal / not zero */

loc_00032D1D: ;
    PUSH32(esp, 0x00032D22u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00032D22: ;
    edx = 0xC;
    ecx = eax;
    PUSH32(esp, 0x00032D2Eu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_00032D2E: ;
    edi = eax;
    MEM32(esp + 0x24) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM8(esp + 0x18) = 3;
    if (CMP_EQ(_fa, _fb)) goto loc_00032D5E; /* je: equal / zero */

loc_00032D3D: ;
    PUSH32(esp, 0x00032D42u); RECOMP_ABI_CALL(0x00020750u, sub_00020750); /* call 0x00020750 */

loc_00032D42: ;
    MEM32(edi + 4) = eax;
    MEM8(eax + 0x11) = LO8(ebx);
    eax = MEM32(edi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(edi + 4);
    MEM32(eax) = eax;
    eax = MEM32(edi + 4);
    MEM32(eax + 8) = eax;
    MEM32(edi + 8) = ebp;
    goto loc_00032D60;

loc_00032D5E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00032D60: ;
    MEM8(esp + 0x18) = LO8(ebx);
    PUSH32(esp, 0x451B50);
    MEM32(esi + 0x4024) = edi;
    MEM32(esi + 0x404C) = ebx;
    MEM32(esi + 0x4038) = ebp;
    MEM32(esi + 0x4034) = ebx;
    MEM32(esi + 0x4058) = ebx;
    MEM32(esi + 0x4054) = ebx;
    MEM32(esi + 0x4050) = ebx;
    PUSH32(esp, 0x00032D98u); RECOMP_ABI_CALL(0x00351011u, sub_00351011); /* call 0x00351011 */

loc_00032D98: ;
    edx = MEM32(0x451B54);
    eax = MEM32(0x451B50);
    PUSH32(esp, ebp);
    PUSH32(esp, 2);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032DADu); RECOMP_ABI_CALL(0x00347B40u, sub_00347B40); /* call 0x00347B40 */

loc_00032DAD: ;
    PUSH32(esp, ebp);
    PUSH32(esp, 0x3E8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032DBAu); RECOMP_ABI_CALL(0x00348030u, sub_00348030); /* call 0x00348030 */

loc_00032DBA: ;
    MEM32(0x451B50) = eax;
    MEM32(0x451B54) = edx;
    PUSH32(esp, 0x14);
    MEM32(esi + 0x4030) = ebx;
    PUSH32(esp, 0x00032DD2u); RECOMP_ABI_CALL(0x00346D50u, sub_00346D50); /* call 0x00346D50 */

loc_00032DD2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032DE1; /* je: equal / zero */

loc_00032DD9: ;
    MEM32(eax) = 0x41F728;
    goto loc_00032DE3;

loc_00032DE1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00032DE3: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4000);
    PUSH32(esp, esi);
    MEM32(esi + 0x402C) = eax;
    edx = MEM32(eax);
    PUSH32(esp, 0x33040);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x00032DFBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032DF9u); } /* indirect call */
    }

loc_00032DFB: ;
    ecx = MEM32(esp + 0x10);
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 16; return; /* ret 12 */

}

/**
 * sub_00032E20
 * Original: 0x00032E20 - 0x00032E61 (65 bytes, 31 insns)
 * Folder: world (between: 0x00032B50 and 0x00034090)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032E20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00032E20: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032E37u); RECOMP_ABI_CALL(0x00034630u, sub_00034630); /* call 0x00034630 */

loc_00032E37: ;
    edi = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032E56; /* je: equal / zero */

loc_00032E40: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032E4E; /* jne: not equal / not zero */

loc_00032E49: ;
    PUSH32(esp, 0x00032E4Eu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00032E4E: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00032E56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032E53u); } /* indirect call */
    }

loc_00032E56: ;
    POP32(esp, edi);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00032E70
 * Original: 0x00032E70 - 0x00033034 (452 bytes, 151 insns)
 * Folder: world (between: 0x00032B50 and 0x00034090)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032E70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032E70: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x36912A);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x24);
    ebp = 1;
    MEM32(esp + 0x1C) = ebp;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = edi;
    MEM32(edi + 0x404C) = ebx;
    PUSH32(esp, 0x00032EA6u); RECOMP_ABI_CALL(0x00033FB0u, sub_00033FB0); /* call 0x00033FB0 */

loc_00032EA6: ;
    ecx = MEM32(edi + 0x402C);
    MEM32(edi + 0x4048) = ebp;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00032EB7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032EB4u); } /* indirect call */
    }

loc_00032EB7: ;
    ecx = MEM32(edi + 0x402C);
    MEM32(edi + 0x4034) = ebx;
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x14); PUSH32(esp, 0x00032EC8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032EC5u); } /* indirect call */
    }

loc_00032EC8: ;
    eax = MEM32(edi + 0x402C);
    eax = MEM32(eax + 4);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032ED9u); RECOMP_ABI_CALL(0x003373A0u, sub_003373A0); /* call 0x003373A0 */

loc_00032ED9: ;
    eax = MEM32(edi + 0x402C);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032EE5u); RECOMP_ABI_CALL(0x00346E99u, sub_00346E99); /* call 0x00346E99 */

loc_00032EE5: ;
    esi = MEM32(edi + 0x4020);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032F3C; /* je: equal / zero */

loc_00032EF2: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00032F03u); RECOMP_ABI_CALL(0x0001FEB0u, sub_0001FEB0); /* call 0x0001FEB0 */

loc_00032F03: ;
    ebp = MEM32(esi + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032F20; /* je: equal / zero */

loc_00032F0A: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032F18; /* jne: not equal / not zero */

loc_00032F13: ;
    PUSH32(esp, 0x00032F18u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00032F18: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00032F20u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032F1Du); } /* indirect call */
    }

loc_00032F20: ;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032F34; /* jne: not equal / not zero */

loc_00032F2F: ;
    PUSH32(esp, 0x00032F34u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00032F34: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00032F3Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032F39u); } /* indirect call */
    }

loc_00032F3C: ;
    esi = MEM32(edi + 0x4024);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032F90; /* je: equal / zero */

loc_00032F46: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032F57u); RECOMP_ABI_CALL(0x0001FEB0u, sub_0001FEB0); /* call 0x0001FEB0 */

loc_00032F57: ;
    ebp = MEM32(esi + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032F74; /* je: equal / zero */

loc_00032F5E: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032F6C; /* jne: not equal / not zero */

loc_00032F67: ;
    PUSH32(esp, 0x00032F6Cu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00032F6C: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00032F74u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032F71u); } /* indirect call */
    }

loc_00032F74: ;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032F88; /* jne: not equal / not zero */

loc_00032F83: ;
    PUSH32(esp, 0x00032F88u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00032F88: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00032F90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032F8Du); } /* indirect call */
    }

loc_00032F90: ;
    PUSH32(esp, 1);
    eax = edi;
    PUSH32(esp, 0x00032F99u); RECOMP_ABI_CALL(0x00033A20u, sub_00033A20); /* call 0x00033A20 */

loc_00032F99: ;
    MEM8(esp + 0x1C) = LO8(ebx);
    eax = MEM32(edi + 0x4060);
    ecx = MEM32(eax);
    esi = edi + 0x405C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032FB7u); RECOMP_ABI_CALL(0x00034630u, sub_00034630); /* call 0x00034630 */

loc_00032FB7: ;
    ebp = MEM32(esi + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032FD4; /* je: equal / zero */

loc_00032FBE: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032FCC; /* jne: not equal / not zero */

loc_00032FC7: ;
    PUSH32(esp, 0x00032FCCu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00032FCC: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00032FD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032FD1u); } /* indirect call */
    }

loc_00032FD4: ;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    eax = MEM32(edi + 0x4018);
    ecx = MEM32(eax);
    esi = edi + 0x4014;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032FFCu); RECOMP_ABI_CALL(0x0001FEB0u, sub_0001FEB0); /* call 0x0001FEB0 */

loc_00032FFC: ;
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033019; /* je: equal / zero */

loc_00033003: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033011; /* jne: not equal / not zero */

loc_0003300C: ;
    PUSH32(esp, 0x00033011u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00033011: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00033019u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00033016u); } /* indirect call */
    }

loc_00033019: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00032F7F
 * Original: 0x00032F7F - 0x00033034 (181 bytes, 62 insns)
 * Folder: world (between: 0x00032B50 and 0x00034090)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00032F7F(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00032F7F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032F88; /* jne: not equal / not zero */

loc_00032F83: ;
    PUSH32(esp, 0x00032F88u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00032F88: ;
    edx = MEM32(eax);
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00032F90u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032F8Du); } /* indirect call */
    }

loc_00032F90: ;
    PUSH32(esp, 1);
    eax = edi;
    PUSH32(esp, 0x00032F99u); RECOMP_ABI_CALL(0x00033A20u, sub_00033A20); /* call 0x00033A20 */

loc_00032F99: ;
    MEM8(esp + 0x1C) = LO8(ebx);
    eax = MEM32(edi + 0x4060);
    ecx = MEM32(eax);
    esi = edi + 0x405C;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032FB7u); RECOMP_ABI_CALL(0x00034630u, sub_00034630); /* call 0x00034630 */

loc_00032FB7: ;
    ebp = MEM32(esi + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00032FD4; /* je: equal / zero */

loc_00032FBE: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00032FCC; /* jne: not equal / not zero */

loc_00032FC7: ;
    PUSH32(esp, 0x00032FCCu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00032FCC: ;
    edx = MEM32(eax);
    PUSH32(esp, ebp);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00032FD4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00032FD1u); } /* indirect call */
    }

loc_00032FD4: ;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    eax = MEM32(edi + 0x4018);
    ecx = MEM32(eax);
    esi = edi + 0x4014;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00032FFCu); RECOMP_ABI_CALL(0x0001FEB0u, sub_0001FEB0); /* call 0x0001FEB0 */

loc_00032FFC: ;
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033019; /* je: equal / zero */

loc_00033003: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033011; /* jne: not equal / not zero */

loc_0003300C: ;
    PUSH32(esp, 0x00033011u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00033011: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00033019u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00033016u); } /* indirect call */
    }

loc_00033019: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00033040
 * Original: 0x00033040 - 0x0003304A (10 bytes, 3 insns)
 * Folder: world (between: 0x00032B50 and 0x00034090)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033040(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00033040: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    g_seh_ebp = ebp; sub_00033050(); return; /* tail jmp 0x00033050 */

}

/**
 * sub_00033050
 * Original: 0x00033050 - 0x000330DF (143 bytes, 33 insns)
 * Folder: world (between: 0x00032B50 and 0x00034090)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00033050: ;
    eax = MEM32(esi + 0x402C);
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00033061u); RECOMP_ABI_CALL(0x003373A0u, sub_003373A0); /* call 0x003373A0 */

loc_00033061: ;
    ecx = MEM32(esi + 0x402C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x0003306Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00033069u); } /* indirect call */
    }

loc_0003306C: ;
    eax = MEM32(esi + 0x4048);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00033081; /* je: equal / zero */

loc_00033076: ;
    ecx = MEM32(esi + 0x402C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x00033081u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003307Eu); } /* indirect call */
    }

loc_00033081: ;
    eax = MEM32(esi + 0x404C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00033061; /* je: equal / zero */

loc_0003308B: ;
    ecx = MEM32(esi + 0x4008);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4000)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(esi + 0x4000) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00033061; /* je: equal / zero */

loc_00033099: ;
    eax = esi;
    PUSH32(esp, 0x000330A0u); RECOMP_ABI_CALL(0x00033110u, sub_00033110); /* call 0x00033110 */

loc_000330A0: ;
    eax = 0x65F068;
    MEM32(esi + 0x4030) = 1;
    MEM32(esi + 0x4038) = 0;
    PUSH32(esp, 0x000330BEu); RECOMP_ABI_CALL(0x000DE570u, sub_000DE570); /* call 0x000DE570 */

loc_000330BE: ;
    edx = MEM32(0x7654D8);
    eax = MEM32(0x7654DC);
    _fb = (uint32_t)(0x3938700) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(0x3938700)) >> 32) & 1);
    edx = edx + 0x3938700;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(0) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(0x431020) = edx;
    MEM32(0x431024) = eax;
    goto loc_00033061;

}

/**
 * sub_000330E0
 * Original: 0x000330E0 - 0x00033110 (48 bytes, 11 insns)
 * Folder: world (between: 0x00032B50 and 0x00034090)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000330E0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000330E0: ;
    PUSH32(esp, 0x451B58);
    PUSH32(esp, 0x000330EAu); RECOMP_ABI_CALL(0x00351000u, sub_00351000); /* call 0x00351000 */

loc_000330EA: ;
    eax = MEM32(0x451B50);
    ecx = MEM32(0x451B58);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x451B5C);
    MEM32(0x451B58) = ecx;
    ecx = MEM32(0x451B54);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(0x451B5C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00033110
 * Original: 0x00033110 - 0x000331DE (206 bytes, 55 insns)
 * Folder: world (between: 0x00032B50 and 0x00034090)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00033110(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00033110: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(0x7585AC) = 0;
    MEM32(0x7585B0) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0003313C; /* jne: not equal / not zero */

loc_00033137: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003313Cu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0003313C: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00033143u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00033140u); } /* indirect call */
    }

loc_00033143: ;
    eax = MEM32(esi + 0x4008);
    ecx = MEM32(esi + 0x4058);
    PUSH32(esp, 0x451B58);
    MEM32(esi + 0x4030) = 0;
    MEM32(esi + 0x4000) = eax;
    MEM32(esi + 0x4050) = ecx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003316Fu); RECOMP_ABI_CALL(0x00351000u, sub_00351000); /* call 0x00351000 */

loc_0003316F: ;
    edx = MEM32(0x451B50);
    eax = MEM32(0x451B58);
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(edx)) >> 32) & 1);
    eax = eax + edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = MEM32(0x451B5C);
    MEM32(0x451B58) = eax;
    eax = MEM32(0x451B54);
    { uint64_t _t = (uint64_t)(edx) + (uint64_t)(eax) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); edx = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    PUSH32(esp, esi);
    MEM32(0x451B5C) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003319Au); RECOMP_ABI_CALL(0x000331E0u, sub_000331E0); /* call 0x000331E0 */

loc_0003319A: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003319Fu); RECOMP_ABI_CALL(0x00034230u, sub_00034230); /* call 0x00034230 */

loc_0003319F: ;
    PUSH32(esp, 0);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000331A8u); RECOMP_ABI_CALL(0x00033A20u, sub_00033A20); /* call 0x00033A20 */

loc_000331A8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000331ADu); RECOMP_ABI_CALL(0x00034230u, sub_00034230); /* call 0x00034230 */

loc_000331AD: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000331B3u); RECOMP_ABI_CALL(0x00033750u, sub_00033750); /* call 0x00033750 */

loc_000331B3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000331D9; /* je: equal / zero */

loc_000331B8: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000331BDu); RECOMP_ABI_CALL(0x00034230u, sub_00034230); /* call 0x00034230 */

loc_000331BD: ;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000331C4u); RECOMP_ABI_CALL(0x00033910u, sub_00033910); /* call 0x00033910 */

loc_000331C4: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000331D2; /* jne: not equal / not zero */

loc_000331CD: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000331D2u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000331D2: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x000331D9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000331D6u); } /* indirect call */
    }

loc_000331D9: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_000331E0
 * Original: 0x000331E0 - 0x0003374F (1391 bytes, 405 insns)
 * Folder: world (between: 0x00032B50 and 0x00034090)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000331E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000331E0: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x28));
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x34);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(ebp + 0x4024);
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 4);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, ecx);
    ecx = edi;
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x24) = ebx;
    PUSH32(esp, 0x0003320Du); RECOMP_ABI_CALL(0x00020620u, sub_00020620); /* call 0x00020620 */

loc_0003320D: ;
    eax = MEM32(edi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(edi + 4);
    MEM32(edi + 8) = ebx;
    MEM32(eax) = eax;
    edi = MEM32(edi + 4);
    MEM32(edi + 8) = edi;
    eax = MEM32(ebp + 0x4000);
    PUSH32(esp, eax);
    eax = 0x44AA48;
    PUSH32(esp, 0x00033232u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_00033232: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00033272; /* je: equal / zero */

loc_0003323C: ;
    eax = MEM32(esi);
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_LE(_fas, _fbs)) goto loc_00033261; /* jle: less or equal (signed <=) */

loc_00033244: ;
    edx = MEM32(esi + 4);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    eax = MEM32(ebp + 0x4024);
    ebx = edx + edi * 4;
    PUSH32(esp, 0x0003325Au); RECOMP_ABI_CALL(0x00032090u, sub_00032090); /* call 0x00032090 */

loc_0003325A: ;
    eax = MEM32(esi);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_L(_fas, _fbs)) goto loc_00033244; /* jl: less (signed <) */

loc_00033261: ;
    ecx = MEM32(esi);
    edx = MEM32(esi + 4);
    eax = MEM32(edx + ecx * 4 + -4);
    MEM32(ebp + 0x400C) = eax;
    goto loc_000332BE;

loc_00033272: ;
    eax = MEM32(ebp + 0x4000);
    PUSH32(esp, ebx);
    MEM8(0x758D20) = 1;
    PUSH32(esp, 0x00033285u); RECOMP_ABI_CALL(0x000D8590u, sub_000D8590); /* call 0x000D8590 */

loc_00033285: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebp;
    PUSH32(esp, 0x0003328Fu); RECOMP_ABI_CALL(0x000340F0u, sub_000340F0); /* call 0x000340F0 */

loc_0003328F: ;
    ecx = MEM32(ebp + 0x4024);
    edx = MEM32(ebp + 0x4000);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000332A4u); RECOMP_ABI_CALL(0x00030BC0u, sub_00030BC0); /* call 0x00030BC0 */

loc_000332A4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp + 0x400C) = eax;
    PUSH32(esp, 0x000332B2u); RECOMP_ABI_CALL(0x00034230u, sub_00034230); /* call 0x00034230 */

loc_000332B2: ;
    PUSH32(esp, 0x000332B7u); RECOMP_ABI_CALL(0x000D8740u, sub_000D8740); /* call 0x000D8740 */

loc_000332B7: ;
    MEM8(0x758D20) = 0;

loc_000332BE: ;
    esi = ebp;
    PUSH32(esp, 0x000332C5u); RECOMP_ABI_CALL(0x00034230u, sub_00034230); /* call 0x00034230 */

loc_000332C5: ;
    eax = MEM32(ebp + 0x4024);
    ecx = MEM32(eax + 4);
    edi = MEM32(ecx);
    eax = MEM32(ebp + 0x4018);
    ecx = MEM32(eax + 4);
    edx = MEM32(ebp + 0x4060);
    ebx = MEM32(edx);
    esi = ebp + 0x4014;
    PUSH32(esp, ecx);
    ecx = esi;
    MEM32(esp + 0x18) = edi;
    MEM32(esp + 0x40) = ebx;
    PUSH32(esp, 0x000332F7u); RECOMP_ABI_CALL(0x00020620u, sub_00020620); /* call 0x00020620 */

loc_000332F7: ;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(esi + 8) = 0;
    MEM32(eax) = eax;
    esi = MEM32(esi + 4);
    MEM32(esi + 8) = esi;
    edx = MEM32(ebp + 0x4024);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00033499; /* je: equal / zero */

loc_0003331E: ;
    edi = edi;

loc_00033320: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x4060)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x4060) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00033499; /* je: equal / zero */

loc_0003332C: ;
    eax = MEM32(esp + 0x14);
    ecx = MEM32(eax + 0xC);
    edi = MEM32(ebx + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = ebx + 0xC;
    if (CMP_NE(_fa, _fb)) goto loc_00033375; /* jne: not equal / not zero */

loc_00033340: ;
    eax = MEM32(ebx + 0x10);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00033360; /* je: equal / zero */

loc_00033348: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = 1;
    if ((_fa != 0)) goto loc_00033368; /* jne: not equal / not zero */

loc_00033350: ;
    MEM32(ebx + 0x10) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = eax;
    goto loc_00033428;

loc_00033360: ;
    eax = 1;
    MEM32(ebx + 0x10) = eax;

loc_00033368: ;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = eax;
    goto loc_00033428;

loc_00033375: ;
    if (CMP_BE(_fa, _fb)) goto loc_00033623; /* jbe: below or equal (unsigned <=) */

loc_0003337B: ;
    eax = MEM32(ebx + 0x10);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00033420; /* je: equal / zero */

loc_00033387: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00033531; /* je: equal / zero */

loc_0003338E: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00033420; /* jne: not equal / not zero */

loc_00033397: ;
    PUSH32(esp, edi);
    eax = 0x470148;
    PUSH32(esp, 0x000333A2u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000333A2: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000333B8; /* je: equal / zero */

loc_000333AF: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000333C2; /* je: equal / zero */

loc_000333B8: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000333C9; /* je: equal / zero */

loc_000333C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000333CB; /* je: equal / zero */

loc_000333C9: ;
    ecx = eax;

loc_000333CB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00033420; /* je: equal / zero */

loc_000333D0: ;
    eax = ecx;
    if (8) _cf = (int)(((eax) >> ((8) - 1)) & 1);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x46EFE8)) >> 32) & 1);
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000333E8u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000333E8: ;
    edi = MEM32(ebp + 0x4028);
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000333F9u); RECOMP_ABI_CALL(0x000312B0u, sub_000312B0); /* call 0x000312B0 */

loc_000333F9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x00033403u); RECOMP_ABI_CALL(0x00016E90u, sub_00016E90); /* call 0x00016E90 */

loc_00033403: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00033409u); RECOMP_ABI_CALL(0x000D8940u, sub_000D8940); /* call 0x000D8940 */

loc_00033409: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebp;
    PUSH32(esp, 0x00033413u); RECOMP_ABI_CALL(0x00034230u, sub_00034230); /* call 0x00034230 */

loc_00033413: ;
    eax = 1;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = eax;

loc_00033420: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00033445; /* je: equal / zero */

loc_00033428: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x4018)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x4018) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00033445; /* je: equal / zero */

loc_00033434: ;
    edx = esp + 0x14;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x00033445u); RECOMP_ABI_CALL(0x0001FFB0u, sub_0001FFB0); /* call 0x0001FFB0 */

loc_00033445: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00033486; /* je: equal / zero */

loc_0003344D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x4060)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x4060) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00033486; /* je: equal / zero */

loc_00033455: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esp + 0x3C;
    MEM32(esp + 0x18) = edi;
    esi = ebx;
    PUSH32(esp, 0x00033466u); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_00033466: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00033482; /* je: equal / zero */

loc_0003346C: ;
    PUSH32(esp, esi);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + 0x405C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003347Eu); RECOMP_ABI_CALL(0x000E38A0u, sub_000E38A0); /* call 0x000E38A0 */

loc_0003347E: ;
    MEM32(esp + 0x20) = edi;

loc_00033482: ;
    ebx = MEM32(esp + 0x3C);

loc_00033486: ;
    edx = MEM32(ebp + 0x4024);
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00033320; /* jne: not equal / not zero */

loc_00033499: ;
    ecx = MEM32(ebp + 0x4024);
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000334DB; /* je: equal / zero */

loc_000334A8: ;
    eax = edx;
    /* nop */

loc_000334B0: ;
    ebx = eax + 0xC;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    eax = ebp + 0x4014;
    PUSH32(esp, 0x000334C3u); RECOMP_ABI_CALL(0x00032090u, sub_00032090); /* call 0x00032090 */

loc_000334C3: ;
    edx = esp + 0x14;
    PUSH32(esp, 0x000334CCu); RECOMP_ABI_CALL(0x0001FFB0u, sub_0001FFB0); /* call 0x0001FFB0 */

loc_000334CC: ;
    ecx = MEM32(ebp + 0x4024);
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000334B0; /* jne: not equal / not zero */

loc_000334DB: ;
    ebx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x4060)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x4060) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00033745; /* je: equal / zero */

loc_000334EB: ;
    goto loc_000334F0;

    /* nop */

loc_000334F0: ;
    eax = MEM32(ebp + 0x4034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0003367E; /* jne: not equal / not zero */

loc_000334FE: ;
    edx = MEM32(ebp + 0x4024);
    edi = MEM32(edx + 4);
    ecx = edi;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00033654; /* jne: not equal / not zero */

loc_00033516: ;
    esi = MEM32(ebx + 0xC);
    /* nop */

loc_00033520: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00033646; /* jae: above or equal (unsigned >=) */

loc_00033529: ;
    eax = MEM32(eax + 8);
    goto loc_0003364A;

loc_00033531: ;
    eax = MEM32(ebp + 0x4034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0003357D; /* jne: not equal / not zero */

loc_0003353B: ;
    edi = MEM32(ebp + 0x4024);
    ebx = MEM32(edi + 4);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0x0003354Cu); RECOMP_ABI_CALL(0x00034600u, sub_00034600); /* call 0x00034600 */

loc_0003354C: ;
    edi = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00033563; /* je: equal / zero */

loc_00033556: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00033563; /* jb: below (unsigned <) */

loc_0003355D: ;
    eax = esp + 0x18;
    goto loc_0003356B;

loc_00033563: ;
    MEM32(esp + 0x24) = edi;
    eax = esp + 0x24;

loc_0003356B: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000335B1; /* je: equal / zero */

loc_0003356F: ;
    eax = MEM32(ebp + 0x4034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00033612; /* je: equal / zero */

loc_0003357D: ;
    edi = MEM32(ebp + 0x4020);
    ebx = MEM32(edi + 4);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0x0003358Eu); RECOMP_ABI_CALL(0x00034600u, sub_00034600); /* call 0x00034600 */

loc_0003358E: ;
    edi = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000335A5; /* je: equal / zero */

loc_00033598: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000335A5; /* jb: below (unsigned <) */

loc_0003359F: ;
    eax = esp + 0x18;
    goto loc_000335AD;

loc_000335A5: ;
    MEM32(esp + 0x28) = edi;
    eax = esp + 0x28;

loc_000335AD: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00033612; /* jne: not equal / not zero */

loc_000335B1: ;
    eax = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = 3;
    esi = MEM32(esi);
    PUSH32(esp, esi);
    eax = 0x470148;
    PUSH32(esp, 0x000335C9u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000335C9: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000335DF; /* je: equal / zero */

loc_000335D6: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000335E9; /* je: equal / zero */

loc_000335DF: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000335F0; /* je: equal / zero */

loc_000335E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000335F2; /* je: equal / zero */

loc_000335F0: ;
    ecx = eax;

loc_000335F2: ;
    edx = ecx;
    if (8) _cf = (int)(((edx) >> ((8) - 1)) & 1);
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x46EFE8)) >> 32) & 1);
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003360Au); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0003360A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00033612u); RECOMP_ABI_CALL(0x000289C0u, sub_000289C0); /* call 0x000289C0 */

loc_00033612: ;
    ebx = MEM32(esp + 0x3C);
    MEM32(esp + 0x18) = 1;
    goto loc_00033420;

loc_00033623: ;
    ecx = esp + 0x30;
    ebx = eax;
    PUSH32(esp, ecx);
    eax = ebp + 0x4014;
    MEM32(esp + 0x20) = 1;
    PUSH32(esp, 0x0003363Du); RECOMP_ABI_CALL(0x00032090u, sub_00032090); /* call 0x00032090 */

loc_0003363D: ;
    ebx = MEM32(esp + 0x3C);
    goto loc_00033428;

loc_00033646: ;
    ecx = eax;
    eax = MEM32(eax);

loc_0003364A: ;
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00033520; /* je: equal / zero */

loc_00033654: ;
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x28) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0003366D; /* je: equal / zero */

loc_0003365F: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0003366D; /* jb: below (unsigned <) */

loc_00033667: ;
    eax = esp + 0x28;
    goto loc_00033675;

loc_0003366D: ;
    MEM32(esp + 0x24) = edx;
    eax = esp + 0x24;

loc_00033675: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000336CE; /* je: equal / zero */

loc_00033679: ;
    goto loc_0003372C;

loc_0003367E: ;
    edx = MEM32(ebp + 0x4020);
    edi = MEM32(edx + 4);
    ecx = edi;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000336A9; /* jne: not equal / not zero */

loc_00033692: ;
    esi = MEM32(ebx + 0xC);

loc_00033695: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0003369F; /* jae: above or equal (unsigned >=) */

loc_0003369A: ;
    eax = MEM32(eax + 8);
    goto loc_000336A3;

loc_0003369F: ;
    ecx = eax;
    eax = MEM32(eax);

loc_000336A3: ;
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00033695; /* je: equal / zero */

loc_000336A9: ;
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x28) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000336C2; /* je: equal / zero */

loc_000336B4: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000336C2; /* jb: below (unsigned <) */

loc_000336BC: ;
    eax = esp + 0x28;
    goto loc_000336CA;

loc_000336C2: ;
    MEM32(esp + 0x20) = edx;
    eax = esp + 0x20;

loc_000336CA: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0003372C; /* jne: not equal / not zero */

loc_000336CE: ;
    MEM32(ebx + 0x10) = 3;
    esi = MEM32(ebx + 0xC);
    PUSH32(esp, esi);
    eax = 0x470148;
    PUSH32(esp, 0x000336E3u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000336E3: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000336F9; /* je: equal / zero */

loc_000336F0: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00033703; /* je: equal / zero */

loc_000336F9: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0003370A; /* je: equal / zero */

loc_00033703: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0003370C; /* je: equal / zero */

loc_0003370A: ;
    ecx = eax;

loc_0003370C: ;
    edx = ecx;
    if (8) _cf = (int)(((edx) >> ((8) - 1)) & 1);
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x46EFE8)) >> 32) & 1);
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00033724u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_00033724: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003372Cu); RECOMP_ABI_CALL(0x000289C0u, sub_000289C0); /* call 0x000289C0 */

loc_0003372C: ;
    edx = esp + 0x3C;
    PUSH32(esp, 0x00033735u); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_00033735: ;
    ebx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x4060)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x4060) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000334F0; /* jne: not equal / not zero */

loc_00033745: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00033333
 * Original: 0x00033333 - 0x0003374F (1052 bytes, 307 insns)
 * Folder: world (between: 0x00032B50 and 0x00034090)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033333(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00033333: ;
    edi = MEM32(ebx + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0xC)) >> 32) & 1);
    eax = eax + 0xC;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    esi = ebx + 0xC;
    if (CMP_NE(_fa, _fb)) goto loc_00033375; /* jne: not equal / not zero */

loc_00033340: ;
    eax = MEM32(ebx + 0x10);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00033360; /* je: equal / zero */

loc_00033348: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = 1;
    if ((_fa != 0)) goto loc_00033368; /* jne: not equal / not zero */

loc_00033350: ;
    MEM32(ebx + 0x10) = eax;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = eax;
    goto loc_00033428;

loc_00033360: ;
    eax = 1;
    MEM32(ebx + 0x10) = eax;

loc_00033368: ;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = eax;
    goto loc_00033428;

loc_00033375: ;
    if (CMP_BE(_fa, _fb)) goto loc_00033623; /* jbe: below or equal (unsigned <=) */

loc_0003337B: ;
    eax = MEM32(ebx + 0x10);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00033420; /* je: equal / zero */

loc_00033387: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00033531; /* je: equal / zero */

loc_0003338E: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00033420; /* jne: not equal / not zero */

loc_00033397: ;
    PUSH32(esp, edi);
    eax = 0x470148;
    PUSH32(esp, 0x000333A2u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000333A2: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000333B8; /* je: equal / zero */

loc_000333AF: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000333C2; /* je: equal / zero */

loc_000333B8: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000333C9; /* je: equal / zero */

loc_000333C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000333CB; /* je: equal / zero */

loc_000333C9: ;
    ecx = eax;

loc_000333CB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00033420; /* je: equal / zero */

loc_000333D0: ;
    eax = ecx;
    if (8) _cf = (int)(((eax) >> ((8) - 1)) & 1);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(eax)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x46EFE8)) >> 32) & 1);
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000333E8u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000333E8: ;
    edi = MEM32(ebp + 0x4028);
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000333F9u); RECOMP_ABI_CALL(0x000312B0u, sub_000312B0); /* call 0x000312B0 */

loc_000333F9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x00033403u); RECOMP_ABI_CALL(0x00016E90u, sub_00016E90); /* call 0x00016E90 */

loc_00033403: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00033409u); RECOMP_ABI_CALL(0x000D8940u, sub_000D8940); /* call 0x000D8940 */

loc_00033409: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebp;
    PUSH32(esp, 0x00033413u); RECOMP_ABI_CALL(0x00034230u, sub_00034230); /* call 0x00034230 */

loc_00033413: ;
    eax = 1;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = eax;

loc_00033420: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00033445; /* je: equal / zero */

loc_00033428: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x4018)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x4018) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00033445; /* je: equal / zero */

loc_00033434: ;
    edx = esp + 0x14;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x00033445u); RECOMP_ABI_CALL(0x0001FFB0u, sub_0001FFB0); /* call 0x0001FFB0 */

loc_00033445: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00033486; /* je: equal / zero */

loc_0003344D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x4060)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x4060) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00033486; /* je: equal / zero */

loc_00033455: ;
    _cf = 0; /* xor clears CF */
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esp + 0x3C;
    MEM32(esp + 0x18) = edi;
    esi = ebx;
    PUSH32(esp, 0x00033466u); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_00033466: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00033482; /* je: equal / zero */

loc_0003346C: ;
    PUSH32(esp, esi);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + 0x405C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003347Eu); RECOMP_ABI_CALL(0x000E38A0u, sub_000E38A0); /* call 0x000E38A0 */

loc_0003347E: ;
    MEM32(esp + 0x20) = edi;

loc_00033482: ;
    ebx = MEM32(esp + 0x3C);

loc_00033486: ;
    edx = MEM32(ebp + 0x4024);
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00033320(); return; } /* jne: not equal / not zero */

loc_00033499: ;
    ecx = MEM32(ebp + 0x4024);
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000334DB; /* je: equal / zero */

loc_000334A8: ;
    eax = edx;
    /* nop */

loc_000334B0: ;
    ebx = eax + 0xC;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    eax = ebp + 0x4014;
    PUSH32(esp, 0x000334C3u); RECOMP_ABI_CALL(0x00032090u, sub_00032090); /* call 0x00032090 */

loc_000334C3: ;
    edx = esp + 0x14;
    PUSH32(esp, 0x000334CCu); RECOMP_ABI_CALL(0x0001FFB0u, sub_0001FFB0); /* call 0x0001FFB0 */

loc_000334CC: ;
    ecx = MEM32(ebp + 0x4024);
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000334B0; /* jne: not equal / not zero */

loc_000334DB: ;
    ebx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x4060)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x4060) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00033745; /* je: equal / zero */

loc_000334EB: ;
    goto loc_000334F0;

    /* nop */

loc_000334F0: ;
    eax = MEM32(ebp + 0x4034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0003367E; /* jne: not equal / not zero */

loc_000334FE: ;
    edx = MEM32(ebp + 0x4024);
    edi = MEM32(edx + 4);
    ecx = edi;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00033654; /* jne: not equal / not zero */

loc_00033516: ;
    esi = MEM32(ebx + 0xC);
    /* nop */

loc_00033520: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_00033646; /* jae: above or equal (unsigned >=) */

loc_00033529: ;
    eax = MEM32(eax + 8);
    goto loc_0003364A;

loc_00033531: ;
    eax = MEM32(ebp + 0x4034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0003357D; /* jne: not equal / not zero */

loc_0003353B: ;
    edi = MEM32(ebp + 0x4024);
    ebx = MEM32(edi + 4);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0x0003354Cu); RECOMP_ABI_CALL(0x00034600u, sub_00034600); /* call 0x00034600 */

loc_0003354C: ;
    edi = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00033563; /* je: equal / zero */

loc_00033556: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_00033563; /* jb: below (unsigned <) */

loc_0003355D: ;
    eax = esp + 0x18;
    goto loc_0003356B;

loc_00033563: ;
    MEM32(esp + 0x24) = edi;
    eax = esp + 0x24;

loc_0003356B: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000335B1; /* je: equal / zero */

loc_0003356F: ;
    eax = MEM32(ebp + 0x4034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00033612; /* je: equal / zero */

loc_0003357D: ;
    edi = MEM32(ebp + 0x4020);
    ebx = MEM32(edi + 4);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0x0003358Eu); RECOMP_ABI_CALL(0x00034600u, sub_00034600); /* call 0x00034600 */

loc_0003358E: ;
    edi = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000335A5; /* je: equal / zero */

loc_00033598: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000335A5; /* jb: below (unsigned <) */

loc_0003359F: ;
    eax = esp + 0x18;
    goto loc_000335AD;

loc_000335A5: ;
    MEM32(esp + 0x28) = edi;
    eax = esp + 0x28;

loc_000335AD: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00033612; /* jne: not equal / not zero */

loc_000335B1: ;
    eax = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = 3;
    esi = MEM32(esi);
    PUSH32(esp, esi);
    eax = 0x470148;
    PUSH32(esp, 0x000335C9u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000335C9: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000335DF; /* je: equal / zero */

loc_000335D6: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000335E9; /* je: equal / zero */

loc_000335DF: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000335F0; /* je: equal / zero */

loc_000335E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000335F2; /* je: equal / zero */

loc_000335F0: ;
    ecx = eax;

loc_000335F2: ;
    edx = ecx;
    if (8) _cf = (int)(((edx) >> ((8) - 1)) & 1);
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x46EFE8)) >> 32) & 1);
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003360Au); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0003360A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00033612u); RECOMP_ABI_CALL(0x000289C0u, sub_000289C0); /* call 0x000289C0 */

loc_00033612: ;
    ebx = MEM32(esp + 0x3C);
    MEM32(esp + 0x18) = 1;
    goto loc_00033420;

loc_00033623: ;
    ecx = esp + 0x30;
    ebx = eax;
    PUSH32(esp, ecx);
    eax = ebp + 0x4014;
    MEM32(esp + 0x20) = 1;
    PUSH32(esp, 0x0003363Du); RECOMP_ABI_CALL(0x00032090u, sub_00032090); /* call 0x00032090 */

loc_0003363D: ;
    ebx = MEM32(esp + 0x3C);
    goto loc_00033428;

loc_00033646: ;
    ecx = eax;
    eax = MEM32(eax);

loc_0003364A: ;
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00033520; /* je: equal / zero */

loc_00033654: ;
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x28) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0003366D; /* je: equal / zero */

loc_0003365F: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0003366D; /* jb: below (unsigned <) */

loc_00033667: ;
    eax = esp + 0x28;
    goto loc_00033675;

loc_0003366D: ;
    MEM32(esp + 0x24) = edx;
    eax = esp + 0x24;

loc_00033675: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_000336CE; /* je: equal / zero */

loc_00033679: ;
    goto loc_0003372C;

loc_0003367E: ;
    edx = MEM32(ebp + 0x4020);
    edi = MEM32(edx + 4);
    ecx = edi;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000336A9; /* jne: not equal / not zero */

loc_00033692: ;
    esi = MEM32(ebx + 0xC);

loc_00033695: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0003369F; /* jae: above or equal (unsigned >=) */

loc_0003369A: ;
    eax = MEM32(eax + 8);
    goto loc_000336A3;

loc_0003369F: ;
    ecx = eax;
    eax = MEM32(eax);

loc_000336A3: ;
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00033695; /* je: equal / zero */

loc_000336A9: ;
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    MEM32(esp + 0x28) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000336C2; /* je: equal / zero */

loc_000336B4: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_000336C2; /* jb: below (unsigned <) */

loc_000336BC: ;
    eax = esp + 0x28;
    goto loc_000336CA;

loc_000336C2: ;
    MEM32(esp + 0x20) = edx;
    eax = esp + 0x20;

loc_000336CA: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0003372C; /* jne: not equal / not zero */

loc_000336CE: ;
    MEM32(ebx + 0x10) = 3;
    esi = MEM32(ebx + 0xC);
    PUSH32(esp, esi);
    eax = 0x470148;
    PUSH32(esp, 0x000336E3u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000336E3: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000336F9; /* je: equal / zero */

loc_000336F0: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00033703; /* je: equal / zero */

loc_000336F9: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0003370A; /* je: equal / zero */

loc_00033703: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0003370C; /* je: equal / zero */

loc_0003370A: ;
    ecx = eax;

loc_0003370C: ;
    edx = ecx;
    if (8) _cf = (int)(((edx) >> ((8) - 1)) & 1);
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(LO8(edx)) + (uint64_t)(LO8(ecx))) >> 8) & 1);
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    if (4) _cf = (int)(((eax) >> (32 - (4))) & 1);
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x46EFE8)) >> 32) & 1);
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00033724u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_00033724: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003372Cu); RECOMP_ABI_CALL(0x000289C0u, sub_000289C0); /* call 0x000289C0 */

loc_0003372C: ;
    edx = esp + 0x3C;
    PUSH32(esp, 0x00033735u); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_00033735: ;
    ebx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x4060)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x4060) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_000334F0; /* jne: not equal / not zero */

loc_00033745: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x28)) >> 32) & 1);
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0003339D
 * Original: 0x0003339D - 0x0003374F (946 bytes, 277 insns)
 * Folder: world (between: 0x00032B50 and 0x00034090)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003339D(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003339D: ;
    PUSH32(esp, 0x000333A2u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000333A2: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000333B8; /* je: equal / zero */

loc_000333AF: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000333C2; /* je: equal / zero */

loc_000333B8: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000333C9; /* je: equal / zero */

loc_000333C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000333CB; /* je: equal / zero */

loc_000333C9: ;
    ecx = eax;

loc_000333CB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033420; /* je: equal / zero */

loc_000333D0: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000333E8u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000333E8: ;
    edi = MEM32(ebp + 0x4028);
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000333F9u); RECOMP_ABI_CALL(0x000312B0u, sub_000312B0); /* call 0x000312B0 */

loc_000333F9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x00033403u); RECOMP_ABI_CALL(0x00016E90u, sub_00016E90); /* call 0x00016E90 */

loc_00033403: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00033409u); RECOMP_ABI_CALL(0x000D8940u, sub_000D8940); /* call 0x000D8940 */

loc_00033409: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebp;
    PUSH32(esp, 0x00033413u); RECOMP_ABI_CALL(0x00034230u, sub_00034230); /* call 0x00034230 */

loc_00033413: ;
    eax = 1;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = eax;

loc_00033420: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033445; /* je: equal / zero */

loc_00033428: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x4018)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x4018) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033445; /* je: equal / zero */

loc_00033434: ;
    edx = esp + 0x14;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x00033445u); RECOMP_ABI_CALL(0x0001FFB0u, sub_0001FFB0); /* call 0x0001FFB0 */

loc_00033445: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033486; /* je: equal / zero */

loc_0003344D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x4060)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x4060) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033486; /* je: equal / zero */

loc_00033455: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esp + 0x3C;
    MEM32(esp + 0x18) = edi;
    esi = ebx;
    PUSH32(esp, 0x00033466u); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_00033466: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033482; /* je: equal / zero */

loc_0003346C: ;
    PUSH32(esp, esi);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + 0x405C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003347Eu); RECOMP_ABI_CALL(0x000E38A0u, sub_000E38A0); /* call 0x000E38A0 */

loc_0003347E: ;
    MEM32(esp + 0x20) = edi;

loc_00033482: ;
    ebx = MEM32(esp + 0x3C);

loc_00033486: ;
    edx = MEM32(ebp + 0x4024);
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00033320(); return; } /* jne: not equal / not zero */

loc_00033499: ;
    ecx = MEM32(ebp + 0x4024);
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000334DB; /* je: equal / zero */

loc_000334A8: ;
    eax = edx;
    /* nop */

loc_000334B0: ;
    ebx = eax + 0xC;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    eax = ebp + 0x4014;
    PUSH32(esp, 0x000334C3u); RECOMP_ABI_CALL(0x00032090u, sub_00032090); /* call 0x00032090 */

loc_000334C3: ;
    edx = esp + 0x14;
    PUSH32(esp, 0x000334CCu); RECOMP_ABI_CALL(0x0001FFB0u, sub_0001FFB0); /* call 0x0001FFB0 */

loc_000334CC: ;
    ecx = MEM32(ebp + 0x4024);
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000334B0; /* jne: not equal / not zero */

loc_000334DB: ;
    ebx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x4060)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x4060) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033745; /* je: equal / zero */

loc_000334EB: ;
    goto loc_000334F0;

    /* nop */

loc_000334F0: ;
    eax = MEM32(ebp + 0x4034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003367E; /* jne: not equal / not zero */

loc_000334FE: ;
    edx = MEM32(ebp + 0x4024);
    edi = MEM32(edx + 4);
    ecx = edi;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033654; /* jne: not equal / not zero */

loc_00033516: ;
    esi = MEM32(ebx + 0xC);
    /* nop */

loc_00033520: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00033646; /* jae: above or equal (unsigned >=) */

loc_00033529: ;
    eax = MEM32(eax + 8);
    goto loc_0003364A;

    eax = MEM32(ebp + 0x4034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003357D; /* jne: not equal / not zero */

loc_0003353B: ;
    edi = MEM32(ebp + 0x4024);
    ebx = MEM32(edi + 4);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0x0003354Cu); RECOMP_ABI_CALL(0x00034600u, sub_00034600); /* call 0x00034600 */

loc_0003354C: ;
    edi = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00033563; /* je: equal / zero */

loc_00033556: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00033563; /* jb: below (unsigned <) */

loc_0003355D: ;
    eax = esp + 0x18;
    goto loc_0003356B;

loc_00033563: ;
    MEM32(esp + 0x24) = edi;
    eax = esp + 0x24;

loc_0003356B: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000335B1; /* je: equal / zero */

loc_0003356F: ;
    eax = MEM32(ebp + 0x4034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033612; /* je: equal / zero */

loc_0003357D: ;
    edi = MEM32(ebp + 0x4020);
    ebx = MEM32(edi + 4);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0x0003358Eu); RECOMP_ABI_CALL(0x00034600u, sub_00034600); /* call 0x00034600 */

loc_0003358E: ;
    edi = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000335A5; /* je: equal / zero */

loc_00033598: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000335A5; /* jb: below (unsigned <) */

loc_0003359F: ;
    eax = esp + 0x18;
    goto loc_000335AD;

loc_000335A5: ;
    MEM32(esp + 0x28) = edi;
    eax = esp + 0x28;

loc_000335AD: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033612; /* jne: not equal / not zero */

loc_000335B1: ;
    eax = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = 3;
    esi = MEM32(esi);
    PUSH32(esp, esi);
    eax = 0x470148;
    PUSH32(esp, 0x000335C9u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000335C9: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000335DF; /* je: equal / zero */

loc_000335D6: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000335E9; /* je: equal / zero */

loc_000335DF: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000335F0; /* je: equal / zero */

loc_000335E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000335F2; /* je: equal / zero */

loc_000335F0: ;
    ecx = eax;

loc_000335F2: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003360Au); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0003360A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00033612u); RECOMP_ABI_CALL(0x000289C0u, sub_000289C0); /* call 0x000289C0 */

loc_00033612: ;
    ebx = MEM32(esp + 0x3C);
    MEM32(esp + 0x18) = 1;
    goto loc_00033420;

    ecx = esp + 0x30;
    ebx = eax;
    PUSH32(esp, ecx);
    eax = ebp + 0x4014;
    MEM32(esp + 0x20) = 1;
    PUSH32(esp, 0x0003363Du); RECOMP_ABI_CALL(0x00032090u, sub_00032090); /* call 0x00032090 */

loc_0003363D: ;
    ebx = MEM32(esp + 0x3C);
    goto loc_00033428;

loc_00033646: ;
    ecx = eax;
    eax = MEM32(eax);

loc_0003364A: ;
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033520; /* je: equal / zero */

loc_00033654: ;
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0003366D; /* je: equal / zero */

loc_0003365F: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003366D; /* jb: below (unsigned <) */

loc_00033667: ;
    eax = esp + 0x28;
    goto loc_00033675;

loc_0003366D: ;
    MEM32(esp + 0x24) = edx;
    eax = esp + 0x24;

loc_00033675: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000336CE; /* je: equal / zero */

loc_00033679: ;
    goto loc_0003372C;

loc_0003367E: ;
    edx = MEM32(ebp + 0x4020);
    edi = MEM32(edx + 4);
    ecx = edi;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000336A9; /* jne: not equal / not zero */

loc_00033692: ;
    esi = MEM32(ebx + 0xC);

loc_00033695: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0003369F; /* jae: above or equal (unsigned >=) */

loc_0003369A: ;
    eax = MEM32(eax + 8);
    goto loc_000336A3;

loc_0003369F: ;
    ecx = eax;
    eax = MEM32(eax);

loc_000336A3: ;
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033695; /* je: equal / zero */

loc_000336A9: ;
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000336C2; /* je: equal / zero */

loc_000336B4: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000336C2; /* jb: below (unsigned <) */

loc_000336BC: ;
    eax = esp + 0x28;
    goto loc_000336CA;

loc_000336C2: ;
    MEM32(esp + 0x20) = edx;
    eax = esp + 0x20;

loc_000336CA: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003372C; /* jne: not equal / not zero */

loc_000336CE: ;
    MEM32(ebx + 0x10) = 3;
    esi = MEM32(ebx + 0xC);
    PUSH32(esp, esi);
    eax = 0x470148;
    PUSH32(esp, 0x000336E3u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000336E3: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000336F9; /* je: equal / zero */

loc_000336F0: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033703; /* je: equal / zero */

loc_000336F9: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003370A; /* je: equal / zero */

loc_00033703: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0003370C; /* je: equal / zero */

loc_0003370A: ;
    ecx = eax;

loc_0003370C: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00033724u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_00033724: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003372Cu); RECOMP_ABI_CALL(0x000289C0u, sub_000289C0); /* call 0x000289C0 */

loc_0003372C: ;
    edx = esp + 0x3C;
    PUSH32(esp, 0x00033735u); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_00033735: ;
    ebx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x4060)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x4060) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000334F0; /* jne: not equal / not zero */

loc_00033745: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_000333A8
 * Original: 0x000333A8 - 0x0003374F (935 bytes, 275 insns)
 * Folder: world (between: 0x00032B50 and 0x00034090)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000333A8(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000333A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000333B8; /* je: equal / zero */

loc_000333AF: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000333C2; /* je: equal / zero */

loc_000333B8: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000333C9; /* je: equal / zero */

loc_000333C2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_000333CB; /* je: equal / zero */

loc_000333C9: ;
    ecx = eax;

loc_000333CB: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033420; /* je: equal / zero */

loc_000333D0: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000333E8u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000333E8: ;
    edi = MEM32(ebp + 0x4028);
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x000333F9u); RECOMP_ABI_CALL(0x000312B0u, sub_000312B0); /* call 0x000312B0 */

loc_000333F9: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x00033403u); RECOMP_ABI_CALL(0x00016E90u, sub_00016E90); /* call 0x00016E90 */

loc_00033403: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00033409u); RECOMP_ABI_CALL(0x000D8940u, sub_000D8940); /* call 0x000D8940 */

loc_00033409: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebp;
    PUSH32(esp, 0x00033413u); RECOMP_ABI_CALL(0x00034230u, sub_00034230); /* call 0x00034230 */

loc_00033413: ;
    eax = 1;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = eax;

loc_00033420: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033445; /* je: equal / zero */

loc_00033428: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x4018)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ebp + 0x4018) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033445; /* je: equal / zero */

loc_00033434: ;
    edx = esp + 0x14;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x00033445u); RECOMP_ABI_CALL(0x0001FFB0u, sub_0001FFB0); /* call 0x0001FFB0 */

loc_00033445: ;
    eax = MEM32(esp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033486; /* je: equal / zero */

loc_0003344D: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x4060)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x4060) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033486; /* je: equal / zero */

loc_00033455: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esp + 0x3C;
    MEM32(esp + 0x18) = edi;
    esi = ebx;
    PUSH32(esp, 0x00033466u); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_00033466: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033482; /* je: equal / zero */

loc_0003346C: ;
    PUSH32(esp, esi);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + 0x405C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003347Eu); RECOMP_ABI_CALL(0x000E38A0u, sub_000E38A0); /* call 0x000E38A0 */

loc_0003347E: ;
    MEM32(esp + 0x20) = edi;

loc_00033482: ;
    ebx = MEM32(esp + 0x3C);

loc_00033486: ;
    edx = MEM32(ebp + 0x4024);
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00033320(); return; } /* jne: not equal / not zero */

loc_00033499: ;
    ecx = MEM32(ebp + 0x4024);
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000334DB; /* je: equal / zero */

loc_000334A8: ;
    eax = edx;
    /* nop */

loc_000334B0: ;
    ebx = eax + 0xC;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    eax = ebp + 0x4014;
    PUSH32(esp, 0x000334C3u); RECOMP_ABI_CALL(0x00032090u, sub_00032090); /* call 0x00032090 */

loc_000334C3: ;
    edx = esp + 0x14;
    PUSH32(esp, 0x000334CCu); RECOMP_ABI_CALL(0x0001FFB0u, sub_0001FFB0); /* call 0x0001FFB0 */

loc_000334CC: ;
    ecx = MEM32(ebp + 0x4024);
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000334B0; /* jne: not equal / not zero */

loc_000334DB: ;
    ebx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x4060)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x4060) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033745; /* je: equal / zero */

loc_000334EB: ;
    goto loc_000334F0;

    /* nop */

loc_000334F0: ;
    eax = MEM32(ebp + 0x4034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003367E; /* jne: not equal / not zero */

loc_000334FE: ;
    edx = MEM32(ebp + 0x4024);
    edi = MEM32(edx + 4);
    ecx = edi;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033654; /* jne: not equal / not zero */

loc_00033516: ;
    esi = MEM32(ebx + 0xC);
    /* nop */

loc_00033520: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00033646; /* jae: above or equal (unsigned >=) */

loc_00033529: ;
    eax = MEM32(eax + 8);
    goto loc_0003364A;

    eax = MEM32(ebp + 0x4034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003357D; /* jne: not equal / not zero */

loc_0003353B: ;
    edi = MEM32(ebp + 0x4024);
    ebx = MEM32(edi + 4);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0x0003354Cu); RECOMP_ABI_CALL(0x00034600u, sub_00034600); /* call 0x00034600 */

loc_0003354C: ;
    edi = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00033563; /* je: equal / zero */

loc_00033556: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00033563; /* jb: below (unsigned <) */

loc_0003355D: ;
    eax = esp + 0x18;
    goto loc_0003356B;

loc_00033563: ;
    MEM32(esp + 0x24) = edi;
    eax = esp + 0x24;

loc_0003356B: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000335B1; /* je: equal / zero */

loc_0003356F: ;
    eax = MEM32(ebp + 0x4034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033612; /* je: equal / zero */

loc_0003357D: ;
    edi = MEM32(ebp + 0x4020);
    ebx = MEM32(edi + 4);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0x0003358Eu); RECOMP_ABI_CALL(0x00034600u, sub_00034600); /* call 0x00034600 */

loc_0003358E: ;
    edi = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000335A5; /* je: equal / zero */

loc_00033598: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000335A5; /* jb: below (unsigned <) */

loc_0003359F: ;
    eax = esp + 0x18;
    goto loc_000335AD;

loc_000335A5: ;
    MEM32(esp + 0x28) = edi;
    eax = esp + 0x28;

loc_000335AD: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033612; /* jne: not equal / not zero */

loc_000335B1: ;
    eax = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = 3;
    esi = MEM32(esi);
    PUSH32(esp, esi);
    eax = 0x470148;
    PUSH32(esp, 0x000335C9u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000335C9: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000335DF; /* je: equal / zero */

loc_000335D6: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000335E9; /* je: equal / zero */

loc_000335DF: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000335F0; /* je: equal / zero */

loc_000335E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000335F2; /* je: equal / zero */

loc_000335F0: ;
    ecx = eax;

loc_000335F2: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003360Au); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0003360A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00033612u); RECOMP_ABI_CALL(0x000289C0u, sub_000289C0); /* call 0x000289C0 */

loc_00033612: ;
    ebx = MEM32(esp + 0x3C);
    MEM32(esp + 0x18) = 1;
    goto loc_00033420;

    ecx = esp + 0x30;
    ebx = eax;
    PUSH32(esp, ecx);
    eax = ebp + 0x4014;
    MEM32(esp + 0x20) = 1;
    PUSH32(esp, 0x0003363Du); RECOMP_ABI_CALL(0x00032090u, sub_00032090); /* call 0x00032090 */

loc_0003363D: ;
    ebx = MEM32(esp + 0x3C);
    goto loc_00033428;

loc_00033646: ;
    ecx = eax;
    eax = MEM32(eax);

loc_0003364A: ;
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033520; /* je: equal / zero */

loc_00033654: ;
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0003366D; /* je: equal / zero */

loc_0003365F: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003366D; /* jb: below (unsigned <) */

loc_00033667: ;
    eax = esp + 0x28;
    goto loc_00033675;

loc_0003366D: ;
    MEM32(esp + 0x24) = edx;
    eax = esp + 0x24;

loc_00033675: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000336CE; /* je: equal / zero */

loc_00033679: ;
    goto loc_0003372C;

loc_0003367E: ;
    edx = MEM32(ebp + 0x4020);
    edi = MEM32(edx + 4);
    ecx = edi;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000336A9; /* jne: not equal / not zero */

loc_00033692: ;
    esi = MEM32(ebx + 0xC);

loc_00033695: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0003369F; /* jae: above or equal (unsigned >=) */

loc_0003369A: ;
    eax = MEM32(eax + 8);
    goto loc_000336A3;

loc_0003369F: ;
    ecx = eax;
    eax = MEM32(eax);

loc_000336A3: ;
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033695; /* je: equal / zero */

loc_000336A9: ;
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000336C2; /* je: equal / zero */

loc_000336B4: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000336C2; /* jb: below (unsigned <) */

loc_000336BC: ;
    eax = esp + 0x28;
    goto loc_000336CA;

loc_000336C2: ;
    MEM32(esp + 0x20) = edx;
    eax = esp + 0x20;

loc_000336CA: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003372C; /* jne: not equal / not zero */

loc_000336CE: ;
    MEM32(ebx + 0x10) = 3;
    esi = MEM32(ebx + 0xC);
    PUSH32(esp, esi);
    eax = 0x470148;
    PUSH32(esp, 0x000336E3u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000336E3: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000336F9; /* je: equal / zero */

loc_000336F0: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033703; /* je: equal / zero */

loc_000336F9: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003370A; /* je: equal / zero */

loc_00033703: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0003370C; /* je: equal / zero */

loc_0003370A: ;
    ecx = eax;

loc_0003370C: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00033724u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_00033724: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003372Cu); RECOMP_ABI_CALL(0x000289C0u, sub_000289C0); /* call 0x000289C0 */

loc_0003372C: ;
    edx = esp + 0x3C;
    PUSH32(esp, 0x00033735u); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_00033735: ;
    ebx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x4060)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x4060) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000334F0; /* jne: not equal / not zero */

loc_00033745: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00033453
 * Original: 0x00033453 - 0x0003374F (764 bytes, 224 insns)
 * Folder: world (between: 0x00032B50 and 0x00034090)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033453(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00033453: ;
    if (_flags /* je: equal / zero */) goto loc_00033486;

loc_00033455: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    edx = esp + 0x3C;
    MEM32(esp + 0x18) = edi;
    esi = ebx;
    PUSH32(esp, 0x00033466u); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_00033466: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033482; /* je: equal / zero */

loc_0003346C: ;
    PUSH32(esp, esi);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = ebp + 0x405C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003347Eu); RECOMP_ABI_CALL(0x000E38A0u, sub_000E38A0); /* call 0x000E38A0 */

loc_0003347E: ;
    MEM32(esp + 0x20) = edi;

loc_00033482: ;
    ebx = MEM32(esp + 0x3C);

loc_00033486: ;
    edx = MEM32(ebp + 0x4024);
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00033320(); return; } /* jne: not equal / not zero */

loc_00033499: ;
    ecx = MEM32(ebp + 0x4024);
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000334DB; /* je: equal / zero */

loc_000334A8: ;
    eax = edx;
    /* nop */

loc_000334B0: ;
    ebx = eax + 0xC;
    eax = esp + 0x30;
    PUSH32(esp, eax);
    eax = ebp + 0x4014;
    PUSH32(esp, 0x000334C3u); RECOMP_ABI_CALL(0x00032090u, sub_00032090); /* call 0x00032090 */

loc_000334C3: ;
    edx = esp + 0x14;
    PUSH32(esp, 0x000334CCu); RECOMP_ABI_CALL(0x0001FFB0u, sub_0001FFB0); /* call 0x0001FFB0 */

loc_000334CC: ;
    ecx = MEM32(ebp + 0x4024);
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000334B0; /* jne: not equal / not zero */

loc_000334DB: ;
    ebx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x4060)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x4060) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033745; /* je: equal / zero */

loc_000334EB: ;
    goto loc_000334F0;

    /* nop */

loc_000334F0: ;
    eax = MEM32(ebp + 0x4034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003367E; /* jne: not equal / not zero */

loc_000334FE: ;
    edx = MEM32(ebp + 0x4024);
    edi = MEM32(edx + 4);
    ecx = edi;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033654; /* jne: not equal / not zero */

loc_00033516: ;
    esi = MEM32(ebx + 0xC);
    /* nop */

loc_00033520: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00033646; /* jae: above or equal (unsigned >=) */

loc_00033529: ;
    eax = MEM32(eax + 8);
    goto loc_0003364A;

    eax = MEM32(ebp + 0x4034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003357D; /* jne: not equal / not zero */

loc_0003353B: ;
    edi = MEM32(ebp + 0x4024);
    ebx = MEM32(edi + 4);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0x0003354Cu); RECOMP_ABI_CALL(0x00034600u, sub_00034600); /* call 0x00034600 */

loc_0003354C: ;
    edi = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00033563; /* je: equal / zero */

loc_00033556: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00033563; /* jb: below (unsigned <) */

loc_0003355D: ;
    eax = esp + 0x18;
    goto loc_0003356B;

loc_00033563: ;
    MEM32(esp + 0x24) = edi;
    eax = esp + 0x24;

loc_0003356B: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000335B1; /* je: equal / zero */

loc_0003356F: ;
    eax = MEM32(ebp + 0x4034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033612; /* je: equal / zero */

loc_0003357D: ;
    edi = MEM32(ebp + 0x4020);
    ebx = MEM32(edi + 4);
    PUSH32(esp, esi);
    eax = edi;
    PUSH32(esp, 0x0003358Eu); RECOMP_ABI_CALL(0x00034600u, sub_00034600); /* call 0x00034600 */

loc_0003358E: ;
    edi = ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000335A5; /* je: equal / zero */

loc_00033598: ;
    edx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000335A5; /* jb: below (unsigned <) */

loc_0003359F: ;
    eax = esp + 0x18;
    goto loc_000335AD;

loc_000335A5: ;
    MEM32(esp + 0x28) = edi;
    eax = esp + 0x28;

loc_000335AD: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033612; /* jne: not equal / not zero */

loc_000335B1: ;
    eax = MEM32(esp + 0x3C);
    MEM32(eax + 0x10) = 3;
    esi = MEM32(esi);
    PUSH32(esp, esi);
    eax = 0x470148;
    PUSH32(esp, 0x000335C9u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000335C9: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000335DF; /* je: equal / zero */

loc_000335D6: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000335E9; /* je: equal / zero */

loc_000335DF: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000335F0; /* je: equal / zero */

loc_000335E9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000335F2; /* je: equal / zero */

loc_000335F0: ;
    ecx = eax;

loc_000335F2: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003360Au); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0003360A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00033612u); RECOMP_ABI_CALL(0x000289C0u, sub_000289C0); /* call 0x000289C0 */

loc_00033612: ;
    ebx = MEM32(esp + 0x3C);
    MEM32(esp + 0x18) = 1;
    g_seh_ebp = ebp; sub_00033420(); return; /* tail jmp 0x00033420 */

    ecx = esp + 0x30;
    ebx = eax;
    PUSH32(esp, ecx);
    eax = ebp + 0x4014;
    MEM32(esp + 0x20) = 1;
    PUSH32(esp, 0x0003363Du); RECOMP_ABI_CALL(0x00032090u, sub_00032090); /* call 0x00032090 */

loc_0003363D: ;
    ebx = MEM32(esp + 0x3C);
    g_seh_ebp = ebp; sub_00033428(); return; /* tail jmp 0x00033428 */

loc_00033646: ;
    ecx = eax;
    eax = MEM32(eax);

loc_0003364A: ;
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033520; /* je: equal / zero */

loc_00033654: ;
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0003366D; /* je: equal / zero */

loc_0003365F: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0003366D; /* jb: below (unsigned <) */

loc_00033667: ;
    eax = esp + 0x28;
    goto loc_00033675;

loc_0003366D: ;
    MEM32(esp + 0x24) = edx;
    eax = esp + 0x24;

loc_00033675: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000336CE; /* je: equal / zero */

loc_00033679: ;
    goto loc_0003372C;

loc_0003367E: ;
    edx = MEM32(ebp + 0x4020);
    edi = MEM32(edx + 4);
    ecx = edi;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000336A9; /* jne: not equal / not zero */

loc_00033692: ;
    esi = MEM32(ebx + 0xC);

loc_00033695: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0003369F; /* jae: above or equal (unsigned >=) */

loc_0003369A: ;
    eax = MEM32(eax + 8);
    goto loc_000336A3;

loc_0003369F: ;
    ecx = eax;
    eax = MEM32(eax);

loc_000336A3: ;
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033695; /* je: equal / zero */

loc_000336A9: ;
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x28) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_000336C2; /* je: equal / zero */

loc_000336B4: ;
    eax = MEM32(ebx + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000336C2; /* jb: below (unsigned <) */

loc_000336BC: ;
    eax = esp + 0x28;
    goto loc_000336CA;

loc_000336C2: ;
    MEM32(esp + 0x20) = edx;
    eax = esp + 0x20;

loc_000336CA: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003372C; /* jne: not equal / not zero */

loc_000336CE: ;
    MEM32(ebx + 0x10) = 3;
    esi = MEM32(ebx + 0xC);
    PUSH32(esp, esi);
    eax = 0x470148;
    PUSH32(esp, 0x000336E3u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000336E3: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000336F9; /* je: equal / zero */

loc_000336F0: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033703; /* je: equal / zero */

loc_000336F9: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003370A; /* je: equal / zero */

loc_00033703: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0003370C; /* je: equal / zero */

loc_0003370A: ;
    ecx = eax;

loc_0003370C: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00033724u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_00033724: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003372Cu); RECOMP_ABI_CALL(0x000289C0u, sub_000289C0); /* call 0x000289C0 */

loc_0003372C: ;
    edx = esp + 0x3C;
    PUSH32(esp, 0x00033735u); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_00033735: ;
    ebx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x4060)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x4060) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000334F0; /* jne: not equal / not zero */

loc_00033745: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00033724
 * Original: 0x00033724 - 0x0003374F (43 bytes, 13 insns)
 * Folder: world (between: 0x00032B50 and 0x00034090)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033724(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00033724: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0003372Cu); RECOMP_ABI_CALL(0x000289C0u, sub_000289C0); /* call 0x000289C0 */

loc_0003372C: ;
    edx = esp + 0x3C;
    PUSH32(esp, 0x00033735u); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_00033735: ;
    ebx = MEM32(esp + 0x3C);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x4060)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ebp + 0x4060) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_000334F0(); return; } /* jne: not equal / not zero */

loc_00033745: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00033750
 * Original: 0x00033750 - 0x0003390A (442 bytes, 134 insns)
 * Folder: world (between: 0x00032B50 and 0x00034090)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00033750: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = ebp;
    PUSH32(esp, 0x00033762u); RECOMP_ABI_CALL(0x00034230u, sub_00034230); /* call 0x00034230 */

loc_00033762: ;
    eax = MEM32(ebp + 0x4018);
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x24) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00033893; /* je: equal / zero */

loc_00033776: ;
    esi = MEM32(edi + 0xC);
    PUSH32(esp, esi);
    eax = 0x470148;
    PUSH32(esp, 0x00033784u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_00033784: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003379A; /* je: equal / zero */

loc_00033791: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000337A4; /* je: equal / zero */

loc_0003379A: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000337AB; /* je: equal / zero */

loc_000337A4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000337AD; /* je: equal / zero */

loc_000337AB: ;
    ecx = eax;

loc_000337AD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003387A; /* je: equal / zero */

loc_000337B6: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000337CEu); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000337CE: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003387A; /* jne: not equal / not zero */

loc_000337DA: ;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000337E4u); RECOMP_ABI_CALL(0x000D8590u, sub_000D8590); /* call 0x000D8590 */

loc_000337E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = ebp;
    PUSH32(esp, 0x000337EEu); RECOMP_ABI_CALL(0x000340F0u, sub_000340F0); /* call 0x000340F0 */

loc_000337EE: ;
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 0x000337F6u); RECOMP_ABI_CALL(0x00030ED0u, sub_00030ED0); /* call 0x00030ED0 */

loc_000337F6: ;
    ebx = eax;
    PUSH32(esp, 0x000337FDu); RECOMP_ABI_CALL(0x00034230u, sub_00034230); /* call 0x00034230 */

loc_000337FD: ;
    ecx = MEM32(0x758E34);
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003380Au); RECOMP_ABI_CALL(0x002FA700u, sub_002FA700); /* call 0x002FA700 */

loc_0003380A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00033812u); RECOMP_ABI_CALL(0x000D8740u, sub_000D8740); /* call 0x000D8740 */

loc_00033812: ;
    PUSH32(esp, 0x00033817u); RECOMP_ABI_CALL(0x00034230u, sub_00034230); /* call 0x00034230 */

loc_00033817: ;
    edx = MEM32(ebp + 0x4060);
    eax = MEM32(edx + 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    ecx = ebp + 0x405C;
    if (CMP_NE(_fa, _fb)) goto loc_00033845; /* jne: not equal / not zero */

loc_0003382D: ;
    esi = MEM32(edi + 0xC);

loc_00033830: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0003383A; /* jae: above or equal (unsigned >=) */

loc_00033835: ;
    eax = MEM32(eax + 8);
    goto loc_0003383E;

loc_0003383A: ;
    edx = eax;
    eax = MEM32(eax);

loc_0003383E: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033830; /* je: equal / zero */

loc_00033845: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    eax = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00033854; /* je: equal / zero */

loc_0003384C: ;
    esi = MEM32(edi + 0xC);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00033873; /* jae: above or equal (unsigned >=) */

loc_00033854: ;
    eax = MEM32(edi + 0xC);
    MEM32(esp + 0x18) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    esi = esp + 0x18;
    MEM32(esp + 0x20) = 0;
    PUSH32(esp, 0x00033871u); RECOMP_ABI_CALL(0x00034470u, sub_00034470); /* call 0x00034470 */

loc_00033871: ;
    eax = MEM32(eax);

loc_00033873: ;
    MEM32(eax + 0x10) = 0;

loc_0003387A: ;
    edx = esp + 0x24;
    PUSH32(esp, 0x00033883u); RECOMP_ABI_CALL(0x0001FFB0u, sub_0001FFB0); /* call 0x0001FFB0 */

loc_00033883: ;
    edi = MEM32(esp + 0x24);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 0x4018)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ebp + 0x4018) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033776; /* jne: not equal / not zero */

loc_00033893: ;
    ebp = MEM32(ebp + 0x400C);
    PUSH32(esp, ebp);
    eax = 0x470148;
    PUSH32(esp, 0x000338A4u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000338A4: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000338BA; /* je: equal / zero */

loc_000338B1: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000338C4; /* je: equal / zero */

loc_000338BA: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000338CB; /* je: equal / zero */

loc_000338C4: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_000338CD; /* je: equal / zero */

loc_000338CB: ;
    ecx = eax;

loc_000338CD: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000338FE; /* je: equal / zero */

loc_000338D2: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000338EAu); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000338EA: ;
    esi = MEM32(eax + 0x494);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x43106C) = esi;
    PUSH32(esp, 0x000338FEu); RECOMP_ABI_CALL(0x00069B10u, sub_00069B10); /* call 0x00069B10 */

loc_000338FE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00033910
 * Original: 0x00033910 - 0x00033A20 (272 bytes, 81 insns)
 * Folder: world (between: 0x00032B50 and 0x00034090)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033910(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00033910: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0x4060);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x14) = edi;
    ebp = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_000339E2; /* je: equal / zero */

loc_00033932: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000339A7; /* jne: not equal / not zero */

loc_00033939: ;
    ebx = MEM32(edi + 0xC);
    PUSH32(esp, ebx);
    eax = 0x470148;
    PUSH32(esp, 0x00033947u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_00033947: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003395D; /* je: equal / zero */

loc_00033954: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033967; /* je: equal / zero */

loc_0003395D: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003396E; /* je: equal / zero */

loc_00033967: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00033970; /* je: equal / zero */

loc_0003396E: ;
    ecx = eax;

loc_00033970: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000339A7; /* je: equal / zero */

loc_00033975: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003398Du); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0003398D: ;
    ecx = MEM32(esi + 0x4028);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003399Cu); RECOMP_ABI_CALL(0x00030FB0u, sub_00030FB0); /* call 0x00030FB0 */

loc_0003399C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000339A4u); RECOMP_ABI_CALL(0x00034230u, sub_00034230); /* call 0x00034230 */

loc_000339A4: ;
    MEM32(edi + 0x10) = ebp;

loc_000339A7: ;
    eax = MEM32(esi + 0x4034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000339C9; /* jne: not equal / not zero */

loc_000339B1: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000339C9; /* jne: not equal / not zero */

loc_000339B6: ;
    eax = MEM32(esi + 0x4020);
    edx = esp + 0x18;
    ebx = edi + 0xC;
    PUSH32(esp, edx);
    PUSH32(esp, 0x000339C9u); RECOMP_ABI_CALL(0x00032090u, sub_00032090); /* call 0x00032090 */

loc_000339C9: ;
    edx = esp + 0x14;
    PUSH32(esp, 0x000339D2u); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_000339D2: ;
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4060)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x4060) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033932; /* jne: not equal / not zero */

loc_000339E2: ;
    eax = MEM32(esi + 0x4000);
    MEM32(esi + 0x4004) = eax;
    eax = MEM32(esi + 0x4028);
    MEM32(esi + 0x4038) = ebp;
    PUSH32(esp, 0x000339FFu); RECOMP_ABI_CALL(0x0006E000u, sub_0006E000); /* call 0x0006E000 */

loc_000339FF: ;
    PUSH32(esp, 0x00033A04u); RECOMP_ABI_CALL(0x000E8330u, sub_000E8330); /* call 0x000E8330 */

loc_00033A04: ;
    ecx = MEM32(esi + 0x4028);
    eax = MEM32(0x75850C);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ecx + 0xC) = ebp;
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(0x75850C) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00033A20
 * Original: 0x00033A20 - 0x00033C3B (539 bytes, 161 insns)
 * Folder: world (between: 0x00032B50 and 0x00034090)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033A20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00033A20: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    ecx = MEM32(esi + 0x4060);
    eax = MEM32(ecx);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00033AD1; /* je: equal / zero */

loc_00033A43: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033A4F; /* je: equal / zero */

loc_00033A49: ;
    _fa = (uint32_t)(MEM32(esp + 0x24)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x24), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033AB8; /* je: equal / zero */

loc_00033A4F: ;
    edi = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    eax = 0x470148;
    PUSH32(esp, 0x00033A5Du); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_00033A5D: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033A73; /* je: equal / zero */

loc_00033A6A: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033A7B; /* je: equal / zero */

loc_00033A73: ;
    _fa = (uint32_t)(MEM32(0x43B174)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x43B174), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033A82; /* je: equal / zero */

loc_00033A7B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00033A84; /* je: equal / zero */

loc_00033A82: ;
    ecx = eax;

loc_00033A84: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033AB8; /* je: equal / zero */

loc_00033A89: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00033AA1u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_00033AA1: ;
    edi = MEM32(esi + 0x4028);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x00033AB0u); RECOMP_ABI_CALL(0x000312B0u, sub_000312B0); /* call 0x000312B0 */

loc_00033AB0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00033AB8u); RECOMP_ABI_CALL(0x00034230u, sub_00034230); /* call 0x00034230 */

loc_00033AB8: ;
    edx = esp + 0x10;
    PUSH32(esp, 0x00033AC1u); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_00033AC1: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4060)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x4060) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033A43; /* jne: not equal / not zero */

loc_00033AD1: ;
    _fa = (uint32_t)(MEM32(esi + 0x4034)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4034), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033B12; /* je: equal / zero */

loc_00033AD9: ;
    _fa = (uint32_t)(MEM32(esi + 0x4038)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4038), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033B12; /* jne: not equal / not zero */

loc_00033AE1: ;
    ecx = MEM32(esi + 0x402C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00033AECu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00033AE9u); } /* indirect call */
    }

loc_00033AEC: ;
    ecx = MEM32(esi + 0x402C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00033AF7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00033AF4u); } /* indirect call */
    }

loc_00033AF7: ;
    ecx = MEM32(esi + 0x402C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x00033B02u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00033AFFu); } /* indirect call */
    }

loc_00033B02: ;
    ecx = MEM32(esi + 0x402C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00033B0Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00033B0Au); } /* indirect call */
    }

loc_00033B0D: ;
    PUSH32(esp, 0x00033B12u); RECOMP_ABI_CALL(0x000330E0u, sub_000330E0); /* call 0x000330E0 */

loc_00033B12: ;
    eax = MEM32(esi + 0x4060);
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x10) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00033C1C; /* je: equal / zero */

loc_00033B26: ;
    _fa = (uint32_t)(MEM32(ebp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ebp + 0x10), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033B38; /* je: equal / zero */

loc_00033B2C: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033BE7; /* je: equal / zero */

loc_00033B38: ;
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    eax = 0x470148;
    PUSH32(esp, 0x00033B46u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_00033B46: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033B5C; /* je: equal / zero */

loc_00033B53: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033B66; /* je: equal / zero */

loc_00033B5C: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033B6D; /* je: equal / zero */

loc_00033B66: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00033B6F; /* je: equal / zero */

loc_00033B6D: ;
    ecx = eax;

loc_00033B6F: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033BE7; /* je: equal / zero */

loc_00033B74: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00033B8Cu); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_00033B8C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0x00033B96u); RECOMP_ABI_CALL(0x00034230u, sub_00034230); /* call 0x00034230 */

loc_00033B96: ;
    eax = edi;
    PUSH32(esp, 0x00033B9Du); RECOMP_ABI_CALL(0x00016E90u, sub_00016E90); /* call 0x00016E90 */

loc_00033B9D: ;
    eax = esp + 0x14;
    PUSH32(esp, eax);
    ebx = 0x46EFD4;
    eax = edi;
    PUSH32(esp, 0x00033BAEu); RECOMP_ABI_CALL(0x000E0150u, sub_000E0150); /* call 0x000E0150 */

loc_00033BAE: ;
    eax = MEM32(esp + 0x18);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033BD9; /* je: equal / zero */

loc_00033BB9: ;
    edx = eax;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(eax));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ebx = ZX8(LO8(edx));
    ecx = esp + 0x14;
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x46EFE8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00033BD6u); RECOMP_ABI_CALL(0x000E0150u, sub_000E0150); /* call 0x000E0150 */

loc_00033BD6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00033BD9: ;
    PUSH32(esp, 0x00033BDEu); RECOMP_ABI_CALL(0x00034230u, sub_00034230); /* call 0x00034230 */

loc_00033BDE: ;
    ebx = 1;
    MEM32(esp + 0x18) = ebp;

loc_00033BE7: ;
    edx = esp + 0x10;
    PUSH32(esp, 0x00033BF0u); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_00033BF0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033C0C; /* je: equal / zero */

loc_00033BF4: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esi + 0x405C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00033C0Au); RECOMP_ABI_CALL(0x000E38A0u, sub_000E38A0); /* call 0x000E38A0 */

loc_00033C0A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00033C0C: ;
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4060)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x4060) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033B26; /* jne: not equal / not zero */

loc_00033C1C: ;
    eax = MEM32(esi + 0x4034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033C31; /* jne: not equal / not zero */

loc_00033C26: ;
    esi = MEM32(esi + 0x4028);
    PUSH32(esp, 0x00033C31u); RECOMP_ABI_CALL(0x00015B20u, sub_00015B20); /* call 0x00015B20 */

loc_00033C31: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00033BD1
 * Original: 0x00033BD1 - 0x00033C3B (106 bytes, 31 insns)
 * Folder: world (between: 0x00032B50 and 0x00034090)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033BD1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00033BD1: ;
    PUSH32(esp, 0x00033BD6u); RECOMP_ABI_CALL(0x000E0150u, sub_000E0150); /* call 0x000E0150 */

loc_00033BD6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00033BDEu); RECOMP_ABI_CALL(0x00034230u, sub_00034230); /* call 0x00034230 */

loc_00033BDE: ;
    ebx = 1;
    MEM32(esp + 0x18) = ebp;
    edx = esp + 0x10;
    PUSH32(esp, 0x00033BF0u); RECOMP_ABI_CALL(0x000CEA10u, sub_000CEA10); /* call 0x000CEA10 */

loc_00033BF0: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033C0C; /* je: equal / zero */

loc_00033BF4: ;
    eax = MEM32(esp + 0x18);
    PUSH32(esp, eax);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    edx = esi + 0x405C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00033C0Au); RECOMP_ABI_CALL(0x000E38A0u, sub_000E38A0); /* call 0x000E38A0 */

loc_00033C0A: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00033C0C: ;
    ebp = MEM32(esp + 0x10);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4060)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x4060) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_00033B26(); return; } /* jne: not equal / not zero */

loc_00033C1C: ;
    eax = MEM32(esi + 0x4034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033C31; /* jne: not equal / not zero */

loc_00033C26: ;
    esi = MEM32(esi + 0x4028);
    PUSH32(esp, 0x00033C31u); RECOMP_ABI_CALL(0x00015B20u, sub_00015B20); /* call 0x00015B20 */

loc_00033C31: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00033C40
 * Original: 0x00033C40 - 0x00033FA4 (868 bytes, 260 insns)
 * Folder: world (between: 0x00032B50 and 0x00034090)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033C40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00033C40: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x42D758);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = edx;
    MEM32(esp + 0x38) = eax;
    eax = MEM32(esi + 0x4030);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, edi);
    edi = ecx;
    ebx = 1;
    if (CMP_NE(_fa, _fb)) goto loc_00033C6E; /* jne: not equal / not zero */

loc_00033C63: ;
    MEM32(0x758C70) = ebx;
    PUSH32(esp, 0x00033C6Eu); RECOMP_ABI_CALL(0x00033FB0u, sub_00033FB0); /* call 0x00033FB0 */

loc_00033C6E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4004)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x4004) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033C87; /* je: equal / zero */

loc_00033C76: ;
    MEM32(0x758C70) = ebx;
    MEM32(esi + 0x4008) = edi;
    PUSH32(esp, 0x00033C87u); RECOMP_ABI_CALL(0x00033FB0u, sub_00033FB0); /* call 0x00033FB0 */

loc_00033C87: ;
    _fa = (uint32_t)(MEM8(0x758484)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x758484), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033D1E; /* jne: not equal / not zero */

loc_00033C94: ;
    SET_LO8(eax, MEM8(0x758485));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033D1E; /* jne: not equal / not zero */

loc_00033CA1: ;
    eax = MEM32(0x431018);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4004)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x4004) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033D1E; /* je: equal / zero */

loc_00033CAE: ;
    PUSH32(esp, eax);
    eax = esp + 0x28;
    PUSH32(esp, 0x41F634);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00033CBEu); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_00033CBE: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x24;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00033CCCu); RECOMP_ABI_CALL(0x0009CD90u, sub_0009CD90); /* call 0x0009CD90 */

loc_00033CCC: ;
    edx = MEM32(esi + 0x4004);
    PUSH32(esp, edx);
    eax = esp + 0x3C;
    PUSH32(esp, 0x41F634);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00033CE2u); RECOMP_ABI_CALL(0x00347456u, sub_00347456); /* call 0x00347456 */

loc_00033CE2: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x30;
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00033CF0u); RECOMP_ABI_CALL(0x0009CCC0u, sub_0009CCC0); /* call 0x0009CCC0 */

loc_00033CF0: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00033CF8u); RECOMP_ABI_CALL(0x0009BBE0u, sub_0009BBE0); /* call 0x0009BBE0 */

loc_00033CF8: ;
    eax = MEM32(esi + 0x4034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(esi + 0x4004);
    MEM32(0x431018) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_00033D1E; /* jne: not equal / not zero */

loc_00033D0E: ;
    edi = edi;

loc_00033D10: ;
    PUSH32(esp, 0x00033D15u); RECOMP_ABI_CALL(0x0009CE60u, sub_0009CE60); /* call 0x0009CE60 */

loc_00033D15: ;
    PUSH32(esp, 0x00033D1Au); RECOMP_ABI_CALL(0x0009CEF0u, sub_0009CEF0); /* call 0x0009CEF0 */

loc_00033D1A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033D10; /* jne: not equal / not zero */

loc_00033D1E: ;
    ecx = MEM32(esi + 0x4020);
    eax = MEM32(esi + 0x4024);
    MEM32(esi + 0x4024) = ecx;
    MEM32(esi + 0x4020) = eax;
    edx = ecx;
    eax = MEM32(edx + 4);
    ebp = MEM32(eax);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(0x431028) = ebx;
    MEM32(esp + 0x14) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00033E83; /* je: equal / zero */

loc_00033D4F: ;
    /* nop */

loc_00033D50: ;
    edx = MEM32(esi + 0x4020);
    ebx = MEM32(edx + 4);
    ecx = ebx;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033D7B; /* jne: not equal / not zero */

loc_00033D64: ;
    edi = MEM32(ebp + 0xC);

loc_00033D67: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00033D71; /* jae: above or equal (unsigned >=) */

loc_00033D6C: ;
    eax = MEM32(eax + 8);
    goto loc_00033D75;

loc_00033D71: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00033D75: ;
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033D67; /* je: equal / zero */

loc_00033D7B: ;
    edx = MEM32(edx + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00033D94; /* je: equal / zero */

loc_00033D86: ;
    eax = MEM32(ebp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00033D94; /* jb: below (unsigned <) */

loc_00033D8E: ;
    eax = esp + 0x18;
    goto loc_00033D9C;

loc_00033D94: ;
    MEM32(esp + 0x1C) = edx;
    eax = esp + 0x1C;

loc_00033D9C: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033E62; /* jne: not equal / not zero */

loc_00033DA4: ;
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033E05; /* je: equal / zero */

loc_00033DAC: ;
    edi = MEM32(ebp + 0xC);
    PUSH32(esp, edi);
    eax = 0x470148;
    PUSH32(esp, 0x00033DBAu); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_00033DBA: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033DD0; /* je: equal / zero */

loc_00033DC7: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033DDA; /* je: equal / zero */

loc_00033DD0: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033DE1; /* je: equal / zero */

loc_00033DDA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00033DE3; /* je: equal / zero */

loc_00033DE1: ;
    ecx = eax;

loc_00033DE3: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00033DFBu); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_00033DFB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00033E03u); RECOMP_ABI_CALL(0x000289C0u, sub_000289C0); /* call 0x000289C0 */

loc_00033E03: ;
    goto loc_00033E62;

loc_00033E05: ;
    ecx = MEM32(esi + 0x4060);
    eax = MEM32(ecx + 4);
    SET_LO8(edx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033E2D; /* jne: not equal / not zero */

loc_00033E15: ;
    edx = MEM32(ebp + 0xC);

loc_00033E18: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00033E22; /* jae: above or equal (unsigned >=) */

loc_00033E1D: ;
    eax = MEM32(eax + 8);
    goto loc_00033E26;

loc_00033E22: ;
    ecx = eax;
    eax = MEM32(eax);

loc_00033E26: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033E18; /* je: equal / zero */

loc_00033E2D: ;
    eax = MEM32(esi + 0x4060);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    MEM32(esp + 0x18) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_00033E49; /* je: equal / zero */

loc_00033E3B: ;
    edx = MEM32(ebp + 0xC);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00033E49; /* jb: below (unsigned <) */

loc_00033E43: ;
    eax = esp + 0x18;
    goto loc_00033E51;

loc_00033E49: ;
    MEM32(esp + 0x20) = eax;
    eax = esp + 0x20;

loc_00033E51: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4060)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x4060) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033E62; /* je: equal / zero */

loc_00033E5B: ;
    MEM32(eax + 0x10) = 3;

loc_00033E62: ;
    edx = esp + 0x14;
    PUSH32(esp, 0x00033E6Bu); RECOMP_ABI_CALL(0x0001FFB0u, sub_0001FFB0); /* call 0x0001FFB0 */

loc_00033E6B: ;
    eax = MEM32(esi + 0x4024);
    ebp = MEM32(esp + 0x14);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033D50; /* jne: not equal / not zero */

loc_00033E7E: ;
    ebx = 1;

loc_00033E83: ;
    eax = MEM32(esp + 0x44);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033EC0; /* jne: not equal / not zero */

loc_00033E8B: ;
    edi = MEM32(esi + 0x4024);
    ecx = MEM32(edi + 4);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    ecx = edi;
    PUSH32(esp, 0x00033E9Fu); RECOMP_ABI_CALL(0x00020620u, sub_00020620); /* call 0x00020620 */

loc_00033E9F: ;
    eax = MEM32(edi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(edi + 4);
    MEM32(edi + 8) = 0;
    MEM32(eax) = eax;
    edi = MEM32(edi + 4);
    PUSH32(esp, 0);
    eax = esi;
    MEM32(edi + 8) = edi;
    PUSH32(esp, 0x00033EC0u); RECOMP_ABI_CALL(0x00033A20u, sub_00033A20); /* call 0x00033A20 */

loc_00033EC0: ;
    eax = MEM32(esi + 0x4020);
    ecx = MEM32(eax + 4);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00033F8B; /* je: equal / zero */

loc_00033ED7: ;
    ebp = MEM32(0x758BBC);
    ebx = 0x40000;

loc_00033EE2: ;
    edi = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    eax = 0x470148;
    PUSH32(esp, 0x00033EF0u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_00033EF0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033F00; /* je: equal / zero */

loc_00033EF7: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033F0A; /* je: equal / zero */

loc_00033F00: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033F11; /* je: equal / zero */

loc_00033F0A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00033F13; /* je: equal / zero */

loc_00033F11: ;
    ecx = eax;

loc_00033F13: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00033F2Bu); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_00033F2B: ;
    ecx = MEM32(eax + 0x20);
    edi = MEM32(eax + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00033F52; /* jae: above or equal (unsigned >=) */

loc_00033F38: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033F4B; /* je: equal / zero */

loc_00033F3E: ;
    edx = eax;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033F4B; /* je: equal / zero */

loc_00033F48: ;
    MEM32(eax + 4) = MEM32(eax + 4) | ebx;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00033F4B: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00033F38; /* jb: below (unsigned <) */

loc_00033F52: ;
    edx = esp + 0x14;
    PUSH32(esp, 0x00033F5Bu); RECOMP_ABI_CALL(0x0001FFB0u, sub_0001FFB0); /* call 0x0001FFB0 */

loc_00033F5B: ;
    ecx = MEM32(esi + 0x4020);
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033EE2; /* jne: not equal / not zero */

loc_00033F6E: ;
    MEM32(0x758508) = 1;
    ecx = MEM32(esp + 0x3C);
    PUSH32(esp, 0x00033F81u); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_00033F81: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

loc_00033F8B: ;
    ecx = MEM32(esp + 0x3C);
    MEM32(0x758508) = ebx;
    PUSH32(esp, 0x00033F9Au); RECOMP_ABI_CALL(0x00367A66u, sub_00367A66); /* call 0x00367A66 */

loc_00033F9A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x30;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00033FB0
 * Original: 0x00033FB0 - 0x00034002 (82 bytes, 17 insns)
 * Folder: world (between: 0x00032B50 and 0x00034090)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00033FB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00033FB0: ;
    MEM32(esi + 0x4038) = 1;
    /* nop */

loc_00033FC0: ;
    ecx = MEM32(0x758634);
    PUSH32(esp, 0x00033FCBu); RECOMP_ABI_CALL(0x00095E80u, sub_00095E80); /* call 0x00095E80 */

loc_00033FCB: ;
    eax = MEM32(esi + 0x4030);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033FE3; /* je: equal / zero */

loc_00033FD5: ;
    eax = MEM32(esi + 0x4008);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4000)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x4000) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00033FEE; /* je: equal / zero */

loc_00033FE3: ;
    ecx = MEM32(esi + 0x402C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00033FEEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00033FEBu); } /* indirect call */
    }

loc_00033FEE: ;
    _fa = (uint32_t)(MEM32(esi + 0x4030)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4030), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00033FC0; /* jne: not equal / not zero */

loc_00033FF7: ;
    MEM32(esi + 0x4038) = 0;
    esp += 4; return; /* ret */

}

/**
 * sub_00034010
 * Original: 0x00034010 - 0x00034090 (128 bytes, 42 insns)
 * Folder: world (between: 0x00032B50 and 0x00034090)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034010(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034010: ;
    edx = MEM32(edi + 0x4060);
    eax = MEM32(edx + 4);
    ecx = edi + 0x405C;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x18);
    if (CMP_NE(_fa, _fb)) goto loc_00034045; /* jne: not equal / not zero */

loc_0003402F: ;
    /* nop */

loc_00034030: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0003403A; /* jae: above or equal (unsigned >=) */

loc_00034035: ;
    eax = MEM32(eax + 8);
    goto loc_0003403E;

loc_0003403A: ;
    edx = eax;
    eax = MEM32(eax);

loc_0003403E: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034030; /* je: equal / zero */

loc_00034045: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    eax = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_00034051; /* je: equal / zero */

loc_0003404C: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0003406D; /* jae: above or equal (unsigned >=) */

loc_00034051: ;
    MEM32(esp + 0xC) = esi;
    PUSH32(esp, edx);
    eax = esp + 0x10;
    esi = esp + 0xC;
    MEM32(esp + 0x14) = 0;
    PUSH32(esp, 0x0003406Bu); RECOMP_ABI_CALL(0x00034470u, sub_00034470); /* call 0x00034470 */

loc_0003406B: ;
    eax = MEM32(eax);

loc_0003406D: ;
    MEM32(eax + 0x10) = 1;
    eax = esp + 0xC;
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x4020);
    ebx = esp + 0x1C;
    PUSH32(esp, 0x00034088u); RECOMP_ABI_CALL(0x00032090u, sub_00032090); /* call 0x00032090 */

loc_00034088: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00034090
 * Original: 0x00034090 - 0x000340EB (91 bytes, 29 insns)
 * Folder: world (match: xbox-demo 0x0002DE20, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034090(void)
{

loc_00034090: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x4020);
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x000340A5u); RECOMP_ABI_CALL(0x00020620u, sub_00020620); /* call 0x00020620 */

loc_000340A5: ;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(esi + 8) = 0;
    MEM32(eax) = eax;
    esi = MEM32(esi + 4);
    MEM32(esi + 8) = esi;
    esi = MEM32(edi + 0x4024);
    edx = MEM32(esi + 4);
    eax = MEM32(edx + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x000340D1u); RECOMP_ABI_CALL(0x00020620u, sub_00020620); /* call 0x00020620 */

loc_000340D1: ;
    eax = MEM32(esi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 4);
    MEM32(esi + 8) = 0;
    MEM32(eax) = eax;
    esi = MEM32(esi + 4);
    MEM32(esi + 8) = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000340F0
 * Original: 0x000340F0 - 0x000341C0 (208 bytes, 52 insns)
 * Folder: world (between: 0x00034090 and 0x000341C0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000340F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_000340F0: ;
    eax = MEM32(esi + 0x4034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000341BF; /* je: equal / zero */

loc_000340FE: ;
    eax = MEM32(esi + 0x4038);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00034190; /* jne: not equal / not zero */

loc_0003410C: ;
    /* nop */

loc_00034110: ;
    eax = MEM32(esi + 0x4010);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_GE(_fas, _fbs)) goto loc_00034190; /* jge: greater or equal (signed >=) */

loc_0003411B: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_00034129; /* jne: not equal / not zero */

loc_00034124: ;
    PUSH32(esp, 0x00034129u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00034129: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00034130u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003412Du); } /* indirect call */
    }

loc_00034130: ;
    MEM32(0x7585AC) = MEM32(0x7585AC) + 1;
    _fa = (uint32_t)(MEM32(0x7585AC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 0x402C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x00034141u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003413Eu); } /* indirect call */
    }

loc_00034141: ;
    PUSH32(esp, 0x451B58);
    PUSH32(esp, 0x0003414Bu); RECOMP_ABI_CALL(0x00351000u, sub_00351000); /* call 0x00351000 */

loc_0003414B: ;
    edx = MEM32(0x451B58);
    ecx = MEM32(0x451B50);
    eax = MEM32(0x451B5C);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edx) + (uint64_t)(ecx)) >> 32) & 1);
    edx = edx + ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x451B58) = edx;
    edx = MEM32(0x451B54);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(edx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(0x451B5C) = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0003417F; /* jne: not equal / not zero */

loc_0003417A: ;
    PUSH32(esp, 0x0003417Fu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0003417F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00034186u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034183u); } /* indirect call */
    }

loc_00034186: ;
    eax = MEM32(esi + 0x4038);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00034110; /* je: equal / zero */

loc_00034190: ;
    PUSH32(esp, 0x451B58);
    PUSH32(esp, 0x0003419Au); RECOMP_ABI_CALL(0x00351000u, sub_00351000); /* call 0x00351000 */

loc_0003419A: ;
    eax = MEM32(0x451B50);
    ecx = MEM32(0x451B58);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x451B5C);
    MEM32(0x451B58) = ecx;
    ecx = MEM32(0x451B54);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(0x451B5C) = eax;

loc_000341BF: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0003416C
 * Original: 0x0003416C - 0x000341C0 (84 bytes, 22 insns)
 * Folder: world (between: 0x00034090 and 0x000341C0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003416C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0003416C: ;
    MEM32(0x451B5C) = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0003417F; /* jne: not equal / not zero */

loc_0003417A: ;
    PUSH32(esp, 0x0003417Fu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0003417F: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x00034186u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034183u); } /* indirect call */
    }

loc_00034186: ;
    eax = MEM32(esi + 0x4038);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) { g_seh_ebp = ebp; sub_00034110(); return; } /* je: equal / zero */

loc_00034190: ;
    PUSH32(esp, 0x451B58);
    PUSH32(esp, 0x0003419Au); RECOMP_ABI_CALL(0x00351000u, sub_00351000); /* call 0x00351000 */

loc_0003419A: ;
    eax = MEM32(0x451B50);
    ecx = MEM32(0x451B58);
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(eax)) >> 32) & 1);
    ecx = ecx + eax;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(0x451B5C);
    MEM32(0x451B58) = ecx;
    ecx = MEM32(0x451B54);
    { uint64_t _t = (uint64_t)(eax) + (uint64_t)(ecx) + (uint64_t)_cf; _cf = (int)((_t >> 32) & 1); eax = (uint32_t)_t; }  /* adc */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* adc result */
    MEM32(0x451B5C) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_000341C0
 * Original: 0x000341C0 - 0x00034226 (102 bytes, 38 insns)
 * Folder: world (match: xbox-demo 0x0002DEF0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000341C0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000341C0: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x400C);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = 0x470148;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000341D5u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000341D5: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000341EB; /* je: equal / zero */

loc_000341E2: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000341F5; /* je: equal / zero */

loc_000341EB: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000341FC; /* je: equal / zero */

loc_000341F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000341FE; /* je: equal / zero */

loc_000341FC: ;
    ecx = eax;

loc_000341FE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034221; /* je: equal / zero */

loc_00034203: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003421Bu); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0003421B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00034221: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000341CE
 * Original: 0x000341CE - 0x00034226 (88 bytes, 33 insns)
 * Folder: world (between: 0x000341C0 and 0x00034430)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000341CE(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000341CE: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000341D5u); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_000341D5: ;
    ecx = MEM32(0x758BBC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000341EB; /* je: equal / zero */

loc_000341E2: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000341F5; /* je: equal / zero */

loc_000341EB: ;
    ecx = MEM32(0x43B174);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000341FC; /* je: equal / zero */

loc_000341F5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_000341FE; /* je: equal / zero */

loc_000341FC: ;
    ecx = eax;

loc_000341FE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034221; /* je: equal / zero */

loc_00034203: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x46EFE8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x46EFE8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003421Bu); RECOMP_ABI_CALL(0x000DFF90u, sub_000DFF90); /* call 0x000DFF90 */

loc_0003421B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_00034221: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00034230
 * Original: 0x00034230 - 0x000342BF (143 bytes, 44 insns)
 * Folder: world (between: 0x000341C0 and 0x00034430)
 * Category: game_render
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034230(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034230: ;
    eax = MEM32(esi + 0x4034);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000342BB; /* je: equal / zero */

loc_0003423D: ;
    eax = MEM32(esi + 0x4038);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000342BB; /* jne: not equal / not zero */

loc_00034247: ;
    ecx = MEM32(esi + 0x402C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00034252u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003424Fu); } /* indirect call */
    }

loc_00034252: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000342BB; /* je: equal / zero */

loc_00034256: ;
    ecx = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003425Fu); RECOMP_ABI_CALL(0x00351000u, sub_00351000); /* call 0x00351000 */

loc_0003425F: ;
    edx = MEM32(esp + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x451B5C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(0x451B5C) (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_000342BB; /* jl: less (signed <) */

loc_0003426B: ;
    if (CMP_G(_fas, _fbs)) goto loc_00034278; /* jg: greater (signed >) */

loc_0003426D: ;
    eax = MEM32(esp);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x451B58)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x451B58) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000342BB; /* jbe: below or equal (unsigned <=) */

loc_00034278: ;
    ecx = MEM32(0x7585B4);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00034284u); RECOMP_ABI_CALL(0x0036FF10u, sub_0036FF10); /* call 0x0036FF10 */

loc_00034284: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000342BB; /* jne: not equal / not zero */

loc_00034288: ;
    PUSH32(esp, 0x0003428Du); RECOMP_ABI_CALL(0x00016050u, sub_00016050); /* call 0x00016050 */

loc_0003428D: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x00034294u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034291u); } /* indirect call */
    }

loc_00034294: ;
    eax = MEM32(0x7585B0);
    ecx = MEM32(esi + 0x402C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x7585B0) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x000342AAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000342A7u); } /* indirect call */
    }

loc_000342AA: ;
    PUSH32(esp, 0x000342AFu); RECOMP_ABI_CALL(0x000330E0u, sub_000330E0); /* call 0x000330E0 */

loc_000342AF: ;
    PUSH32(esp, 0x000342B4u); RECOMP_ABI_CALL(0x00016050u, sub_00016050); /* call 0x00016050 */

loc_000342B4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x000342BBu); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x000342B8u); } /* indirect call */
    }

loc_000342BB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000342C0
 * Original: 0x000342C0 - 0x00034361 (161 bytes, 44 insns)
 * Folder: world (between: 0x000341C0 and 0x00034430)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000342C0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000342C0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    esi = eax;
    MEM8(0x430EAC) = 0;
    PUSH32(esp, 0x000342D8u); RECOMP_ABI_CALL(0x00021540u, sub_00021540); /* call 0x00021540 */

loc_000342D8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x000342E0u); RECOMP_ABI_CALL(0x00033FB0u, sub_00033FB0); /* call 0x00033FB0 */

loc_000342E0: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4000)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x4000) (32-bit) */
    MEM32(esi + 0x4034) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0003432B; /* je: equal / zero */

loc_000342F2: ;
    edi = esi;
    PUSH32(esp, 0x000342F9u); RECOMP_ABI_CALL(0x00034090u, sub_00034090); /* call 0x00034090 */

loc_000342F9: ;
    eax = MEM32(esi + 0x4030);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esi + 0x4008) = ebp;
    MEM32(esi + 0x4058) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_0003431B; /* je: equal / zero */

loc_00034313: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4000)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x4000) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034326; /* je: equal / zero */

loc_0003431B: ;
    ecx = MEM32(esi + 0x402C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00034326u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034323u); } /* indirect call */
    }

loc_00034326: ;
    PUSH32(esp, 0x0003432Bu); RECOMP_ABI_CALL(0x00033FB0u, sub_00033FB0); /* call 0x00033FB0 */

loc_0003432B: ;
    edx = MEM32(esi + 0x4000);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = esi;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00034342u); RECOMP_ABI_CALL(0x00033C40u, sub_00033C40); /* call 0x00033C40 */

loc_00034342: ;
    eax = esi;
    MEM8(0x430EAC) = 1;
    MEM32(esi + 0x4034) = 1;
    PUSH32(esp, 0x0003435Au); RECOMP_ABI_CALL(0x000341C0u, sub_000341C0); /* call 0x000341C0 */

loc_0003435A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00034311
 * Original: 0x00034311 - 0x00034361 (80 bytes, 24 insns)
 * Folder: world (between: 0x000341C0 and 0x00034430)
 * Category: game_vtable
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034311(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00034311: ;
    if (_flags /* je: equal / zero */) goto loc_0003431B;

loc_00034313: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4000)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esi + 0x4000) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034326; /* je: equal / zero */

loc_0003431B: ;
    ecx = MEM32(esi + 0x402C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00034326u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034323u); } /* indirect call */
    }

loc_00034326: ;
    PUSH32(esp, 0x0003432Bu); RECOMP_ABI_CALL(0x00033FB0u, sub_00033FB0); /* call 0x00033FB0 */

loc_0003432B: ;
    edx = MEM32(esi + 0x4000);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    edx = esi;
    PUSH32(esp, ecx);
    ecx = ebp;
    PUSH32(esp, 0x00034342u); RECOMP_ABI_CALL(0x00033C40u, sub_00033C40); /* call 0x00033C40 */

loc_00034342: ;
    eax = esi;
    MEM8(0x430EAC) = 1;
    MEM32(esi + 0x4034) = 1;
    PUSH32(esp, 0x0003435Au); RECOMP_ABI_CALL(0x000341C0u, sub_000341C0); /* call 0x000341C0 */

loc_0003435A: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_00034370
 * Original: 0x00034370 - 0x000343C4 (84 bytes, 30 insns)
 * Folder: world (between: 0x000341C0 and 0x00034430)
 * Category: game_io
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034370(void)
{

loc_00034370: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x41F75C);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x00034383u); RECOMP_ABI_CALL(0x00337191u, sub_00337191); /* call 0x00337191 */

loc_00034383: ;
    PUSH32(esp, 0x41F740);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x00034396u); RECOMP_ABI_CALL(0x00337191u, sub_00337191); /* call 0x00337191 */

loc_00034396: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 8);
    MEM32(esi + 0xC) = eax;
    eax = esi + 0x10;
    PUSH32(esp, eax);
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x20000);
    PUSH32(esp, 0);
    PUSH32(esp, 0x000343B5u); RECOMP_ABI_CALL(0x00331E99u, sub_00331E99); /* call 0x00331E99 */

loc_000343B5: ;
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x000343C0u); RECOMP_ABI_CALL(0x00331C3Eu, sub_00331C3E); /* call 0x00331C3E */

loc_000343C0: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_000343D0
 * Original: 0x000343D0 - 0x000343ED (29 bytes, 13 insns)
 * Folder: world (between: 0x000341C0 and 0x00034430)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000343D0(void)
{

loc_000343D0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x000343E0u); RECOMP_ABI_CALL(0x003371ECu, sub_003371EC); /* call 0x003371EC */

loc_000343E0: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000343EBu); RECOMP_ABI_CALL(0x003373A0u, sub_003373A0); /* call 0x003373A0 */

loc_000343EB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000343F0
 * Original: 0x000343F0 - 0x0003440D (29 bytes, 13 insns)
 * Folder: world (between: 0x000341C0 and 0x00034430)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000343F0(void)
{

loc_000343F0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00034400u); RECOMP_ABI_CALL(0x003371ECu, sub_003371EC); /* call 0x003371EC */

loc_00034400: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003440Bu); RECOMP_ABI_CALL(0x003373A0u, sub_003373A0); /* call 0x003373A0 */

loc_0003440B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_000343FB
 * Original: 0x000343FB - 0x0003440D (18 bytes, 7 insns)
 * Folder: world (between: 0x000341C0 and 0x00034430)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000343FB(void)
{

loc_000343FB: ;
    PUSH32(esp, 0x00034400u); RECOMP_ABI_CALL(0x003371ECu, sub_003371EC); /* call 0x003371EC */

loc_00034400: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0003440Bu); RECOMP_ABI_CALL(0x003373A0u, sub_003373A0); /* call 0x003373A0 */

loc_0003440B: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00034410
 * Original: 0x00034410 - 0x00034422 (18 bytes, 9 insns)
 * Folder: world (between: 0x000341C0 and 0x00034430)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034410(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00034410: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x00034418u); RECOMP_ABI_CALL(0x00331F07u, sub_00331F07); /* call 0x00331F07 */

loc_00034418: ;
    _fb = (uint32_t)(MEM32(esi + 0x10)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(MEM32(esi + 0x10)));
    eax = eax - MEM32(esi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _cf = (int)((eax) != 0);
    eax = (uint32_t)(-(int32_t)eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* neg result */
    eax = _cf ? 0xFFFFFFFF : 0; /* sbb self (CF extend) */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sbb result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00034430
 * Original: 0x00034430 - 0x00034452 (34 bytes, 15 insns)
 * Folder: world (match: xbox-demo 0x0002E020, between)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034430(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034430: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x00034438u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00034435u); } /* indirect call */
    }

loc_00034438: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034450; /* je: equal / zero */

loc_0003443C: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00034449u); RECOMP_ABI_CALL(0x003371ECu, sub_003371EC); /* call 0x003371EC */

loc_00034449: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x00034450u); RECOMP_ABI_CALL(0x00331D0Cu, sub_00331D0C); /* call 0x00331D0C */

loc_00034450: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00034930
 * Original: 0x00034930 - 0x00034959 (41 bytes, 12 insns)
 * Folder: world (match: xbox-demo 0x0002B230, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034930(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034930: ;
    eax = MEM32(eax + 0xC);
    edx = MEM32(eax + 0x10);
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
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 0x80000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(ecx + 8) = eax;
    esp += 4; return; /* ret */

}

/**
 * sub_00034960
 * Original: 0x00034960 - 0x00034A49 (233 bytes, 99 insns)
 * Folder: world (between: 0x00034930 and 0x00034A50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034960(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034960: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(ebx + 0xC);
    PUSH32(esp, edi);
    edi = eax;
    PUSH32(esp, 0x0003496Du); RECOMP_ABI_CALL(0x000E1620u, sub_000E1620); /* call 0x000E1620 */

loc_0003496D: ;
    eax = MEM32(ebx + 0x10);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003497F; /* jne: not equal / not zero */

loc_00034978: ;
    edi = 1;
    goto loc_0003498D;

loc_0003497F: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = ecx;

loc_0003498D: ;
    _fa = (uint32_t)(MEM32(ebx + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx + 4), 0x2000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00034A45; /* jne: not equal / not zero */

loc_0003499A: ;
    eax = MEM32(ebx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000349B3; /* je: equal / zero */

loc_000349A1: ;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000349B3; /* je: equal / zero */

loc_000349A8: ;
    edx = ebx;
    PUSH32(esp, 0x000349AFu); RECOMP_ABI_CALL(0x00024040u, sub_00024040); /* call 0x00024040 */

loc_000349AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000349B3: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000349C7; /* je: equal / zero */

loc_000349BA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000349C0u); RECOMP_ABI_CALL(0x00023E10u, sub_00023E10); /* call 0x00023E10 */

loc_000349C0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000349C7: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034A26; /* je: equal / zero */

loc_000349CC: ;
    edx = MEM32(ebx + 0x14);
    eax = MEM32(edx);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000349EA; /* jne: not equal / not zero */

loc_000349D7: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034A45; /* je: equal / zero */

loc_000349DC: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000349E3u); RECOMP_ABI_CALL(0x00024F80u, sub_00024F80); /* call 0x00024F80 */

loc_000349E3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000349EA: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00034A19; /* je: equal / zero */

loc_000349F1: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00034A08; /* je: equal / zero */

loc_000349F6: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00034A35; /* jne: not equal / not zero */

loc_000349FB: ;
    PUSH32(esp, edi);
    esi = ebx;
    PUSH32(esp, 0x00034A03u); RECOMP_ABI_CALL(0x00024D40u, sub_00024D40); /* call 0x00024D40 */

loc_00034A03: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00034A35;

loc_00034A08: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = ebx;
    PUSH32(esp, 0x00034A17u); RECOMP_ABI_CALL(0x00023ED0u, sub_00023ED0); /* call 0x00023ED0 */

loc_00034A17: ;
    goto loc_00034A35;

loc_00034A19: ;
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0x00034A21u); RECOMP_ABI_CALL(0x000242D0u, sub_000242D0); /* call 0x000242D0 */

loc_00034A21: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00034A35;

loc_00034A26: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034A35; /* je: equal / zero */

loc_00034A2B: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00034A32u); RECOMP_ABI_CALL(0x00024F80u, sub_00024F80); /* call 0x00024F80 */

loc_00034A32: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00034A35: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00034A45; /* jns: not sign (positive) */

loc_00034A3A: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00034A42u); RECOMP_ABI_CALL(0x00023F80u, sub_00023F80); /* call 0x00023F80 */

loc_00034A42: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00034A45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000349B3
 * Original: 0x000349B3 - 0x00034A49 (150 bytes, 67 insns)
 * Folder: world (between: 0x00034930 and 0x00034A50)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000349B3(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000349B3: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000349C7; /* je: equal / zero */

loc_000349BA: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000349C0u); RECOMP_ABI_CALL(0x00023E10u, sub_00023E10); /* call 0x00023E10 */

loc_000349C0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000349C7: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034A26; /* je: equal / zero */

loc_000349CC: ;
    edx = MEM32(ebx + 0x14);
    eax = MEM32(edx);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000349EA; /* jne: not equal / not zero */

loc_000349D7: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034A45; /* je: equal / zero */

loc_000349DC: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x000349E3u); RECOMP_ABI_CALL(0x00024F80u, sub_00024F80); /* call 0x00024F80 */

loc_000349E3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_000349EA: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00034A19; /* je: equal / zero */

loc_000349F1: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00034A08; /* je: equal / zero */

loc_000349F6: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00034A35; /* jne: not equal / not zero */

loc_000349FB: ;
    PUSH32(esp, edi);
    esi = ebx;
    PUSH32(esp, 0x00034A03u); RECOMP_ABI_CALL(0x00024D40u, sub_00024D40); /* call 0x00024D40 */

loc_00034A03: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00034A35;

loc_00034A08: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = ebx;
    PUSH32(esp, 0x00034A17u); RECOMP_ABI_CALL(0x00023ED0u, sub_00023ED0); /* call 0x00023ED0 */

loc_00034A17: ;
    goto loc_00034A35;

loc_00034A19: ;
    PUSH32(esp, edi);
    eax = ebx;
    PUSH32(esp, 0x00034A21u); RECOMP_ABI_CALL(0x000242D0u, sub_000242D0); /* call 0x000242D0 */

loc_00034A21: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00034A35;

loc_00034A26: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034A35; /* je: equal / zero */

loc_00034A2B: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00034A32u); RECOMP_ABI_CALL(0x00024F80u, sub_00024F80); /* call 0x00024F80 */

loc_00034A32: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00034A35: ;
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ebx), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00034A45; /* jns: not sign (positive) */

loc_00034A3A: ;
    PUSH32(esp, edi);
    ecx = ebx;
    PUSH32(esp, 0x00034A42u); RECOMP_ABI_CALL(0x00023F80u, sub_00023F80); /* call 0x00023F80 */

loc_00034A42: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00034A45: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00034A50
 * Original: 0x00034A50 - 0x00034B89 (313 bytes, 118 insns)
 * Folder: world (match: xbox-demo 0x0002B350, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034A50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00034A50: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(0x429344)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0xC);
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429388)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = 0;
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_00034A98; /* ja: above (unsigned >) */

loc_00034A83: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(eax + 0x40);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_00034AA7;

loc_00034A98: ;
    ecx = MEM32(eax + 0x40);
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x2C) = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFFF7u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00034AA7: ;
    MEM32(eax + 0x40) = ecx;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00034ABC; /* jne: not equal / not zero */

loc_00034AB5: ;
    edi = 1;
    goto loc_00034ACA;

loc_00034ABC: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFEu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFEu (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_NE(_fa, _fb)) ? 1 : 0); /* setne */
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = ecx;

loc_00034ACA: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 4), 0x2000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00034B83; /* jne: not equal / not zero */

loc_00034AD7: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00034AEF; /* je: equal / zero */

loc_00034ADE: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_00034AEF; /* je: equal / zero */

loc_00034AE3: ;
    edx = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00024040(); return; /* tail jmp 0x00024040 */

loc_00034AEF: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00034B05; /* je: equal / zero */

loc_00034AF6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00034AFCu); RECOMP_ABI_CALL(0x00023E10u, sub_00023E10); /* call 0x00023E10 */

loc_00034AFC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00034B05: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00034B64; /* je: equal / zero */

loc_00034B0A: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_00034B2A; /* jne: not equal / not zero */

loc_00034B15: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00034B83; /* je: equal / zero */

loc_00034B1A: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00034B21u); RECOMP_ABI_CALL(0x00024F80u, sub_00024F80); /* call 0x00024F80 */

loc_00034B21: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00034B2A: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00034B57; /* je: equal / zero */

loc_00034B31: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(5));
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00034B46; /* je: equal / zero */

loc_00034B36: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00034B73; /* jne: not equal / not zero */

loc_00034B3B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00034B41u); RECOMP_ABI_CALL(0x00024D40u, sub_00024D40); /* call 0x00024D40 */

loc_00034B41: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00034B73;

loc_00034B46: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = esi;
    PUSH32(esp, 0x00034B55u); RECOMP_ABI_CALL(0x00023ED0u, sub_00023ED0); /* call 0x00023ED0 */

loc_00034B55: ;
    goto loc_00034B73;

loc_00034B57: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x00034B5Fu); RECOMP_ABI_CALL(0x000242D0u, sub_000242D0); /* call 0x000242D0 */

loc_00034B5F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00034B73;

loc_00034B64: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00034B73; /* je: equal / zero */

loc_00034B69: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00034B70u); RECOMP_ABI_CALL(0x00024F80u, sub_00024F80); /* call 0x00024F80 */

loc_00034B70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00034B73: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00034B83; /* jns: not sign (positive) */

loc_00034B78: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00034B80u); RECOMP_ABI_CALL(0x00023F80u, sub_00023F80); /* call 0x00023F80 */

loc_00034B80: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00034B83: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
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
 * sub_00034AC5
 * Original: 0x00034AC5 - 0x00034B89 (196 bytes, 80 insns)
 * Folder: world (between: 0x00034A50 and 0x00034CF0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034AC5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00034AC5: ;
    ecx = ecx & 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edi = ecx;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 4), 0x2000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00034B83; /* jne: not equal / not zero */

loc_00034AD7: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034AEF; /* je: equal / zero */

loc_00034ADE: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034AEF; /* je: equal / zero */

loc_00034AE3: ;
    edx = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_00024040(); return; /* tail jmp 0x00024040 */

loc_00034AEF: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034B05; /* je: equal / zero */

loc_00034AF6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00034AFCu); RECOMP_ABI_CALL(0x00023E10u, sub_00023E10); /* call 0x00023E10 */

loc_00034AFC: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00034B05: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034B64; /* je: equal / zero */

loc_00034B0A: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034B2A; /* jne: not equal / not zero */

loc_00034B15: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034B83; /* je: equal / zero */

loc_00034B1A: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00034B21u); RECOMP_ABI_CALL(0x00024F80u, sub_00024F80); /* call 0x00024F80 */

loc_00034B21: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00034B2A: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_00034B57; /* je: equal / zero */

loc_00034B31: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_00034B46; /* je: equal / zero */

loc_00034B36: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_00034B73; /* jne: not equal / not zero */

loc_00034B3B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x00034B41u); RECOMP_ABI_CALL(0x00024D40u, sub_00024D40); /* call 0x00024D40 */

loc_00034B41: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00034B73;

loc_00034B46: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = esi;
    PUSH32(esp, 0x00034B55u); RECOMP_ABI_CALL(0x00023ED0u, sub_00023ED0); /* call 0x00023ED0 */

loc_00034B55: ;
    goto loc_00034B73;

loc_00034B57: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x00034B5Fu); RECOMP_ABI_CALL(0x000242D0u, sub_000242D0); /* call 0x000242D0 */

loc_00034B5F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00034B73;

loc_00034B64: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034B73; /* je: equal / zero */

loc_00034B69: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00034B70u); RECOMP_ABI_CALL(0x00024F80u, sub_00024F80); /* call 0x00024F80 */

loc_00034B70: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00034B73: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_00034B83; /* jns: not sign (positive) */

loc_00034B78: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x00034B80u); RECOMP_ABI_CALL(0x00023F80u, sub_00023F80); /* call 0x00023F80 */

loc_00034B80: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00034B83: ;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00034B90
 * Original: 0x00034B90 - 0x00034C23 (147 bytes, 52 insns)
 * Folder: world (between: 0x00034A50 and 0x00034CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00034B90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034B90: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx);
    PUSH32(esp, esi);
    esi = eax;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x10000 (32-bit) */
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00034BB0; /* je: equal / zero */

loc_00034BAD: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00034BB0: ;
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x34) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | 2;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034C1D; /* je: equal / zero */

loc_00034BCD: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034C1D; /* je: equal / zero */

loc_00034BDA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034C1D; /* je: equal / zero */

loc_00034BE2: ;
    edx = MEM32(eax + 0xC);
    eax = esp + 0x60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034BEEu); RECOMP_ABI_CALL(0x000E1240u, sub_000E1240); /* call 0x000E1240 */

loc_00034BEE: ;
    edx = MEM32(esi + 0xC);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x50;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034C03u); RECOMP_ABI_CALL(0x000E0EF0u, sub_000E0EF0); /* call 0x000E0EF0 */

loc_00034C03: ;
    edi = MEM32(esi + 0xC);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x18;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034C1D; /* je: equal / zero */

loc_00034C14: ;
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

loc_00034C1D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00034C30
 * Original: 0x00034C30 - 0x00034CEF (191 bytes, 67 insns)
 * Folder: world (between: 0x00034A50 and 0x00034CF0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00034C30(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034C30: ;
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
    ebx = ecx;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx), 0x10000 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00034CE8; /* je: equal / zero */

loc_00034C4D: ;
    edi = MEM32(ebx + 0xC);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034C60; /* je: equal / zero */

loc_00034C57: ;
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

loc_00034C60: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034C8D; /* je: equal / zero */

loc_00034C6A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000 (32-bit) */
    edi = MEM32(ebx + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_00034C7D; /* je: equal / zero */

loc_00034C75: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00034C80;

loc_00034C7D: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00034C80: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034C8D; /* je: equal / zero */

loc_00034C84: ;
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

loc_00034C8D: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034CE8; /* je: equal / zero */

loc_00034C97: ;
    eax = MEM32(ebx + 0x14);
    edx = MEM32(eax + 8);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034CE8; /* je: equal / zero */

loc_00034CA3: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034CE8; /* je: equal / zero */

loc_00034CAB: ;
    edx = MEM32(eax + 0xC);
    eax = esp + 0x60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034CB7u); RECOMP_ABI_CALL(0x000E1240u, sub_000E1240); /* call 0x000E1240 */

loc_00034CB7: ;
    ecx = MEM32(ebx + 0xC);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x50;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034CCCu); RECOMP_ABI_CALL(0x000E0EF0u, sub_000E0EF0); /* call 0x000E0EF0 */

loc_00034CCC: ;
    ebx = MEM32(ebx + 0xC);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x50;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x18;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034CE8; /* je: equal / zero */

loc_00034CDD: ;
    ecx = 0x14;
    esi = edx;
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

loc_00034CE8: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00034CF0
 * Original: 0x00034CF0 - 0x00034D25 (53 bytes, 22 insns)
 * Folder: world (match: xbox-demo 0x0002B5F0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034CF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034CF0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034D22; /* je: equal / zero */

loc_00034CFE: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034D1B; /* je: equal / zero */

loc_00034D05: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034D1B; /* je: equal / zero */

loc_00034D0C: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034D1B; /* je: equal / zero */

loc_00034D12: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00034D18u); RECOMP_ABI_CALL(0x00034CF0u, sub_00034CF0); /* call 0x00034CF0 */

loc_00034D18: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00034D1B: ;
    edx = esi;
    PUSH32(esp, 0x00034D22u); RECOMP_ABI_CALL(0x00034D30u, sub_00034D30); /* call 0x00034D30 */

loc_00034D22: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00034D30
 * Original: 0x00034D30 - 0x00034D75 (69 bytes, 29 insns)
 * Folder: world (between: 0x00034CF0 and 0x00035DD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034D30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034D30: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx), 0x400000 (32-bit) */
    PUSH32(esp, ebx);
    if (TEST_Z(_fa, _fb)) goto loc_00034D73; /* je: equal / zero */

loc_00034D39: ;
    eax = MEM32(edx + 0x14);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034D73; /* je: equal / zero */

loc_00034D43: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034D73; /* je: equal / zero */

loc_00034D4A: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00034D64; /* jne: not equal / not zero */

loc_00034D4F: ;
    eax = MEM32(eax + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(edx + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00034D5Fu); RECOMP_ABI_CALL(0x000E0EF0u, sub_000E0EF0); /* call 0x000E0EF0 */

loc_00034D5F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_00034D64: ;
    ecx = MEM32(edx + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x00034D70u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_00034D70: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00034D73: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00034D63
 * Original: 0x00034D63 - 0x00034D75 (18 bytes, 9 insns)
 * Folder: world (between: 0x00034CF0 and 0x00035DD0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034D63(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034D63: ;
    esp += 4; return; /* ret */

    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00034D80
 * Original: 0x00034D80 - 0x00034E50 (208 bytes, 74 insns)
 * Folder: world (between: 0x00034CF0 and 0x00035DD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00034D80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034D80: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x54) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x54;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx), 0x400000 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00034E49; /* je: equal / zero */

loc_00034D9B: ;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034E49; /* je: equal / zero */

loc_00034DA6: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034E49; /* je: equal / zero */

loc_00034DB1: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034E49; /* je: equal / zero */

loc_00034DBC: ;
    esi = MEM32(ebp + 0xC);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034DC6u); RECOMP_ABI_CALL(0x00021D30u, sub_00021D30); /* call 0x00021D30 */

loc_00034DC6: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034E1B; /* je: equal / zero */

loc_00034DCE: ;
    edi = edi;

loc_00034DD0: ;
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00034E1B; /* je: equal / zero */

loc_00034DE1: ;
    edx = esp + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034DF5; /* je: equal / zero */

loc_00034DE9: ;
    ecx = 0x14;
    edi = edx;
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
    esi = MEM32(ebp + 0xC);

loc_00034DF5: ;
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034E0Bu); RECOMP_ABI_CALL(0x000E0EF0u, sub_000E0EF0); /* call 0x000E0EF0 */

loc_00034E0B: ;
    ebx = MEM32(esp + 0x14);
    eax = MEM32(ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00034DD0; /* jne: not equal / not zero */

loc_00034E1B: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034E49; /* je: equal / zero */

loc_00034E22: ;
    eax = esp + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034E36; /* je: equal / zero */

loc_00034E2A: ;
    ecx = 0x14;
    edi = eax;
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
    esi = MEM32(ebp + 0xC);

loc_00034E36: ;
    ecx = MEM32(ebx + 0xC);
    PUSH32(esp, ecx);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034E46u); RECOMP_ABI_CALL(0x000E0EF0u, sub_000E0EF0); /* call 0x000E0EF0 */

loc_00034E46: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00034E49: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00034E50
 * Original: 0x00034E50 - 0x00034F57 (263 bytes, 88 insns)
 * Folder: world (between: 0x00034CF0 and 0x00035DD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00034E50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034E50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xB4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xB4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx), 0x400000 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00034F50; /* je: equal / zero */

loc_00034E6E: ;
    eax = MEM32(ebx + 0x14);
    edi = MEM32(eax + 8);
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034F50; /* je: equal / zero */

loc_00034E7F: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034EB2; /* je: equal / zero */

loc_00034E87: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034EB2; /* je: equal / zero */

loc_00034E8E: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034EB2; /* je: equal / zero */

loc_00034E95: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034EB2; /* je: equal / zero */

loc_00034E9C: ;
    PUSH32(esp, 1);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034EA9u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_00034EA9: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x70;
    goto loc_00034EB5;

loc_00034EB2: ;
    edx = MEM32(eax + 0xC);

loc_00034EB5: ;
    eax = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034EBEu); RECOMP_ABI_CALL(0x000E1240u, sub_000E1240); /* call 0x000E1240 */

loc_00034EBE: ;
    eax = MEM32(ebx + 0xC);
    edx = esp + 0x20;
    PUSH32(esp, edx);
    esi = edi + 0x10;
    PUSH32(esp, eax);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034ED1u); RECOMP_ABI_CALL(0x000E0EF0u, sub_000E0EF0); /* call 0x000E0EF0 */

loc_00034ED1: ;
    SET_LO8(ecx, MEM8(edi + 0x50));
    SET_LO8(eax, 8);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034F49; /* je: equal / zero */

loc_00034EDD: ;
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x40), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034EF5; /* je: equal / zero */

loc_00034EE2: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 0x2C);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    goto loc_00034F02;

loc_00034EF5: ;
    eax = 0x3F800000;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;

loc_00034F02: ;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x3A83126F);
    eax = esp + 0x18;
    ecx = 0x64509C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034F19u); RECOMP_ABI_CALL(0x00035DD0u, sub_00035DD0); /* call 0x00035DD0 */

loc_00034F19: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034F3A; /* jne: not equal / not zero */

loc_00034F20: ;
    PUSH32(esp, 0x3A83126F);
    eax = esp + 0x18;
    ecx = 0x64506C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034F33u); RECOMP_ABI_CALL(0x00035DD0u, sub_00035DD0); /* call 0x00035DD0 */

loc_00034F33: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034F49; /* je: equal / zero */

loc_00034F3A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00034F49: ;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00034F50u); RECOMP_ABI_CALL(0x000DF220u, sub_000DF220); /* call 0x000DF220 */

loc_00034F50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00034ED6
 * Original: 0x00034ED6 - 0x00034F57 (129 bytes, 42 insns)
 * Folder: world (between: 0x00034CF0 and 0x00035DD0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034ED6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00034ED6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034F49; /* je: equal / zero */

loc_00034EDD: ;
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x40), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034EF5; /* je: equal / zero */

loc_00034EE2: ;
    ecx = MEM32(esi + 0xC);
    edx = MEM32(esi + 0x1C);
    eax = MEM32(esi + 0x2C);
    MEM32(esp + 0x14) = ecx;
    MEM32(esp + 0x18) = edx;
    goto loc_00034F02;

loc_00034EF5: ;
    eax = 0x3F800000;
    MEM32(esp + 0x14) = eax;
    MEM32(esp + 0x18) = eax;

loc_00034F02: ;
    MEM32(esp + 0x1C) = eax;
    PUSH32(esp, 0x3A83126F);
    eax = esp + 0x18;
    ecx = 0x64509C;
    PUSH32(esp, 0x00034F19u); RECOMP_ABI_CALL(0x00035DD0u, sub_00035DD0); /* call 0x00035DD0 */

loc_00034F19: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00034F3A; /* jne: not equal / not zero */

loc_00034F20: ;
    PUSH32(esp, 0x3A83126F);
    eax = esp + 0x18;
    ecx = 0x64506C;
    PUSH32(esp, 0x00034F33u); RECOMP_ABI_CALL(0x00035DD0u, sub_00035DD0); /* call 0x00035DD0 */

loc_00034F33: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034F49; /* je: equal / zero */

loc_00034F3A: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_00034F49: ;
    eax = esi;
    PUSH32(esp, 0x00034F50u); RECOMP_ABI_CALL(0x000DF220u, sub_000DF220); /* call 0x000DF220 */

loc_00034F50: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00034F60
 * Original: 0x00034F60 - 0x00034FFE (158 bytes, 61 insns)
 * Folder: world (between: 0x00034CF0 and 0x00035DD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034F60(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034F60: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x400000 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00034FB1; /* je: equal / zero */

loc_00034F6D: ;
    eax = MEM32(ebx + 0x14);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034FB1; /* je: equal / zero */

loc_00034F78: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034F94; /* je: equal / zero */

loc_00034F80: ;
    esi = MEM32(ebx + 0xC);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034F94; /* je: equal / zero */

loc_00034F8D: ;
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

loc_00034F94: ;
    ecx = MEM32(ebx + 0x14);
    eax = MEM32(ecx + 8);
    edx = MEM32(eax);
    ecx = MEM32(edx + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, 0x00034FACu); RECOMP_ABI_CALL(0x000E0EF0u, sub_000E0EF0); /* call 0x000E0EF0 */

loc_00034FAC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00034FCA;

loc_00034FB1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034FCA; /* je: equal / zero */

loc_00034FB9: ;
    edi = MEM32(ebx + 0xC);
    esi = edi + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034FCA; /* je: equal / zero */

loc_00034FC3: ;
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

loc_00034FCA: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034FFA; /* je: equal / zero */

loc_00034FD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034FF0; /* je: equal / zero */

loc_00034FD7: ;
    edx = MEM32(ebx + 0x14);
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034FF0; /* je: equal / zero */

loc_00034FE2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    PUSH32(esp, 0x00034FECu); RECOMP_ABI_CALL(0x00027470u, sub_00027470); /* call 0x00027470 */

loc_00034FEC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00034FF0: ;
    eax = MEM32(ebx + 0xC);
    ecx = ebx;
    PUSH32(esp, 0x00034FFAu); RECOMP_ABI_CALL(0x00027470u, sub_00027470); /* call 0x00027470 */

loc_00034FFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00034F73
 * Original: 0x00034F73 - 0x00034FFE (139 bytes, 53 insns)
 * Folder: world (between: 0x00034CF0 and 0x00035DD0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00034F73(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00034F73: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034FB1; /* je: equal / zero */

loc_00034F78: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034F94; /* je: equal / zero */

loc_00034F80: ;
    esi = MEM32(ebx + 0xC);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034F94; /* je: equal / zero */

loc_00034F8D: ;
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

loc_00034F94: ;
    ecx = MEM32(ebx + 0x14);
    eax = MEM32(ecx + 8);
    edx = MEM32(eax);
    ecx = MEM32(edx + 0xC);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, 0x00034FACu); RECOMP_ABI_CALL(0x000E0EF0u, sub_000E0EF0); /* call 0x000E0EF0 */

loc_00034FAC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_00034FCA;

loc_00034FB1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034FCA; /* je: equal / zero */

loc_00034FB9: ;
    edi = MEM32(ebx + 0xC);
    esi = edi + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034FCA; /* je: equal / zero */

loc_00034FC3: ;
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

loc_00034FCA: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034FFA; /* je: equal / zero */

loc_00034FD0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00034FF0; /* je: equal / zero */

loc_00034FD7: ;
    edx = MEM32(ebx + 0x14);
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00034FF0; /* je: equal / zero */

loc_00034FE2: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    PUSH32(esp, 0x00034FECu); RECOMP_ABI_CALL(0x00027470u, sub_00027470); /* call 0x00027470 */

loc_00034FEC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_00034FF0: ;
    eax = MEM32(ebx + 0xC);
    ecx = ebx;
    PUSH32(esp, 0x00034FFAu); RECOMP_ABI_CALL(0x00027470u, sub_00027470); /* call 0x00027470 */

loc_00034FFA: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_00035000
 * Original: 0x00035000 - 0x000350EC (236 bytes, 65 insns)
 * Folder: world (between: 0x00034CF0 and 0x00035DD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035000(void)
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

loc_00035000: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    MEM32(esp + 0xC) = edx;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEM32(esp + 0x10) = ecx;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    edx = MEM32(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    eax = MEM32(eax + 4);
    MEM32(esp + 4) = eax;
    MEM32(esp) = edx;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    ecx = MEM32(0x645078);
    edx = MEM32(0x64507C);
    eax = MEM32(0x645080);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    PUSH32(esp, esi);
    MEM32(esp + 0x1C) = ecx;
    PUSH32(esp, edi);
    ecx = esp + 8;
    PUSH32(esp, ecx);
    esi = esp + 0x24;
    edi = esp + 0x18;
    MEM32(esp + 0x28) = edx;
    MEM32(esp + 0x2C) = eax;
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429350)); /* fmul dword ptr [0x429350] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429350)); /* fmul dword ptr [0x429350] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000350BDu); RECOMP_ABI_CALL(0x00035B10u, sub_00035B10); /* call 0x00035B10 */

loc_000350BD: ;
    xmm1 = XMM_SCALAR(MEMF(0x429424)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x42941C); /* comiss */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000350D7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x42941C)) */

loc_000350D3: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_000350D7: ;
    xmm2 = XMM_SCALAR(MEMF(0x429674)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000350E8; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000350E4: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000350E8: ;
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
 * sub_00035058
 * Original: 0x00035058 - 0x000350EC (148 bytes, 39 insns)
 * Folder: world (between: 0x00034CF0 and 0x00035DD0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035058(void)
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

loc_00035058: ;
    MEM32(esp + 0x2C) = eax;
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429350)); /* fmul dword ptr [0x429350] */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429350)); /* fmul dword ptr [0x429350] */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x000350BDu); RECOMP_ABI_CALL(0x00035B10u, sub_00035B10); /* call 0x00035B10 */

loc_000350BD: ;
    xmm1 = XMM_SCALAR(MEMF(0x429424)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm0.f[0]; _fcb = MEMF(0x42941C); /* comiss */
    POP32(esp, edi);
    POP32(esp, esi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000350D7; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x42941C)) */

loc_000350D3: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_000350D7: ;
    xmm2 = XMM_SCALAR(MEMF(0x429674)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000350E8; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_000350E4: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_000350E8: ;
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
 * sub_000350F0
 * Original: 0x000350F0 - 0x00035246 (342 bytes, 97 insns)
 * Folder: world (between: 0x00034CF0 and 0x00035DD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000350F0(void)
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

loc_000350F0: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x20);
    ecx = MEM32(ebx + 4);
    eax = MEM32(ebx);
    MEM32(esp + 8) = ecx;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    MEM32(esp + 4) = eax;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, ebp);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    ebp = MEM32(esp + 0x28);
    eax = MEM32(ebp + 4);
    edx = MEM32(ebp);
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, esi);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    esi = 0x645090;
    edi = esp + 0x14;
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429350)); /* fmul dword ptr [0x429350] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x24)); /* fmul dword ptr [esp + 0x24] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x20)); /* fmul dword ptr [esp + 0x20] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x20) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x24) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x429350)); /* fmul dword ptr [0x429350] */
    MEMF(esp + 0x28) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x00035199u); RECOMP_ABI_CALL(0x00035B10u, sub_00035B10); /* call 0x00035B10 */

loc_00035199: ;
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 0x34)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_top() = fabs(fp_top()); /* fabs */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 8); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000351B3; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx + 8)) */

loc_000351B1: ;
    fp_top() = -fp_top(); /* fchs */

loc_000351B3: ;
    PUSH32(esp, ebp);
    MEMF(esp + 0x34) = (float)fp_top(); fp_pop(); /* fstp */
    esi = 0x645090;
    edi = esp + 0x20;
    PUSH32(esp, 0x000351C6u); RECOMP_ABI_CALL(0x00035B10u, sub_00035B10); /* call 0x00035B10 */

loc_000351C6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    fp_push(MEMF(esp + 0x28)); /* fld float */
    _fca = xmm0.f[0]; _fcb = MEMF(ebp + 8); /* comiss */
    fp_top() = fabs(fp_top()); /* fabs */
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000351E4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebp + 8)) */

loc_000351E2: ;
    fp_top() = -fp_top(); /* fchs */

loc_000351E4: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x1C); /* subss */
    xmm2 = XMM_SCALAR(MEMF(0x42941C)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm3 = XMM_SCALAR(MEMF(0x429424)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003520D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_00035209: ;
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */

loc_0003520D: ;
    xmm1 = XMM_SCALAR(MEMF(0x429674)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003521E; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0003521A: ;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */

loc_0003521E: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x429570); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003522E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x429570)) */

loc_00035227: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm2; /* movaps */

loc_0003522E: ;
    xmm2 = XMM_SCALAR(MEMF(0x42956C)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00035242; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0003523B: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */

loc_00035242: ;
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
 * sub_00035250
 * Original: 0x00035250 - 0x00035AFD (2221 bytes, 584 insns)
 * Folder: world (between: 0x00034CF0 and 0x00035DD0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00035250(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
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

loc_00035250: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xE4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xE4));
    esp = esp - 0xE4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_00035AF6; /* je: equal / zero */

loc_0003526B: ;
    eax = MEM32(esi + 0x14);
    ebx = MEM32(eax);
    eax = MEM32(ebx + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00035AF6; /* je: equal / zero */

loc_0003527B: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00035AF6; /* je: equal / zero */

loc_00035289: ;
    eax = MEM32(ebx + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00035AF6; /* je: equal / zero */

loc_00035294: ;
    eax = MEM32(ebx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00035AF6; /* je: equal / zero */

loc_0003529F: ;
    PUSH32(esp, 0);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000352A8u); RECOMP_ABI_CALL(0x0003B870u, sub_0003B870); /* call 0x0003B870 */

loc_000352A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 1);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000352B6u); RECOMP_ABI_CALL(0x0003B870u, sub_0003B870); /* call 0x0003B870 */

loc_000352B6: ;
    ecx = MEM32(esp + 0x24);
    edx = MEM32(ecx + 0x10);
    esi = eax;
    eax = MEM32(edx);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00035AF6; /* je: equal / zero */

loc_000352D0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00035AF6; /* je: equal / zero */

loc_000352D8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_00035AF6; /* je: equal / zero */

loc_000352E0: ;
    _fa = (uint32_t)(MEM8(ebx + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx + 1), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x44) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_00035321; /* jne: not equal / not zero */

loc_000352EE: ;
    eax = ZX8(MEM8(ebx + 0x3A));
    ecx = MEM32(ebx + 0x2C);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    eax = ZX8(MEM8(eax + ecx + 0x33));
    if (2) _cf = (int)(((eax) >> ((2) - 1)) & 1);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = ~eax;
    _cf = 0; /* logical op clears CF */
    eax = eax & 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00035356; /* je: equal / zero */

loc_0003530D: ;
    SET_LO8(eax, MEM8(ebx + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_000353B2; /* jae: above or equal (unsigned >=) */

loc_00035318: ;
    eax = ZX8(LO8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_000353B7;

loc_00035321: ;
    edx = ZX8(MEM8(ebx + 0x3A));
    eax = MEM32(ebx + 0x2C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x34);
    _fa = (uint32_t)(MEM8(edx + eax + 0x33)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edx + eax + 0x33), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000353A5; /* je: equal / zero */

loc_00035332: ;
    eax = MEM32(ebx + 0x1C);
    ecx = ZX16(MEM16(eax + 0x60));
    eax = ZX8(MEM8(eax + 0x62));
    edx = MEM32(ebx + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    ecx = MEM32(edx + ecx * 4 + 8);
    _fa = (uint32_t)(MEM8(ecx + eax + 0x33)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + eax + 0x33), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_000353A5; /* je: equal / zero */

loc_0003534E: ;
    MEM32(esp + 0x14) = 0;

loc_00035356: ;
    MEM8(ebx + 2) = 0;

loc_0003535A: ;
    xmm0 = XMM_SCALAR(MEMF(0x429570)); /* movss */
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm1 = XMM_SCALAR(MEMF(0x429830)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x42956C)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x42982C)); /* movss */
    MEMF(esp + 0x48) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    if (CMP_A(_fa, _fb)) goto loc_00035432; /* ja: above (unsigned >) */

loc_0003539E: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x35B00); /* switch: 4 entries, 4 targets */
    if (_jt == 0x000353D1u) goto loc_000353D1;
    if (_jt == 0x00035414u) goto loc_00035414;
    if (_jt == 0x0003541Eu) goto loc_0003541E;
    if (_jt == 0x00035428u) goto loc_00035428;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_000353A5: ;
    MEM32(esp + 0x14) = 1;
    goto loc_0003530D;

loc_000353B2: ;
    eax = 6;

loc_000353B7: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    _cf = (int)(_fa < _fb);
    xmm0 = XMM_SCALAR(MEMF(0x429478)); /* movss */
    MEM8(ebx + 2) = LO8(eax);
    MEMF(ebp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_AE(_fa, _fb)) goto loc_00035AF6; /* jae: above or equal (unsigned >=) */

loc_000353CF: ;
    goto loc_0003535A;

loc_000353D1: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429828)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429824)); /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x4294F8)); /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x429820)); /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    goto loc_0003543B;

loc_00035414: ;
    xmm0 = XMM_SCALAR(MEMF(0x42981C)); /* movss */
    goto loc_00035435;

loc_0003541E: ;
    xmm0 = XMM_SCALAR(MEMF(0x429818)); /* movss */
    goto loc_00035435;

loc_00035428: ;
    xmm0 = XMM_SCALAR(MEMF(0x429814)); /* movss */
    goto loc_00035435;

loc_00035432: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_00035435: ;
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */

loc_0003543B: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x429810); /* addss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0003549A; /* je: equal / zero */

loc_00035466: ;
    xmm0 = XMM_SCALAR(MEMF(0x42941C)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x429674)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x48) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */

loc_0003549A: ;
    eax = MEM32(ebp + 8);
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000354A6u); RECOMP_ABI_CALL(0x00034930u, sub_00034930); /* call 0x00034930 */

loc_000354A6: ;
    edx = MEM32(edi + 0x14);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + 0x40);
    edx = MEM32(eax + 0x44);
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 8);
    MEM32(esp + 0x7C) = ecx;
    ecx = MEM32(esi + 0x14);
    MEM32(esp + 0x84) = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x44);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x80) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x70) = edx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x74) = ecx;
    ecx = esp + 0x88;
    eax = ebx;
    MEM32(esp + 0x78) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000354F9u); RECOMP_ABI_CALL(0x00034930u, sub_00034930); /* call 0x00034930 */

loc_000354F9: ;
    PUSH32(esp, 1);
    eax = esp + 0xA4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035509u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_00035509: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xB0;
    ecx = esp + 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003551Cu); RECOMP_ABI_CALL(0x00030920u, sub_00030920); /* call 0x00030920 */

loc_0003551C: ;
    eax = esp + 0x64;
    ecx = esp + 0x88;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003552Cu); RECOMP_ABI_CALL(0x00035000u, sub_00035000); /* call 0x00035000 */

loc_0003552C: ;
    ebx = 1;
    PUSH32(esp, ebx);
    ecx = esp + 0xA4;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035546u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_00035546: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xB0;
    ecx = esp + 0x54;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035559u); RECOMP_ABI_CALL(0x00030920u, sub_00030920); /* call 0x00030920 */

loc_00035559: ;
    eax = MEM32(esp + 0xC4);
    ecx = MEM32(esp + 0xC8);
    edx = MEM32(esp + 0xC0);
    MEM32(esp + 0x8C) = eax;
    MEM32(esp + 0x90) = ecx;
    ecx = esp + 0x24;
    eax = edi;
    MEM32(esp + 0x88) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003558Eu); RECOMP_ABI_CALL(0x00034930u, sub_00034930); /* call 0x00034930 */

loc_0003558E: ;
    eax = ecx;
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035599u); RECOMP_ABI_CALL(0x00035000u, sub_00035000); /* call 0x00035000 */

loc_00035599: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000355AEu); RECOMP_ABI_CALL(0x000350F0u, sub_000350F0); /* call 0x000350F0 */

loc_000355AE: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000356B0; /* jne: not equal / not zero */

loc_000355C6: ;
    ecx = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000355F9; /* jp: parity */

loc_000355D9: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000355F9; /* jp: parity */

loc_000355E7: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000356B0; /* jnp: not parity */

loc_000355F9: ;
    eax = MEM32(edi + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    eax = esp + 0x24;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035637u); RECOMP_ABI_CALL(0x00030950u, sub_00030950); /* call 0x00030950 */

loc_00035637: ;
    eax = esp + 0x24;
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035644u); RECOMP_ABI_CALL(0x00035000u, sub_00035000); /* call 0x00035000 */

loc_00035644: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035659u); RECOMP_ABI_CALL(0x000350F0u, sub_000350F0); /* call 0x000350F0 */

loc_00035659: ;
    eax = MEM32(ebp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000356A8; /* je: equal / zero */

loc_00035663: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x42980C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0003568F; /* ja: above (unsigned >) (xmm2.f[0] vs xmm3.f[0]) */

loc_00035680: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000356A8; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_0003568F: ;
    eax = esp + 0x54;
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003569Cu); RECOMP_ABI_CALL(0x00035000u, sub_00035000); /* call 0x00035000 */

loc_0003569C: ;
    eax = esp + 0x54;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    goto loc_000356DF;

loc_000356A8: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    goto loc_000356F1;

loc_000356B0: ;
    eax = MEM32(esp + 0x58);
    ecx = MEM32(esp + 0x5C);
    edx = MEM32(esp + 0x54);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    eax = esp + 0x24;
    ecx = esp + 0x34;
    MEM32(esp + 0x24) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000356D5u); RECOMP_ABI_CALL(0x00035000u, sub_00035000); /* call 0x00035000 */

loc_000356D5: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);

loc_000356DF: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000356EAu); RECOMP_ABI_CALL(0x000350F0u, sub_000350F0); /* call 0x000350F0 */

loc_000356EA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x44) = ebx;

loc_000356F1: ;
    PUSH32(esp, ebx);
    ecx = esp + 0xA4;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035706u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_00035706: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xB0;
    ecx = esp + 0x64;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035719u); RECOMP_ABI_CALL(0x00030920u, sub_00030920); /* call 0x00030920 */

loc_00035719: ;
    eax = MEM32(esp + 0xC4);
    ecx = MEM32(esp + 0xC8);
    edx = MEM32(esp + 0xC0);
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x5C) = ecx;
    ecx = esp + 0x24;
    eax = esi;
    MEM32(esp + 0x54) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035745u); RECOMP_ABI_CALL(0x00034930u, sub_00034930); /* call 0x00034930 */

loc_00035745: ;
    eax = ecx;
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035750u); RECOMP_ABI_CALL(0x00035000u, sub_00035000); /* call 0x00035000 */

loc_00035750: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035765u); RECOMP_ABI_CALL(0x000350F0u, sub_000350F0); /* call 0x000350F0 */

loc_00035765: ;
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003577Du); RECOMP_ABI_CALL(0x000350F0u, sub_000350F0); /* call 0x000350F0 */

loc_0003577D: ;
    eax = MEM32(esp + 0x54);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000357A0; /* je: equal / zero */

loc_00035791: ;
    eax = esp + 0x64;
    ecx = esp + 0x34;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0003579Eu); RECOMP_ABI_CALL(0x00035000u, sub_00035000); /* call 0x00035000 */

loc_0003579E: ;
    goto loc_000357CF;

loc_000357A0: ;
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000357B2; /* je: equal / zero */

loc_000357A7: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = xmm1; /* movaps */
    goto loc_000357D5;

loc_000357B2: ;
    eax = MEM32(ebp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000357C1; /* je: equal / zero */

loc_000357B9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    goto loc_000357CF;

loc_000357C1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429500); /* mulss */

loc_000357CF: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */

loc_000357D5: ;
    xmm6 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    _fca = xmm6.f[0]; _fcb = MEMF(0x429344); /* ucomiss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm7 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00035817; /* jnp: not parity */

loc_000357F6: ;
    _fca = xmm3.f[0]; _fcb = xmm7.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00035813; /* jnp: not parity */

loc_000357FF: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00035809; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00035804: ;
    _fca = xmm7.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00035817; /* ja: above (unsigned >) (xmm7.f[0] vs xmm3.f[0]) */

loc_00035809: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00035813; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0003580E: ;
    _fca = xmm3.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00035817; /* ja: above (unsigned >) (xmm3.f[0] vs xmm7.f[0]) */

loc_00035813: ;
    eax = ebx;
    goto loc_00035819;

loc_00035817: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00035819: ;
    ecx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00035879; /* jne: not equal / not zero */

loc_00035826: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429384)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00035841; /* jbe: below or equal (unsigned <=) */

loc_0003583C: ;
    _fca = xmm5.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00035862; /* ja: above (unsigned >) (xmm5.f[0] vs xmm1.f[0]) */

loc_00035841: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429384)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0003587F; /* jbe: below or equal (unsigned <=) */

loc_0003585D: ;
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003587F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_00035862: ;
    MEMF(esp + 0x10) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm7.f[0]; /* movss */
    goto loc_000359AE;

loc_00035879: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */

loc_0003587F: ;
    _fca = xmm1.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00035898; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm7.f[0]) */

loc_00035884: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00035898; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00035889: ;
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000358AE; /* ja: above (unsigned >) (xmm7.f[0] vs xmm1.f[0]) */

loc_00035895: ;
    xmm7 = XMM_ZERO(); /* xorps self = zero */

loc_00035898: ;
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000358C0; /* jbe: below or equal (unsigned <=) (xmm7.f[0] vs xmm1.f[0]) */

loc_0003589D: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000358C0; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_000358A2: ;
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000358BD; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm7.f[0]) */

loc_000358AE: ;
    xmm7 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    goto loc_00035902;

loc_000358BD: ;
    xmm7 = XMM_ZERO(); /* xorps self = zero */

loc_000358C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000358C7; /* jne: not equal / not zero */

loc_000358C4: ;
    xmm3 = xmm7; /* movaps */

loc_000358C7: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000358E7; /* ja: above (unsigned >) (xmm1.f[0] vs xmm4.f[0]) */

loc_000358E2: ;
    _fca = xmm5.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00035902; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm1.f[0]) */

loc_000358E7: ;
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000358F8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_000358EC: ;
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    goto loc_00035902;

loc_000358F8: ;
    xmm5.f[0] = xmm5.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm5.f[0]; /* movss */

loc_00035902: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00035939; /* ja: above (unsigned >) (xmm1.f[0] vs xmm3.f[0]) */

loc_00035934: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00035954; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_00035939: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003594A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0003593E: ;
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    goto loc_00035954;

loc_0003594A: ;
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */

loc_00035954: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00035961; /* jne: not equal / not zero */

loc_0003595E: ;
    xmm1 = xmm7; /* movaps */

loc_00035961: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00035993; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0003598E: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000359AE; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00035993: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000359A4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00035998: ;
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    goto loc_000359AE;

loc_000359A4: ;
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */

loc_000359AE: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429428)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_000359D0; /* ja: above (unsigned >) */

loc_000359C0: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000359CDu); RECOMP_ABI_CALL(0x000E1CF0u, sub_000E1CF0); /* call 0x000E1CF0 */

loc_000359CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000359D0: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429428)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_000359F2; /* ja: above (unsigned >) */

loc_000359E2: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(edi + 0xC);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000359EFu); RECOMP_ABI_CALL(0x000E1DC0u, sub_000E1DC0); /* call 0x000E1DC0 */

loc_000359EF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000359F2: ;
    ecx = esp + 0x64;
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000359FDu); RECOMP_ABI_CALL(0x00034930u, sub_00034930); /* call 0x00034930 */

loc_000359FD: ;
    edx = esp + 0x88;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = ecx;
    ecx = MEM32(edi + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035A11u); RECOMP_ABI_CALL(0x000E2020u, sub_000E2020); /* call 0x000E2020 */

loc_00035A11: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x429428)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_00035A36; /* ja: above (unsigned >) */

loc_00035A26: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035A33u); RECOMP_ABI_CALL(0x000E1CF0u, sub_000E1CF0); /* call 0x000E1CF0 */

loc_00035A33: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00035A36: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x9C); /* subss */
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035A56u); RECOMP_ABI_CALL(0x000E1DC0u, sub_000E1DC0); /* call 0x000E1DC0 */

loc_00035A56: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x64;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035A64u); RECOMP_ABI_CALL(0x00034930u, sub_00034930); /* call 0x00034930 */

loc_00035A64: ;
    ecx = esp + 0x54;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    edx = esp + 0x6C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035A77u); RECOMP_ABI_CALL(0x000E2020u, sub_000E2020); /* call 0x000E2020 */

loc_00035A77: ;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035A7Eu); RECOMP_ABI_CALL(0x0001CCC0u, sub_0001CCC0); /* call 0x0001CCC0 */

loc_00035A7E: ;
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035A89u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_00035A89: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035A92u); RECOMP_ABI_CALL(0x00034E50u, sub_00034E50); /* call 0x00034E50 */

loc_00035A92: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 0x74);
    edx = MEM32(esp + 0x78);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x7C);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035AB9u); RECOMP_ABI_CALL(0x0001CCC0u, sub_0001CCC0); /* call 0x0001CCC0 */

loc_00035AB9: ;
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035AC4u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_00035AC4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00035ACDu); RECOMP_ABI_CALL(0x00034E50u, sub_00034E50); /* call 0x00034E50 */

loc_00035ACD: ;
    eax = MEM32(edi + 0x14);
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 0x80);
    edx = MEM32(esp + 0x84);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x84);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_00035AF6: ;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_000354E7
 * Original: 0x000354E7 - 0x00035AFD (1558 bytes, 426 insns)
 * Folder: world (between: 0x00034CF0 and 0x00035DD0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000354E7(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
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
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000354E7: ;
    ecx = esp + 0x88;
    eax = ebx;
    MEM32(esp + 0x78) = edx;
    PUSH32(esp, 0x000354F9u); RECOMP_ABI_CALL(0x00034930u, sub_00034930); /* call 0x00034930 */

loc_000354F9: ;
    PUSH32(esp, 1);
    eax = esp + 0xA4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x00035509u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_00035509: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xB0;
    ecx = esp + 0x64;
    PUSH32(esp, 0x0003551Cu); RECOMP_ABI_CALL(0x00030920u, sub_00030920); /* call 0x00030920 */

loc_0003551C: ;
    eax = esp + 0x64;
    ecx = esp + 0x88;
    PUSH32(esp, 0x0003552Cu); RECOMP_ABI_CALL(0x00035000u, sub_00035000); /* call 0x00035000 */

loc_0003552C: ;
    ebx = 1;
    PUSH32(esp, ebx);
    ecx = esp + 0xA4;
    PUSH32(esp, ecx);
    PUSH32(esp, edi);
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00035546u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_00035546: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xB0;
    ecx = esp + 0x54;
    PUSH32(esp, 0x00035559u); RECOMP_ABI_CALL(0x00030920u, sub_00030920); /* call 0x00030920 */

loc_00035559: ;
    eax = MEM32(esp + 0xC4);
    ecx = MEM32(esp + 0xC8);
    edx = MEM32(esp + 0xC0);
    MEM32(esp + 0x8C) = eax;
    MEM32(esp + 0x90) = ecx;
    ecx = esp + 0x24;
    eax = edi;
    MEM32(esp + 0x88) = edx;
    PUSH32(esp, 0x0003558Eu); RECOMP_ABI_CALL(0x00034930u, sub_00034930); /* call 0x00034930 */

loc_0003558E: ;
    eax = ecx;
    ecx = esp + 0x34;
    PUSH32(esp, 0x00035599u); RECOMP_ABI_CALL(0x00035000u, sub_00035000); /* call 0x00035000 */

loc_00035599: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000355AEu); RECOMP_ABI_CALL(0x000350F0u, sub_000350F0); /* call 0x000350F0 */

loc_000355AE: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x94) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_000356B0; /* jne: not equal / not zero */

loc_000355C6: ;
    ecx = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000355F9; /* jp: parity */

loc_000355D9: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_000355F9; /* jp: parity */

loc_000355E7: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_000356B0; /* jnp: not parity */

loc_000355F9: ;
    eax = MEM32(edi + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    eax = esp + 0x24;
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00035637u); RECOMP_ABI_CALL(0x00030950u, sub_00030950); /* call 0x00030950 */

loc_00035637: ;
    eax = esp + 0x24;
    ecx = esp + 0x34;
    PUSH32(esp, 0x00035644u); RECOMP_ABI_CALL(0x00035000u, sub_00035000); /* call 0x00035000 */

loc_00035644: ;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    edx = esp + 0x38;
    PUSH32(esp, edx);
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00035659u); RECOMP_ABI_CALL(0x000350F0u, sub_000350F0); /* call 0x000350F0 */

loc_00035659: ;
    eax = MEM32(ebp + 0x18);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000356A8; /* je: equal / zero */

loc_00035663: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x42980C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0003568F; /* ja: above (unsigned >) (xmm2.f[0] vs xmm3.f[0]) */

loc_00035680: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000356A8; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_0003568F: ;
    eax = esp + 0x54;
    ecx = esp + 0x34;
    PUSH32(esp, 0x0003569Cu); RECOMP_ABI_CALL(0x00035000u, sub_00035000); /* call 0x00035000 */

loc_0003569C: ;
    eax = esp + 0x54;
    PUSH32(esp, eax);
    ecx = esp + 0x38;
    PUSH32(esp, ecx);
    goto loc_000356DF;

loc_000356A8: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x10); /* addss */
    goto loc_000356F1;

loc_000356B0: ;
    eax = MEM32(esp + 0x58);
    ecx = MEM32(esp + 0x5C);
    edx = MEM32(esp + 0x54);
    MEM32(esp + 0x28) = eax;
    MEM32(esp + 0x2C) = ecx;
    eax = esp + 0x24;
    ecx = esp + 0x34;
    MEM32(esp + 0x24) = edx;
    PUSH32(esp, 0x000356D5u); RECOMP_ABI_CALL(0x00035000u, sub_00035000); /* call 0x00035000 */

loc_000356D5: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);

loc_000356DF: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x000356EAu); RECOMP_ABI_CALL(0x000350F0u, sub_000350F0); /* call 0x000350F0 */

loc_000356EA: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x44) = ebx;

loc_000356F1: ;
    PUSH32(esp, ebx);
    ecx = esp + 0xA4;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEMF(esp + 0x4C) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00035706u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_00035706: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xB0;
    ecx = esp + 0x64;
    PUSH32(esp, 0x00035719u); RECOMP_ABI_CALL(0x00030920u, sub_00030920); /* call 0x00030920 */

loc_00035719: ;
    eax = MEM32(esp + 0xC4);
    ecx = MEM32(esp + 0xC8);
    edx = MEM32(esp + 0xC0);
    MEM32(esp + 0x58) = eax;
    MEM32(esp + 0x5C) = ecx;
    ecx = esp + 0x24;
    eax = esi;
    MEM32(esp + 0x54) = edx;
    PUSH32(esp, 0x00035745u); RECOMP_ABI_CALL(0x00034930u, sub_00034930); /* call 0x00034930 */

loc_00035745: ;
    eax = ecx;
    ecx = esp + 0x34;
    PUSH32(esp, 0x00035750u); RECOMP_ABI_CALL(0x00035000u, sub_00035000); /* call 0x00035000 */

loc_00035750: ;
    edx = esp + 0x24;
    PUSH32(esp, edx);
    eax = esp + 0x38;
    PUSH32(esp, eax);
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00035765u); RECOMP_ABI_CALL(0x000350F0u, sub_000350F0); /* call 0x000350F0 */

loc_00035765: ;
    ecx = esp + 0x6C;
    PUSH32(esp, ecx);
    edx = esp + 0x40;
    PUSH32(esp, edx);
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0003577Du); RECOMP_ABI_CALL(0x000350F0u, sub_000350F0); /* call 0x000350F0 */

loc_0003577D: ;
    eax = MEM32(esp + 0x54);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x10)) >> 32) & 1);
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0x98) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_000357A0; /* je: equal / zero */

loc_00035791: ;
    eax = esp + 0x64;
    ecx = esp + 0x34;
    PUSH32(esp, 0x0003579Eu); RECOMP_ABI_CALL(0x00035000u, sub_00035000); /* call 0x00035000 */

loc_0003579E: ;
    goto loc_000357CF;

loc_000357A0: ;
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000357B2; /* je: equal / zero */

loc_000357A7: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0 = xmm1; /* movaps */
    goto loc_000357D5;

loc_000357B2: ;
    eax = MEM32(ebp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_000357C1; /* je: equal / zero */

loc_000357B9: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    goto loc_000357CF;

loc_000357C1: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x429500); /* mulss */

loc_000357CF: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x14)); /* movss */

loc_000357D5: ;
    xmm6 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    _fca = xmm6.f[0]; _fcb = MEMF(0x429344); /* ucomiss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    xmm7 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00035817; /* jnp: not parity */

loc_000357F6: ;
    _fca = xmm3.f[0]; _fcb = xmm7.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00035813; /* jnp: not parity */

loc_000357FF: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00035809; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00035804: ;
    _fca = xmm7.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00035817; /* ja: above (unsigned >) (xmm7.f[0] vs xmm3.f[0]) */

loc_00035809: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00035813; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0003580E: ;
    _fca = xmm3.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00035817; /* ja: above (unsigned >) (xmm3.f[0] vs xmm7.f[0]) */

loc_00035813: ;
    eax = ebx;
    goto loc_00035819;

loc_00035817: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_00035819: ;
    ecx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00035879; /* jne: not equal / not zero */

loc_00035826: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429384)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_00035841; /* jbe: below or equal (unsigned <=) */

loc_0003583C: ;
    _fca = xmm5.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00035862; /* ja: above (unsigned >) (xmm5.f[0] vs xmm1.f[0]) */

loc_00035841: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x1C)); /* fsub dword ptr [esp + 0x1c] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429384)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0003587F; /* jbe: below or equal (unsigned <=) */

loc_0003585D: ;
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003587F; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_00035862: ;
    MEMF(esp + 0x10) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */
    MEMF(esp + 0xC) = xmm7.f[0]; /* movss */
    goto loc_000359AE;

loc_00035879: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */

loc_0003587F: ;
    _fca = xmm1.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00035898; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm7.f[0]) */

loc_00035884: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00035898; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_00035889: ;
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000358AE; /* ja: above (unsigned >) (xmm7.f[0] vs xmm1.f[0]) */

loc_00035895: ;
    xmm7 = XMM_ZERO(); /* xorps self = zero */

loc_00035898: ;
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000358C0; /* jbe: below or equal (unsigned <=) (xmm7.f[0] vs xmm1.f[0]) */

loc_0003589D: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000358C0; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_000358A2: ;
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000358BD; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm7.f[0]) */

loc_000358AE: ;
    xmm7 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    goto loc_00035902;

loc_000358BD: ;
    xmm7 = XMM_ZERO(); /* xorps self = zero */

loc_000358C0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_000358C7; /* jne: not equal / not zero */

loc_000358C4: ;
    xmm3 = xmm7; /* movaps */

loc_000358C7: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_000358E7; /* ja: above (unsigned >) (xmm1.f[0] vs xmm4.f[0]) */

loc_000358E2: ;
    _fca = xmm5.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00035902; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm1.f[0]) */

loc_000358E7: ;
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000358F8; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_000358EC: ;
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm4.f[0]; /* movss */
    goto loc_00035902;

loc_000358F8: ;
    xmm5.f[0] = xmm5.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x10) = xmm5.f[0]; /* movss */

loc_00035902: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x94)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x40)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x60)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00035939; /* ja: above (unsigned >) (xmm1.f[0] vs xmm3.f[0]) */

loc_00035934: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00035954; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_00035939: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003594A; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0003593E: ;
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm3.f[0]; /* movss */
    goto loc_00035954;

loc_0003594A: ;
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm4.f[0]; /* movss */

loc_00035954: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x4C)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_00035961; /* jne: not equal / not zero */

loc_0003595E: ;
    xmm1 = xmm7; /* movaps */

loc_00035961: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x48)); /* movss */
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_00035993; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0003598E: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000359AE; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_00035993: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_000359A4; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_00035998: ;
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    goto loc_000359AE;

loc_000359A4: ;
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm2.f[0]; /* movss */

loc_000359AE: ;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429428)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_000359D0; /* ja: above (unsigned >) */

loc_000359C0: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0xC);
    PUSH32(esp, 0x000359CDu); RECOMP_ABI_CALL(0x000E1CF0u, sub_000E1CF0); /* call 0x000E1CF0 */

loc_000359CD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000359D0: ;
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x429428)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_000359F2; /* ja: above (unsigned >) */

loc_000359E2: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(edi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000359EFu); RECOMP_ABI_CALL(0x000E1DC0u, sub_000E1DC0); /* call 0x000E1DC0 */

loc_000359EF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000359F2: ;
    ecx = esp + 0x64;
    eax = edi;
    PUSH32(esp, 0x000359FDu); RECOMP_ABI_CALL(0x00034930u, sub_00034930); /* call 0x00034930 */

loc_000359FD: ;
    edx = esp + 0x88;
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = ecx;
    ecx = MEM32(edi + 0xC);
    PUSH32(esp, 0x00035A11u); RECOMP_ABI_CALL(0x000E2020u, sub_000E2020); /* call 0x000E2020 */

loc_00035A11: ;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x429428)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_00035A36; /* ja: above (unsigned >) */

loc_00035A26: ;
    eax = MEM32(esp + 0xC);
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0x00035A33u); RECOMP_ABI_CALL(0x000E1CF0u, sub_000E1CF0); /* call 0x000E1CF0 */

loc_00035A33: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00035A36: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x9C); /* subss */
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00035A56u); RECOMP_ABI_CALL(0x000E1DC0u, sub_000E1DC0); /* call 0x000E1DC0 */

loc_00035A56: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x64;
    eax = esi;
    PUSH32(esp, 0x00035A64u); RECOMP_ABI_CALL(0x00034930u, sub_00034930); /* call 0x00034930 */

loc_00035A64: ;
    ecx = esp + 0x54;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    edx = esp + 0x6C;
    PUSH32(esp, 0x00035A77u); RECOMP_ABI_CALL(0x000E2020u, sub_000E2020); /* call 0x000E2020 */

loc_00035A77: ;
    eax = esi;
    PUSH32(esp, 0x00035A7Eu); RECOMP_ABI_CALL(0x0001CCC0u, sub_0001CCC0); /* call 0x0001CCC0 */

loc_00035A7E: ;
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00035A89u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_00035A89: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00035A92u); RECOMP_ABI_CALL(0x00034E50u, sub_00034E50); /* call 0x00034E50 */

loc_00035A92: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 0x74);
    edx = MEM32(esp + 0x78);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x7C);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    PUSH32(esp, 0x00035AB9u); RECOMP_ABI_CALL(0x0001CCC0u, sub_0001CCC0); /* call 0x0001CCC0 */

loc_00035AB9: ;
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00035AC4u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_00035AC4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035ACDu); RECOMP_ABI_CALL(0x00034E50u, sub_00034E50); /* call 0x00034E50 */

loc_00035ACD: ;
    eax = MEM32(edi + 0x14);
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 0x80);
    edx = MEM32(esp + 0x84);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x84);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
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
 * sub_00035A2A
 * Original: 0x00035A2A - 0x00035AFD (211 bytes, 66 insns)
 * Folder: world (between: 0x00034CF0 and 0x00035DD0)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035A2A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00035A2A: ;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0x00035A33u); RECOMP_ABI_CALL(0x000E1CF0u, sub_000E1CF0); /* call 0x000E1CF0 */

loc_00035A33: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0 = XMM_SCALAR(MEMF(esp + 0x98)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0x9C); /* subss */
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x00035A56u); RECOMP_ABI_CALL(0x000E1DC0u, sub_000E1DC0); /* call 0x000E1DC0 */

loc_00035A56: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x64;
    eax = esi;
    PUSH32(esp, 0x00035A64u); RECOMP_ABI_CALL(0x00034930u, sub_00034930); /* call 0x00034930 */

loc_00035A64: ;
    ecx = esp + 0x54;
    PUSH32(esp, 0);
    PUSH32(esp, ecx);
    ecx = MEM32(esi + 0xC);
    edx = esp + 0x6C;
    PUSH32(esp, 0x00035A77u); RECOMP_ABI_CALL(0x000E2020u, sub_000E2020); /* call 0x000E2020 */

loc_00035A77: ;
    eax = esi;
    PUSH32(esp, 0x00035A7Eu); RECOMP_ABI_CALL(0x0001CCC0u, sub_0001CCC0); /* call 0x0001CCC0 */

loc_00035A7E: ;
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00035A89u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_00035A89: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    PUSH32(esp, 0x00035A92u); RECOMP_ABI_CALL(0x00034E50u, sub_00034E50); /* call 0x00034E50 */

loc_00035A92: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 0x74);
    edx = MEM32(esp + 0x78);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x7C);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    PUSH32(esp, 0x00035AB9u); RECOMP_ABI_CALL(0x0001CCC0u, sub_0001CCC0); /* call 0x0001CCC0 */

loc_00035AB9: ;
    edx = MEM32(eax + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00035AC4u); RECOMP_ABI_CALL(0x00034D80u, sub_00034D80); /* call 0x00034D80 */

loc_00035AC4: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x00035ACDu); RECOMP_ABI_CALL(0x00034E50u, sub_00034E50); /* call 0x00034E50 */

loc_00035ACD: ;
    eax = MEM32(edi + 0x14);
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 0x80);
    edx = MEM32(esp + 0x84);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x84);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_00035B10
 * Original: 0x00035B10 - 0x00035C55 (325 bytes, 83 insns)
 * Folder: world (between: 0x00034CF0 and 0x00035DD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035B10(void)
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

loc_00035B10: ;
    xmm2 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm2 = xmm0; /* movaps */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 8);
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00035B65; /* jnp: not parity */

loc_00035B4F: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_00035B65: ;
    xmm3 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm5.f[0] = xmm5.f[0] * xmm1.f[0]; /* mulss */
    xmm6.f[0] = xmm6.f[0] * xmm1.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm4 = xmm3; /* movaps */
    xmm4.f[0] = xmm4.f[0] * xmm3.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm1.f[0]; /* mulss */
    xmm3 = xmm2; /* movaps */
    xmm1.f[0] = xmm1.f[0] + xmm4.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp + 8) = xmm1.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00035BCC; /* jnp: not parity */

loc_00035BB6: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    xmm1 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_00035BCC: ;
    xmm3 = XMM_SCALAR(MEMF(ebx)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ebx + 8)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ebx + 4)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm7.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm1.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm3.f[0]; /* addss */
    xmm4.f[0] = xmm4.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm4.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = MEMF(0x429344); /* comiss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    if ((_fca >= _fcb)) goto loc_00035C53; /* jae: above or equal (unsigned >=) (xmm2.f[0] vs MEMF(0x429344)) */

loc_00035C09: ;
    xmm0 = XMM_SCALAR(MEMF(0x429360)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00035C26; /* jb: below (unsigned <) (xmm0.f[0] vs xmm2.f[0]) */

loc_00035C16: ;
    xmm0 = XMM_SCALAR(MEMF(0x42941C)); /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    goto loc_00035C33;

loc_00035C26: ;
    fp_push(MEMF(esp + 8)); /* fld float */
    PUSH32(esp, 0x00035C2Fu); RECOMP_ABI_CALL(0x003673D8u, sub_003673D8); /* call 0x003673D8 */

loc_00035C2F: ;
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */

loc_00035C33: ;
    edx = ebx;
    ecx = edi;
    PUSH32(esp, 0x00035C3Cu); RECOMP_ABI_CALL(0x00035C60u, sub_00035C60); /* call 0x00035C60 */

loc_00035C3C: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 8); /* subss */
    if ((_fca > _fcb)) goto loc_00035C53; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00035C4D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 8)); /* movss */

loc_00035C53: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_00035C5C
 * Original: 0x00035C5C - 0x00035C60 (4 bytes, 4 insns)
 * Folder: world (between: 0x00034CF0 and 0x00035DD0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035C5C(void)
{

loc_00035C5C: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00035C60
 * Original: 0x00035C60 - 0x00035DC7 (359 bytes, 95 insns)
 * Folder: world (between: 0x00034CF0 and 0x00035DD0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035C60(void)
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

loc_00035C60: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm5 = XMM_ZERO(); /* xorps self = zero */
    xmm3 = xmm2; /* movaps */
    xmm3.f[0] = xmm3.f[0] * xmm2.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm2 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00035CAF; /* jnp: not parity */

loc_00035C9C: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */

loc_00035CAF: ;
    xmm3 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm6 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm7 = xmm3; /* movaps */
    xmm7.f[0] = xmm7.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm0.f[0]; /* mulss */
    xmm3 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] + xmm7.f[0]; /* addss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm5.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00035D12; /* jnp: not parity */

loc_00035CFF: ;
    fp_push(MEMF(esp)); /* fld float */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */

loc_00035D12: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    xmm5 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm7 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    xmm0.f[0] = xmm0.f[0] - xmm7.f[0]; /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00035DBE; /* je: equal / zero */

loc_00035D8D: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00035DBE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00035DB7: ;
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp) = MEM32(esp) - 0x80000000u;
    _fa = (uint32_t)(MEM32(esp)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00035DBE: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
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
 * sub_00035D04
 * Original: 0x00035D04 - 0x00035DC7 (195 bytes, 50 insns)
 * Folder: world (between: 0x00034CF0 and 0x00035DD0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035D04(void)
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

loc_00035D04: ;
    fp_top() = RECOMP_FP_PC(MEMF(0x429344) / fp_top()); /* fdivr dword ptr [0x429344] */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    xmm5 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] * xmm0.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = xmm3; /* movaps */
    xmm7 = xmm1; /* movaps */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm7.f[0] = xmm7.f[0] * xmm2.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] - xmm4.f[0]; /* subss */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 8) = xmm2.f[0]; /* movss */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    xmm0.f[0] = xmm0.f[0] - xmm7.f[0]; /* subss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_00035DBE; /* je: equal / zero */

loc_00035D8D: ;
    xmm3 = XMM_SCALAR(MEMF(esi + 8)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(esi + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm2.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esi)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00035DBE; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm3.f[0]) */

loc_00035DB7: ;
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp) = MEM32(esp) - 0x80000000u;
    _fa = (uint32_t)(MEM32(esp)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_00035DBE: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
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
 * sub_00035DD0
 * Original: 0x00035DD0 - 0x00035E45 (117 bytes, 31 insns)
 * Folder: world (match: xbox-demo 0x0002C760, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035DD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035DD0: ;
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
    if (CMP_LE(_fas, _fbs)) goto loc_00035E22; /* jle: less or equal (signed <=) */

loc_00035E1C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00035E22: ;
    edx = MEM32(esp + 4);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00035E41; /* jg: greater (signed >) */

loc_00035E32: ;
    edx = MEM32(esp + 8);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */

loc_00035E41: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00035E50
 * Original: 0x00035E50 - 0x00035E82 (50 bytes, 18 insns)
 * Folder: world (match: xbox-demo 0x0002C7E0, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035E50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035E50: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 4);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_00035E63; /* jle: less or equal (signed <=) */

loc_00035E60: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00035E63: ;
    edx = MEM32(eax + 4);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_00035E60; /* jg: greater (signed >) */

loc_00035E70: ;
    eax = MEM32(eax + 8);
    eax = eax & 0x7FFFFFFF;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    SET_LO8(edx, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */
    eax = edx;
    esp += 4; return; /* ret */

}

/**
 * sub_00035E90
 * Original: 0x00035E90 - 0x00035EA8 (24 bytes, 12 insns)
 * Folder: world (between: 0x00035E50 and 0x00035ED0)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_00035E90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035E90: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00035EA5; /* je: equal / zero */

loc_00035E94: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00035EA5; /* je: equal / zero */

loc_00035E9B: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00035EA5; /* je: equal / zero */

loc_00035EA2: ;
    eax = MEM32(eax);
    esp += 4; return; /* ret */

loc_00035EA5: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_00035EB0
 * Original: 0x00035EB0 - 0x00035EC5 (21 bytes, 7 insns)
 * Folder: world (between: 0x00035E50 and 0x00035ED0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035EB0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00035EB0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x10000 (32-bit) */
    eax = MEM32(eax + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_00035EC1; /* je: equal / zero */

loc_00035EBB: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00035EC1: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00035ED0
 * Original: 0x00035ED0 - 0x00035EF2 (34 bytes, 12 insns)
 * Folder: world (match: xbox-demo 0x0002C860, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00035ED0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_00035ED0: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x7FFFFFFF (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_00035EDB; /* je: equal / zero */

loc_00035ED8: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_00035EDB: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 4), 0x7FFFFFFF (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_00035ED8; /* jne: not equal / not zero */

loc_00035EE4: ;
    eax = MEM32(eax + 8);
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
    esp += 4; return; /* ret */

}

/**
 * sub_00035F00
 * Original: 0x00035F00 - 0x00036072 (370 bytes, 102 insns)
 * Folder: world (between: 0x00035ED0 and 0x000363D0)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00035F00(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_00035F00: ;
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = eax;
    MEM32(ebx + 0x30) = esi;
    ebp = MEM32(esi + 0xC);
    ecx = MEM32(esi + 0x10);
    PUSH32(esp, edi);
    edi = ebx + 0xC;
    PUSH32(esp, edi);
    eax = ebp;
    PUSH32(esp, 0x00035F19u); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_00035F19: ;
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi); /* addss */
    MEMF(edi) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 4); /* addss */
    MEMF(edi + 4) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(edi + 8); /* addss */
    MEMF(edi + 8) = xmm0.f[0]; /* movss */
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x30);
    MEM32(ebx) = ecx;
    edx = MEM32(eax + 0x34);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 4) = edx;
    eax = MEM32(eax + 8);
    MEM32(ebx + 8) = eax;
    eax = MEM32(esi + 0xC);
    ecx = MEM32(eax + 0x10);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x18) = ecx;
    edx = MEM32(eax + 4);
    MEM32(ebx + 0x1C) = edx;
    eax = MEM32(eax + 8);
    MEM32(ebx + 0x20) = eax;
    ecx = MEM32(esi + 0x10);
    xmm0 = XMM_SCALAR(MEMF(ecx + 0xC)); /* movss */
    xmm1 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    MEMF(ebx + 0x24) = xmm1.f[0]; /* movss */
    edx = MEM32(esi + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx + 0x40;
    PUSH32(esp, 0x00035F95u); RECOMP_ABI_CALL(0x000E1240u, sub_000E1240); /* call 0x000E1240 */

loc_00035F95: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(eax + 0x30);
    xmm0 = XMM_SCALAR(MEMF(0x4295B4)); /* movss */
    MEM32(ebx + 0x90) = edx;
    ecx = MEM32(eax + 0x34);
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x94) = ecx;
    edx = MEM32(eax + 8);
    MEM32(ebx + 0x98) = edx;
    esi = MEM32(esi + 0x10);
    eax = MEM32(esi + 0x3C);
    _fb = (uint32_t)(0x3C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x3C;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebx + 0x9C) = eax;
    ecx = MEM32(esi + 4);
    MEM32(ebx + 0xA0) = ecx;
    edx = MEM32(esi + 8);
    MEM32(ebx + 0xA4) = edx;
    xmm1 = XMM_SCALAR(MEMF(ebx + 0x94)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00035FF4; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_00035FEC: ;
    MEMF(ebx + 0x94) = xmm0.f[0]; /* movss */

loc_00035FF4: ;
    xmm0 = XMM_SCALAR(MEMF(0x4293F8)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(ebx + 0xA0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0003600D; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(ebx + 0xA0)) */

loc_00036005: ;
    MEMF(ebx + 0xA0) = xmm0.f[0]; /* movss */

loc_0003600D: ;
    eax = MEM32(esp + 0x10);
    ecx = MEM32(esp + 0x14);
    edx = MEM32(esp + 0x1C);
    MEM32(ebx + 0xAC) = eax;
    eax = MEM32(esp + 0x20);
    MEM32(ebx + 0xA8) = ecx;
    MEM32(ebx + 0x2C) = edx;
    MEM32(ebx + 0xB0) = eax;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036040; /* jne: not equal / not zero */

loc_0003603B: ;
    PUSH32(esp, 0x00036040u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00036040: ;
    edx = MEM32(ebx + 0x2C);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    PUSH32(esp, 0x0003604Du); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0003604D: ;
    ecx = MEM32(ebx + 0x2C);
    esi = MEM32(esp + 0x18);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebx + 0x28) = eax;
    edi = eax;
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
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    esp += 24; return; /* ret 20 */

}

/**
 * sub_00036080
 * Original: 0x00036080 - 0x00036145 (197 bytes, 54 insns)
 * Folder: world (between: 0x00035ED0 and 0x000363D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036080(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00036080: ;
    eax = MEM32(esi + 0x2C);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0003613F; /* jbe: below or equal (unsigned <=) */

loc_00036094: ;
    PUSH32(esp, edi);

loc_00036095: ;
    eax = MEM32(esi + 0x28);
    edx = MEM32(eax + ebx * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00036132; /* je: equal / zero */

loc_000360A3: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    eax = MEM32(edx + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    MEM32(esp + 0xC) = ebp;
    MEM32(esp + 0x10) = ebp;
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x2C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    MEM32(esp + 0x34) = ebp;
    MEM32(esp + 0x38) = ebp;
    MEM32(esp + 0x3C) = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00036132; /* je: equal / zero */

loc_000360F1: ;
    _fa = (uint32_t)(MEM32(eax + 0x14)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x14), ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00036132; /* je: equal / zero */

loc_000360F6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xD;
    edi = esp + 0xC;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(0x758D6C);
    eax = MEM32(esi + 0xA8);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x38) = eax;
    ecx = esp + 0xC;
    eax = edx;
    MEM32(esp + 0x3C) = 2;
    MEM32(esp + 0x34) = 0xCE;
    PUSH32(esp, 0x00036132u); RECOMP_ABI_CALL(0x00101320u, sub_00101320); /* call 0x00101320 */

loc_00036132: ;
    eax = MEM32(esi + 0x2C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00036095; /* jb: below (unsigned <) */

loc_0003613E: ;
    POP32(esp, edi);

loc_0003613F: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000360F6
 * Original: 0x000360F6 - 0x00036145 (79 bytes, 22 insns)
 * Folder: world (between: 0x00035ED0 and 0x000363D0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000360F6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000360F6: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0xD;
    edi = esp + 0xC;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(0x758D6C);
    eax = MEM32(esi + 0xA8);
    MEM32(esp + 0xC) = ecx;
    MEM32(esp + 0x38) = eax;
    ecx = esp + 0xC;
    eax = edx;
    MEM32(esp + 0x3C) = 2;
    MEM32(esp + 0x34) = 0xCE;
    PUSH32(esp, 0x00036132u); RECOMP_ABI_CALL(0x00101320u, sub_00101320); /* call 0x00101320 */

loc_00036132: ;
    eax = MEM32(esi + 0x2C);
    ebx++;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00036095(); return; } /* jb: below (unsigned <) */

loc_0003613E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00036138
 * Original: 0x00036138 - 0x00036145 (13 bytes, 6 insns)
 * Folder: world (between: 0x00035ED0 and 0x000363D0)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036138(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00036138: ;
    if (_flags /* jb: below (unsigned <) */) { g_seh_ebp = ebp; sub_00036095(); return; }

loc_0003613E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x34) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x34;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00036150
 * Original: 0x00036150 - 0x00036342 (498 bytes, 134 insns)
 * Folder: world (between: 0x00035ED0 and 0x000363D0)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036150(void)
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

loc_00036150: ;
    eax = MEM32(esp + 8);
    eax = MEM32(eax + 0xC);
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm3 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x18);
    xmm2.f[0] = xmm2.f[0] - MEMF(ebp + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + 4); /* subss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp); /* subss */
    ecx = eax + 0x30;
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, esi);
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    PUSH32(esp, edi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00036336; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm3.f[0]) */

loc_000361B2: ;
    edx = esp + 0x10;
    esi = ebp + 0x40;
    PUSH32(esp, edx);
    eax = esi;
    ebx = ebp + 0x9C;
    edi = ebp + 0x90;
    PUSH32(esp, 0x000361CDu); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_000361CD: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    xmm4 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x18); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x1C); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0003622E; /* ja: above (unsigned >) (xmm4.f[0] vs xmm0.f[0]) */

loc_000361FA: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ebx); /* comiss */
    if ((_fca > _fcb)) goto loc_0003622E; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ebx)) */

loc_000361FF: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0003622E; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00036209: ;
    _fca = xmm1.f[0]; _fcb = MEMF(ebx + 4); /* comiss */
    if ((_fca > _fcb)) goto loc_0003622E; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(ebx + 4)) */

loc_0003620F: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0003622E; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_00036219: ;
    _fca = xmm2.f[0]; _fcb = MEMF(ebx + 8); /* comiss */
    if ((_fca > _fcb)) goto loc_0003622E; /* ja: above (unsigned >) (xmm2.f[0] vs MEMF(ebx + 8)) */

loc_0003621F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0003622E: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(edx + 4);
    ecx = MEM32(ecx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x34); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x38); /* subss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x1C)); /* movss */
    xmm7.f[0] = xmm7.f[0] - MEMF(ecx + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x18); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00036336; /* jnp: not parity */

loc_00036290: ;
    xmm6 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(ecx + 0x38); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x20)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm5.f[0] = xmm5.f[0] - MEMF(ecx + 0x34); /* subss */
    xmm3.f[0] = xmm3.f[0] - MEMF(ecx + 0x30); /* subss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ebp + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(ebp + 0x1C)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / xmm4.f[0]; /* divss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00036336; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x429350)) */

loc_000362DA: ;
    xmm3 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00036336; /* jb: below (unsigned <) (xmm3.f[0] vs xmm0.f[0]) */

loc_000362E7: ;
    xmm3 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    ecx = esp + 0x10;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0003632Cu); RECOMP_ABI_CALL(0x0007BD20u, sub_0007BD20); /* call 0x0007BD20 */

loc_0003632C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00036336: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00036172
 * Original: 0x00036172 - 0x00036342 (464 bytes, 124 insns)
 * Folder: world (between: 0x00035ED0 and 0x000363D0)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036172(void)
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

loc_00036172: ;
    xmm2.f[0] = xmm2.f[0] - MEMF(ebp + 8); /* subss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ebp + 4); /* subss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(ebp); /* subss */
    ecx = eax + 0x30;
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm2 = XMM_SCALAR(MEMF(ebp + 0x1C)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(ebp + 0x18)); /* movss */
    xmm4.f[0] = xmm4.f[0] + xmm2.f[0]; /* addss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    PUSH32(esp, esi);
    xmm4.f[0] = xmm4.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* comiss */
    PUSH32(esp, edi);
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00036336; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm3.f[0]) */

loc_000361B2: ;
    edx = esp + 0x10;
    esi = ebp + 0x40;
    PUSH32(esp, edx);
    eax = esi;
    ebx = ebp + 0x9C;
    edi = ebp + 0x90;
    PUSH32(esp, 0x000361CDu); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_000361CD: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    xmm4 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x18); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x1C); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0003622E; /* ja: above (unsigned >) (xmm4.f[0] vs xmm0.f[0]) */

loc_000361FA: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ebx); /* comiss */
    if ((_fca > _fcb)) goto loc_0003622E; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ebx)) */

loc_000361FF: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0003622E; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00036209: ;
    _fca = xmm1.f[0]; _fcb = MEMF(ebx + 4); /* comiss */
    if ((_fca > _fcb)) goto loc_0003622E; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(ebx + 4)) */

loc_0003620F: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0003622E; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_00036219: ;
    _fca = xmm2.f[0]; _fcb = MEMF(ebx + 8); /* comiss */
    if ((_fca > _fcb)) goto loc_0003622E; /* ja: above (unsigned >) (xmm2.f[0] vs MEMF(ebx + 8)) */

loc_0003621F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0003622E: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(edx + 4);
    ecx = MEM32(ecx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x34); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x38); /* subss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x1C)); /* movss */
    xmm7.f[0] = xmm7.f[0] - MEMF(ecx + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x18); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00036336; /* jnp: not parity */

loc_00036290: ;
    xmm6 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(ecx + 0x38); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x20)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm5.f[0] = xmm5.f[0] - MEMF(ecx + 0x34); /* subss */
    xmm3.f[0] = xmm3.f[0] - MEMF(ecx + 0x30); /* subss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ebp + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(ebp + 0x1C)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / xmm4.f[0]; /* divss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00036336; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x429350)) */

loc_000362DA: ;
    xmm3 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00036336; /* jb: below (unsigned <) (xmm3.f[0] vs xmm0.f[0]) */

loc_000362E7: ;
    xmm3 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    ecx = esp + 0x10;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0003632Cu); RECOMP_ABI_CALL(0x0007BD20u, sub_0007BD20); /* call 0x0007BD20 */

loc_0003632C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00036336: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_000361B9
 * Original: 0x000361B9 - 0x00036342 (393 bytes, 106 insns)
 * Folder: world (between: 0x00035ED0 and 0x000363D0)
 * Category: game_vtable
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000361B9(void)
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

loc_000361B9: ;
    PUSH32(esp, edx);
    eax = esi;
    ebx = ebp + 0x9C;
    edi = ebp + 0x90;
    PUSH32(esp, 0x000361CDu); RECOMP_ABI_CALL(0x000E0B30u, sub_000E0B30); /* call 0x000E0B30 */

loc_000361CD: ;
    xmm0 = XMM_SCALAR(MEMF(esi + 0x30)); /* movss */
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x14); /* addss */
    xmm4 = XMM_SCALAR(MEMF(edi)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esi + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esi + 0x38)); /* movss */
    xmm1.f[0] = xmm1.f[0] + MEMF(esp + 0x18); /* addss */
    xmm2.f[0] = xmm2.f[0] + MEMF(esp + 0x1C); /* addss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fca = xmm4.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0003622E; /* ja: above (unsigned >) (xmm4.f[0] vs xmm0.f[0]) */

loc_000361FA: ;
    _fca = xmm0.f[0]; _fcb = MEMF(ebx); /* comiss */
    if ((_fca > _fcb)) goto loc_0003622E; /* ja: above (unsigned >) (xmm0.f[0] vs MEMF(ebx)) */

loc_000361FF: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 4)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0003622E; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_00036209: ;
    _fca = xmm1.f[0]; _fcb = MEMF(ebx + 4); /* comiss */
    if ((_fca > _fcb)) goto loc_0003622E; /* ja: above (unsigned >) (xmm1.f[0] vs MEMF(ebx + 4)) */

loc_0003620F: ;
    xmm0 = XMM_SCALAR(MEMF(edi + 8)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0003622E; /* ja: above (unsigned >) (xmm0.f[0] vs xmm2.f[0]) */

loc_00036219: ;
    _fca = xmm2.f[0]; _fcb = MEMF(ebx + 8); /* comiss */
    if ((_fca > _fcb)) goto loc_0003622E; /* ja: above (unsigned >) (xmm2.f[0] vs MEMF(ebx + 8)) */

loc_0003621F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 1;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_0003622E: ;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0x18);
    edx = MEM32(ecx);
    eax = MEM32(eax + 0xC);
    ecx = MEM32(edx + 4);
    ecx = MEM32(ecx + 0x20);
    xmm1 = XMM_SCALAR(MEMF(eax + 0x34)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(eax + 0x38)); /* movss */
    xmm7 = XMM_SCALAR(MEMF(eax + 0x30)); /* movss */
    xmm1.f[0] = xmm1.f[0] - MEMF(ecx + 0x34); /* subss */
    xmm2.f[0] = xmm2.f[0] - MEMF(ecx + 0x38); /* subss */
    xmm4 = XMM_SCALAR(MEMF(ebp + 0x20)); /* movss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x1C)); /* movss */
    xmm7.f[0] = xmm7.f[0] - MEMF(ecx + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm2.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    xmm0 = xmm7; /* movaps */
    xmm0.f[0] = xmm0.f[0] * MEMF(ebp + 0x18); /* mulss */
    xmm4.f[0] = xmm4.f[0] + xmm0.f[0]; /* addss */
    _fca = xmm4.f[0]; _fcb = xmm3.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00036336; /* jnp: not parity */

loc_00036290: ;
    xmm6 = XMM_SCALAR(MEMF(ebp + 8)); /* movss */
    xmm6.f[0] = xmm6.f[0] - MEMF(ecx + 0x38); /* subss */
    xmm0 = XMM_SCALAR(MEMF(ebp + 0x20)); /* movss */
    xmm5 = XMM_SCALAR(MEMF(ebp + 4)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(ebp)); /* movss */
    xmm5.f[0] = xmm5.f[0] - MEMF(ecx + 0x34); /* subss */
    xmm3.f[0] = xmm3.f[0] - MEMF(ecx + 0x30); /* subss */
    xmm3.f[0] = xmm3.f[0] * MEMF(ebp + 0x18); /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm6 = XMM_SCALAR(MEMF(ebp + 0x1C)); /* movss */
    xmm6.f[0] = xmm6.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm6.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] / xmm4.f[0]; /* divss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x429350); /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00036336; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x429350)) */

loc_000362DA: ;
    xmm3 = XMM_SCALAR(MEMF(0x429344)); /* movss */
    _fca = xmm3.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00036336; /* jb: below (unsigned <) (xmm3.f[0] vs xmm0.f[0]) */

loc_000362E7: ;
    xmm3 = xmm0; /* movaps */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x30)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm7.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x34)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    MEMF(esp + 0x14) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 0x38)); /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    ecx = esp + 0x10;
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0003632Cu); RECOMP_ABI_CALL(0x0007BD20u, sub_0007BD20); /* call 0x0007BD20 */

loc_0003632C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

loc_00036336: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_00036350
 * Original: 0x00036350 - 0x0003635D (13 bytes, 5 insns)
 * Folder: world (between: 0x00035ED0 and 0x000363D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036350(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036350: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = MEM32(eax);
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_00036360
 * Original: 0x00036360 - 0x000363C9 (105 bytes, 36 insns)
 * Folder: world (between: 0x00035ED0 and 0x000363D0)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036360(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036360: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000363C8; /* je: equal / zero */

loc_00036366: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(0x7585BC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(0x7585BC) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036378; /* jne: not equal / not zero */

loc_0003636E: ;
    MEM32(0x7585BC) = 0;

loc_00036378: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0003637Eu); RECOMP_ABI_CALL(0x000D8940u, sub_000D8940); /* call 0x000D8940 */

loc_0003637E: ;
    eax = MEM32(esi);
    ecx = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000363A5; /* je: equal / zero */

loc_0003638A: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036398; /* jne: not equal / not zero */

loc_00036393: ;
    PUSH32(esp, 0x00036398u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00036398: ;
    ecx = MEM32(esi);
    ecx = MEM32(ecx + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000363A5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000363A2u); } /* indirect call */
    }

loc_000363A5: ;
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000363C2; /* je: equal / zero */

loc_000363AA: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000363B8; /* jne: not equal / not zero */

loc_000363B3: ;
    PUSH32(esp, 0x000363B8u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000363B8: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000363C2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000363BFu); } /* indirect call */
    }

loc_000363C2: ;
    MEM32(esi) = 0;

loc_000363C8: ;
    esp += 4; return; /* ret */

}

/**
 * sub_000363D0
 * Original: 0x000363D0 - 0x000364DD (269 bytes, 92 insns)
 * Folder: world (match: xbox-demo 0x0002CA70, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000363D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000363D0: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000363E5u); RECOMP_ABI_CALL(0x000DEE20u, sub_000DEE20); /* call 0x000DEE20 */

loc_000363E5: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00036418; /* je: equal / zero */

loc_000363EE: ;
    eax = MEM32(0x758BBC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00036409; /* je: equal / zero */

loc_000363F7: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036409; /* jne: not equal / not zero */

loc_00036400: ;
    eax = MEM32(esp + 8);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_00036410;

loc_00036409: ;
    eax = MEM32(esp + 8);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_00036410: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0003641F; /* jne: not equal / not zero */

loc_00036418: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0003641F: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003642D; /* jne: not equal / not zero */

loc_00036428: ;
    PUSH32(esp, 0x0003642Du); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0003642D: ;
    PUSH32(esp, edi);
    edx = 8;
    ecx = eax;
    PUSH32(esp, 0x0003643Au); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0003643A: ;
    edx = MEM32(esp + 0xC);
    edi = eax;
    MEM32(edi) = edx;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036450; /* jne: not equal / not zero */

loc_0003644B: ;
    PUSH32(esp, 0x00036450u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00036450: ;
    edx = MEM32(esp + 0xC);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    PUSH32(esp, 0x0003645Eu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0003645E: ;
    MEM32(edi + 4) = eax;
    eax = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000364D5; /* jbe: below or equal (unsigned <=) */

loc_0003646B: ;
    edx = MEM32(0x758BBC);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x758D18);
    /* nop */

loc_00036480: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_000364B0; /* je: equal / zero */

loc_0003648D: ;
    ebx = eax;
    ebx = ebx >> 0x18;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(ebx);
    MEM8(esp + 0x13) = LO8(eax);
    eax = MEM32(esp + 0x10);
    ebx = MEM32(esp + 0x10);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x11) = LO8(ebx);
    MEM8(esp + 0x12) = LO8(eax);

loc_000364B0: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000364BD; /* je: equal / zero */

loc_000364B4: ;
    _fa = (uint32_t)(MEM32(0x758CD4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x758CD4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000364C0; /* je: equal / zero */

loc_000364BD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000364C0: ;
    eax = MEM32(edi + 4);
    ebx = MEM32(esp + 0x10);
    MEM32(eax + ecx * 4) = ebx;
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00036480; /* jb: below (unsigned <) */

loc_000364D3: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_000364D5: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000364DF
 * Original: 0x000364DF - 0x000364E0 (1 bytes, 1 insns)
 * Folder: world (between: 0x000363D0 and 0x00036940)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000364DF(void)
{

loc_000364DF: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000364E0
 * Original: 0x000364E0 - 0x0003657B (155 bytes, 53 insns)
 * Folder: world (between: 0x000363D0 and 0x00036940)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000364E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_000364E0: ;
    xmm0 = XMM_SCALAR(MEMF(0x758C80)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x7585C0); /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_00036575; /* jnp: not parity */

loc_000364F9: ;
    PUSH32(esp, edi);
    edi = MEM32(0x67B6A0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0003656E; /* je: equal / zero */

loc_00036504: ;
    ecx = MEM32(0x44AA20);
    eax = MEM32(ecx + 0x2B8);
    PUSH32(esp, esi);
    esi = MEM32(ecx + 0x270);
    esi = esi << 6;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = edi;

loc_00036520: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0003654C; /* jae: above or equal (unsigned >=) */

loc_00036524: ;
    _fa = (uint32_t)(MEM8(eax + 0x30)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax + 0x30), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00036543; /* je: equal / zero */

loc_0003652A: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036535; /* jne: not equal / not zero */

loc_00036530: ;
    ecx = MEM32(eax + 4);
    goto loc_0003653A;

loc_00036535: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 4), edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036543; /* jne: not equal / not zero */

loc_0003653A: ;
    ecx = MEM32(ecx + 0x24);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00036543; /* je: equal / zero */

loc_00036541: ;
    edx = ecx;

loc_00036543: ;
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00036520; /* je: equal / zero */

loc_0003654A: ;
    goto loc_00036550;

loc_0003654C: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00036566; /* je: equal / zero */

loc_00036550: ;
    eax = MEM32(edx + 0x48C);
    POP32(esp, esi);
    MEM32(0x7585BC) = eax;
    MEMF(0x7585C0) = xmm0.f[0]; /* movss */
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00036566: ;
    eax = MEM32(0x7585BC);
    POP32(esp, esi);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0003656E: ;
    eax = MEM32(0x7585BC);
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_00036575: ;
    eax = MEM32(0x7585BC);
    esp += 4; return; /* ret */

}

/**
 * sub_00036580
 * Original: 0x00036580 - 0x000365B1 (49 bytes, 19 insns)
 * Folder: world (between: 0x000363D0 and 0x00036940)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036580(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00036580: ;
    PUSH32(esp, 0x00036585u); RECOMP_ABI_CALL(0x000364E0u, sub_000364E0); /* call 0x000364E0 */

loc_00036585: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000365AB; /* je: equal / zero */

loc_00036589: ;
    ecx = MEM32(eax);
    edx = MEM32(eax + 4);
    PUSH32(esp, 0x36350);
    PUSH32(esp, 4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x000365A1u); RECOMP_ABI_CALL(0x00348A59u, sub_00348A59); /* call 0x00348A59 */

loc_000365A1: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000365AB; /* je: equal / zero */

loc_000365A8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_000365AB: ;
    eax = 1;
    esp += 4; return; /* ret */

}

/**
 * sub_000365C0
 * Original: 0x000365C0 - 0x0003669B (219 bytes, 46 insns)
 * Folder: world (between: 0x000363D0 and 0x00036940)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000365C0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000365C0: ;
    PUSH32(esp, 0x3DCCCCCD);
    eax = 0x1F4;
    ecx = esi;
    PUSH32(esp, 0x000365D1u); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_000365D1: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0x1C;
    eax = 0x1F4;
    PUSH32(esp, 0x000365E3u); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_000365E3: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0x38;
    eax = 0x1F4;
    PUSH32(esp, 0x000365F5u); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_000365F5: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0x54;
    eax = 0x1F4;
    PUSH32(esp, 0x00036607u); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_00036607: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0x70;
    eax = 0x1F4;
    PUSH32(esp, 0x00036619u); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_00036619: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0x8C;
    eax = 0x1F4;
    PUSH32(esp, 0x0003662Eu); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_0003662E: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0xA8;
    eax = 0x1F4;
    PUSH32(esp, 0x00036643u); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_00036643: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0xC4;
    eax = 0x1F4;
    PUSH32(esp, 0x00036658u); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_00036658: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0xE0;
    eax = 0x20;
    PUSH32(esp, 0x0003666Du); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_0003666D: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0xFC;
    eax = 0x96;
    PUSH32(esp, 0x00036682u); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_00036682: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0x118;
    eax = 0x20;
    PUSH32(esp, 0x00036697u); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_00036697: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000365F0
 * Original: 0x000365F0 - 0x0003669B (171 bytes, 35 insns)
 * Folder: world (between: 0x000363D0 and 0x00036940)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000365F0(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000365F0: ;
    PUSH32(esp, 0x000365F5u); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_000365F5: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0x54;
    eax = 0x1F4;
    PUSH32(esp, 0x00036607u); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_00036607: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0x70;
    eax = 0x1F4;
    PUSH32(esp, 0x00036619u); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_00036619: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0x8C;
    eax = 0x1F4;
    PUSH32(esp, 0x0003662Eu); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_0003662E: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0xA8;
    eax = 0x1F4;
    PUSH32(esp, 0x00036643u); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_00036643: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0xC4;
    eax = 0x1F4;
    PUSH32(esp, 0x00036658u); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_00036658: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0xE0;
    eax = 0x20;
    PUSH32(esp, 0x0003666Du); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_0003666D: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0xFC;
    eax = 0x96;
    PUSH32(esp, 0x00036682u); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_00036682: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0x118;
    eax = 0x20;
    PUSH32(esp, 0x00036697u); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_00036697: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0003668D
 * Original: 0x0003668D - 0x0003669B (14 bytes, 4 insns)
 * Folder: world (between: 0x000363D0 and 0x00036940)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0003668D(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0003668D: ;
    eax = 0x20;
    PUSH32(esp, 0x00036697u); RECOMP_ABI_CALL(0x000DE8F0u, sub_000DE8F0); /* call 0x000DE8F0 */

loc_00036697: ;
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_000366A0
 * Original: 0x000366A0 - 0x00036932 (658 bytes, 224 insns)
 * Folder: world (between: 0x000363D0 and 0x00036940)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000366A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000366A0: ;
    eax = MEM32(ebx + 0x10);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_000366C4; /* je: equal / zero */

loc_000366AB: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000366B9; /* jne: not equal / not zero */

loc_000366B4: ;
    PUSH32(esp, 0x000366B9u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000366B9: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000366C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000366C1u); } /* indirect call */
    }

loc_000366C4: ;
    eax = ebx;
    MEM32(ebx + 0x10) = esi;
    MEM32(ebx + 0xC) = esi;
    MEM32(ebx + 8) = esi;
    MEM32(ebx + 4) = esi;
    MEM32(ebx) = esi;
    PUSH32(esp, 0x000366D9u); RECOMP_ABI_CALL(0x000DE610u, sub_000DE610); /* call 0x000DE610 */

loc_000366D9: ;
    eax = MEM32(ebx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = ebx + 0x1C;
    if (CMP_EQ(_fa, _fb)) goto loc_000366FC; /* je: equal / zero */

loc_000366E3: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000366F1; /* jne: not equal / not zero */

loc_000366EC: ;
    PUSH32(esp, 0x000366F1u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000366F1: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000366FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000366F9u); } /* indirect call */
    }

loc_000366FC: ;
    eax = edi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi) = esi;
    PUSH32(esp, 0x00036711u); RECOMP_ABI_CALL(0x000DE610u, sub_000DE610); /* call 0x000DE610 */

loc_00036711: ;
    eax = MEM32(ebx + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = ebx + 0x38;
    if (CMP_EQ(_fa, _fb)) goto loc_00036734; /* je: equal / zero */

loc_0003671B: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036729; /* jne: not equal / not zero */

loc_00036724: ;
    PUSH32(esp, 0x00036729u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00036729: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00036734u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036731u); } /* indirect call */
    }

loc_00036734: ;
    eax = edi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi) = esi;
    PUSH32(esp, 0x00036749u); RECOMP_ABI_CALL(0x000DE610u, sub_000DE610); /* call 0x000DE610 */

loc_00036749: ;
    eax = MEM32(ebx + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = ebx + 0x54;
    if (CMP_EQ(_fa, _fb)) goto loc_0003676C; /* je: equal / zero */

loc_00036753: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036761; /* jne: not equal / not zero */

loc_0003675C: ;
    PUSH32(esp, 0x00036761u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00036761: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0003676Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036769u); } /* indirect call */
    }

loc_0003676C: ;
    eax = edi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi) = esi;
    PUSH32(esp, 0x00036781u); RECOMP_ABI_CALL(0x000DE610u, sub_000DE610); /* call 0x000DE610 */

loc_00036781: ;
    eax = MEM32(ebx + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = ebx + 0x70;
    if (CMP_EQ(_fa, _fb)) goto loc_000367A7; /* je: equal / zero */

loc_0003678E: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003679C; /* jne: not equal / not zero */

loc_00036797: ;
    PUSH32(esp, 0x0003679Cu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0003679C: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000367A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000367A4u); } /* indirect call */
    }

loc_000367A7: ;
    eax = edi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi) = esi;
    PUSH32(esp, 0x000367BCu); RECOMP_ABI_CALL(0x000DE610u, sub_000DE610); /* call 0x000DE610 */

loc_000367BC: ;
    eax = MEM32(ebx + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = ebx + 0x8C;
    if (CMP_EQ(_fa, _fb)) goto loc_000367E5; /* je: equal / zero */

loc_000367CC: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000367DA; /* jne: not equal / not zero */

loc_000367D5: ;
    PUSH32(esp, 0x000367DAu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000367DA: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000367E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000367E2u); } /* indirect call */
    }

loc_000367E5: ;
    eax = edi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi) = esi;
    PUSH32(esp, 0x000367FAu); RECOMP_ABI_CALL(0x000DE610u, sub_000DE610); /* call 0x000DE610 */

loc_000367FA: ;
    eax = MEM32(ebx + 0xB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = ebx + 0xA8;
    if (CMP_EQ(_fa, _fb)) goto loc_00036823; /* je: equal / zero */

loc_0003680A: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036818; /* jne: not equal / not zero */

loc_00036813: ;
    PUSH32(esp, 0x00036818u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00036818: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00036823u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036820u); } /* indirect call */
    }

loc_00036823: ;
    eax = edi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi) = esi;
    PUSH32(esp, 0x00036838u); RECOMP_ABI_CALL(0x000DE610u, sub_000DE610); /* call 0x000DE610 */

loc_00036838: ;
    eax = MEM32(ebx + 0xD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = ebx + 0xC4;
    if (CMP_EQ(_fa, _fb)) goto loc_00036861; /* je: equal / zero */

loc_00036848: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036856; /* jne: not equal / not zero */

loc_00036851: ;
    PUSH32(esp, 0x00036856u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00036856: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00036861u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003685Eu); } /* indirect call */
    }

loc_00036861: ;
    eax = edi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi) = esi;
    PUSH32(esp, 0x00036876u); RECOMP_ABI_CALL(0x000DE610u, sub_000DE610); /* call 0x000DE610 */

loc_00036876: ;
    eax = MEM32(ebx + 0xF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = ebx + 0xE0;
    if (CMP_EQ(_fa, _fb)) goto loc_0003689F; /* je: equal / zero */

loc_00036886: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036894; /* jne: not equal / not zero */

loc_0003688F: ;
    PUSH32(esp, 0x00036894u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00036894: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0003689Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003689Cu); } /* indirect call */
    }

loc_0003689F: ;
    eax = edi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi) = esi;
    PUSH32(esp, 0x000368B4u); RECOMP_ABI_CALL(0x000DE610u, sub_000DE610); /* call 0x000DE610 */

loc_000368B4: ;
    eax = MEM32(ebx + 0x128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = ebx + 0x118;
    if (CMP_EQ(_fa, _fb)) goto loc_000368DD; /* je: equal / zero */

loc_000368C4: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000368D2; /* jne: not equal / not zero */

loc_000368CD: ;
    PUSH32(esp, 0x000368D2u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000368D2: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000368DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000368DAu); } /* indirect call */
    }

loc_000368DD: ;
    eax = edi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi) = esi;
    PUSH32(esp, 0x000368F2u); RECOMP_ABI_CALL(0x000DE610u, sub_000DE610); /* call 0x000DE610 */

loc_000368F2: ;
    eax = MEM32(ebx + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = ebx + 0xFC;
    if (CMP_EQ(_fa, _fb)) goto loc_0003691B; /* je: equal / zero */

loc_00036902: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036910; /* jne: not equal / not zero */

loc_0003690B: ;
    PUSH32(esp, 0x00036910u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00036910: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0003691Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036918u); } /* indirect call */
    }

loc_0003691B: ;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi) = esi;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DE610(); return; /* tail jmp 0x000DE610 */

}

/**
 * sub_000366B9
 * Original: 0x000366B9 - 0x00036932 (633 bytes, 214 insns)
 * Folder: world (between: 0x000363D0 and 0x00036940)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000366B9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000366B9: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000366C4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000366C1u); } /* indirect call */
    }

loc_000366C4: ;
    eax = ebx;
    MEM32(ebx + 0x10) = esi;
    MEM32(ebx + 0xC) = esi;
    MEM32(ebx + 8) = esi;
    MEM32(ebx + 4) = esi;
    MEM32(ebx) = esi;
    PUSH32(esp, 0x000366D9u); RECOMP_ABI_CALL(0x000DE610u, sub_000DE610); /* call 0x000DE610 */

loc_000366D9: ;
    eax = MEM32(ebx + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = ebx + 0x1C;
    if (CMP_EQ(_fa, _fb)) goto loc_000366FC; /* je: equal / zero */

loc_000366E3: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000366F1; /* jne: not equal / not zero */

loc_000366EC: ;
    PUSH32(esp, 0x000366F1u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000366F1: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000366FCu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000366F9u); } /* indirect call */
    }

loc_000366FC: ;
    eax = edi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi) = esi;
    PUSH32(esp, 0x00036711u); RECOMP_ABI_CALL(0x000DE610u, sub_000DE610); /* call 0x000DE610 */

loc_00036711: ;
    eax = MEM32(ebx + 0x48);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = ebx + 0x38;
    if (CMP_EQ(_fa, _fb)) goto loc_00036734; /* je: equal / zero */

loc_0003671B: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036729; /* jne: not equal / not zero */

loc_00036724: ;
    PUSH32(esp, 0x00036729u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00036729: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00036734u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036731u); } /* indirect call */
    }

loc_00036734: ;
    eax = edi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi) = esi;
    PUSH32(esp, 0x00036749u); RECOMP_ABI_CALL(0x000DE610u, sub_000DE610); /* call 0x000DE610 */

loc_00036749: ;
    eax = MEM32(ebx + 0x64);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = ebx + 0x54;
    if (CMP_EQ(_fa, _fb)) goto loc_0003676C; /* je: equal / zero */

loc_00036753: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036761; /* jne: not equal / not zero */

loc_0003675C: ;
    PUSH32(esp, 0x00036761u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00036761: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0003676Cu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036769u); } /* indirect call */
    }

loc_0003676C: ;
    eax = edi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi) = esi;
    PUSH32(esp, 0x00036781u); RECOMP_ABI_CALL(0x000DE610u, sub_000DE610); /* call 0x000DE610 */

loc_00036781: ;
    eax = MEM32(ebx + 0x80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = ebx + 0x70;
    if (CMP_EQ(_fa, _fb)) goto loc_000367A7; /* je: equal / zero */

loc_0003678E: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0003679C; /* jne: not equal / not zero */

loc_00036797: ;
    PUSH32(esp, 0x0003679Cu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_0003679C: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000367A7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000367A4u); } /* indirect call */
    }

loc_000367A7: ;
    eax = edi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi) = esi;
    PUSH32(esp, 0x000367BCu); RECOMP_ABI_CALL(0x000DE610u, sub_000DE610); /* call 0x000DE610 */

loc_000367BC: ;
    eax = MEM32(ebx + 0x9C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = ebx + 0x8C;
    if (CMP_EQ(_fa, _fb)) goto loc_000367E5; /* je: equal / zero */

loc_000367CC: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000367DA; /* jne: not equal / not zero */

loc_000367D5: ;
    PUSH32(esp, 0x000367DAu); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000367DA: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000367E5u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000367E2u); } /* indirect call */
    }

loc_000367E5: ;
    eax = edi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi) = esi;
    PUSH32(esp, 0x000367FAu); RECOMP_ABI_CALL(0x000DE610u, sub_000DE610); /* call 0x000DE610 */

loc_000367FA: ;
    eax = MEM32(ebx + 0xB8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = ebx + 0xA8;
    if (CMP_EQ(_fa, _fb)) goto loc_00036823; /* je: equal / zero */

loc_0003680A: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036818; /* jne: not equal / not zero */

loc_00036813: ;
    PUSH32(esp, 0x00036818u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00036818: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00036823u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036820u); } /* indirect call */
    }

loc_00036823: ;
    eax = edi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi) = esi;
    PUSH32(esp, 0x00036838u); RECOMP_ABI_CALL(0x000DE610u, sub_000DE610); /* call 0x000DE610 */

loc_00036838: ;
    eax = MEM32(ebx + 0xD4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = ebx + 0xC4;
    if (CMP_EQ(_fa, _fb)) goto loc_00036861; /* je: equal / zero */

loc_00036848: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036856; /* jne: not equal / not zero */

loc_00036851: ;
    PUSH32(esp, 0x00036856u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00036856: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00036861u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003685Eu); } /* indirect call */
    }

loc_00036861: ;
    eax = edi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi) = esi;
    PUSH32(esp, 0x00036876u); RECOMP_ABI_CALL(0x000DE610u, sub_000DE610); /* call 0x000DE610 */

loc_00036876: ;
    eax = MEM32(ebx + 0xF0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = ebx + 0xE0;
    if (CMP_EQ(_fa, _fb)) goto loc_0003689F; /* je: equal / zero */

loc_00036886: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036894; /* jne: not equal / not zero */

loc_0003688F: ;
    PUSH32(esp, 0x00036894u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00036894: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0003689Fu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0003689Cu); } /* indirect call */
    }

loc_0003689F: ;
    eax = edi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi) = esi;
    PUSH32(esp, 0x000368B4u); RECOMP_ABI_CALL(0x000DE610u, sub_000DE610); /* call 0x000DE610 */

loc_000368B4: ;
    eax = MEM32(ebx + 0x128);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = ebx + 0x118;
    if (CMP_EQ(_fa, _fb)) goto loc_000368DD; /* je: equal / zero */

loc_000368C4: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000368D2; /* jne: not equal / not zero */

loc_000368CD: ;
    PUSH32(esp, 0x000368D2u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_000368D2: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x000368DDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000368DAu); } /* indirect call */
    }

loc_000368DD: ;
    eax = edi;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi) = esi;
    PUSH32(esp, 0x000368F2u); RECOMP_ABI_CALL(0x000DE610u, sub_000DE610); /* call 0x000DE610 */

loc_000368F2: ;
    eax = MEM32(ebx + 0x10C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    edi = ebx + 0xFC;
    if (CMP_EQ(_fa, _fb)) goto loc_0003691B; /* je: equal / zero */

loc_00036902: ;
    eax = MEM32(0x46B1A4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036910; /* jne: not equal / not zero */

loc_0003690B: ;
    PUSH32(esp, 0x00036910u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00036910: ;
    ecx = MEM32(edi + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0003691Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00036918u); } /* indirect call */
    }

loc_0003691B: ;
    MEM32(edi + 0x10) = esi;
    MEM32(edi + 0xC) = esi;
    MEM32(edi + 8) = esi;
    MEM32(edi + 4) = esi;
    MEM32(edi) = esi;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    g_seh_ebp = ebp; sub_000DE610(); return; /* tail jmp 0x000DE610 */

}

/**
 * sub_00036940
 * Original: 0x00036940 - 0x00036A85 (325 bytes, 122 insns)
 * Folder: world (match: xbox-demo 0x0002E380, between)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00036940(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00036940: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00036955u); RECOMP_ABI_CALL(0x000DEE20u, sub_000DEE20); /* call 0x000DEE20 */

loc_00036955: ;
    esi = eax;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(0x46B1A4);
    if (CMP_NE(_fa, _fb)) goto loc_00036987; /* jne: not equal / not zero */

loc_00036967: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036970; /* jne: not equal / not zero */

loc_0003696B: ;
    PUSH32(esp, 0x00036970u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00036970: ;
    edx = 4;
    ecx = eax;
    PUSH32(esp, 0x0003697Cu); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0003697C: ;
    MEM32(eax) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00036987: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036990; /* jne: not equal / not zero */

loc_0003698B: ;
    PUSH32(esp, 0x00036990u); RECOMP_ABI_CALL(0x000955C0u, sub_000955C0); /* call 0x000955C0 */

loc_00036990: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0003699Du); RECOMP_ABI_CALL(0x00016060u, sub_00016060); /* call 0x00016060 */

loc_0003699D: ;
    ebp = eax;
    eax = MEM32(0x758D18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_000369CF; /* jne: not equal / not zero */

loc_000369AA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    eax = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_00036A7E; /* je: equal / zero */

loc_000369B4: ;
    ecx = MEM32(esp + 0x10);
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
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
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_000369CF: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_00036A7C; /* jae: above or equal (unsigned >=) */

loc_000369E1: ;
    PUSH32(esp, ebx);

loc_000369E2: ;
    edx = MEM32(esi);
    MEM32(esp + 0x10) = edx;
    eax = edx;
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(eax);
    MEM8(esp + 0x13) = LO8(edx);
    ebx = MEM32(esp + 0x10);
    eax = MEM32(esp + 0x10);
    ebx = ebx >> 0x10;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x11) = LO8(ebx);
    SET_LO8(ebx, MEM8(esp + 0x10));
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ecx) = LO8(ebx);
    MEM8(esp + 0x12) = LO8(eax);
    ebx = MEM32(esp + 0x10);
    MEM8(ecx + 3) = LO8(edx);
    edx = MEM32(esp + 0x10);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ebx = ebx >> 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(ecx + 1) = LO8(ebx);
    MEM8(ecx + 2) = LO8(eax);
    edi = edx + esi + -4;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_00036A71; /* jae: above or equal (unsigned >=) */

loc_00036A33: ;
    SET_LO8(edx, MEM8(esi));
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    SET_LO8(eax, LO8(edx));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(edx);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    eax = eax & 0xC0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFC0u) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFC0u (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00036A67; /* je: equal / zero */

loc_00036A47: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x80 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036A54; /* jne: not equal / not zero */

loc_00036A4C: ;
    SET_LO8(eax, MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_00036A67;

loc_00036A54: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00036A6D; /* jne: not equal / not zero */

loc_00036A59: ;
    SET_LO16(edx, MEM16(esi));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx) = HI8(edx);
    MEM8(ecx + 1) = LO8(edx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00036A67: ;
    SET_LO8(eax, MEM8(esi));
    MEM8(ecx) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_00036A6D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00036A33; /* jb: below (unsigned <) */

loc_00036A71: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x18) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_000369E2; /* jb: below (unsigned <) */

loc_00036A7B: ;
    POP32(esp, ebx);

loc_00036A7C: ;
    eax = ebp;

loc_00036A7E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}
