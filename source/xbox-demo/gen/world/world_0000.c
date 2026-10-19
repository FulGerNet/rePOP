/**
 * PoP SoT xbox-demo - world, chunk 0
 * Worlds, streaming and the AI grid (Jade ENGine WORld, GRId, DynamicLoading)
 * Functions: 125 (0x00025000 - 0x0002EE50)
 */

#define RECOMP_GENERATED_CODE
#include "../recomp_funcs.h"
#include <math.h>

/**
 * sub_00025000
 * Original: 0x00025000 - 0x00025044 (68 bytes, 21 insns)
 * Folder: world (source: GRI_compute.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00025000(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00025000: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    if (_flags /* jne: not equal / not zero */) goto loc_00025039;

loc_00025006: ;
    SET_LO8(eax, MEM8(0x3662F8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00025030; /* ja: above (unsigned >) */

loc_0002500F: ;
    PUSH32(esp, 0x3232B0);
    PUSH32(esp, 0x323294);
    PUSH32(esp, 0x857);
    PUSH32(esp, 0x323260);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0002502Du); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0002502D: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00025030: ;
    eax = MEM32(0x366300);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00025039: ;
    eax = MEM32(eax * 4 + 0x366300);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_00029240
 * Original: 0x00029240 - 0x00029467 (551 bytes, 177 insns)
 * Folder: world (source: WORDynLoad.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_00029240(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00029240: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0x2C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x2C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    esi = esp + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00029255u); RECOMP_ABI_CALL(0x0002A7B0u, sub_0002A7B0); /* call 0x0002A7B0 */

loc_00029255: ;
    esi = MEM32(0x64D33C);
    edi = MEM32(0x64D3A4);
    ebx = ebx | 0xFFFFFFFFu;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    MEM32(esp + 0x10) = ebx;
    MEM32(esp + 0x1C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_00029277; /* je: equal / zero */

loc_00029272: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000292AA; /* je: equal / zero */

loc_00029277: ;
    eax = MEM32(ebp + 8);
    PUSH32(esp, eax);
    eax = 0x493610;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00029285u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00029285: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029291; /* je: equal / zero */

loc_0002928C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002929B; /* je: equal / zero */

loc_00029291: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000292A2; /* je: equal / zero */

loc_0002929B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000292AA; /* jne: not equal / not zero */

loc_0002929F: ;
    eax = MEM32(ebp + 8);

loc_000292A2: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002942F; /* je: equal / zero */

loc_000292AA: ;
    PUSH32(esp, 1);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000292B7u); RECOMP_ABI_CALL(0x000BFDB0u, sub_000BFDB0); /* call 0x000BFDB0 */

loc_000292B7: ;
    edi = eax;
    eax = MEM32(esp + 0x2C);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000293E5; /* jbe: below or equal (unsigned <=) */

loc_000292CB: ;
    ecx = MEM32(0x64D398);
    MEM32(esp + 0x18) = eax;

loc_000292D5: ;
    esi = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0xC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002930D; /* je: equal / zero */

loc_000292E2: ;
    SET_LO8(eax, MEM8(esp + 0xC));
    edx = esi;
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xC) = LO8(edx);
    MEM8(esp + 0xF) = LO8(eax);
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 0xC);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xD) = LO8(edx);
    MEM8(esp + 0xE) = LO8(eax);
    esi = MEM32(esp + 0xC);

loc_0002930D: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esp + 0x24) = esi;
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00029341; /* je: equal / zero */

loc_0002931E: ;
    edx = eax;
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xC) = LO8(edx);
    MEM8(esp + 0xF) = LO8(eax);
    eax = MEM32(esp + 0xC);
    edx = MEM32(esp + 0xC);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0xD) = LO8(edx);
    MEM8(esp + 0xE) = LO8(eax);

loc_00029341: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    eax = MEM32(esp + 0xC);
    MEM32(esp + 0x28) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_00029376; /* je: equal / zero */

loc_0002934D: ;
    SET_LO8(edx, MEM8(esp + 0xC));
    eax = eax >> 0x18;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x28) = LO8(eax);
    MEM8(esp + 0x2B) = LO8(edx);
    eax = MEM32(esp + 0x28);
    edx = MEM32(esp + 0x28);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x29) = LO8(edx);
    MEM8(esp + 0x2A) = LO8(eax);
    eax = MEM32(esp + 0x28);

loc_00029376: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x6C6F772E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x6C6F772E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000293B9; /* jne: not equal / not zero */

loc_0002937D: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebp + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ebp + 8) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000293DB; /* je: equal / zero */

loc_00029382: ;
    eax = MEM32(esp + 0x30);
    edx = MEM32(eax + 4);
    ebx = eax + 4;
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00029398u); RECOMP_ABI_CALL(0x0027B300u, sub_0027B300); /* call 0x0027B300 */

loc_00029398: ;
    ecx = 1;
    edx = esp + 0x2C;
    esi = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000293A8u); RECOMP_ABI_CALL(0x0027ED30u, sub_0027ED30); /* call 0x0027ED30 */

loc_000293A8: ;
    MEM32(ebx) = esi;
    eax = MEM32(esi + 4);
    MEM32(eax) = esi;
    MEM32(esp + 0x10) = 0xFFFFFFFFu;
    goto loc_000293D5;

loc_000293B9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x776F772E) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x776F772E (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000293DB; /* jne: not equal / not zero */

loc_000293C0: ;
    eax = MEM32(ebp + 0xC);
    ecx = esp + 0x10;
    PUSH32(esp, ecx);
    ebx = esp + 0x28;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000293D1u); RECOMP_ABI_CALL(0x0002A6F0u, sub_0002A6F0); /* call 0x0002A6F0 */

loc_000293D1: ;
    MEM32(esp + 0x10) = esi;

loc_000293D5: ;
    ecx = MEM32(0x64D398);

loc_000293DB: ;
    MEM32(esp + 0x18) = MEM32(esp + 0x18) - 1;
    _fa = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_000292D5; /* jne: not equal / not zero */

loc_000293E5: ;
    ebx = MEM32(esp + 0x30);
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002940C; /* je: equal / zero */

loc_000293EF: ;
    /* nop */

loc_000293F0: ;
    edx = MEM32(ebp + 0xC);
    eax = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000293FFu); RECOMP_ABI_CALL(0x00029240u, sub_00029240); /* call 0x00029240 */

loc_000293FF: ;
    esi = MEM32(esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_000293F0; /* jne: not equal / not zero */

loc_0002940C: ;
    _fa = (uint32_t)(MEM32(esp + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x10), 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002941B; /* jne: not equal / not zero */

loc_00029413: ;
    ecx = MEM32(esp + 0x1C);
    MEM32(esp + 0x10) = ecx;

loc_0002941B: ;
    eax = esp + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00029424u); RECOMP_ABI_CALL(0x000F8880u, sub_000F8880); /* call 0x000F8880 */

loc_00029424: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0002942F: ;
    edx = MEM32(ebp + 8);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00029438u); RECOMP_ABI_CALL(0x000F8010u, sub_000F8010); /* call 0x000F8010 */

loc_00029438: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x32316C);
    PUSH32(esp, 0xC4);
    PUSH32(esp, 0x3233A4);
    PUSH32(esp, 0x32308C);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00029452u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_00029452: ;
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x2C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002945Eu); RECOMP_ABI_CALL(0x000F8880u, sub_000F8880); /* call 0x000F8880 */

loc_0002945E: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0002946B
 * Original: 0x0002946B - 0x00029470 (5 bytes, 5 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002946B(void)
{

loc_0002946B: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00029470
 * Original: 0x00029470 - 0x00029510 (160 bytes, 48 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029470(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_00029470: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002947E; /* jne: not equal / not zero */

loc_00029479: ;
    PUSH32(esp, 0x0002947Eu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002947E: ;
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edx = 0x5E0;
    ecx = eax;
    PUSH32(esp, 0x0002948Cu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0002948C: ;
    esi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x178;
    edi = esi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    PUSH32(esp, 1);
    eax = 0x3E8;
    edi = esi;
    PUSH32(esp, 0x000294A7u); RECOMP_ABI_CALL(0x000133A0u, sub_000133A0); /* call 0x000133A0 */

loc_000294A7: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    eax = 0x34AC40;
    PUSH32(esp, 0x000294B4u); RECOMP_ABI_CALL(0x0001A770u, sub_0001A770); /* call 0x0001A770 */

loc_000294B4: ;
    eax = MEM32(0x64EE5C);
    PUSH32(esp, eax);
    ecx = esi + 0x184;
    PUSH32(esp, 0x32338C);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000294CBu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_000294CB: ;
    ecx = MEM32(0x64EE5C);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64EE5C) = ecx;
    edx = 0x1E;
    ecx = 0x64D980;
    PUSH32(esp, 0x000294EAu); RECOMP_ABI_CALL(0x0002A7D0u, sub_0002A7D0); /* call 0x0002A7D0 */

loc_000294EA: ;
    edx = 0x1E;
    ecx = 0x64D970;
    PUSH32(esp, 0x000294F9u); RECOMP_ABI_CALL(0x0002A7D0u, sub_0002A7D0); /* call 0x0002A7D0 */

loc_000294F9: ;
    eax = MEM32(0x64D33C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002950B; /* je: equal / zero */

loc_00029502: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00029508u); RECOMP_ABI_CALL(0x0002A670u, sub_0002A670); /* call 0x0002A670 */

loc_00029508: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002950B: ;
    POP32(esp, edi);
    eax = esi;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_00029510
 * Original: 0x00029510 - 0x000295EA (218 bytes, 80 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029510(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00029510: ;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    PUSH32(esp, 1);
    PUSH32(esp, 0x65590);
    edi = esp + 0x18;
    esi = eax;
    PUSH32(esp, 0x00029527u); RECOMP_ABI_CALL(0x000BD740u, sub_000BD740); /* call 0x000BD740 */

loc_00029527: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0002952Fu); RECOMP_ABI_CALL(0x000BD9B0u, sub_000BD9B0); /* call 0x000BD9B0 */

loc_0002952F: ;
    eax = MEM32(0x64D21C);
    MEM32(0x34AC38) = eax;
    eax = MEM32(esp + 0x10);
    ebx = MEM32(eax + 0x14);
    ebp = MEM32(eax + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebx = ebx - 8;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_000295DB; /* ja: above (unsigned >) */

loc_0002954E: ;
    edi = edi;

loc_00029550: ;
    esi = MEM32(ebp);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000295CC; /* je: equal / zero */

loc_00029557: ;
    ecx = esi;
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000295CC; /* je: equal / zero */

loc_00029561: ;
    _fa = (uint32_t)(MEM8(esi + 0x1F)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1F), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000295CC; /* jne: not equal / not zero */

loc_00029567: ;
    _fa = (uint32_t)(MEM8(esi + 8)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 8), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000295CC; /* jne: not equal / not zero */

loc_0002956D: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00029573u); RECOMP_ABI_CALL(0x0001A990u, sub_0001A990); /* call 0x0001A990 */

loc_00029573: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    PUSH32(esp, 0x0002957Du); RECOMP_ABI_CALL(0x00081010u, sub_00081010); /* call 0x00081010 */

loc_0002957D: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(7) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 7 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002958D; /* je: equal / zero */

loc_00029584: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002958Au); RECOMP_ABI_CALL(0x00083550u, sub_00083550); /* call 0x00083550 */

loc_0002958A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002958D: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000295BC; /* je: equal / zero */

loc_00029592: ;
    edx = MEM32(esi + 0x14);
    edi = MEM32(edx);
    _fa = (uint32_t)(MEM8(edi)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(edi), 4 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_000295BC; /* jne: not equal / not zero */

loc_0002959C: ;
    eax = MEM32(0x34AC38);
    ecx = MEM32(edi + 4);
    edx = MEM32(edi + 0x18);
    PUSH32(esp, eax);
    eax = MEM32(edi + 0x14);
    PUSH32(esp, esi);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x000295B3u); RECOMP_ABI_CALL(0x0006C850u, sub_0006C850); /* call 0x0006C850 */

loc_000295B3: ;
    SET_LO8(eax, MEM8(edi));
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    SET_LO8(eax, LO8(eax) | 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    MEM8(edi) = LO8(eax);

loc_000295BC: ;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x000295C9u); RECOMP_ABI_CALL(0x00064D20u, sub_00064D20); /* call 0x00064D20 */

loc_000295C9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000295CC: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 8;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, ebx (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00029550; /* jbe: below or equal (unsigned <=) */

loc_000295D7: ;
    eax = MEM32(esp + 0x10);

loc_000295DB: ;
    PUSH32(esp, 0x000295E0u); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_000295E0: ;
    eax = MEM32(esp + 0x10);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_000295F0
 * Original: 0x000295F0 - 0x000299E0 (1008 bytes, 310 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000295F0(void)
{
    extern void sub_000295F0_enter(void);
    sub_000295F0_enter();
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000295F0: ;
    eax = 0x2004;
    PUSH32(esp, 0x000295FAu); RECOMP_ABI_CALL(0x0028A870u, sub_0028A870); /* call 0x0028A870 */

loc_000295FA: ;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x200C);
    eax = MEM32(ebp + 0x14);
    ecx = MEM32(ebp + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_A(_fa, _fb)) goto loc_0002962C; /* ja: above (unsigned >) */

loc_00029611: ;
    esi = MEM32(ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029625; /* je: equal / zero */

loc_00029617: ;
    edx = esi;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029625; /* je: equal / zero */

loc_00029621: ;
    MEM8(esi + 0x1F) = MEM8(esi + 0x1F) | 0x10;
    _fa = (uint32_t)(MEM8(esi + 0x1F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */

loc_00029625: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00029611; /* jbe: below or equal (unsigned <=) */

loc_0002962C: ;
    ecx = MEM32(ebx + 0x18);
    edx = MEM32(ebx + 0x1C);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + edx;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0xC) = eax;
    if ((_fa == 0)) goto loc_00029731; /* je: equal / zero */

loc_00029640: ;
    edx = MEM32(ebx + 0x20);
    esi = MEM32(edx + eax * 8);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002971C; /* je: equal / zero */

loc_0002964E: ;
    ecx = esi;
    SET_LO8(ecx, LO8(ecx) & 3);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002971C; /* je: equal / zero */

loc_0002965C: ;
    edx = MEM32(esi + 0x20);
    ecx = MEM32(esi + 0x24);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM32(esi + 0x20) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0002966D; /* jne: not equal / not zero */

loc_0002966A: ;
    MEM32(esi + 0x24) = ebx;

loc_0002966D: ;
    _fa = (uint32_t)(MEM8(esi + 0x1F)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x1F), 0x10 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002971C; /* jne: not equal / not zero */

loc_00029677: ;
    eax = ebp + 0x10;
    MEM32(esi + 0x24) = ebx;
    ecx = MEM32(eax + 0x10);
    edx = MEM32(eax + 4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_000296A3; /* jae: above or equal (unsigned >=) */

loc_00029689: ;
    /* nop */

loc_00029690: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002969E; /* je: equal / zero */

loc_00029694: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00029690; /* jb: below (unsigned <) */

loc_0002969C: ;
    goto loc_000296A3;

loc_0002969E: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000296AE; /* jne: not equal / not zero */

loc_000296A3: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    PUSH32(esp, 0x000296ABu); RECOMP_ABI_CALL(0x0001A770u, sub_0001A770); /* call 0x0001A770 */

loc_000296AB: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000296AE: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00029714; /* jne: not equal / not zero */

loc_000296B3: ;
    edi = ebp;
    PUSH32(esp, 0x000296BAu); RECOMP_ABI_CALL(0x00021810u, sub_00021810); /* call 0x00021810 */

loc_000296BA: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00029714; /* jne: not equal / not zero */

loc_000296BF: ;
    eax = MEM32(esi + 4);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_00029714; /* jne: not equal / not zero */

loc_000296C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x200000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x200000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_000296D3; /* je: equal / zero */

loc_000296CD: ;
    MEM8(esi + 0x1C) = 0;
    goto loc_00029714;

loc_000296D3: ;
    PUSH32(esp, esi);
    edi = ebp + 0x38;
    PUSH32(esp, 0x000296DCu); RECOMP_ABI_CALL(0x000BFB80u, sub_000BFB80); /* call 0x000BFB80 */

loc_000296DC: ;
    edx = MEM32(esi + 4);
    eax = MEM32(esi);
    edx = edx | 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0x10) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 0x10 (8-bit) */
    MEM32(esi + 4) = edx;
    if (TEST_Z(_fa, _fb)) goto loc_000296FB; /* je: equal / zero */

loc_000296EE: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + 0x64;
    PUSH32(esp, 0x000296F8u); RECOMP_ABI_CALL(0x0001A770u, sub_0001A770); /* call 0x0001A770 */

loc_000296F8: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_000296FB: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x40000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x40000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_00029714; /* je: equal / zero */

loc_00029704: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    eax = ebp + 0x80;
    PUSH32(esp, 0x00029711u); RECOMP_ABI_CALL(0x0001A770u, sub_0001A770); /* call 0x0001A770 */

loc_00029711: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00029714: ;
    MEM8(esi + 0x1F) = MEM8(esi + 0x1F) | 0x10;
    _fa = (uint32_t)(MEM8(esi + 0x1F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* or result */
    eax = MEM32(esp + 0xC);

loc_0002971C: ;
    edx = MEM32(ebx + 0x18);
    esi = MEM32(ebx + 0x1C);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_B(_fa, _fb)) goto loc_00029640; /* jb: below (unsigned <) */

loc_00029731: ;
    esi = ebx + 0x1D0;
    edi = ebp + 0x1D0;
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
    eax = MEM32(ebx + 0x17C);
    MEM32(ebp + 0x17C) = eax;
    ecx = MEM32(ebx + 0x5C4);
    MEM32(ebp + 0x5C4) = ecx;
    ecx = MEM32(ebp + 0x180);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000298BA; /* je: equal / zero */

loc_0002976A: ;
    eax = MEM32(ebx + 0x180);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edx = MEM32(ecx + 4);
    if (CMP_EQ(_fa, _fb)) goto loc_0002988D; /* je: equal / zero */

loc_0002977B: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_000297A6; /* jbe: below or equal (unsigned <=) */

loc_00029781: ;
    ecx = MEM32(ebp + 0x180);
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029798; /* je: equal / zero */

loc_0002978F: ;
    ecx = edx;
    ecx = MEM32(ecx + eax * 4);
    MEM32(ecx + 4) = MEM32(ecx + 4) | 4;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_00029798: ;
    edx = MEM32(ebp + 0x180);
    ecx = MEM32(edx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00029781; /* jb: below (unsigned <) */

loc_000297A6: ;
    eax = MEM32(ebp + 0x180);
    ecx = MEM32(ebx + 0x180);
    edi = MEM32(eax + 4);
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    eax = MEM32(ebp + 0x180);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029803; /* je: equal / zero */

loc_000297CA: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000297D8; /* jne: not equal / not zero */

loc_000297D3: ;
    PUSH32(esp, 0x000297D8u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000297D8: ;
    esi = MEM32(ebp + 0x180);
    edx = MEM32(esi + 4);
    ecx = MEM32(eax);
    esi = MEM32(esi);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0xC) = ecx;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000297F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000297F4u); } /* indirect call */
    }

loc_000297F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002985A; /* je: equal / zero */

loc_000297FB: ;
    ecx = MEM32(ebp + 0x180);
    MEM32(ecx) = eax;

loc_00029803: ;
    eax = MEM32(ebx + 0x180);
    edx = MEM32(eax + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00029841; /* jbe: below or equal (unsigned <=) */

loc_00029812: ;
    edx = edi * 4;
    /* nop */

loc_00029820: ;
    eax = MEM32(eax);
    esi = MEM32(ebp + 0x180);
    eax = MEM32(eax + ecx * 4);
    esi = MEM32(esi);
    MEM32(edx + esi) = eax;
    eax = MEM32(ebx + 0x180);
    esi = MEM32(eax + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00029820; /* jb: below (unsigned <) */

loc_00029841: ;
    edi = MEM32(ebx + 0x1C0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029850; /* je: equal / zero */

loc_0002984B: ;
    PUSH32(esp, 0x00029850u); RECOMP_ABI_CALL(0x0002EC30u, sub_0002EC30); /* call 0x0002EC30 */

loc_00029850: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2004) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2004;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002985A: ;
    PUSH32(esp, 0x322FB0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00029869u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_00029869: ;
    PUSH32(esp, 0x334D7C);
    eax = esp + 0x1014;
    ecx = 0x400;
    esi = esp + 0x14;
    edi = esp + 0x1014;
    PUSH32(esp, eax);
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
    PUSH32(esp, 0x0002988Du); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_0002988D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00029841; /* jbe: below or equal (unsigned <=) */

loc_00029893: ;
    ecx = MEM32(ebp + 0x180);
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000298AA; /* je: equal / zero */

loc_000298A1: ;
    ecx = edx;
    ecx = MEM32(ecx + eax * 4);
    MEM32(ecx + 4) = MEM32(ecx + 4) | 4;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000298AA: ;
    edx = MEM32(ebp + 0x180);
    ecx = MEM32(edx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00029893; /* jb: below (unsigned <) */

loc_000298B8: ;
    goto loc_00029841;

loc_000298BA: ;
    eax = MEM32(ebx + 0x180);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029841; /* je: equal / zero */

loc_000298C8: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029841; /* je: equal / zero */

loc_000298D3: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000298E1; /* jne: not equal / not zero */

loc_000298DC: ;
    PUSH32(esp, 0x000298E1u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000298E1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000298EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000298E7u); } /* indirect call */
    }

loc_000298EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000299A6; /* je: equal / zero */

loc_000298F2: ;
    MEM32(ebp + 0x180) = eax;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029906; /* jne: not equal / not zero */

loc_00029901: ;
    PUSH32(esp, 0x00029906u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00029906: ;
    ecx = MEM32(ebx + 0x180);
    edx = MEM32(ecx + 4);
    esi = MEM32(eax);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(esi + 4); PUSH32(esp, 0x0002991Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00029917u); } /* indirect call */
    }

loc_0002991A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029973; /* je: equal / zero */

loc_0002991E: ;
    edx = MEM32(ebp + 0x180);
    MEM32(edx) = eax;
    eax = MEM32(ebx + 0x180);
    edx = MEM32(eax + 4);
    ecx = MEM32(ebp + 0x180);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(ebx + 0x180);
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00029841; /* jbe: below or equal (unsigned <=) */

loc_0002994B: ;
    goto loc_00029950;

    /* nop */

loc_00029950: ;
    ecx = MEM32(ecx);
    edx = MEM32(ebp + 0x180);
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(edx);
    MEM32(edx + eax * 4) = ecx;
    ecx = MEM32(ebx + 0x180);
    edx = MEM32(ecx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00029950; /* jb: below (unsigned <) */

loc_0002996E: ;
    goto loc_00029841;

loc_00029973: ;
    PUSH32(esp, 0x322FB0);
    edx = esp + 0x1014;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00029985u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_00029985: ;
    PUSH32(esp, 0x334D7C);
    eax = esp + 0x14;
    ecx = 0x400;
    esi = esp + 0x1014;
    edi = esp + 0x14;
    PUSH32(esp, eax);
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
    PUSH32(esp, 0x000299A6u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_000299A6: ;
    PUSH32(esp, 0x322FB0);
    ecx = esp + 0x1014;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000299B8u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_000299B8: ;
    PUSH32(esp, 0x334D7C);
    edx = esp + 0x14;
    ecx = 0x400;
    esi = esp + 0x1014;
    edi = esp + 0x14;
    PUSH32(esp, edx);
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
    PUSH32(esp, 0x000299D9u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_000299D9: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000297B5
 * Original: 0x000297B5 - 0x000299E0 (555 bytes, 166 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000297B5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000297B5: ;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax + 4) = edx;
    eax = MEM32(ebp + 0x180);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029803; /* je: equal / zero */

loc_000297CA: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000297D8; /* jne: not equal / not zero */

loc_000297D3: ;
    PUSH32(esp, 0x000297D8u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000297D8: ;
    esi = MEM32(ebp + 0x180);
    edx = MEM32(esi + 4);
    ecx = MEM32(eax);
    esi = MEM32(esi);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, edx);
    ecx = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000297F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000297F4u); } /* indirect call */
    }

loc_000297F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002985A; /* je: equal / zero */

loc_000297FB: ;
    ecx = MEM32(ebp + 0x180);
    MEM32(ecx) = eax;

loc_00029803: ;
    eax = MEM32(ebx + 0x180);
    edx = MEM32(eax + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00029841; /* jbe: below or equal (unsigned <=) */

loc_00029812: ;
    edx = edi * 4;
    /* nop */

loc_00029820: ;
    eax = MEM32(eax);
    esi = MEM32(ebp + 0x180);
    eax = MEM32(eax + ecx * 4);
    esi = MEM32(esi);
    MEM32(edx + esi) = eax;
    eax = MEM32(ebx + 0x180);
    esi = MEM32(eax + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00029820; /* jb: below (unsigned <) */

loc_00029841: ;
    edi = MEM32(ebx + 0x1C0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029850; /* je: equal / zero */

loc_0002984B: ;
    PUSH32(esp, 0x00029850u); RECOMP_ABI_CALL(0x0002EC30u, sub_0002EC30); /* call 0x0002EC30 */

loc_00029850: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2004) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2004;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002985A: ;
    PUSH32(esp, 0x322FB0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00029869u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_00029869: ;
    PUSH32(esp, 0x334D7C);
    eax = esp + 0x1014;
    ecx = 0x400;
    esi = esp + 0x14;
    edi = esp + 0x1014;
    PUSH32(esp, eax);
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
    PUSH32(esp, 0x0002988Du); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_0002988D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00029841; /* jbe: below or equal (unsigned <=) */

loc_00029893: ;
    ecx = MEM32(ebp + 0x180);
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000298AA; /* je: equal / zero */

loc_000298A1: ;
    ecx = edx;
    ecx = MEM32(ecx + eax * 4);
    MEM32(ecx + 4) = MEM32(ecx + 4) | 4;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000298AA: ;
    edx = MEM32(ebp + 0x180);
    ecx = MEM32(edx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00029893; /* jb: below (unsigned <) */

loc_000298B8: ;
    goto loc_00029841;

    eax = MEM32(ebx + 0x180);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029841; /* je: equal / zero */

loc_000298C8: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029841; /* je: equal / zero */

loc_000298D3: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000298E1; /* jne: not equal / not zero */

loc_000298DC: ;
    PUSH32(esp, 0x000298E1u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000298E1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000298EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000298E7u); } /* indirect call */
    }

loc_000298EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000299A6; /* je: equal / zero */

loc_000298F2: ;
    MEM32(ebp + 0x180) = eax;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029906; /* jne: not equal / not zero */

loc_00029901: ;
    PUSH32(esp, 0x00029906u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00029906: ;
    ecx = MEM32(ebx + 0x180);
    edx = MEM32(ecx + 4);
    esi = MEM32(eax);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(esi + 4); PUSH32(esp, 0x0002991Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00029917u); } /* indirect call */
    }

loc_0002991A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029973; /* je: equal / zero */

loc_0002991E: ;
    edx = MEM32(ebp + 0x180);
    MEM32(edx) = eax;
    eax = MEM32(ebx + 0x180);
    edx = MEM32(eax + 4);
    ecx = MEM32(ebp + 0x180);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(ebx + 0x180);
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00029841; /* jbe: below or equal (unsigned <=) */

loc_0002994B: ;
    goto loc_00029950;

    /* nop */

loc_00029950: ;
    ecx = MEM32(ecx);
    edx = MEM32(ebp + 0x180);
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(edx);
    MEM32(edx + eax * 4) = ecx;
    ecx = MEM32(ebx + 0x180);
    edx = MEM32(ecx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00029950; /* jb: below (unsigned <) */

loc_0002996E: ;
    goto loc_00029841;

loc_00029973: ;
    PUSH32(esp, 0x322FB0);
    edx = esp + 0x1014;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00029985u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_00029985: ;
    PUSH32(esp, 0x334D7C);
    eax = esp + 0x14;
    ecx = 0x400;
    esi = esp + 0x1014;
    edi = esp + 0x14;
    PUSH32(esp, eax);
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
    PUSH32(esp, 0x000299A6u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_000299A6: ;
    PUSH32(esp, 0x322FB0);
    ecx = esp + 0x1014;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000299B8u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_000299B8: ;
    PUSH32(esp, 0x334D7C);
    edx = esp + 0x14;
    ecx = 0x400;
    esi = esp + 0x1014;
    edi = esp + 0x14;
    PUSH32(esp, edx);
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
    PUSH32(esp, 0x000299D9u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_000299D9: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000297BD
 * Original: 0x000297BD - 0x000299E0 (547 bytes, 163 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_000297BD(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_000297BD: ;
    eax = MEM32(ebp + 0x180);
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029803; /* je: equal / zero */

loc_000297CA: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000297D8; /* jne: not equal / not zero */

loc_000297D3: ;
    PUSH32(esp, 0x000297D8u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000297D8: ;
    esi = MEM32(ebp + 0x180);
    edx = MEM32(esi + 4);
    ecx = MEM32(eax);
    esi = MEM32(esi);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(esp + 0xC) = ecx;
    PUSH32(esp, edx);
    ecx = eax;
    eax = MEM32(esp + 0x10);
    PUSH32(esp, esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0x10); PUSH32(esp, 0x000297F7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000297F4u); } /* indirect call */
    }

loc_000297F7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002985A; /* je: equal / zero */

loc_000297FB: ;
    ecx = MEM32(ebp + 0x180);
    MEM32(ecx) = eax;

loc_00029803: ;
    eax = MEM32(ebx + 0x180);
    edx = MEM32(eax + 4);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00029841; /* jbe: below or equal (unsigned <=) */

loc_00029812: ;
    edx = edi * 4;
    /* nop */

loc_00029820: ;
    eax = MEM32(eax);
    esi = MEM32(ebp + 0x180);
    eax = MEM32(eax + ecx * 4);
    esi = MEM32(esi);
    MEM32(edx + esi) = eax;
    eax = MEM32(ebx + 0x180);
    esi = MEM32(eax + 4);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00029820; /* jb: below (unsigned <) */

loc_00029841: ;
    edi = MEM32(ebx + 0x1C0);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029850; /* je: equal / zero */

loc_0002984B: ;
    PUSH32(esp, 0x00029850u); RECOMP_ABI_CALL(0x0002EC30u, sub_0002EC30); /* call 0x0002EC30 */

loc_00029850: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    _fb = (uint32_t)(0x2004) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x2004;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002985A: ;
    PUSH32(esp, 0x322FB0);
    edx = esp + 0x14;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00029869u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_00029869: ;
    PUSH32(esp, 0x334D7C);
    eax = esp + 0x1014;
    ecx = 0x400;
    esi = esp + 0x14;
    edi = esp + 0x1014;
    PUSH32(esp, eax);
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
    PUSH32(esp, 0x0002988Du); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_0002988D: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00029841; /* jbe: below or equal (unsigned <=) */

loc_00029893: ;
    ecx = MEM32(ebp + 0x180);
    edx = MEM32(ecx);
    _fa = (uint32_t)(MEM32(edx + eax * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edx + eax * 4), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000298AA; /* je: equal / zero */

loc_000298A1: ;
    ecx = edx;
    ecx = MEM32(ecx + eax * 4);
    MEM32(ecx + 4) = MEM32(ecx + 4) | 4;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_000298AA: ;
    edx = MEM32(ebp + 0x180);
    ecx = MEM32(edx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00029893; /* jb: below (unsigned <) */

loc_000298B8: ;
    goto loc_00029841;

    eax = MEM32(ebx + 0x180);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029841; /* je: equal / zero */

loc_000298C8: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029841; /* je: equal / zero */

loc_000298D3: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_000298E1; /* jne: not equal / not zero */

loc_000298DC: ;
    PUSH32(esp, 0x000298E1u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_000298E1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 8);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 4); PUSH32(esp, 0x000298EAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x000298E7u); } /* indirect call */
    }

loc_000298EA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_000299A6; /* je: equal / zero */

loc_000298F2: ;
    MEM32(ebp + 0x180) = eax;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029906; /* jne: not equal / not zero */

loc_00029901: ;
    PUSH32(esp, 0x00029906u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00029906: ;
    ecx = MEM32(ebx + 0x180);
    edx = MEM32(ecx + 4);
    esi = MEM32(eax);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(esi + 4); PUSH32(esp, 0x0002991Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00029917u); } /* indirect call */
    }

loc_0002991A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029973; /* je: equal / zero */

loc_0002991E: ;
    edx = MEM32(ebp + 0x180);
    MEM32(edx) = eax;
    eax = MEM32(ebx + 0x180);
    edx = MEM32(eax + 4);
    ecx = MEM32(ebp + 0x180);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(ebx + 0x180);
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00029841; /* jbe: below or equal (unsigned <=) */

loc_0002994B: ;
    goto loc_00029950;

    /* nop */

loc_00029950: ;
    ecx = MEM32(ecx);
    edx = MEM32(ebp + 0x180);
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(edx);
    MEM32(edx + eax * 4) = ecx;
    ecx = MEM32(ebx + 0x180);
    edx = MEM32(ecx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00029950; /* jb: below (unsigned <) */

loc_0002996E: ;
    goto loc_00029841;

loc_00029973: ;
    PUSH32(esp, 0x322FB0);
    edx = esp + 0x1014;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00029985u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_00029985: ;
    PUSH32(esp, 0x334D7C);
    eax = esp + 0x14;
    ecx = 0x400;
    esi = esp + 0x1014;
    edi = esp + 0x14;
    PUSH32(esp, eax);
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
    PUSH32(esp, 0x000299A6u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_000299A6: ;
    PUSH32(esp, 0x322FB0);
    ecx = esp + 0x1014;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000299B8u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_000299B8: ;
    PUSH32(esp, 0x334D7C);
    edx = esp + 0x14;
    ecx = 0x400;
    esi = esp + 0x1014;
    edi = esp + 0x14;
    PUSH32(esp, edx);
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
    PUSH32(esp, 0x000299D9u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_000299D9: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00029901
 * Original: 0x00029901 - 0x000299E0 (223 bytes, 65 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029901(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00029901: ;
    PUSH32(esp, 0x00029906u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00029906: ;
    ecx = MEM32(ebx + 0x180);
    edx = MEM32(ecx + 4);
    esi = MEM32(eax);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(esi + 4); PUSH32(esp, 0x0002991Au); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00029917u); } /* indirect call */
    }

loc_0002991A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029973; /* je: equal / zero */

loc_0002991E: ;
    edx = MEM32(ebp + 0x180);
    MEM32(edx) = eax;
    eax = MEM32(ebx + 0x180);
    edx = MEM32(eax + 4);
    ecx = MEM32(ebp + 0x180);
    MEM32(ecx + 4) = edx;
    ecx = MEM32(ebx + 0x180);
    edx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) { g_seh_ebp = ebp; sub_00029841(); return; } /* jbe: below or equal (unsigned <=) */

loc_0002994B: ;
    goto loc_00029950;

    /* nop */

loc_00029950: ;
    ecx = MEM32(ecx);
    edx = MEM32(ebp + 0x180);
    ecx = MEM32(ecx + eax * 4);
    edx = MEM32(edx);
    MEM32(edx + eax * 4) = ecx;
    ecx = MEM32(ebx + 0x180);
    edx = MEM32(ecx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00029950; /* jb: below (unsigned <) */

loc_0002996E: ;
    g_seh_ebp = ebp; sub_00029841(); return; /* tail jmp 0x00029841 */

loc_00029973: ;
    PUSH32(esp, 0x322FB0);
    edx = esp + 0x1014;
    PUSH32(esp, edx);
    PUSH32(esp, 0x00029985u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_00029985: ;
    PUSH32(esp, 0x334D7C);
    eax = esp + 0x14;
    ecx = 0x400;
    esi = esp + 0x1014;
    edi = esp + 0x14;
    PUSH32(esp, eax);
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
    PUSH32(esp, 0x000299A6u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_000299A6: ;
    PUSH32(esp, 0x322FB0);
    ecx = esp + 0x1014;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x000299B8u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_000299B8: ;
    PUSH32(esp, 0x334D7C);
    edx = esp + 0x14;
    ecx = 0x400;
    esi = esp + 0x1014;
    edi = esp + 0x14;
    PUSH32(esp, edx);
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
    PUSH32(esp, 0x000299D9u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_000299D9: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_000299E0
 * Original: 0x000299E0 - 0x00029B80 (416 bytes, 139 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_000299E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_000299E0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x2004;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x000299F0u); RECOMP_ABI_CALL(0x0028A870u, sub_0028A870); /* call 0x0028A870 */

loc_000299F0: ;
    edx = MEM32(ebp + 8);
    eax = MEM32(edx + 0x14);
    xmm0 = XMM_SCALAR(MEMF(0x3337A0)); /* movss */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(edx + 0x20);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    esi = ecx;
    MEMF(edx + 0x28) = xmm0.f[0]; /* movss */
    MEM32(esp + 0xC) = eax;
    if (CMP_A(_fa, _fb)) goto loc_00029A6F; /* ja: above (unsigned >) */

loc_00029A16: ;
    ebx = MEM32(edi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029A64; /* je: equal / zero */

loc_00029A1C: ;
    eax = ebx;
    SET_LO8(eax, LO8(eax) & 3);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029A64; /* je: equal / zero */

loc_00029A24: ;
    ecx = MEM32(ebx + 0x20);
    ecx--;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    eax = ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(ebx + 0x20) = ecx;
    if (CMP_G(_fas, _fbs)) goto loc_00029A47; /* jg: greater (signed >) */

loc_00029A31: ;
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00029A37u); RECOMP_ABI_CALL(0x00021A40u, sub_00021A40); /* call 0x00021A40 */

loc_00029A37: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00029A41u); RECOMP_ABI_CALL(0x00026540u, sub_00026540); /* call 0x00026540 */

loc_00029A41: ;
    MEM8(ebx + 0x1F) = MEM8(ebx + 0x1F) & 0xEF;
    _fa = (uint32_t)(MEM8(ebx + 0x1F)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    goto loc_00029A61;

loc_00029A47: ;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00029A4Du); RECOMP_ABI_CALL(0x00021A40u, sub_00021A40); /* call 0x00021A40 */

loc_00029A4D: ;
    ecx = MEM32(ebp + 8);
    eax = MEM32(ebx + 0x24);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029A61; /* jne: not equal / not zero */

loc_00029A5A: ;
    MEM32(ebx + 0x24) = 0;

loc_00029A61: ;
    edx = MEM32(ebp + 8);

loc_00029A64: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 8;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00029A16; /* jbe: below or equal (unsigned <=) */

loc_00029A6F: ;
    eax = MEM32(edx + 0x180);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029B2C; /* je: equal / zero */

loc_00029A7D: ;
    ecx = MEM32(esi + 0x180);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029B2C; /* je: equal / zero */

loc_00029A8B: ;
    ebx = MEM32(eax + 4);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00029AEB; /* jbe: below or equal (unsigned <=) */

loc_00029A94: ;
    ebx = MEM32(ecx + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_00029ADD; /* jbe: below or equal (unsigned <=) */

loc_00029A9D: ;
    /* nop */

loc_00029AA0: ;
    ebx = MEM32(edx + 0x180);
    ecx = MEM32(ecx);
    ebx = MEM32(ebx);
    ecx = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx + edi * 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx + edi * 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029ACF; /* jne: not equal / not zero */

loc_00029AB2: ;
    ecx = MEM32(esi + 0x180);
    MEM32(ecx + 4) = MEM32(ecx + 4) - 1;
    _fa = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    ecx = MEM32(esi + 0x180);
    edx = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    ecx = MEM32(edx + ecx * 4);
    MEM32(edx + eax * 4) = ecx;
    edx = MEM32(ebp + 8);

loc_00029ACF: ;
    ecx = MEM32(esi + 0x180);
    ebx = MEM32(ecx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00029AA0; /* jb: below (unsigned <) */

loc_00029ADD: ;
    eax = MEM32(edx + 0x180);
    ebx = MEM32(eax + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_00029A94; /* jb: below (unsigned <) */

loc_00029AEB: ;
    ecx = MEM32(esi + 0x180);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029B2C; /* je: equal / zero */

loc_00029AF8: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029B06; /* jne: not equal / not zero */

loc_00029B01: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00029B06u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00029B06: ;
    ebx = MEM32(esi + 0x180);
    edx = MEM32(ebx + 4);
    ebx = MEM32(ebx);
    edi = MEM32(eax);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edi + 0x10); PUSH32(esp, 0x00029B1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00029B1Au); } /* indirect call */
    }

loc_00029B1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029B4A; /* je: equal / zero */

loc_00029B21: ;
    edx = MEM32(esi + 0x180);
    MEM32(edx) = eax;
    edx = MEM32(ebp + 8);

loc_00029B2C: ;
    eax = MEM32(edx + 0x1C0);
    _fb = (uint32_t)(0x1C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029B43; /* je: equal / zero */

loc_00029B3C: ;
    esi = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00029B43u); RECOMP_ABI_CALL(0x0002ED90u, sub_0002ED90); /* call 0x0002ED90 */

loc_00029B43: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00029B4A: ;
    PUSH32(esp, 0x322FB0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00029B59u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_00029B59: ;
    ecx = 0x400;
    esi = esp + 0x10;
    edi = esp + 0x1010;
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
    PUSH32(esp, 0x334D7C);
    ecx = esp + 0x1014;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x00029B7Du); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_00029B7D: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00029AC1
 * Original: 0x00029AC1 - 0x00029B80 (191 bytes, 64 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029AC1(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00029AC1: ;
    edx = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    ecx = MEM32(edx + ecx * 4);
    MEM32(edx + eax * 4) = ecx;
    edx = MEM32(ebp + 8);
    ecx = MEM32(esi + 0x180);
    ebx = MEM32(ecx + 4);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00029AA0(); return; } /* jb: below (unsigned <) */

loc_00029ADD: ;
    eax = MEM32(edx + 0x180);
    ebx = MEM32(eax + 4);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) { g_seh_ebp = ebp; sub_00029A94(); return; } /* jb: below (unsigned <) */

loc_00029AEB: ;
    ecx = MEM32(esi + 0x180);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029B2C; /* je: equal / zero */

loc_00029AF8: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029B06; /* jne: not equal / not zero */

loc_00029B01: ;
    PUSH32(esp, 0x00029B06u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_00029B06: ;
    ebx = MEM32(esi + 0x180);
    edx = MEM32(ebx + 4);
    ebx = MEM32(ebx);
    edi = MEM32(eax);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, ebx);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edi + 0x10); PUSH32(esp, 0x00029B1Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00029B1Au); } /* indirect call */
    }

loc_00029B1D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029B4A; /* je: equal / zero */

loc_00029B21: ;
    edx = MEM32(esi + 0x180);
    MEM32(edx) = eax;
    edx = MEM32(ebp + 8);

loc_00029B2C: ;
    eax = MEM32(edx + 0x1C0);
    _fb = (uint32_t)(0x1C0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edx = edx + 0x1C0;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029B43; /* je: equal / zero */

loc_00029B3C: ;
    esi = edx;
    PUSH32(esp, 0x00029B43u); RECOMP_ABI_CALL(0x0002ED90u, sub_0002ED90); /* call 0x0002ED90 */

loc_00029B43: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_00029B4A: ;
    PUSH32(esp, 0x322FB0);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00029B59u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_00029B59: ;
    ecx = 0x400;
    esi = esp + 0x10;
    edi = esp + 0x1010;
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
    PUSH32(esp, 0x334D7C);
    ecx = esp + 0x1014;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00029B7Du); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_00029B7D: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_00029B80
 * Original: 0x00029B80 - 0x00029CA6 (294 bytes, 89 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029B80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_00029B80: ;
    eax = MEM32(0x64D33C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (CMP_EQ(_fa, _fb)) goto loc_00029C34; /* je: equal / zero */

loc_00029B95: ;
    edi = MEM32(0x350D4C);
    eax = MEM32(edi + 0x4030);
    ebx = 1;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029BC9; /* je: equal / zero */

loc_00029BAA: ;
    /* nop */

loc_00029BB0: ;
    ecx = MEM32(edi + 0x402C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00029BBBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00029BB8u); } /* indirect call */
    }

loc_00029BBB: ;
    edi = MEM32(0x350D4C);
    _fa = (uint32_t)(MEM32(edi + 0x4030)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x4030), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029BB0; /* jne: not equal / not zero */

loc_00029BC9: ;
    PUSH32(esp, 0x00029BCEu); RECOMP_ABI_CALL(0x0002DE20u, sub_0002DE20); /* call 0x0002DE20 */

loc_00029BCE: ;
    eax = MEM32(0x350D4C);
    MEM32(eax + 0x4008) = ebp;
    MEM32(eax + 0x4034) = 0;
    eax = MEM32(eax + 0x402C);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x00029BF0u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00029BEDu); } /* indirect call */
    }

loc_00029BF0: ;
    esi = MEM32(0x350D4C);
    _fa = (uint32_t)(MEM32(esi + 0x4030)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4030), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029C19; /* je: equal / zero */

loc_00029BFE: ;
    edi = edi;

loc_00029C00: ;
    ecx = MEM32(esi + 0x402C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x00029C0Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x00029C08u); } /* indirect call */
    }

loc_00029C0B: ;
    esi = MEM32(0x350D4C);
    _fa = (uint32_t)(MEM32(esi + 0x4030)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esi + 0x4030), ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029C00; /* jne: not equal / not zero */

loc_00029C19: ;
    ecx = ebp;
    MEM32(esi + 0x4034) = ebx;
    PUSH32(esp, 0x00029C26u); RECOMP_ABI_CALL(0x0002DB80u, sub_0002DB80); /* call 0x0002DB80 */

loc_00029C26: ;
    eax = MEM32(0x350D4C);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_0002DEF0(); return; /* tail jmp 0x0002DEF0 */

loc_00029C34: ;
    PUSH32(esp, 0);
    PUSH32(esp, ebp);
    PUSH32(esp, 0);
    PUSH32(esp, 0x00029C3Eu); RECOMP_ABI_CALL(0x00029CB0u, sub_00029CB0); /* call 0x00029CB0 */

loc_00029C3E: ;
    esi = MEM32(0x350D48);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, esi);
    eax = 0x493610;
    PUSH32(esp, 0x00029C52u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00029C52: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029C68; /* je: equal / zero */

loc_00029C5F: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029C72; /* je: equal / zero */

loc_00029C68: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029C79; /* je: equal / zero */

loc_00029C72: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00029C7B; /* je: equal / zero */

loc_00029C79: ;
    ecx = eax;

loc_00029C7B: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029C9F; /* je: equal / zero */

loc_00029C80: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(esp + 4) = ecx;
    g_seh_ebp = ebp; sub_000C0F60(); return; /* tail jmp 0x000C0F60 */

loc_00029C9F: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_00029CB0
 * Original: 0x00029CB0 - 0x0002A591 (2273 bytes, 642 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029CB0(void)
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

loc_00029CB0: ;
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    PUSH32(esp, ebx);
    MEM32(esp + 0x38) = eax;
    eax = MEM32(0x64D918);
    PUSH32(esp, ebp);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fca = xmm0.f[0]; _fcb = MEMF(0x33A200); /* comiss */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D918) = eax;
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00029CE2; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x33A200)) */

loc_00029CD7: ;
    PUSH32(esp, 0x00029CDCu); RECOMP_ABI_CALL(0x000113D0u, sub_000113D0); /* call 0x000113D0 */

loc_00029CDC: ;
    MEMF(0x33A200) = (float)fp_top(); fp_pop(); /* fstp */

loc_00029CE2: ;
    eax = MEM32(0x3441FC);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029D5B; /* jne: not equal / not zero */

loc_00029CED: ;
    eax = MEM32(esp + 0x50);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00029CF7u); RECOMP_ABI_CALL(0x00029B80u, sub_00029B80); /* call 0x00029B80 */

loc_00029CF7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x00029CFFu); RECOMP_ABI_CALL(0x000113D0u, sub_000113D0); /* call 0x000113D0 */

loc_00029CFF: ;
    MEMF(0x34A76C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x64D918) = MEM32(0x64D918) - 1;
    _fa = (uint32_t)(MEM32(0x64D918)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_00029D45; /* jne: not equal / not zero */

loc_00029D0D: ;
    xmm0 = XMM_SCALAR(MEMF(0x33A200)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00029D45; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3337C0)) */

loc_00029D1E: ;
    PUSH32(esp, 0x00029D23u); RECOMP_ABI_CALL(0x000113D0u, sub_000113D0); /* call 0x000113D0 */

loc_00029D23: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x33A200)); /* fsub dword ptr [0x33a200] */
    xmm0 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    MEMF(0x33A200) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x64D014)); /* fadd dword ptr [0x64d014] */
    MEMF(0x64D014) = (float)fp_top(); fp_pop(); /* fstp */

loc_00029D45: ;
    eax = MEM32(0x64D21C);
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0x00029D53u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_00029D53: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_00029D5B: ;
    edx = MEM32(0x64D1F8);
    eax = MEM32(0x34A760);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    MEM32(0x3441FC) = edi;
    MEM32(0x64D1F8) = edx;
    MEM32(0x64D1F4) = 1;
    if (CMP_EQ(_fa, _fb)) goto loc_00029DA1; /* je: equal / zero */

loc_00029D81: ;
    ecx = MEM32(eax + 0x488);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    esi = eax + 0x488;
    if (CMP_EQ(_fa, _fb)) goto loc_00029DA1; /* je: equal / zero */

loc_00029D91: ;
    PUSH32(esp, eax);
    MEM32(0x64D29C) = eax;
    PUSH32(esp, 0x00029D9Cu); RECOMP_ABI_CALL(0x0008B4B0u, sub_0008B4B0); /* call 0x0008B4B0 */

loc_00029D9C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edi;

loc_00029DA1: ;
    PUSH32(esp, 0x00029DA6u); RECOMP_ABI_CALL(0x00088DF0u, sub_00088DF0); /* call 0x00088DF0 */

loc_00029DA6: ;
    PUSH32(esp, 0x00029DABu); RECOMP_ABI_CALL(0x0008BB40u, sub_0008BB40); /* call 0x0008BB40 */

loc_00029DAB: ;
    MEM32(0x370380) = edi;
    PUSH32(esp, 0x00029DB6u); RECOMP_ABI_CALL(0x0008FFC0u, sub_0008FFC0); /* call 0x0008FFC0 */

loc_00029DB6: ;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x00029DBFu); RECOMP_ABI_CALL(0x00056380u, sub_00056380); /* call 0x00056380 */

loc_00029DBF: ;
    MEM32(0x64D908) = edi;
    PUSH32(esp, 0x00029DCAu); RECOMP_ABI_CALL(0x000BE3F0u, sub_000BE3F0); /* call 0x000BE3F0 */

loc_00029DCA: ;
    _fa = (uint32_t)(MEM32(0x3441F8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3441F8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029DDD; /* je: equal / zero */

loc_00029DD2: ;
    PUSH32(esp, 0x00029DD7u); RECOMP_ABI_CALL(0x000F8450u, sub_000F8450); /* call 0x000F8450 */

loc_00029DD7: ;
    MEM32(0x3441F8) = edi;

loc_00029DDD: ;
    esi = esp + 0x1C;
    PUSH32(esp, 0x00029DE6u); RECOMP_ABI_CALL(0x00019C40u, sub_00019C40); /* call 0x00019C40 */

loc_00029DE6: ;
    eax = esp + 0x28;
    PUSH32(esp, 0x00029DEFu); RECOMP_ABI_CALL(0x000188D0u, sub_000188D0); /* call 0x000188D0 */

loc_00029DEF: ;
    SET_LO8(eax, MEM8(esp + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(esp + 0x50);
    if (CMP_NE(_fa, _fb)) goto loc_00029E0D; /* jne: not equal / not zero */

loc_00029DFB: ;
    PUSH32(esp, edi);
    eax = esi;
    MEM8(0x64D3A0) = 1;
    PUSH32(esp, 0x00029E0Au); RECOMP_ABI_CALL(0x000BD7B0u, sub_000BD7B0); /* call 0x000BD7B0 */

loc_00029E0A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00029E0D: ;
    PUSH32(esp, 1);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00029E1Au); RECOMP_ABI_CALL(0x00029240u, sub_00029240); /* call 0x00029240 */

loc_00029E1A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x350D48) = eax;
    PUSH32(esp, 0x00029E27u); RECOMP_ABI_CALL(0x000BD960u, sub_000BD960); /* call 0x000BD960 */

loc_00029E27: ;
    ecx = MEM32(0x64D974);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    edx = MEM32(esp + 0x24);
    MEM8(0x64D3A0) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00029E4A; /* je: equal / zero */

loc_00029E3C: ;
    eax = MEM32(0x64D978);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00029E4C; /* ja: above (unsigned >) */

loc_00029E4A: ;
    eax = edx;

loc_00029E4C: ;
    edx = eax;
    ecx = esp + 0x28;
    PUSH32(esp, 0x00029E57u); RECOMP_ABI_CALL(0x0002A7D0u, sub_0002A7D0); /* call 0x0002A7D0 */

loc_00029E57: ;
    eax = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x2C);
    ecx = MEM32(eax);
    edx = MEM32(0x64D978);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(0x64D974);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00029E7Bu); RECOMP_ABI_CALL(0x0002AB20u, sub_0002AB20); /* call 0x0002AB20 */

loc_00029E7B: ;
    ebp = MEM32(eax);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    ebx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00029F5F; /* je: equal / zero */

loc_00029E8A: ;
    /* nop */

loc_00029E90: ;
    esi = MEM32(ebx);
    PUSH32(esp, esi);
    eax = 0x493610;
    PUSH32(esp, 0x00029E9Du); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00029E9D: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029EB3; /* je: equal / zero */

loc_00029EAA: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029EBD; /* je: equal / zero */

loc_00029EB3: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029EC4; /* je: equal / zero */

loc_00029EBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00029EC6; /* je: equal / zero */

loc_00029EC4: ;
    ecx = eax;

loc_00029EC6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029F54; /* je: equal / zero */

loc_00029ECF: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00029EE7u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00029EE7: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x18) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00029F54; /* je: equal / zero */

loc_00029EF5: ;
    ecx = MEM32(0x64D21C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00029F01u); RECOMP_ABI_CALL(0x000299E0u, sub_000299E0); /* call 0x000299E0 */

loc_00029F01: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x00029F0Bu); RECOMP_ABI_CALL(0x00013330u, sub_00013330); /* call 0x00013330 */

loc_00029F0B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00029F11u); RECOMP_ABI_CALL(0x000BDB60u, sub_000BDB60); /* call 0x000BDB60 */

loc_00029F11: ;
    eax = MEM32(0x64D974);
    ecx = MEM32(ebx);
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029F2B; /* je: equal / zero */

loc_00029F21: ;
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029F21; /* jne: not equal / not zero */

loc_00029F2B: ;
    edx = MEM32(0x64D978);
    ecx = eax + 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00029F44u); RECOMP_ABI_CALL(0x0028AA50u, sub_0028AA50); /* call 0x0028AA50 */

loc_00029F44: ;
    eax = MEM32(0x64D978);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D978) = eax;

loc_00029F54: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029E90; /* jne: not equal / not zero */

loc_00029F5F: ;
    edx = MEM32(0x64D978);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    edx = MEM32(0x64D974);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00029F80u); RECOMP_ABI_CALL(0x0002AB90u, sub_0002AB90); /* call 0x0002AB90 */

loc_00029F80: ;
    ebp = MEM32(eax);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A0D0; /* je: equal / zero */

loc_00029F8D: ;
    /* nop */

loc_00029F90: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(MEM32(0x350D48)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x350D48), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A0C5; /* je: equal / zero */

loc_00029F9E: ;
    PUSH32(esp, esi);
    eax = 0x493610;
    PUSH32(esp, 0x00029FA9u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00029FA9: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029FBF; /* je: equal / zero */

loc_00029FB6: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029FC9; /* je: equal / zero */

loc_00029FBF: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029FD0; /* je: equal / zero */

loc_00029FC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00029FD2; /* je: equal / zero */

loc_00029FD0: ;
    ecx = eax;

loc_00029FD2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A0C5; /* je: equal / zero */

loc_00029FDB: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00029FF3u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00029FF3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0002A0C5; /* jne: not equal / not zero */

loc_0002A003: ;
    eax = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002A00Cu); RECOMP_ABI_CALL(0x000BD7B0u, sub_000BD7B0); /* call 0x000BD7B0 */

loc_0002A00C: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0002A016u); RECOMP_ABI_CALL(0x00029510u, sub_00029510); /* call 0x00029510 */

loc_0002A016: ;
    ebx = eax;
    eax = MEM32(0x64D21C);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x0002A027u); RECOMP_ABI_CALL(0x000295F0u, sub_000295F0); /* call 0x000295F0 */

loc_0002A027: ;
    ecx = MEM32(0x64D29C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002A037u); RECOMP_ABI_CALL(0x00088570u, sub_00088570); /* call 0x00088570 */

loc_0002A037: ;
    eax = MEM32(0x64D33C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A07B; /* je: equal / zero */

loc_0002A045: ;
    _fa = (uint32_t)(MEM32(0x64D3A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A075; /* je: equal / zero */

loc_0002A04D: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A075; /* jne: not equal / not zero */

loc_0002A056: ;
    esi = MEM32(0x64D3D4);
    MEM32(0x64D3A8) = ebx;
    MEM32(0x64D3BC) = ebx;
    ebx = MEM32(0x64D940);
    PUSH32(esp, 0x0002A073u); RECOMP_ABI_CALL(0x00275D30u, sub_00275D30); /* call 0x00275D30 */

loc_0002A073: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002A075: ;
    MEM32(0x64D3A4) = ebx;

loc_0002A07B: ;
    edx = edi;
    esi = 0x64D970;
    PUSH32(esp, 0x0002A087u); RECOMP_ABI_CALL(0x00060880u, sub_00060880); /* call 0x00060880 */

loc_0002A087: ;
    _fa = (uint32_t)(MEM32(0x64D33C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D33C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A0C5; /* je: equal / zero */

loc_0002A08F: ;
    eax = MEM32(0x350D4C);
    edx = MEM32(edi);
    esi = eax;
    ecx = eax + 0x4044;
    eax = esp + 0x14;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x0002A0ABu); RECOMP_ABI_CALL(0x0002E0B0u, sub_0002E0B0); /* call 0x0002E0B0 */

loc_0002A0AB: ;
    MEM32(eax) = 1;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x4020);
    ebx = esp + 0x18;
    PUSH32(esp, 0x0002A0C5u); RECOMP_ABI_CALL(0x0002A6F0u, sub_0002A6F0); /* call 0x0002A6F0 */

loc_0002A0C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029F90; /* jne: not equal / not zero */

loc_0002A0D0: ;
    esi = MEM32(0x350D48);
    PUSH32(esp, esi);
    eax = 0x493610;
    PUSH32(esp, 0x0002A0E1u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002A0E1: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A0F7; /* je: equal / zero */

loc_0002A0EE: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A101; /* je: equal / zero */

loc_0002A0F7: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A108; /* je: equal / zero */

loc_0002A101: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A10A; /* je: equal / zero */

loc_0002A108: ;
    ecx = eax;

loc_0002A10A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A256; /* je: equal / zero */

loc_0002A113: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002A12Bu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002A12B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0002A256; /* jne: not equal / not zero */

loc_0002A13B: ;
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0x0002A144u); RECOMP_ABI_CALL(0x000BD7B0u, sub_000BD7B0); /* call 0x000BD7B0 */

loc_0002A144: ;
    eax = MEM32(0x350D48);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0002A151u); RECOMP_ABI_CALL(0x00029510u, sub_00029510); /* call 0x00029510 */

loc_0002A151: ;
    ebx = eax;
    eax = MEM32(0x64D21C);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x0002A162u); RECOMP_ABI_CALL(0x000295F0u, sub_000295F0); /* call 0x000295F0 */

loc_0002A162: ;
    ecx = MEM32(0x64D29C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002A172u); RECOMP_ABI_CALL(0x00088570u, sub_00088570); /* call 0x00088570 */

loc_0002A172: ;
    eax = MEM32(0x64D33C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A1B6; /* je: equal / zero */

loc_0002A180: ;
    _fa = (uint32_t)(MEM32(0x64D3A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A1B0; /* je: equal / zero */

loc_0002A188: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A1B0; /* jne: not equal / not zero */

loc_0002A191: ;
    esi = MEM32(0x64D3D4);
    MEM32(0x64D3A8) = ebx;
    MEM32(0x64D3BC) = ebx;
    ebx = MEM32(0x64D940);
    PUSH32(esp, 0x0002A1AEu); RECOMP_ABI_CALL(0x00275D30u, sub_00275D30); /* call 0x00275D30 */

loc_0002A1AE: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002A1B0: ;
    MEM32(0x64D3A4) = ebx;

loc_0002A1B6: ;
    esi = MEM32(0x64D974);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    eax = MEM32(0x64D978);
    if (CMP_EQ(_fa, _fb)) goto loc_0002A203; /* je: equal / zero */

loc_0002A1C5: ;
    edx = MEM32(0x64D97C);
    ecx = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002A203; /* jae: above or equal (unsigned >=) */

loc_0002A1DB: ;
    MEM8(esp + 0x14) = LO8(ebx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = 0x350D48;
    ecx = 1;
    esi = eax;
    PUSH32(esp, 0x0002A1F5u); RECOMP_ABI_CALL(0x00018BE0u, sub_00018BE0); /* call 0x00018BE0 */

loc_0002A1F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D978) = esi;
    goto loc_0002A215;

loc_0002A203: ;
    PUSH32(esp, 0x350D48);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64D970);
    PUSH32(esp, 0x0002A215u); RECOMP_ABI_CALL(0x000188E0u, sub_000188E0); /* call 0x000188E0 */

loc_0002A215: ;
    _fa = (uint32_t)(MEM32(0x64D33C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D33C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A256; /* je: equal / zero */

loc_0002A21D: ;
    eax = MEM32(0x350D48);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x350D4C);
    esi = eax;
    ecx = eax + 0x4044;
    eax = esp + 0x14;
    PUSH32(esp, 0x0002A23Cu); RECOMP_ABI_CALL(0x0002E0B0u, sub_0002E0B0); /* call 0x0002E0B0 */

loc_0002A23C: ;
    ecx = esp + 0x38;
    MEM32(eax) = 1;
    eax = MEM32(esi + 0x4020);
    PUSH32(esp, ecx);
    ebx = esp + 0x18;
    PUSH32(esp, 0x0002A256u); RECOMP_ABI_CALL(0x0002A6F0u, sub_0002A6F0); /* call 0x0002A6F0 */

loc_0002A256: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A340; /* jne: not equal / not zero */

loc_0002A263: ;
    SET_LO8(eax, MEM8(0x64CFB9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A340; /* jne: not equal / not zero */

loc_0002A270: ;
    eax = MEM32(0x33A378);
    ebx = MEM32(esp + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A340; /* je: equal / zero */

loc_0002A281: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A2F3; /* je: equal / zero */

loc_0002A286: ;
    PUSH32(esp, eax);
    edx = esp + 0x3C;
    PUSH32(esp, 0x323170);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002A296u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_0002A296: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x38;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002A2A5u); RECOMP_ABI_CALL(0x000C79E0u, sub_000C79E0); /* call 0x000C79E0 */

loc_0002A2A5: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x44;
    PUSH32(esp, 0x323170);
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x0002A2B7u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_0002A2B7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x38;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002A2C6u); RECOMP_ABI_CALL(0x000C7980u, sub_000C7980); /* call 0x000C7980 */

loc_0002A2C6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0x0002A2D0u); RECOMP_ABI_CALL(0x000C7A80u, sub_000C7A80); /* call 0x000C7A80 */

loc_0002A2D0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002A2D6u); RECOMP_ABI_CALL(0x000C79B0u, sub_000C79B0); /* call 0x000C79B0 */

loc_0002A2D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A2EC; /* je: equal / zero */

loc_0002A2DE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002A2E4u); RECOMP_ABI_CALL(0x000C7A10u, sub_000C7A10); /* call 0x000C7A10 */

loc_0002A2E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A33A; /* jne: not equal / not zero */

loc_0002A2EC: ;
    PUSH32(esp, 0x0002A2F1u); RECOMP_ABI_CALL(0x000C7A40u, sub_000C7A40); /* call 0x000C7A40 */

loc_0002A2F1: ;
    goto loc_0002A2D0;

loc_0002A2F3: ;
    PUSH32(esp, ebx);
    eax = esp + 0x3C;
    PUSH32(esp, 0x323170);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002A303u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_0002A303: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x38;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002A312u); RECOMP_ABI_CALL(0x000C7980u, sub_000C7980); /* call 0x000C7980 */

loc_0002A312: ;
    esi = eax;
    PUSH32(esp, 0x0002A319u); RECOMP_ABI_CALL(0x000C7A80u, sub_000C7A80); /* call 0x000C7A80 */

loc_0002A319: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002A31Fu); RECOMP_ABI_CALL(0x000C79B0u, sub_000C79B0); /* call 0x000C79B0 */

loc_0002A31F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A33A; /* jne: not equal / not zero */

loc_0002A327: ;
    PUSH32(esp, 0x0002A32Cu); RECOMP_ABI_CALL(0x000C7A40u, sub_000C7A40); /* call 0x000C7A40 */

loc_0002A32C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002A332u); RECOMP_ABI_CALL(0x000C79B0u, sub_000C79B0); /* call 0x000C79B0 */

loc_0002A332: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A327; /* je: equal / zero */

loc_0002A33A: ;
    MEM32(0x33A378) = ebx;

loc_0002A340: ;
    eax = MEM32(0x614FCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A350; /* je: equal / zero */

loc_0002A349: ;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x24) = edx;

loc_0002A350: ;
    ecx = MEM32(0x64D978);
    eax = MEM32(0x64D974);
    edx = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002A36Au); RECOMP_ABI_CALL(0x0002AC10u, sub_0002AC10); /* call 0x0002AC10 */

loc_0002A36A: ;
    eax = MEM32(0x64D21C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x34AC38) = eax;
    PUSH32(esp, 0x0002A37Cu); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_0002A37C: ;
    eax = MEM32(0x64D21C);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = 1;
    MEM32(eax + 0xC) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0002A3B4; /* jne: not equal / not zero */

loc_0002A38F: ;
    esi = esp + 0x28;
    PUSH32(esp, 0x0002A398u); RECOMP_ABI_CALL(0x00016A20u, sub_00016A20); /* call 0x00016A20 */

loc_0002A398: ;
    eax = esp + 0x1C;
    PUSH32(esp, 0x0002A3A1u); RECOMP_ABI_CALL(0x00019B40u, sub_00019B40); /* call 0x00019B40 */

loc_0002A3A1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0x0002A3ACu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_0002A3AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002A3B4: ;
    esi = MEM32(0x350D48);
    PUSH32(esp, esi);
    eax = 0x493610;
    PUSH32(esp, 0x0002A3C5u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002A3C5: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A3DB; /* je: equal / zero */

loc_0002A3D2: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A3E5; /* je: equal / zero */

loc_0002A3DB: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A3EC; /* je: equal / zero */

loc_0002A3E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A3EE; /* je: equal / zero */

loc_0002A3EC: ;
    ecx = eax;

loc_0002A3EE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A473; /* je: equal / zero */

loc_0002A3F7: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002A40Fu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002A40F: ;
    esi = MEM32(eax + 0x5D8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    MEM32(0x33A3BC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A473; /* je: equal / zero */

loc_0002A423: ;
    PUSH32(esp, 0x0002A428u); RECOMP_ABI_CALL(0x00056380u, sub_00056380); /* call 0x00056380 */

loc_0002A428: ;
    eax = MEM32(0x64D33C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A46E; /* je: equal / zero */

loc_0002A433: ;
    ecx = MEM32(0x34AC10);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = esi;
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0);
    eax = eax | 0xFD000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x0002A45Du); RECOMP_ABI_CALL(0x000BD7B0u, sub_000BD7B0); /* call 0x000BD7B0 */

loc_0002A45D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x0002A467u); RECOMP_ABI_CALL(0x00056210u, sub_00056210); /* call 0x00056210 */

loc_0002A467: ;
    PUSH32(esp, 0x0002A46Cu); RECOMP_ABI_CALL(0x000BD960u, sub_000BD960); /* call 0x000BD960 */

loc_0002A46C: ;
    goto loc_0002A473;

loc_0002A46E: ;
    PUSH32(esp, 0x0002A473u); RECOMP_ABI_CALL(0x00056210u, sub_00056210); /* call 0x00056210 */

loc_0002A473: ;
    eax = MEM32(0x64D288);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A486; /* je: equal / zero */

loc_0002A47C: ;
    MEM32(0x64D288) = 0;

loc_0002A486: ;
    eax = MEM32(edi + 0x30);
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A49D; /* je: equal / zero */

loc_0002A493: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x23);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0002A49Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0002A497u); } /* indirect call */
    }

loc_0002A49A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002A49D: ;
    eax = edi;
    MEM32(0x64D004) = ebx;
    PUSH32(esp, 0x0002A4AAu); RECOMP_ABI_CALL(0x00064C30u, sub_00064C30); /* call 0x00064C30 */

loc_0002A4AA: ;
    PUSH32(esp, 0x0002A4AFu); RECOMP_ABI_CALL(0x000F84E0u, sub_000F84E0); /* call 0x000F84E0 */

loc_0002A4AF: ;
    PUSH32(esp, 0x0002A4B4u); RECOMP_ABI_CALL(0x000C0190u, sub_000C0190); /* call 0x000C0190 */

loc_0002A4B4: ;
    ecx = MEM32(0x64D1DC);
    eax = MEM32(ecx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A4D1; /* je: equal / zero */

loc_0002A4C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A4D1; /* je: equal / zero */

loc_0002A4C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A4D1; /* je: equal / zero */

loc_0002A4CB: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002A4D1u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_0002A4D1: ;
    eax = MEM32(0x34A760);
    MEM32(0x34A75C) = edi;
    PUSH32(esp, 0x0002A4E1u); RECOMP_ABI_CALL(0x00012780u, sub_00012780); /* call 0x00012780 */

loc_0002A4E1: ;
    ecx = MEM32(edi + 0x20);
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002A50A; /* jae: above or equal (unsigned >=) */

loc_0002A4EB: ;
    ebp = 0x40000;

loc_0002A4F0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A503; /* je: equal / zero */

loc_0002A4F6: ;
    edx = eax;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A503; /* je: equal / zero */

loc_0002A500: ;
    MEM32(eax + 4) = MEM32(eax + 4) | ebp;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0002A503: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002A4F0; /* jb: below (unsigned <) */

loc_0002A50A: ;
    eax = MEM32(0x64D29C);
    eax = MEM32(eax + 0x430);
    ecx = eax + 0x7D8;
    MEM32(eax + 0xF238) = ecx;
    PUSH32(esp, 0x0002A526u); RECOMP_ABI_CALL(0x000113D0u, sub_000113D0); /* call 0x000113D0 */

loc_0002A526: ;
    MEMF(0x34A76C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x64D918) = MEM32(0x64D918) - 1;
    _fa = (uint32_t)(MEM32(0x64D918)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002A56C; /* jne: not equal / not zero */

loc_0002A534: ;
    xmm0 = XMM_SCALAR(MEMF(0x33A200)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002A56C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3337C0)) */

loc_0002A545: ;
    PUSH32(esp, 0x0002A54Au); RECOMP_ABI_CALL(0x000113D0u, sub_000113D0); /* call 0x000113D0 */

loc_0002A54A: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x33A200)); /* fsub dword ptr [0x33a200] */
    xmm0 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    MEMF(0x33A200) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x64D014)); /* fadd dword ptr [0x64d014] */
    MEMF(0x64D014) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002A56C: ;
    esi = esp + 0x28;
    PUSH32(esp, 0x0002A575u); RECOMP_ABI_CALL(0x00016A20u, sub_00016A20); /* call 0x00016A20 */

loc_0002A575: ;
    eax = esp + 0x1C;
    PUSH32(esp, 0x0002A57Eu); RECOMP_ABI_CALL(0x00019B40u, sub_00019B40); /* call 0x00019B40 */

loc_0002A57E: ;
    ecx = MEM32(esp + 0x44);
    eax = edi;
    PUSH32(esp, 0x0002A589u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_0002A589: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_00029D0D
 * Original: 0x00029D0D - 0x0002A591 (2180 bytes, 615 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029D0D(void)
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

loc_00029D0D: ;
    xmm0 = XMM_SCALAR(MEMF(0x33A200)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_00029D45; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3337C0)) */

loc_00029D1E: ;
    PUSH32(esp, 0x00029D23u); RECOMP_ABI_CALL(0x000113D0u, sub_000113D0); /* call 0x000113D0 */

loc_00029D23: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x33A200)); /* fsub dword ptr [0x33a200] */
    xmm0 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    MEMF(0x33A200) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x64D014)); /* fadd dword ptr [0x64d014] */
    MEMF(0x64D014) = (float)fp_top(); fp_pop(); /* fstp */

loc_00029D45: ;
    eax = MEM32(0x64D21C);
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0x00029D53u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_00029D53: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    ecx = MEM32(eax + 0x488);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    esi = eax + 0x488;
    if (CMP_EQ(_fa, _fb)) goto loc_00029DA1; /* je: equal / zero */

loc_00029D91: ;
    PUSH32(esp, eax);
    MEM32(0x64D29C) = eax;
    PUSH32(esp, 0x00029D9Cu); RECOMP_ABI_CALL(0x0008B4B0u, sub_0008B4B0); /* call 0x0008B4B0 */

loc_00029D9C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi) = edi;

loc_00029DA1: ;
    PUSH32(esp, 0x00029DA6u); RECOMP_ABI_CALL(0x00088DF0u, sub_00088DF0); /* call 0x00088DF0 */

loc_00029DA6: ;
    PUSH32(esp, 0x00029DABu); RECOMP_ABI_CALL(0x0008BB40u, sub_0008BB40); /* call 0x0008BB40 */

loc_00029DAB: ;
    MEM32(0x370380) = edi;
    PUSH32(esp, 0x00029DB6u); RECOMP_ABI_CALL(0x0008FFC0u, sub_0008FFC0); /* call 0x0008FFC0 */

loc_00029DB6: ;
    MEM32(esp + 0x18) = edi;
    PUSH32(esp, 0x00029DBFu); RECOMP_ABI_CALL(0x00056380u, sub_00056380); /* call 0x00056380 */

loc_00029DBF: ;
    MEM32(0x64D908) = edi;
    PUSH32(esp, 0x00029DCAu); RECOMP_ABI_CALL(0x000BE3F0u, sub_000BE3F0); /* call 0x000BE3F0 */

loc_00029DCA: ;
    _fa = (uint32_t)(MEM32(0x3441F8)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x3441F8), edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029DDD; /* je: equal / zero */

loc_00029DD2: ;
    PUSH32(esp, 0x00029DD7u); RECOMP_ABI_CALL(0x000F8450u, sub_000F8450); /* call 0x000F8450 */

loc_00029DD7: ;
    MEM32(0x3441F8) = edi;

loc_00029DDD: ;
    esi = esp + 0x1C;
    PUSH32(esp, 0x00029DE6u); RECOMP_ABI_CALL(0x00019C40u, sub_00019C40); /* call 0x00019C40 */

loc_00029DE6: ;
    eax = esp + 0x28;
    PUSH32(esp, 0x00029DEFu); RECOMP_ABI_CALL(0x000188D0u, sub_000188D0); /* call 0x000188D0 */

loc_00029DEF: ;
    SET_LO8(eax, MEM8(esp + 0x54));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    esi = MEM32(esp + 0x50);
    if (CMP_NE(_fa, _fb)) goto loc_00029E0D; /* jne: not equal / not zero */

loc_00029DFB: ;
    PUSH32(esp, edi);
    eax = esi;
    MEM8(0x64D3A0) = 1;
    PUSH32(esp, 0x00029E0Au); RECOMP_ABI_CALL(0x000BD7B0u, sub_000BD7B0); /* call 0x000BD7B0 */

loc_00029E0A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_00029E0D: ;
    PUSH32(esp, 1);
    ecx = esp + 0x20;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00029E1Au); RECOMP_ABI_CALL(0x00029240u, sub_00029240); /* call 0x00029240 */

loc_00029E1A: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x350D48) = eax;
    PUSH32(esp, 0x00029E27u); RECOMP_ABI_CALL(0x000BD960u, sub_000BD960); /* call 0x000BD960 */

loc_00029E27: ;
    ecx = MEM32(0x64D974);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    edx = MEM32(esp + 0x24);
    MEM8(0x64D3A0) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_00029E4A; /* je: equal / zero */

loc_00029E3C: ;
    eax = MEM32(0x64D978);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_00029E4C; /* ja: above (unsigned >) */

loc_00029E4A: ;
    eax = edx;

loc_00029E4C: ;
    edx = eax;
    ecx = esp + 0x28;
    PUSH32(esp, 0x00029E57u); RECOMP_ABI_CALL(0x0002A7D0u, sub_0002A7D0); /* call 0x0002A7D0 */

loc_00029E57: ;
    eax = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x2C);
    ecx = MEM32(eax);
    edx = MEM32(0x64D978);
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    eax = MEM32(0x64D974);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00029E7Bu); RECOMP_ABI_CALL(0x0002AB20u, sub_0002AB20); /* call 0x0002AB20 */

loc_00029E7B: ;
    ebp = MEM32(eax);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    ebx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00029F5F; /* je: equal / zero */

loc_00029E8A: ;
    /* nop */

loc_00029E90: ;
    esi = MEM32(ebx);
    PUSH32(esp, esi);
    eax = 0x493610;
    PUSH32(esp, 0x00029E9Du); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00029E9D: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029EB3; /* je: equal / zero */

loc_00029EAA: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029EBD; /* je: equal / zero */

loc_00029EB3: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029EC4; /* je: equal / zero */

loc_00029EBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00029EC6; /* je: equal / zero */

loc_00029EC4: ;
    ecx = eax;

loc_00029EC6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029F54; /* je: equal / zero */

loc_00029ECF: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00029EE7u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00029EE7: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x18) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00029F54; /* je: equal / zero */

loc_00029EF5: ;
    ecx = MEM32(0x64D21C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00029F01u); RECOMP_ABI_CALL(0x000299E0u, sub_000299E0); /* call 0x000299E0 */

loc_00029F01: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x00029F0Bu); RECOMP_ABI_CALL(0x00013330u, sub_00013330); /* call 0x00013330 */

loc_00029F0B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00029F11u); RECOMP_ABI_CALL(0x000BDB60u, sub_000BDB60); /* call 0x000BDB60 */

loc_00029F11: ;
    eax = MEM32(0x64D974);
    ecx = MEM32(ebx);
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029F2B; /* je: equal / zero */

loc_00029F21: ;
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029F21; /* jne: not equal / not zero */

loc_00029F2B: ;
    edx = MEM32(0x64D978);
    ecx = eax + 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00029F44u); RECOMP_ABI_CALL(0x0028AA50u, sub_0028AA50); /* call 0x0028AA50 */

loc_00029F44: ;
    eax = MEM32(0x64D978);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D978) = eax;

loc_00029F54: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029E90; /* jne: not equal / not zero */

loc_00029F5F: ;
    edx = MEM32(0x64D978);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    edx = MEM32(0x64D974);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00029F80u); RECOMP_ABI_CALL(0x0002AB90u, sub_0002AB90); /* call 0x0002AB90 */

loc_00029F80: ;
    ebp = MEM32(eax);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A0D0; /* je: equal / zero */

loc_00029F8D: ;
    /* nop */

loc_00029F90: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(MEM32(0x350D48)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x350D48), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A0C5; /* je: equal / zero */

loc_00029F9E: ;
    PUSH32(esp, esi);
    eax = 0x493610;
    PUSH32(esp, 0x00029FA9u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00029FA9: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029FBF; /* je: equal / zero */

loc_00029FB6: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029FC9; /* je: equal / zero */

loc_00029FBF: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029FD0; /* je: equal / zero */

loc_00029FC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00029FD2; /* je: equal / zero */

loc_00029FD0: ;
    ecx = eax;

loc_00029FD2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A0C5; /* je: equal / zero */

loc_00029FDB: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00029FF3u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00029FF3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0002A0C5; /* jne: not equal / not zero */

loc_0002A003: ;
    eax = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002A00Cu); RECOMP_ABI_CALL(0x000BD7B0u, sub_000BD7B0); /* call 0x000BD7B0 */

loc_0002A00C: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0002A016u); RECOMP_ABI_CALL(0x00029510u, sub_00029510); /* call 0x00029510 */

loc_0002A016: ;
    ebx = eax;
    eax = MEM32(0x64D21C);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x0002A027u); RECOMP_ABI_CALL(0x000295F0u, sub_000295F0); /* call 0x000295F0 */

loc_0002A027: ;
    ecx = MEM32(0x64D29C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002A037u); RECOMP_ABI_CALL(0x00088570u, sub_00088570); /* call 0x00088570 */

loc_0002A037: ;
    eax = MEM32(0x64D33C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A07B; /* je: equal / zero */

loc_0002A045: ;
    _fa = (uint32_t)(MEM32(0x64D3A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A075; /* je: equal / zero */

loc_0002A04D: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A075; /* jne: not equal / not zero */

loc_0002A056: ;
    esi = MEM32(0x64D3D4);
    MEM32(0x64D3A8) = ebx;
    MEM32(0x64D3BC) = ebx;
    ebx = MEM32(0x64D940);
    PUSH32(esp, 0x0002A073u); RECOMP_ABI_CALL(0x00275D30u, sub_00275D30); /* call 0x00275D30 */

loc_0002A073: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002A075: ;
    MEM32(0x64D3A4) = ebx;

loc_0002A07B: ;
    edx = edi;
    esi = 0x64D970;
    PUSH32(esp, 0x0002A087u); RECOMP_ABI_CALL(0x00060880u, sub_00060880); /* call 0x00060880 */

loc_0002A087: ;
    _fa = (uint32_t)(MEM32(0x64D33C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D33C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A0C5; /* je: equal / zero */

loc_0002A08F: ;
    eax = MEM32(0x350D4C);
    edx = MEM32(edi);
    esi = eax;
    ecx = eax + 0x4044;
    eax = esp + 0x14;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x0002A0ABu); RECOMP_ABI_CALL(0x0002E0B0u, sub_0002E0B0); /* call 0x0002E0B0 */

loc_0002A0AB: ;
    MEM32(eax) = 1;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x4020);
    ebx = esp + 0x18;
    PUSH32(esp, 0x0002A0C5u); RECOMP_ABI_CALL(0x0002A6F0u, sub_0002A6F0); /* call 0x0002A6F0 */

loc_0002A0C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029F90; /* jne: not equal / not zero */

loc_0002A0D0: ;
    esi = MEM32(0x350D48);
    PUSH32(esp, esi);
    eax = 0x493610;
    PUSH32(esp, 0x0002A0E1u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002A0E1: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A0F7; /* je: equal / zero */

loc_0002A0EE: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A101; /* je: equal / zero */

loc_0002A0F7: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A108; /* je: equal / zero */

loc_0002A101: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A10A; /* je: equal / zero */

loc_0002A108: ;
    ecx = eax;

loc_0002A10A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A256; /* je: equal / zero */

loc_0002A113: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002A12Bu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002A12B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0002A256; /* jne: not equal / not zero */

loc_0002A13B: ;
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0x0002A144u); RECOMP_ABI_CALL(0x000BD7B0u, sub_000BD7B0); /* call 0x000BD7B0 */

loc_0002A144: ;
    eax = MEM32(0x350D48);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0002A151u); RECOMP_ABI_CALL(0x00029510u, sub_00029510); /* call 0x00029510 */

loc_0002A151: ;
    ebx = eax;
    eax = MEM32(0x64D21C);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x0002A162u); RECOMP_ABI_CALL(0x000295F0u, sub_000295F0); /* call 0x000295F0 */

loc_0002A162: ;
    ecx = MEM32(0x64D29C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002A172u); RECOMP_ABI_CALL(0x00088570u, sub_00088570); /* call 0x00088570 */

loc_0002A172: ;
    eax = MEM32(0x64D33C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A1B6; /* je: equal / zero */

loc_0002A180: ;
    _fa = (uint32_t)(MEM32(0x64D3A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A1B0; /* je: equal / zero */

loc_0002A188: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A1B0; /* jne: not equal / not zero */

loc_0002A191: ;
    esi = MEM32(0x64D3D4);
    MEM32(0x64D3A8) = ebx;
    MEM32(0x64D3BC) = ebx;
    ebx = MEM32(0x64D940);
    PUSH32(esp, 0x0002A1AEu); RECOMP_ABI_CALL(0x00275D30u, sub_00275D30); /* call 0x00275D30 */

loc_0002A1AE: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002A1B0: ;
    MEM32(0x64D3A4) = ebx;

loc_0002A1B6: ;
    esi = MEM32(0x64D974);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    eax = MEM32(0x64D978);
    if (CMP_EQ(_fa, _fb)) goto loc_0002A203; /* je: equal / zero */

loc_0002A1C5: ;
    edx = MEM32(0x64D97C);
    ecx = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002A203; /* jae: above or equal (unsigned >=) */

loc_0002A1DB: ;
    MEM8(esp + 0x14) = LO8(ebx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = 0x350D48;
    ecx = 1;
    esi = eax;
    PUSH32(esp, 0x0002A1F5u); RECOMP_ABI_CALL(0x00018BE0u, sub_00018BE0); /* call 0x00018BE0 */

loc_0002A1F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D978) = esi;
    goto loc_0002A215;

loc_0002A203: ;
    PUSH32(esp, 0x350D48);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64D970);
    PUSH32(esp, 0x0002A215u); RECOMP_ABI_CALL(0x000188E0u, sub_000188E0); /* call 0x000188E0 */

loc_0002A215: ;
    _fa = (uint32_t)(MEM32(0x64D33C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D33C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A256; /* je: equal / zero */

loc_0002A21D: ;
    eax = MEM32(0x350D48);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x350D4C);
    esi = eax;
    ecx = eax + 0x4044;
    eax = esp + 0x14;
    PUSH32(esp, 0x0002A23Cu); RECOMP_ABI_CALL(0x0002E0B0u, sub_0002E0B0); /* call 0x0002E0B0 */

loc_0002A23C: ;
    ecx = esp + 0x38;
    MEM32(eax) = 1;
    eax = MEM32(esi + 0x4020);
    PUSH32(esp, ecx);
    ebx = esp + 0x18;
    PUSH32(esp, 0x0002A256u); RECOMP_ABI_CALL(0x0002A6F0u, sub_0002A6F0); /* call 0x0002A6F0 */

loc_0002A256: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A340; /* jne: not equal / not zero */

loc_0002A263: ;
    SET_LO8(eax, MEM8(0x64CFB9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A340; /* jne: not equal / not zero */

loc_0002A270: ;
    eax = MEM32(0x33A378);
    ebx = MEM32(esp + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A340; /* je: equal / zero */

loc_0002A281: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A2F3; /* je: equal / zero */

loc_0002A286: ;
    PUSH32(esp, eax);
    edx = esp + 0x3C;
    PUSH32(esp, 0x323170);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002A296u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_0002A296: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x38;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002A2A5u); RECOMP_ABI_CALL(0x000C79E0u, sub_000C79E0); /* call 0x000C79E0 */

loc_0002A2A5: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x44;
    PUSH32(esp, 0x323170);
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x0002A2B7u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_0002A2B7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x38;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002A2C6u); RECOMP_ABI_CALL(0x000C7980u, sub_000C7980); /* call 0x000C7980 */

loc_0002A2C6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0x0002A2D0u); RECOMP_ABI_CALL(0x000C7A80u, sub_000C7A80); /* call 0x000C7A80 */

loc_0002A2D0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002A2D6u); RECOMP_ABI_CALL(0x000C79B0u, sub_000C79B0); /* call 0x000C79B0 */

loc_0002A2D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A2EC; /* je: equal / zero */

loc_0002A2DE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002A2E4u); RECOMP_ABI_CALL(0x000C7A10u, sub_000C7A10); /* call 0x000C7A10 */

loc_0002A2E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A33A; /* jne: not equal / not zero */

loc_0002A2EC: ;
    PUSH32(esp, 0x0002A2F1u); RECOMP_ABI_CALL(0x000C7A40u, sub_000C7A40); /* call 0x000C7A40 */

loc_0002A2F1: ;
    goto loc_0002A2D0;

loc_0002A2F3: ;
    PUSH32(esp, ebx);
    eax = esp + 0x3C;
    PUSH32(esp, 0x323170);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002A303u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_0002A303: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x38;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002A312u); RECOMP_ABI_CALL(0x000C7980u, sub_000C7980); /* call 0x000C7980 */

loc_0002A312: ;
    esi = eax;
    PUSH32(esp, 0x0002A319u); RECOMP_ABI_CALL(0x000C7A80u, sub_000C7A80); /* call 0x000C7A80 */

loc_0002A319: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002A31Fu); RECOMP_ABI_CALL(0x000C79B0u, sub_000C79B0); /* call 0x000C79B0 */

loc_0002A31F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A33A; /* jne: not equal / not zero */

loc_0002A327: ;
    PUSH32(esp, 0x0002A32Cu); RECOMP_ABI_CALL(0x000C7A40u, sub_000C7A40); /* call 0x000C7A40 */

loc_0002A32C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002A332u); RECOMP_ABI_CALL(0x000C79B0u, sub_000C79B0); /* call 0x000C79B0 */

loc_0002A332: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A327; /* je: equal / zero */

loc_0002A33A: ;
    MEM32(0x33A378) = ebx;

loc_0002A340: ;
    eax = MEM32(0x614FCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A350; /* je: equal / zero */

loc_0002A349: ;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x24) = edx;

loc_0002A350: ;
    ecx = MEM32(0x64D978);
    eax = MEM32(0x64D974);
    edx = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002A36Au); RECOMP_ABI_CALL(0x0002AC10u, sub_0002AC10); /* call 0x0002AC10 */

loc_0002A36A: ;
    eax = MEM32(0x64D21C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x34AC38) = eax;
    PUSH32(esp, 0x0002A37Cu); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_0002A37C: ;
    eax = MEM32(0x64D21C);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = 1;
    MEM32(eax + 0xC) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0002A3B4; /* jne: not equal / not zero */

loc_0002A38F: ;
    esi = esp + 0x28;
    PUSH32(esp, 0x0002A398u); RECOMP_ABI_CALL(0x00016A20u, sub_00016A20); /* call 0x00016A20 */

loc_0002A398: ;
    eax = esp + 0x1C;
    PUSH32(esp, 0x0002A3A1u); RECOMP_ABI_CALL(0x00019B40u, sub_00019B40); /* call 0x00019B40 */

loc_0002A3A1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0x0002A3ACu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_0002A3AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002A3B4: ;
    esi = MEM32(0x350D48);
    PUSH32(esp, esi);
    eax = 0x493610;
    PUSH32(esp, 0x0002A3C5u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002A3C5: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A3DB; /* je: equal / zero */

loc_0002A3D2: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A3E5; /* je: equal / zero */

loc_0002A3DB: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A3EC; /* je: equal / zero */

loc_0002A3E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A3EE; /* je: equal / zero */

loc_0002A3EC: ;
    ecx = eax;

loc_0002A3EE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A473; /* je: equal / zero */

loc_0002A3F7: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002A40Fu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002A40F: ;
    esi = MEM32(eax + 0x5D8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    MEM32(0x33A3BC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A473; /* je: equal / zero */

loc_0002A423: ;
    PUSH32(esp, 0x0002A428u); RECOMP_ABI_CALL(0x00056380u, sub_00056380); /* call 0x00056380 */

loc_0002A428: ;
    eax = MEM32(0x64D33C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A46E; /* je: equal / zero */

loc_0002A433: ;
    ecx = MEM32(0x34AC10);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = esi;
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0);
    eax = eax | 0xFD000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x0002A45Du); RECOMP_ABI_CALL(0x000BD7B0u, sub_000BD7B0); /* call 0x000BD7B0 */

loc_0002A45D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x0002A467u); RECOMP_ABI_CALL(0x00056210u, sub_00056210); /* call 0x00056210 */

loc_0002A467: ;
    PUSH32(esp, 0x0002A46Cu); RECOMP_ABI_CALL(0x000BD960u, sub_000BD960); /* call 0x000BD960 */

loc_0002A46C: ;
    goto loc_0002A473;

loc_0002A46E: ;
    PUSH32(esp, 0x0002A473u); RECOMP_ABI_CALL(0x00056210u, sub_00056210); /* call 0x00056210 */

loc_0002A473: ;
    eax = MEM32(0x64D288);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A486; /* je: equal / zero */

loc_0002A47C: ;
    MEM32(0x64D288) = 0;

loc_0002A486: ;
    eax = MEM32(edi + 0x30);
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A49D; /* je: equal / zero */

loc_0002A493: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x23);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0002A49Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0002A497u); } /* indirect call */
    }

loc_0002A49A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002A49D: ;
    eax = edi;
    MEM32(0x64D004) = ebx;
    PUSH32(esp, 0x0002A4AAu); RECOMP_ABI_CALL(0x00064C30u, sub_00064C30); /* call 0x00064C30 */

loc_0002A4AA: ;
    PUSH32(esp, 0x0002A4AFu); RECOMP_ABI_CALL(0x000F84E0u, sub_000F84E0); /* call 0x000F84E0 */

loc_0002A4AF: ;
    PUSH32(esp, 0x0002A4B4u); RECOMP_ABI_CALL(0x000C0190u, sub_000C0190); /* call 0x000C0190 */

loc_0002A4B4: ;
    ecx = MEM32(0x64D1DC);
    eax = MEM32(ecx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A4D1; /* je: equal / zero */

loc_0002A4C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A4D1; /* je: equal / zero */

loc_0002A4C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A4D1; /* je: equal / zero */

loc_0002A4CB: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002A4D1u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_0002A4D1: ;
    eax = MEM32(0x34A760);
    MEM32(0x34A75C) = edi;
    PUSH32(esp, 0x0002A4E1u); RECOMP_ABI_CALL(0x00012780u, sub_00012780); /* call 0x00012780 */

loc_0002A4E1: ;
    ecx = MEM32(edi + 0x20);
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002A50A; /* jae: above or equal (unsigned >=) */

loc_0002A4EB: ;
    ebp = 0x40000;

loc_0002A4F0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A503; /* je: equal / zero */

loc_0002A4F6: ;
    edx = eax;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A503; /* je: equal / zero */

loc_0002A500: ;
    MEM32(eax + 4) = MEM32(eax + 4) | ebp;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0002A503: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002A4F0; /* jb: below (unsigned <) */

loc_0002A50A: ;
    eax = MEM32(0x64D29C);
    eax = MEM32(eax + 0x430);
    ecx = eax + 0x7D8;
    MEM32(eax + 0xF238) = ecx;
    PUSH32(esp, 0x0002A526u); RECOMP_ABI_CALL(0x000113D0u, sub_000113D0); /* call 0x000113D0 */

loc_0002A526: ;
    MEMF(0x34A76C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x64D918) = MEM32(0x64D918) - 1;
    _fa = (uint32_t)(MEM32(0x64D918)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002A56C; /* jne: not equal / not zero */

loc_0002A534: ;
    xmm0 = XMM_SCALAR(MEMF(0x33A200)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002A56C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3337C0)) */

loc_0002A545: ;
    PUSH32(esp, 0x0002A54Au); RECOMP_ABI_CALL(0x000113D0u, sub_000113D0); /* call 0x000113D0 */

loc_0002A54A: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x33A200)); /* fsub dword ptr [0x33a200] */
    xmm0 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    MEMF(0x33A200) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x64D014)); /* fadd dword ptr [0x64d014] */
    MEMF(0x64D014) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002A56C: ;
    esi = esp + 0x28;
    PUSH32(esp, 0x0002A575u); RECOMP_ABI_CALL(0x00016A20u, sub_00016A20); /* call 0x00016A20 */

loc_0002A575: ;
    eax = esp + 0x1C;
    PUSH32(esp, 0x0002A57Eu); RECOMP_ABI_CALL(0x00019B40u, sub_00019B40); /* call 0x00019B40 */

loc_0002A57E: ;
    ecx = MEM32(esp + 0x44);
    eax = edi;
    PUSH32(esp, 0x0002A589u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_0002A589: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_00029E76
 * Original: 0x00029E76 - 0x0002A591 (1819 bytes, 521 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_00029E76(void)
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

loc_00029E76: ;
    PUSH32(esp, 0x00029E7Bu); RECOMP_ABI_CALL(0x0002AB20u, sub_0002AB20); /* call 0x0002AB20 */

loc_00029E7B: ;
    ebp = MEM32(eax);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    ebx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_00029F5F; /* je: equal / zero */

loc_00029E8A: ;
    /* nop */

loc_00029E90: ;
    esi = MEM32(ebx);
    PUSH32(esp, esi);
    eax = 0x493610;
    PUSH32(esp, 0x00029E9Du); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00029E9D: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029EB3; /* je: equal / zero */

loc_00029EAA: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029EBD; /* je: equal / zero */

loc_00029EB3: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029EC4; /* je: equal / zero */

loc_00029EBD: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00029EC6; /* je: equal / zero */

loc_00029EC4: ;
    ecx = eax;

loc_00029EC6: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029F54; /* je: equal / zero */

loc_00029ECF: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00029EE7u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00029EE7: ;
    esi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x18) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00029F54; /* je: equal / zero */

loc_00029EF5: ;
    ecx = MEM32(0x64D21C);
    PUSH32(esp, esi);
    PUSH32(esp, 0x00029F01u); RECOMP_ABI_CALL(0x000299E0u, sub_000299E0); /* call 0x000299E0 */

loc_00029F01: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x00029F0Bu); RECOMP_ABI_CALL(0x00013330u, sub_00013330); /* call 0x00013330 */

loc_00029F0B: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x00029F11u); RECOMP_ABI_CALL(0x000BDB60u, sub_000BDB60); /* call 0x000BDB60 */

loc_00029F11: ;
    eax = MEM32(0x64D974);
    ecx = MEM32(ebx);
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029F2B; /* je: equal / zero */

loc_00029F21: ;
    edx = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029F21; /* jne: not equal / not zero */

loc_00029F2B: ;
    edx = MEM32(0x64D978);
    ecx = eax + 4;
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - ecx;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x00029F44u); RECOMP_ABI_CALL(0x0028AA50u, sub_0028AA50); /* call 0x0028AA50 */

loc_00029F44: ;
    eax = MEM32(0x64D978);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(0x64D978) = eax;

loc_00029F54: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029E90; /* jne: not equal / not zero */

loc_00029F5F: ;
    edx = MEM32(0x64D978);
    eax = MEM32(esp + 0x20);
    ecx = MEM32(eax);
    PUSH32(esp, edi);
    PUSH32(esp, edx);
    edx = MEM32(0x64D974);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x28;
    PUSH32(esp, eax);
    PUSH32(esp, 0x00029F80u); RECOMP_ABI_CALL(0x0002AB90u, sub_0002AB90); /* call 0x0002AB90 */

loc_00029F80: ;
    ebp = MEM32(eax);
    _fb = (uint32_t)(0x18) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x18;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A0D0; /* je: equal / zero */

loc_00029F8D: ;
    /* nop */

loc_00029F90: ;
    esi = MEM32(edi);
    _fa = (uint32_t)(MEM32(0x350D48)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x350D48), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A0C5; /* je: equal / zero */

loc_00029F9E: ;
    PUSH32(esp, esi);
    eax = 0x493610;
    PUSH32(esp, 0x00029FA9u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00029FA9: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029FBF; /* je: equal / zero */

loc_00029FB6: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029FC9; /* je: equal / zero */

loc_00029FBF: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_00029FD0; /* je: equal / zero */

loc_00029FC9: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_00029FD2; /* je: equal / zero */

loc_00029FD0: ;
    ecx = eax;

loc_00029FD2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A0C5; /* je: equal / zero */

loc_00029FDB: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x00029FF3u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_00029FF3: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0002A0C5; /* jne: not equal / not zero */

loc_0002A003: ;
    eax = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002A00Cu); RECOMP_ABI_CALL(0x000BD7B0u, sub_000BD7B0); /* call 0x000BD7B0 */

loc_0002A00C: ;
    eax = MEM32(edi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0002A016u); RECOMP_ABI_CALL(0x00029510u, sub_00029510); /* call 0x00029510 */

loc_0002A016: ;
    ebx = eax;
    eax = MEM32(0x64D21C);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x0002A027u); RECOMP_ABI_CALL(0x000295F0u, sub_000295F0); /* call 0x000295F0 */

loc_0002A027: ;
    ecx = MEM32(0x64D29C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002A037u); RECOMP_ABI_CALL(0x00088570u, sub_00088570); /* call 0x00088570 */

loc_0002A037: ;
    eax = MEM32(0x64D33C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A07B; /* je: equal / zero */

loc_0002A045: ;
    _fa = (uint32_t)(MEM32(0x64D3A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A075; /* je: equal / zero */

loc_0002A04D: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A075; /* jne: not equal / not zero */

loc_0002A056: ;
    esi = MEM32(0x64D3D4);
    MEM32(0x64D3A8) = ebx;
    MEM32(0x64D3BC) = ebx;
    ebx = MEM32(0x64D940);
    PUSH32(esp, 0x0002A073u); RECOMP_ABI_CALL(0x00275D30u, sub_00275D30); /* call 0x00275D30 */

loc_0002A073: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002A075: ;
    MEM32(0x64D3A4) = ebx;

loc_0002A07B: ;
    edx = edi;
    esi = 0x64D970;
    PUSH32(esp, 0x0002A087u); RECOMP_ABI_CALL(0x00060880u, sub_00060880); /* call 0x00060880 */

loc_0002A087: ;
    _fa = (uint32_t)(MEM32(0x64D33C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D33C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A0C5; /* je: equal / zero */

loc_0002A08F: ;
    eax = MEM32(0x350D4C);
    edx = MEM32(edi);
    esi = eax;
    ecx = eax + 0x4044;
    eax = esp + 0x14;
    MEM32(esp + 0x14) = edx;
    PUSH32(esp, 0x0002A0ABu); RECOMP_ABI_CALL(0x0002E0B0u, sub_0002E0B0); /* call 0x0002E0B0 */

loc_0002A0AB: ;
    MEM32(eax) = 1;
    eax = esp + 0x38;
    PUSH32(esp, eax);
    eax = MEM32(esi + 0x4020);
    ebx = esp + 0x18;
    PUSH32(esp, 0x0002A0C5u); RECOMP_ABI_CALL(0x0002A6F0u, sub_0002A6F0); /* call 0x0002A6F0 */

loc_0002A0C5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_00029F90; /* jne: not equal / not zero */

loc_0002A0D0: ;
    esi = MEM32(0x350D48);
    PUSH32(esp, esi);
    eax = 0x493610;
    PUSH32(esp, 0x0002A0E1u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002A0E1: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A0F7; /* je: equal / zero */

loc_0002A0EE: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A101; /* je: equal / zero */

loc_0002A0F7: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A108; /* je: equal / zero */

loc_0002A101: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A10A; /* je: equal / zero */

loc_0002A108: ;
    ecx = eax;

loc_0002A10A: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A256; /* je: equal / zero */

loc_0002A113: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002A12Bu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002A12B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    MEM32(esp + 0x18) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0002A256; /* jne: not equal / not zero */

loc_0002A13B: ;
    PUSH32(esp, 0);
    eax = esi;
    PUSH32(esp, 0x0002A144u); RECOMP_ABI_CALL(0x000BD7B0u, sub_000BD7B0); /* call 0x000BD7B0 */

loc_0002A144: ;
    eax = MEM32(0x350D48);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0002A151u); RECOMP_ABI_CALL(0x00029510u, sub_00029510); /* call 0x00029510 */

loc_0002A151: ;
    ebx = eax;
    eax = MEM32(0x64D21C);
    PUSH32(esp, eax);
    MEM32(esp + 0x1C) = ebx;
    PUSH32(esp, 0x0002A162u); RECOMP_ABI_CALL(0x000295F0u, sub_000295F0); /* call 0x000295F0 */

loc_0002A162: ;
    ecx = MEM32(0x64D29C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ebx);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002A172u); RECOMP_ABI_CALL(0x00088570u, sub_00088570); /* call 0x00088570 */

loc_0002A172: ;
    eax = MEM32(0x64D33C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A1B6; /* je: equal / zero */

loc_0002A180: ;
    _fa = (uint32_t)(MEM32(0x64D3A8)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A8), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A1B0; /* je: equal / zero */

loc_0002A188: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A1B0; /* jne: not equal / not zero */

loc_0002A191: ;
    esi = MEM32(0x64D3D4);
    MEM32(0x64D3A8) = ebx;
    MEM32(0x64D3BC) = ebx;
    ebx = MEM32(0x64D940);
    PUSH32(esp, 0x0002A1AEu); RECOMP_ABI_CALL(0x00275D30u, sub_00275D30); /* call 0x00275D30 */

loc_0002A1AE: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002A1B0: ;
    MEM32(0x64D3A4) = ebx;

loc_0002A1B6: ;
    esi = MEM32(0x64D974);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    eax = MEM32(0x64D978);
    if (CMP_EQ(_fa, _fb)) goto loc_0002A203; /* je: equal / zero */

loc_0002A1C5: ;
    edx = MEM32(0x64D97C);
    ecx = eax;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ecx = ecx - esi;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - esi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = (uint32_t)(((int32_t)(int32_t)(ecx)) >> ((2) & 31u));
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002A203; /* jae: above or equal (unsigned >=) */

loc_0002A1DB: ;
    MEM8(esp + 0x14) = LO8(ebx);
    edx = MEM32(esp + 0x14);
    PUSH32(esp, edx);
    edx = 0x350D48;
    ecx = 1;
    esi = eax;
    PUSH32(esp, 0x0002A1F5u); RECOMP_ABI_CALL(0x00018BE0u, sub_00018BE0); /* call 0x00018BE0 */

loc_0002A1F5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x64D978) = esi;
    goto loc_0002A215;

loc_0002A203: ;
    PUSH32(esp, 0x350D48);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x64D970);
    PUSH32(esp, 0x0002A215u); RECOMP_ABI_CALL(0x000188E0u, sub_000188E0); /* call 0x000188E0 */

loc_0002A215: ;
    _fa = (uint32_t)(MEM32(0x64D33C)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D33C), ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A256; /* je: equal / zero */

loc_0002A21D: ;
    eax = MEM32(0x350D48);
    MEM32(esp + 0x14) = eax;
    eax = MEM32(0x350D4C);
    esi = eax;
    ecx = eax + 0x4044;
    eax = esp + 0x14;
    PUSH32(esp, 0x0002A23Cu); RECOMP_ABI_CALL(0x0002E0B0u, sub_0002E0B0); /* call 0x0002E0B0 */

loc_0002A23C: ;
    ecx = esp + 0x38;
    MEM32(eax) = 1;
    eax = MEM32(esi + 0x4020);
    PUSH32(esp, ecx);
    ebx = esp + 0x18;
    PUSH32(esp, 0x0002A256u); RECOMP_ABI_CALL(0x0002A6F0u, sub_0002A6F0); /* call 0x0002A6F0 */

loc_0002A256: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A340; /* jne: not equal / not zero */

loc_0002A263: ;
    SET_LO8(eax, MEM8(0x64CFB9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A340; /* jne: not equal / not zero */

loc_0002A270: ;
    eax = MEM32(0x33A378);
    ebx = MEM32(esp + 0x50);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A340; /* je: equal / zero */

loc_0002A281: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A2F3; /* je: equal / zero */

loc_0002A286: ;
    PUSH32(esp, eax);
    edx = esp + 0x3C;
    PUSH32(esp, 0x323170);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002A296u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_0002A296: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0x38;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002A2A5u); RECOMP_ABI_CALL(0x000C79E0u, sub_000C79E0); /* call 0x000C79E0 */

loc_0002A2A5: ;
    PUSH32(esp, ebx);
    ecx = esp + 0x44;
    PUSH32(esp, 0x323170);
    PUSH32(esp, ecx);
    esi = eax;
    PUSH32(esp, 0x0002A2B7u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_0002A2B7: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x38;
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002A2C6u); RECOMP_ABI_CALL(0x000C7980u, sub_000C7980); /* call 0x000C7980 */

loc_0002A2C6: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax;
    PUSH32(esp, 0x0002A2D0u); RECOMP_ABI_CALL(0x000C7A80u, sub_000C7A80); /* call 0x000C7A80 */

loc_0002A2D0: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002A2D6u); RECOMP_ABI_CALL(0x000C79B0u, sub_000C79B0); /* call 0x000C79B0 */

loc_0002A2D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A2EC; /* je: equal / zero */

loc_0002A2DE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002A2E4u); RECOMP_ABI_CALL(0x000C7A10u, sub_000C7A10); /* call 0x000C7A10 */

loc_0002A2E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A33A; /* jne: not equal / not zero */

loc_0002A2EC: ;
    PUSH32(esp, 0x0002A2F1u); RECOMP_ABI_CALL(0x000C7A40u, sub_000C7A40); /* call 0x000C7A40 */

loc_0002A2F1: ;
    goto loc_0002A2D0;

loc_0002A2F3: ;
    PUSH32(esp, ebx);
    eax = esp + 0x3C;
    PUSH32(esp, 0x323170);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002A303u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_0002A303: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x38;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002A312u); RECOMP_ABI_CALL(0x000C7980u, sub_000C7980); /* call 0x000C7980 */

loc_0002A312: ;
    esi = eax;
    PUSH32(esp, 0x0002A319u); RECOMP_ABI_CALL(0x000C7A80u, sub_000C7A80); /* call 0x000C7A80 */

loc_0002A319: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002A31Fu); RECOMP_ABI_CALL(0x000C79B0u, sub_000C79B0); /* call 0x000C79B0 */

loc_0002A31F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A33A; /* jne: not equal / not zero */

loc_0002A327: ;
    PUSH32(esp, 0x0002A32Cu); RECOMP_ABI_CALL(0x000C7A40u, sub_000C7A40); /* call 0x000C7A40 */

loc_0002A32C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002A332u); RECOMP_ABI_CALL(0x000C79B0u, sub_000C79B0); /* call 0x000C79B0 */

loc_0002A332: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A327; /* je: equal / zero */

loc_0002A33A: ;
    MEM32(0x33A378) = ebx;

loc_0002A340: ;
    eax = MEM32(0x614FCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A350; /* je: equal / zero */

loc_0002A349: ;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x24) = edx;

loc_0002A350: ;
    ecx = MEM32(0x64D978);
    eax = MEM32(0x64D974);
    edx = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002A36Au); RECOMP_ABI_CALL(0x0002AC10u, sub_0002AC10); /* call 0x0002AC10 */

loc_0002A36A: ;
    eax = MEM32(0x64D21C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x34AC38) = eax;
    PUSH32(esp, 0x0002A37Cu); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_0002A37C: ;
    eax = MEM32(0x64D21C);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = 1;
    MEM32(eax + 0xC) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0002A3B4; /* jne: not equal / not zero */

loc_0002A38F: ;
    esi = esp + 0x28;
    PUSH32(esp, 0x0002A398u); RECOMP_ABI_CALL(0x00016A20u, sub_00016A20); /* call 0x00016A20 */

loc_0002A398: ;
    eax = esp + 0x1C;
    PUSH32(esp, 0x0002A3A1u); RECOMP_ABI_CALL(0x00019B40u, sub_00019B40); /* call 0x00019B40 */

loc_0002A3A1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0x0002A3ACu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_0002A3AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002A3B4: ;
    esi = MEM32(0x350D48);
    PUSH32(esp, esi);
    eax = 0x493610;
    PUSH32(esp, 0x0002A3C5u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002A3C5: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A3DB; /* je: equal / zero */

loc_0002A3D2: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A3E5; /* je: equal / zero */

loc_0002A3DB: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A3EC; /* je: equal / zero */

loc_0002A3E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A3EE; /* je: equal / zero */

loc_0002A3EC: ;
    ecx = eax;

loc_0002A3EE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A473; /* je: equal / zero */

loc_0002A3F7: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002A40Fu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002A40F: ;
    esi = MEM32(eax + 0x5D8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    MEM32(0x33A3BC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A473; /* je: equal / zero */

loc_0002A423: ;
    PUSH32(esp, 0x0002A428u); RECOMP_ABI_CALL(0x00056380u, sub_00056380); /* call 0x00056380 */

loc_0002A428: ;
    eax = MEM32(0x64D33C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A46E; /* je: equal / zero */

loc_0002A433: ;
    ecx = MEM32(0x34AC10);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = esi;
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0);
    eax = eax | 0xFD000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x0002A45Du); RECOMP_ABI_CALL(0x000BD7B0u, sub_000BD7B0); /* call 0x000BD7B0 */

loc_0002A45D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x0002A467u); RECOMP_ABI_CALL(0x00056210u, sub_00056210); /* call 0x00056210 */

loc_0002A467: ;
    PUSH32(esp, 0x0002A46Cu); RECOMP_ABI_CALL(0x000BD960u, sub_000BD960); /* call 0x000BD960 */

loc_0002A46C: ;
    goto loc_0002A473;

loc_0002A46E: ;
    PUSH32(esp, 0x0002A473u); RECOMP_ABI_CALL(0x00056210u, sub_00056210); /* call 0x00056210 */

loc_0002A473: ;
    eax = MEM32(0x64D288);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A486; /* je: equal / zero */

loc_0002A47C: ;
    MEM32(0x64D288) = 0;

loc_0002A486: ;
    eax = MEM32(edi + 0x30);
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A49D; /* je: equal / zero */

loc_0002A493: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x23);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0002A49Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0002A497u); } /* indirect call */
    }

loc_0002A49A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002A49D: ;
    eax = edi;
    MEM32(0x64D004) = ebx;
    PUSH32(esp, 0x0002A4AAu); RECOMP_ABI_CALL(0x00064C30u, sub_00064C30); /* call 0x00064C30 */

loc_0002A4AA: ;
    PUSH32(esp, 0x0002A4AFu); RECOMP_ABI_CALL(0x000F84E0u, sub_000F84E0); /* call 0x000F84E0 */

loc_0002A4AF: ;
    PUSH32(esp, 0x0002A4B4u); RECOMP_ABI_CALL(0x000C0190u, sub_000C0190); /* call 0x000C0190 */

loc_0002A4B4: ;
    ecx = MEM32(0x64D1DC);
    eax = MEM32(ecx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A4D1; /* je: equal / zero */

loc_0002A4C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A4D1; /* je: equal / zero */

loc_0002A4C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A4D1; /* je: equal / zero */

loc_0002A4CB: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002A4D1u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_0002A4D1: ;
    eax = MEM32(0x34A760);
    MEM32(0x34A75C) = edi;
    PUSH32(esp, 0x0002A4E1u); RECOMP_ABI_CALL(0x00012780u, sub_00012780); /* call 0x00012780 */

loc_0002A4E1: ;
    ecx = MEM32(edi + 0x20);
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002A50A; /* jae: above or equal (unsigned >=) */

loc_0002A4EB: ;
    ebp = 0x40000;

loc_0002A4F0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A503; /* je: equal / zero */

loc_0002A4F6: ;
    edx = eax;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A503; /* je: equal / zero */

loc_0002A500: ;
    MEM32(eax + 4) = MEM32(eax + 4) | ebp;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0002A503: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002A4F0; /* jb: below (unsigned <) */

loc_0002A50A: ;
    eax = MEM32(0x64D29C);
    eax = MEM32(eax + 0x430);
    ecx = eax + 0x7D8;
    MEM32(eax + 0xF238) = ecx;
    PUSH32(esp, 0x0002A526u); RECOMP_ABI_CALL(0x000113D0u, sub_000113D0); /* call 0x000113D0 */

loc_0002A526: ;
    MEMF(0x34A76C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x64D918) = MEM32(0x64D918) - 1;
    _fa = (uint32_t)(MEM32(0x64D918)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002A56C; /* jne: not equal / not zero */

loc_0002A534: ;
    xmm0 = XMM_SCALAR(MEMF(0x33A200)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002A56C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3337C0)) */

loc_0002A545: ;
    PUSH32(esp, 0x0002A54Au); RECOMP_ABI_CALL(0x000113D0u, sub_000113D0); /* call 0x000113D0 */

loc_0002A54A: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x33A200)); /* fsub dword ptr [0x33a200] */
    xmm0 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    MEMF(0x33A200) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x64D014)); /* fadd dword ptr [0x64d014] */
    MEMF(0x64D014) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002A56C: ;
    esi = esp + 0x28;
    PUSH32(esp, 0x0002A575u); RECOMP_ABI_CALL(0x00016A20u, sub_00016A20); /* call 0x00016A20 */

loc_0002A575: ;
    eax = esp + 0x1C;
    PUSH32(esp, 0x0002A57Eu); RECOMP_ABI_CALL(0x00019B40u, sub_00019B40); /* call 0x00019B40 */

loc_0002A57E: ;
    ecx = MEM32(esp + 0x44);
    eax = edi;
    PUSH32(esp, 0x0002A589u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_0002A589: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_0002A2D1
 * Original: 0x0002A2D1 - 0x0002A591 (704 bytes, 203 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A2D1(void)
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

loc_0002A2D1: ;
    PUSH32(esp, 0x0002A2D6u); RECOMP_ABI_CALL(0x000C79B0u, sub_000C79B0); /* call 0x000C79B0 */

loc_0002A2D6: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A2EC; /* je: equal / zero */

loc_0002A2DE: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002A2E4u); RECOMP_ABI_CALL(0x000C7A10u, sub_000C7A10); /* call 0x000C7A10 */

loc_0002A2E4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A33A; /* jne: not equal / not zero */

loc_0002A2EC: ;
    PUSH32(esp, 0x0002A2F1u); RECOMP_ABI_CALL(0x000C7A40u, sub_000C7A40); /* call 0x000C7A40 */

loc_0002A2F1: ;
    g_seh_ebp = ebp; sub_0002A2D0(); return; /* tail jmp 0x0002A2D0 */

    PUSH32(esp, ebx);
    eax = esp + 0x3C;
    PUSH32(esp, 0x323170);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002A303u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_0002A303: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x38;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002A312u); RECOMP_ABI_CALL(0x000C7980u, sub_000C7980); /* call 0x000C7980 */

loc_0002A312: ;
    esi = eax;
    PUSH32(esp, 0x0002A319u); RECOMP_ABI_CALL(0x000C7A80u, sub_000C7A80); /* call 0x000C7A80 */

loc_0002A319: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002A31Fu); RECOMP_ABI_CALL(0x000C79B0u, sub_000C79B0); /* call 0x000C79B0 */

loc_0002A31F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A33A; /* jne: not equal / not zero */

loc_0002A327: ;
    PUSH32(esp, 0x0002A32Cu); RECOMP_ABI_CALL(0x000C7A40u, sub_000C7A40); /* call 0x000C7A40 */

loc_0002A32C: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002A332u); RECOMP_ABI_CALL(0x000C79B0u, sub_000C79B0); /* call 0x000C79B0 */

loc_0002A332: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A327; /* je: equal / zero */

loc_0002A33A: ;
    MEM32(0x33A378) = ebx;
    eax = MEM32(0x614FCC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A350; /* je: equal / zero */

loc_0002A349: ;
    edx = MEM32(esp + 0x18);
    MEM32(eax + 0x24) = edx;

loc_0002A350: ;
    ecx = MEM32(0x64D978);
    eax = MEM32(0x64D974);
    edx = ecx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - eax;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, edx);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002A36Au); RECOMP_ABI_CALL(0x0002AC10u, sub_0002AC10); /* call 0x0002AC10 */

loc_0002A36A: ;
    eax = MEM32(0x64D21C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(0x34AC38) = eax;
    PUSH32(esp, 0x0002A37Cu); RECOMP_ABI_CALL(0x00012150u, sub_00012150); /* call 0x00012150 */

loc_0002A37C: ;
    eax = MEM32(0x64D21C);
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ebx = 1;
    MEM32(eax + 0xC) = ebx;
    if (CMP_NE(_fa, _fb)) goto loc_0002A3B4; /* jne: not equal / not zero */

loc_0002A38F: ;
    esi = esp + 0x28;
    PUSH32(esp, 0x0002A398u); RECOMP_ABI_CALL(0x00016A20u, sub_00016A20); /* call 0x00016A20 */

loc_0002A398: ;
    eax = esp + 0x1C;
    PUSH32(esp, 0x0002A3A1u); RECOMP_ABI_CALL(0x00019B40u, sub_00019B40); /* call 0x00019B40 */

loc_0002A3A1: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = MEM32(esp + 0x44);
    PUSH32(esp, 0x0002A3ACu); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_0002A3AC: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x38) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x38;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002A3B4: ;
    esi = MEM32(0x350D48);
    PUSH32(esp, esi);
    eax = 0x493610;
    PUSH32(esp, 0x0002A3C5u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002A3C5: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A3DB; /* je: equal / zero */

loc_0002A3D2: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A3E5; /* je: equal / zero */

loc_0002A3DB: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A3EC; /* je: equal / zero */

loc_0002A3E5: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A3EE; /* je: equal / zero */

loc_0002A3EC: ;
    ecx = eax;

loc_0002A3EE: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A473; /* je: equal / zero */

loc_0002A3F7: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002A40Fu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002A40F: ;
    esi = MEM32(eax + 0x5D8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    MEM32(0x33A3BC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A473; /* je: equal / zero */

loc_0002A423: ;
    PUSH32(esp, 0x0002A428u); RECOMP_ABI_CALL(0x00056380u, sub_00056380); /* call 0x00056380 */

loc_0002A428: ;
    eax = MEM32(0x64D33C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A46E; /* je: equal / zero */

loc_0002A433: ;
    ecx = MEM32(0x34AC10);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax & 0xF0000;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = ecx << 0x14;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = esi;
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0);
    eax = eax | 0xFD000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x0002A45Du); RECOMP_ABI_CALL(0x000BD7B0u, sub_000BD7B0); /* call 0x000BD7B0 */

loc_0002A45D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x0002A467u); RECOMP_ABI_CALL(0x00056210u, sub_00056210); /* call 0x00056210 */

loc_0002A467: ;
    PUSH32(esp, 0x0002A46Cu); RECOMP_ABI_CALL(0x000BD960u, sub_000BD960); /* call 0x000BD960 */

loc_0002A46C: ;
    goto loc_0002A473;

loc_0002A46E: ;
    PUSH32(esp, 0x0002A473u); RECOMP_ABI_CALL(0x00056210u, sub_00056210); /* call 0x00056210 */

loc_0002A473: ;
    eax = MEM32(0x64D288);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A486; /* je: equal / zero */

loc_0002A47C: ;
    MEM32(0x64D288) = 0;

loc_0002A486: ;
    eax = MEM32(edi + 0x30);
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A49D; /* je: equal / zero */

loc_0002A493: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x23);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0002A49Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0002A497u); } /* indirect call */
    }

loc_0002A49A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002A49D: ;
    eax = edi;
    MEM32(0x64D004) = ebx;
    PUSH32(esp, 0x0002A4AAu); RECOMP_ABI_CALL(0x00064C30u, sub_00064C30); /* call 0x00064C30 */

loc_0002A4AA: ;
    PUSH32(esp, 0x0002A4AFu); RECOMP_ABI_CALL(0x000F84E0u, sub_000F84E0); /* call 0x000F84E0 */

loc_0002A4AF: ;
    PUSH32(esp, 0x0002A4B4u); RECOMP_ABI_CALL(0x000C0190u, sub_000C0190); /* call 0x000C0190 */

loc_0002A4B4: ;
    ecx = MEM32(0x64D1DC);
    eax = MEM32(ecx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A4D1; /* je: equal / zero */

loc_0002A4C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A4D1; /* je: equal / zero */

loc_0002A4C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A4D1; /* je: equal / zero */

loc_0002A4CB: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002A4D1u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_0002A4D1: ;
    eax = MEM32(0x34A760);
    MEM32(0x34A75C) = edi;
    PUSH32(esp, 0x0002A4E1u); RECOMP_ABI_CALL(0x00012780u, sub_00012780); /* call 0x00012780 */

loc_0002A4E1: ;
    ecx = MEM32(edi + 0x20);
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002A50A; /* jae: above or equal (unsigned >=) */

loc_0002A4EB: ;
    ebp = 0x40000;

loc_0002A4F0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A503; /* je: equal / zero */

loc_0002A4F6: ;
    edx = eax;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A503; /* je: equal / zero */

loc_0002A500: ;
    MEM32(eax + 4) = MEM32(eax + 4) | ebp;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0002A503: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002A4F0; /* jb: below (unsigned <) */

loc_0002A50A: ;
    eax = MEM32(0x64D29C);
    eax = MEM32(eax + 0x430);
    ecx = eax + 0x7D8;
    MEM32(eax + 0xF238) = ecx;
    PUSH32(esp, 0x0002A526u); RECOMP_ABI_CALL(0x000113D0u, sub_000113D0); /* call 0x000113D0 */

loc_0002A526: ;
    MEMF(0x34A76C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x64D918) = MEM32(0x64D918) - 1;
    _fa = (uint32_t)(MEM32(0x64D918)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002A56C; /* jne: not equal / not zero */

loc_0002A534: ;
    xmm0 = XMM_SCALAR(MEMF(0x33A200)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002A56C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3337C0)) */

loc_0002A545: ;
    PUSH32(esp, 0x0002A54Au); RECOMP_ABI_CALL(0x000113D0u, sub_000113D0); /* call 0x000113D0 */

loc_0002A54A: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x33A200)); /* fsub dword ptr [0x33a200] */
    xmm0 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    MEMF(0x33A200) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x64D014)); /* fadd dword ptr [0x64d014] */
    MEMF(0x64D014) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002A56C: ;
    esi = esp + 0x28;
    PUSH32(esp, 0x0002A575u); RECOMP_ABI_CALL(0x00016A20u, sub_00016A20); /* call 0x00016A20 */

loc_0002A575: ;
    eax = esp + 0x1C;
    PUSH32(esp, 0x0002A57Eu); RECOMP_ABI_CALL(0x00019B40u, sub_00019B40); /* call 0x00019B40 */

loc_0002A57E: ;
    ecx = MEM32(esp + 0x44);
    eax = edi;
    PUSH32(esp, 0x0002A589u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_0002A589: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_0002A44F
 * Original: 0x0002A44F - 0x0002A591 (322 bytes, 86 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A44F(void)
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

loc_0002A44F: ;
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0);
    eax = eax | 0xFD000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x0002A45Du); RECOMP_ABI_CALL(0x000BD7B0u, sub_000BD7B0); /* call 0x000BD7B0 */

loc_0002A45D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x0002A467u); RECOMP_ABI_CALL(0x00056210u, sub_00056210); /* call 0x00056210 */

loc_0002A467: ;
    PUSH32(esp, 0x0002A46Cu); RECOMP_ABI_CALL(0x000BD960u, sub_000BD960); /* call 0x000BD960 */

loc_0002A46C: ;
    goto loc_0002A473;

    PUSH32(esp, 0x0002A473u); RECOMP_ABI_CALL(0x00056210u, sub_00056210); /* call 0x00056210 */

loc_0002A473: ;
    eax = MEM32(0x64D288);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A486; /* je: equal / zero */

loc_0002A47C: ;
    MEM32(0x64D288) = 0;

loc_0002A486: ;
    eax = MEM32(edi + 0x30);
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A49D; /* je: equal / zero */

loc_0002A493: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x23);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0002A49Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0002A497u); } /* indirect call */
    }

loc_0002A49A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002A49D: ;
    eax = edi;
    MEM32(0x64D004) = ebx;
    PUSH32(esp, 0x0002A4AAu); RECOMP_ABI_CALL(0x00064C30u, sub_00064C30); /* call 0x00064C30 */

loc_0002A4AA: ;
    PUSH32(esp, 0x0002A4AFu); RECOMP_ABI_CALL(0x000F84E0u, sub_000F84E0); /* call 0x000F84E0 */

loc_0002A4AF: ;
    PUSH32(esp, 0x0002A4B4u); RECOMP_ABI_CALL(0x000C0190u, sub_000C0190); /* call 0x000C0190 */

loc_0002A4B4: ;
    ecx = MEM32(0x64D1DC);
    eax = MEM32(ecx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A4D1; /* je: equal / zero */

loc_0002A4C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A4D1; /* je: equal / zero */

loc_0002A4C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A4D1; /* je: equal / zero */

loc_0002A4CB: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002A4D1u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_0002A4D1: ;
    eax = MEM32(0x34A760);
    MEM32(0x34A75C) = edi;
    PUSH32(esp, 0x0002A4E1u); RECOMP_ABI_CALL(0x00012780u, sub_00012780); /* call 0x00012780 */

loc_0002A4E1: ;
    ecx = MEM32(edi + 0x20);
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002A50A; /* jae: above or equal (unsigned >=) */

loc_0002A4EB: ;
    ebp = 0x40000;

loc_0002A4F0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A503; /* je: equal / zero */

loc_0002A4F6: ;
    edx = eax;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A503; /* je: equal / zero */

loc_0002A500: ;
    MEM32(eax + 4) = MEM32(eax + 4) | ebp;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0002A503: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002A4F0; /* jb: below (unsigned <) */

loc_0002A50A: ;
    eax = MEM32(0x64D29C);
    eax = MEM32(eax + 0x430);
    ecx = eax + 0x7D8;
    MEM32(eax + 0xF238) = ecx;
    PUSH32(esp, 0x0002A526u); RECOMP_ABI_CALL(0x000113D0u, sub_000113D0); /* call 0x000113D0 */

loc_0002A526: ;
    MEMF(0x34A76C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x64D918) = MEM32(0x64D918) - 1;
    _fa = (uint32_t)(MEM32(0x64D918)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002A56C; /* jne: not equal / not zero */

loc_0002A534: ;
    xmm0 = XMM_SCALAR(MEMF(0x33A200)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002A56C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3337C0)) */

loc_0002A545: ;
    PUSH32(esp, 0x0002A54Au); RECOMP_ABI_CALL(0x000113D0u, sub_000113D0); /* call 0x000113D0 */

loc_0002A54A: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x33A200)); /* fsub dword ptr [0x33a200] */
    xmm0 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    MEMF(0x33A200) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x64D014)); /* fadd dword ptr [0x64d014] */
    MEMF(0x64D014) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002A56C: ;
    esi = esp + 0x28;
    PUSH32(esp, 0x0002A575u); RECOMP_ABI_CALL(0x00016A20u, sub_00016A20); /* call 0x00016A20 */

loc_0002A575: ;
    eax = esp + 0x1C;
    PUSH32(esp, 0x0002A57Eu); RECOMP_ABI_CALL(0x00019B40u, sub_00019B40); /* call 0x00019B40 */

loc_0002A57E: ;
    ecx = MEM32(esp + 0x44);
    eax = edi;
    PUSH32(esp, 0x0002A589u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_0002A589: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_0002A45D
 * Original: 0x0002A45D - 0x0002A591 (308 bytes, 82 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A45D(void)
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

loc_0002A45D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x0002A467u); RECOMP_ABI_CALL(0x00056210u, sub_00056210); /* call 0x00056210 */

loc_0002A467: ;
    PUSH32(esp, 0x0002A46Cu); RECOMP_ABI_CALL(0x000BD960u, sub_000BD960); /* call 0x000BD960 */

loc_0002A46C: ;
    goto loc_0002A473;

    PUSH32(esp, 0x0002A473u); RECOMP_ABI_CALL(0x00056210u, sub_00056210); /* call 0x00056210 */

loc_0002A473: ;
    eax = MEM32(0x64D288);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A486; /* je: equal / zero */

loc_0002A47C: ;
    MEM32(0x64D288) = 0;

loc_0002A486: ;
    eax = MEM32(edi + 0x30);
    eax = MEM32(eax + 0xA8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A49D; /* je: equal / zero */

loc_0002A493: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, 0);
    PUSH32(esp, 0x23);
    { uint32_t _icall_target = MEM32(eax + 0x2C); PUSH32(esp, 0x0002A49Au); RECOMP_ICALL_SAFE_AT_CC(_icall_target, _icall_esp, 0x0002A497u); } /* indirect call */
    }

loc_0002A49A: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002A49D: ;
    eax = edi;
    MEM32(0x64D004) = ebx;
    PUSH32(esp, 0x0002A4AAu); RECOMP_ABI_CALL(0x00064C30u, sub_00064C30); /* call 0x00064C30 */

loc_0002A4AA: ;
    PUSH32(esp, 0x0002A4AFu); RECOMP_ABI_CALL(0x000F84E0u, sub_000F84E0); /* call 0x000F84E0 */

loc_0002A4AF: ;
    PUSH32(esp, 0x0002A4B4u); RECOMP_ABI_CALL(0x000C0190u, sub_000C0190); /* call 0x000C0190 */

loc_0002A4B4: ;
    ecx = MEM32(0x64D1DC);
    eax = MEM32(ecx + 0x3C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A4D1; /* je: equal / zero */

loc_0002A4C1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A4D1; /* je: equal / zero */

loc_0002A4C6: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A4D1; /* je: equal / zero */

loc_0002A4CB: ;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002A4D1u); RECOMP_ABI_CALL(0x00015110u, sub_00015110); /* call 0x00015110 */

loc_0002A4D1: ;
    eax = MEM32(0x34A760);
    MEM32(0x34A75C) = edi;
    PUSH32(esp, 0x0002A4E1u); RECOMP_ABI_CALL(0x00012780u, sub_00012780); /* call 0x00012780 */

loc_0002A4E1: ;
    ecx = MEM32(edi + 0x20);
    esi = MEM32(edi + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002A50A; /* jae: above or equal (unsigned >=) */

loc_0002A4EB: ;
    ebp = 0x40000;

loc_0002A4F0: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A503; /* je: equal / zero */

loc_0002A4F6: ;
    edx = eax;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A503; /* je: equal / zero */

loc_0002A500: ;
    MEM32(eax + 4) = MEM32(eax + 4) | ebp;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0002A503: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002A4F0; /* jb: below (unsigned <) */

loc_0002A50A: ;
    eax = MEM32(0x64D29C);
    eax = MEM32(eax + 0x430);
    ecx = eax + 0x7D8;
    MEM32(eax + 0xF238) = ecx;
    PUSH32(esp, 0x0002A526u); RECOMP_ABI_CALL(0x000113D0u, sub_000113D0); /* call 0x000113D0 */

loc_0002A526: ;
    MEMF(0x34A76C) = (float)fp_top(); fp_pop(); /* fstp */
    MEM32(0x64D918) = MEM32(0x64D918) - 1;
    _fa = (uint32_t)(MEM32(0x64D918)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002A56C; /* jne: not equal / not zero */

loc_0002A534: ;
    xmm0 = XMM_SCALAR(MEMF(0x33A200)); /* movss */
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337C0); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002A56C; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3337C0)) */

loc_0002A545: ;
    PUSH32(esp, 0x0002A54Au); RECOMP_ABI_CALL(0x000113D0u, sub_000113D0); /* call 0x000113D0 */

loc_0002A54A: ;
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(0x33A200)); /* fsub dword ptr [0x33a200] */
    xmm0 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    MEMF(0x33A200) = xmm0.f[0]; /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() + MEMF(0x64D014)); /* fadd dword ptr [0x64d014] */
    MEMF(0x64D014) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002A56C: ;
    esi = esp + 0x28;
    PUSH32(esp, 0x0002A575u); RECOMP_ABI_CALL(0x00016A20u, sub_00016A20); /* call 0x00016A20 */

loc_0002A575: ;
    eax = esp + 0x1C;
    PUSH32(esp, 0x0002A57Eu); RECOMP_ABI_CALL(0x00019B40u, sub_00019B40); /* call 0x00019B40 */

loc_0002A57E: ;
    ecx = MEM32(esp + 0x44);
    eax = edi;
    PUSH32(esp, 0x0002A589u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_0002A589: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
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
 * sub_0002A5A0
 * Original: 0x0002A5A0 - 0x0002A666 (198 bytes, 61 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A5A0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002A5A0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(0x64D974);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A5BE; /* je: equal / zero */

loc_0002A5AF: ;
    esi = edi;
    PUSH32(esp, 0x0002A5B6u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002A5B6: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002A5BEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002A5BBu); } /* indirect call */
    }

loc_0002A5BE: ;
    edi = MEM32(0x64D984);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    MEM32(0x64D974) = ebx;
    MEM32(0x64D978) = ebx;
    MEM32(0x64D97C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A5E9; /* je: equal / zero */

loc_0002A5DA: ;
    esi = edi;
    PUSH32(esp, 0x0002A5E1u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002A5E1: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002A5E9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002A5E6u); } /* indirect call */
    }

loc_0002A5E9: ;
    eax = MEM32(0x350D4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    MEM32(0x64D984) = ebx;
    MEM32(0x64D988) = ebx;
    MEM32(0x64D98C) = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A648; /* je: equal / zero */

loc_0002A604: ;
    ecx = MEM32(eax + 0x4030);
    esi = 1;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A62D; /* je: equal / zero */

loc_0002A613: ;
    eax = MEM32(eax + 0x402C);
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002A620u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002A61Du); } /* indirect call */
    }

loc_0002A620: ;
    eax = MEM32(0x350D4C);
    _fa = (uint32_t)(MEM32(eax + 0x4030)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x4030), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A613; /* jne: not equal / not zero */

loc_0002A62D: ;
    PUSH32(esp, eax);
    edi = eax;
    PUSH32(esp, 0x0002A635u); RECOMP_ABI_CALL(0x0002CFB0u, sub_0002CFB0); /* call 0x0002CFB0 */

loc_0002A635: ;
    PUSH32(esp, 0x0002A63Au); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002A63A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002A642u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002A63Fu); } /* indirect call */
    }

loc_0002A642: ;
    MEM32(0x350D4C) = ebx;

loc_0002A648: ;
    eax = MEM32(0x64D21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A656; /* je: equal / zero */

loc_0002A651: ;
    PUSH32(esp, 0x0002A656u); RECOMP_ABI_CALL(0x00013330u, sub_00013330); /* call 0x00013330 */

loc_0002A656: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x64D21C) = ebx;
    MEM32(0x34AC38) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002A620
 * Original: 0x0002A620 - 0x0002A666 (70 bytes, 22 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A620(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A620: ;
    eax = MEM32(0x350D4C);
    _fa = (uint32_t)(MEM32(eax + 0x4030)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x4030), esi (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0002A613(); return; } /* jne: not equal / not zero */

loc_0002A62D: ;
    PUSH32(esp, eax);
    edi = eax;
    PUSH32(esp, 0x0002A635u); RECOMP_ABI_CALL(0x0002CFB0u, sub_0002CFB0); /* call 0x0002CFB0 */

loc_0002A635: ;
    PUSH32(esp, 0x0002A63Au); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002A63A: ;
    edx = MEM32(eax);
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002A642u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002A63Fu); } /* indirect call */
    }

loc_0002A642: ;
    MEM32(0x350D4C) = ebx;
    eax = MEM32(0x64D21C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A656; /* je: equal / zero */

loc_0002A651: ;
    PUSH32(esp, 0x0002A656u); RECOMP_ABI_CALL(0x00013330u, sub_00013330); /* call 0x00013330 */

loc_0002A656: ;
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(0x64D21C) = ebx;
    MEM32(0x34AC38) = ebx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002A670
 * Original: 0x0002A670 - 0x0002A6EB (123 bytes, 34 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A670(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002A670: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297168);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A694; /* jne: not equal / not zero */

loc_0002A68F: ;
    PUSH32(esp, 0x0002A694u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002A694: ;
    edx = 0x4050;
    ecx = eax;
    PUSH32(esp, 0x0002A6A0u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0002A6A0: ;
    MEM32(esp) = eax;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = 0;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A6D5; /* je: equal / zero */

loc_0002A6AF: ;
    ecx = MEM32(esp + 0x14);
    edx = MEM32(0x64D3D4);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002A6C1u); RECOMP_ABI_CALL(0x0002CDC0u, sub_0002CDC0); /* call 0x0002CDC0 */

loc_0002A6C1: ;
    MEM32(0x350D4C) = eax;
    ecx = MEM32(esp + 4);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002A6D5: ;
    ecx = MEM32(esp + 4);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(0x350D4C) = eax;
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002A6F0
 * Original: 0x0002A6F0 - 0x0002A7A7 (183 bytes, 78 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A6F0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A6F0: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0002A72D; /* jne: not equal / not zero */

loc_0002A70D: ;
    edx = MEM32(ebx);
    /* nop */

loc_0002A710: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(eax + 0xC) (32-bit) */
    SET_LO8(ecx, (CMP_B(_fa, _fb)) ? 1 : 0); /* setb */
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    esi = eax;
    MEM8(esp + 0xC) = LO8(ecx);
    if (CMP_EQ(_fa, _fb)) goto loc_0002A724; /* je: equal / zero */

loc_0002A720: ;
    eax = MEM32(eax);
    goto loc_0002A727;

loc_0002A724: ;
    eax = MEM32(eax + 8);

loc_0002A727: ;
    _fa = (uint32_t)(MEM8(eax + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(eax + 0x11), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A710; /* je: equal / zero */

loc_0002A72D: ;
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    eax = esi;
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A76C; /* je: equal / zero */

loc_0002A737: ;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A75F; /* jne: not equal / not zero */

loc_0002A73E: ;
    PUSH32(esp, ebx);
    PUSH32(esp, 1);
    ecx = esp + 0x1C;
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0002A74Du); RECOMP_ABI_CALL(0x0002A8D0u, sub_0002A8D0); /* call 0x0002A8D0 */

loc_0002A74D: ;
    edx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = edx;
    MEM8(ebp + 4) = 1;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0002A75F: ;
    edx = esp + 0x14;
    PUSH32(esp, 0x0002A768u); RECOMP_ABI_CALL(0x0002AAC0u, sub_0002AAC0); /* call 0x0002AAC0 */

loc_0002A768: ;
    eax = MEM32(esp + 0x14);

loc_0002A76C: ;
    ecx = MEM32(eax + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(ebx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002A797; /* jae: above or equal (unsigned >=) */

loc_0002A773: ;
    edx = MEM32(esp + 0xC);
    PUSH32(esp, ebx);
    PUSH32(esp, edx);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0002A785u); RECOMP_ABI_CALL(0x0002A8D0u, sub_0002A8D0); /* call 0x0002A8D0 */

loc_0002A785: ;
    ecx = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    MEM32(ebp) = ecx;
    MEM8(ebp + 4) = 1;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ecx);
    esp += 8; return; /* ret 4 */

loc_0002A797: ;
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
 * sub_0002A794
 * Original: 0x0002A794 - 0x0002A7A7 (19 bytes, 9 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A794(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A794: ;
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002A7B0
 * Original: 0x0002A7B0 - 0x0002A7C2 (18 bytes, 5 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A7B0(void)
{

loc_0002A7B0: ;
    PUSH32(esp, 0x0002A7B5u); RECOMP_ABI_CALL(0x00276330u, sub_00276330); /* call 0x00276330 */

loc_0002A7B5: ;
    MEM32(esi + 4) = eax;
    MEM32(esi + 8) = 0;
    eax = esi;
    esp += 4; return; /* ret */

}

/**
 * sub_0002A7D0
 * Original: 0x0002A7D0 - 0x0002A8B2 (226 bytes, 79 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002A7D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002A7D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x296EE0);
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
    if (CMP_BE(_fa, _fb)) goto loc_0002A800; /* jbe: below or equal (unsigned <=) */

loc_0002A7FB: ;
    g_seh_ebp = ebp; sub_00018B70(); return; /* tail jmp 0x00018B70 */

loc_0002A800: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A80B; /* jne: not equal / not zero */

loc_0002A807: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    goto loc_0002A813;

loc_0002A80B: ;
    eax = MEM32(esi + 0xC);
    _fb = (uint32_t)(ecx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */

loc_0002A813: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002A8A1; /* jae: above or equal (unsigned >=) */

loc_0002A81B: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    edi = edx * 4;
    MEM32(ebp + -24) = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0002A833; /* jne: not equal / not zero */

loc_0002A82E: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A833u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002A833: ;
    edx = edi;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A83Cu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0002A83C: ;
    MEM32(ebp + -4) = 0;
    edx = MEM32(ebp + -24);
    ecx = MEM32(esi + 4);
    ebx = eax;
    eax = MEM32(esi + 8);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = ebx;
    MEM32(ebp + -20) = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A85Bu); RECOMP_ABI_CALL(0x0002AF30u, sub_0002AF30); /* call 0x0002AF30 */

loc_0002A85B: ;
    MEM32(ebp + -4) = 0xFFFFFFFFu;
    edi = MEM32(esi + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A871; /* jne: not equal / not zero */

loc_0002A86C: ;
    MEM32(ebp + -20) = edi;
    goto loc_0002A87C;

loc_0002A871: ;
    eax = MEM32(esi + 8);
    _fb = (uint32_t)(edi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((2) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    MEM32(ebp + -20) = eax;

loc_0002A87C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A88D; /* je: equal / zero */

loc_0002A880: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002A885u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002A885: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002A88Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002A88Au); } /* indirect call */
    }

loc_0002A88D: ;
    eax = MEM32(ebp + -24);
    ecx = MEM32(ebp + -20);
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ebx + ecx * 4;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = edx;
    MEM32(esi + 4) = ebx;

loc_0002A8A1: ;
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
 * sub_0002A893
 * Original: 0x0002A893 - 0x0002A8B2 (31 bytes, 13 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A893(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A893: ;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = ebx + ecx * 4;
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 8) = edx;
    MEM32(esi + 4) = ebx;
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
 * sub_0002A8B2
 * Original: 0x0002A8B2 - 0x0002A8D0 (30 bytes, 18 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A8B2(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A8B2: ;
    eax = MEM32(ebp + -20);
    PUSH32(esp, 0x0002A8BAu); RECOMP_ABI_CALL(0x00016F20u, sub_00016F20); /* call 0x00016F20 */

loc_0002A8BA: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002A8C3u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_0002A8C3: ;
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
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0002A8D0
 * Original: 0x0002A8D0 - 0x0002AA6E (414 bytes, 139 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002A8D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002A8D0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297148);
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
    if (CMP_B(_fa, _fb)) goto loc_0002A941; /* jb: below (unsigned <) */

loc_0002A8F5: ;
    PUSH32(esp, 0x13);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x323378);
    ecx = esp + 0xC;
    MEM32(esp + 0x24) = 0xF;
    MEM32(esp + 0x20) = esi;
    MEM8(esp + 0x10) = 0;
    PUSH32(esp, 0x0002A918u); RECOMP_ABI_CALL(0x00017340u, sub_00017340); /* call 0x00017340 */

loc_0002A918: ;
    eax = esp + 4;
    PUSH32(esp, eax);
    ecx = esp + 0x24;
    MEM32(esp + 0x54) = esi;
    PUSH32(esp, 0x0002A92Au); RECOMP_ABI_CALL(0x00017430u, sub_00017430); /* call 0x00017430 */

loc_0002A92A: ;
    PUSH32(esp, 0x334DD0);
    ecx = esp + 0x24;
    PUSH32(esp, ecx);
    MEM32(esp + 0x28) = 0x323120;
    PUSH32(esp, 0x0002A941u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_0002A941: ;
    edx = MEM32(esp + 0x60);
    eax = MEM32(edi + 4);
    PUSH32(esp, ebx);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002A954u); RECOMP_ABI_CALL(0x0002AA70u, sub_0002AA70); /* call 0x0002AA70 */

loc_0002A954: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0002A978; /* jne: not equal / not zero */

loc_0002A968: ;
    MEM32(eax + 4) = ecx;
    eax = MEM32(edi + 4);
    MEM32(eax) = ecx;
    edx = MEM32(edi + 4);
    MEM32(edx + 8) = ecx;
    goto loc_0002A99B;

loc_0002A978: ;
    SET_LO8(eax, MEM8(esp + 0x60));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A98D; /* je: equal / zero */

loc_0002A980: ;
    MEM32(esi) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A99B; /* jne: not equal / not zero */

loc_0002A989: ;
    MEM32(eax) = ecx;
    goto loc_0002A99B;

loc_0002A98D: ;
    MEM32(esi + 8) = ecx;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A99B; /* jne: not equal / not zero */

loc_0002A998: ;
    MEM32(eax + 8) = ecx;

loc_0002A99B: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(MEM8(edx + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x10), 0 (8-bit) */
    eax = ecx + 4;
    esi = ecx;
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_0002AA4C; /* jne: not equal / not zero */

loc_0002A9AF: ;
    PUSH32(esp, ebp);

loc_0002A9B0: ;
    ecx = MEM32(eax);
    ebp = MEM32(ecx + 4);
    edx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AA08; /* jne: not equal / not zero */

loc_0002A9BC: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(edx + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x10), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A9DD; /* jne: not equal / not zero */

loc_0002A9C5: ;
    ecx = MEM32(eax);
    MEM8(ecx + 0x10) = LO8(ebx);
    MEM8(edx + 0x10) = LO8(ebx);
    edx = MEM32(eax);
    ecx = MEM32(edx + 4);
    MEM8(ecx + 0x10) = 0;
    edx = MEM32(eax);
    esi = MEM32(edx + 4);
    goto loc_0002AA36;

loc_0002A9DD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002A9EA; /* jne: not equal / not zero */

loc_0002A9E2: ;
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0002A9EAu); RECOMP_ABI_CALL(0x0001A430u, sub_0001A430); /* call 0x0001A430 */

loc_0002A9EA: ;
    eax = MEM32(esi + 4);
    MEM8(eax + 0x10) = LO8(ebx);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x10) = 0;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002AA06u); RECOMP_ABI_CALL(0x0001A4D0u, sub_0001A4D0); /* call 0x0001A4D0 */

loc_0002AA06: ;
    goto loc_0002AA36;

loc_0002AA08: ;
    _fa = (uint32_t)(MEM8(edx + 0x10)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x10), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002A9C5; /* je: equal / zero */

loc_0002AA0E: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AA1A; /* jne: not equal / not zero */

loc_0002AA12: ;
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0002AA1Au); RECOMP_ABI_CALL(0x0001A4D0u, sub_0001A4D0); /* call 0x0001A4D0 */

loc_0002AA1A: ;
    eax = MEM32(esi + 4);
    MEM8(eax + 0x10) = LO8(ebx);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x10) = 0;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002AA36u); RECOMP_ABI_CALL(0x0001A430u, sub_0001A430); /* call 0x0001A430 */

loc_0002AA36: ;
    ecx = MEM32(esi + 4);
    SET_LO8(edx, MEM8(ecx + 0x10));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = esi + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_0002A9B0; /* je: equal / zero */

loc_0002AA47: ;
    ecx = MEM32(esp + 0x68);
    POP32(esp, ebp);

loc_0002AA4C: ;
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
 * sub_0002AA70
 * Original: 0x0002AA70 - 0x0002AAB9 (73 bytes, 22 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 5 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AA70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002AA70: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AA7E; /* jne: not equal / not zero */

loc_0002AA79: ;
    PUSH32(esp, 0x0002AA7Eu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002AA7E: ;
    edx = 0x14;
    ecx = eax;
    PUSH32(esp, 0x0002AA8Au); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0002AA8A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002AAB6; /* je: equal / zero */

loc_0002AA8E: ;
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

loc_0002AAB6: ;
    esp += 24; return; /* ret 20 */

}

/**
 * sub_0002AAC0
 * Original: 0x0002AAC0 - 0x0002AB1D (93 bytes, 43 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AAC0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002AAC0: ;
    eax = MEM32(edx);
    SET_LO8(ecx, MEM8(eax + 0x11));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002AACF; /* je: equal / zero */

loc_0002AAC9: ;
    eax = MEM32(eax + 8);
    MEM32(edx) = eax;
    esp += 4; return; /* ret */

loc_0002AACF: ;
    ecx = MEM32(eax);
    PUSH32(esp, ebx);
    SET_LO8(ebx, MEM8(ecx + 0x11));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AAF3; /* jne: not equal / not zero */

loc_0002AAD9: ;
    eax = MEM32(ecx + 8);
    SET_LO8(ebx, MEM8(eax + 0x11));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AAEF; /* jne: not equal / not zero */

loc_0002AAE3: ;
    ecx = eax;
    eax = MEM32(ecx + 8);
    SET_LO8(ebx, MEM8(eax + 0x11));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002AAE3; /* je: equal / zero */

loc_0002AAEF: ;
    MEM32(edx) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002AAF3: ;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x11));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AB1B; /* jne: not equal / not zero */

loc_0002AAFD: ;
    /* nop */

loc_0002AB00: ;
    ecx = MEM32(edx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AB12; /* jne: not equal / not zero */

loc_0002AB06: ;
    MEM32(edx) = eax;
    eax = MEM32(eax + 4);
    SET_LO8(ecx, MEM8(eax + 0x11));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002AB00; /* je: equal / zero */

loc_0002AB12: ;
    SET_LO8(ecx, MEM8(eax + 0x11));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ecx), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AB1B; /* jne: not equal / not zero */

loc_0002AB19: ;
    MEM32(edx) = eax;

loc_0002AB1B: ;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002AB20
 * Original: 0x0002AB20 - 0x0002AB89 (105 bytes, 46 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AB20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002AB20: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_0002AB67; /* je: equal / zero */

loc_0002AB34: ;
    ebp = MEM32(esp + 0x24);

loc_0002AB38: ;
    ecx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002AB67; /* je: equal / zero */

loc_0002AB40: ;
    eax = MEM32(esi);
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0002AB55; /* jbe: below or equal (unsigned <=) */

loc_0002AB49: ;
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
    goto loc_0002AB63;

loc_0002AB55: ;
    edx = esp + 0x20;
    if (CMP_B(_fa, _fb)) goto loc_0002AB5E; /* jb: below (unsigned <) */

loc_0002AB5B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002AB5E: ;
    PUSH32(esp, 0x0002AB63u); RECOMP_ABI_CALL(0x0001A390u, sub_0001A390); /* call 0x0001A390 */

loc_0002AB63: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002AB38; /* jne: not equal / not zero */

loc_0002AB67: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edi;
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002AB7E; /* je: equal / zero */

loc_0002AB6F: ;
    /* nop */

loc_0002AB70: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0002AB70; /* jne: not equal / not zero */

loc_0002AB7E: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002AB42
 * Original: 0x0002AB42 - 0x0002AB89 (71 bytes, 32 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AB42(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002AB42: ;
    ecx = MEM32(ecx + 0xC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0002AB55; /* jbe: below or equal (unsigned <=) */

loc_0002AB49: ;
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
    goto loc_0002AB63;

loc_0002AB55: ;
    edx = esp + 0x20;
    if (CMP_B(_fa, _fb)) goto loc_0002AB5E; /* jb: below (unsigned <) */

loc_0002AB5B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002AB5E: ;
    PUSH32(esp, 0x0002AB63u); RECOMP_ABI_CALL(0x0001A390u, sub_0001A390); /* call 0x0001A390 */

loc_0002AB63: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0002AB38(); return; } /* jne: not equal / not zero */

loc_0002AB67: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edi;
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002AB7E; /* je: equal / zero */

loc_0002AB6F: ;
    /* nop */

loc_0002AB70: ;
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
    if (CMP_NE(_fa, _fb)) goto loc_0002AB70; /* jne: not equal / not zero */

loc_0002AB7E: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002AB5E
 * Original: 0x0002AB5E - 0x0002AB89 (43 bytes, 21 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AB5E(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002AB5E: ;
    PUSH32(esp, 0x0002AB63u); RECOMP_ABI_CALL(0x0001A390u, sub_0001A390); /* call 0x0001A390 */

loc_0002AB63: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0002AB38(); return; } /* jne: not equal / not zero */

loc_0002AB67: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    ecx = edi;
    eax = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002AB7E; /* je: equal / zero */

loc_0002AB6F: ;
    /* nop */

loc_0002AB70: ;
    edx = MEM32(eax);
    MEM32(ecx) = edx;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AB70; /* jne: not equal / not zero */

loc_0002AB7E: ;
    eax = MEM32(esp + 0x14);
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(eax) = ecx;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002AB90
 * Original: 0x0002AB90 - 0x0002AC05 (117 bytes, 47 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AB90(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002AB90: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_0002ABEA; /* je: equal / zero */

loc_0002ABA4: ;
    ebx = MEM32(esp + 0x24);
    esi = MEM32(esp + 0x20);
    /* nop */

loc_0002ABB0: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002ABEA; /* je: equal / zero */

loc_0002ABB4: ;
    eax = MEM32(edx + 0xC);
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_BE(_fa, _fb)) goto loc_0002ABCF; /* jbe: below or equal (unsigned <=) */

loc_0002ABBD: ;
    ecx = edi;
    edx = esp + 0x18;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(4)) >> 32) & 1);
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = eax;
    PUSH32(esp, 0x0002ABCDu); RECOMP_ABI_CALL(0x0001A390u, sub_0001A390); /* call 0x0001A390 */

loc_0002ABCD: ;
    goto loc_0002ABE2;

loc_0002ABCF: ;
    if (CMP_AE(_fa, _fb)) goto loc_0002ABD6; /* jae: above or equal (unsigned >=) */

loc_0002ABD1: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002ABE6;

loc_0002ABD6: ;
    edx = esp + 0x18;
    PUSH32(esp, 0x0002ABDFu); RECOMP_ABI_CALL(0x0001A390u, sub_0001A390); /* call 0x0001A390 */

loc_0002ABDF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esi) + (uint64_t)(4)) >> 32) & 1);
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002ABE2: ;
    edx = MEM32(esp + 0x18);

loc_0002ABE6: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002ABB0; /* jne: not equal / not zero */

loc_0002ABEA: ;
    eax = MEM32(esp + 0x18);
    ebx = MEM32(esp + 0x14);
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002ABFBu); RECOMP_ABI_CALL(0x0002ACE0u, sub_0002ACE0); /* call 0x0002ACE0 */

loc_0002ABFB: ;
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
 * sub_0002AC10
 * Original: 0x0002AC10 - 0x0002ACD7 (199 bytes, 90 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AC10(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002AC10: ;
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
    if (CMP_LE(_fas, _fbs)) goto loc_0002AC93; /* jle: less or equal (signed <=) */

loc_0002AC2B: ;
    esi = MEM32(esp + 0x24);
    /* nop */

loc_0002AC30: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002ACAA; /* jle: less or equal (signed <=) */

loc_0002AC34: ;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, ebx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002AC40u); RECOMP_ABI_CALL(0x0002AD20u, sub_0002AD20); /* call 0x0002AD20 */

loc_0002AC40: ;
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
    if (CMP_GE(_fas, _fbs)) goto loc_0002AC79; /* jge: greater or equal (signed >=) */

loc_0002AC6E: ;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0002AC75u); RECOMP_ABI_CALL(0x0002AC10u, sub_0002AC10); /* call 0x0002AC10 */

loc_0002AC75: ;
    ebx = ebp;
    goto loc_0002AC84;

loc_0002AC79: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0002AC80u); RECOMP_ABI_CALL(0x0002AC10u, sub_0002AC10); /* call 0x0002AC10 */

loc_0002AC80: ;
    edi = MEM32(esp + 0x1C);

loc_0002AC84: ;
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
    if (CMP_G(_fas, _fbs)) goto loc_0002AC30; /* jg: greater (signed >) */

loc_0002AC93: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002ACA2; /* jle: less or equal (signed <=) */

loc_0002AC98: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0002AC9Fu); RECOMP_ABI_CALL(0x0002AEC0u, sub_0002AEC0); /* call 0x0002AEC0 */

loc_0002AC9F: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002ACA2: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002ACAA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x20) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x20 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002AC93; /* jle: less or equal (signed <=) */

loc_0002ACAF: ;
    eax = edi;
    _fb = (uint32_t)(ebx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - ebx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = eax & 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(4) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 4 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002ACC5; /* jle: less or equal (signed <=) */

loc_0002ACBB: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0002ACC2u); RECOMP_ABI_CALL(0x0002B0A0u, sub_0002B0A0); /* call 0x0002B0A0 */

loc_0002ACC2: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002ACC5: ;
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    PUSH32(esp, 0x0002ACCCu); RECOMP_ABI_CALL(0x0002AE70u, sub_0002AE70); /* call 0x0002AE70 */

loc_0002ACCC: ;
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
 * sub_0002ACCF
 * Original: 0x0002ACCF - 0x0002ACD7 (8 bytes, 6 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002ACCF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002ACCF: ;
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
 * sub_0002ACE0
 * Original: 0x0002ACE0 - 0x0002AD1C (60 bytes, 25 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002ACE0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002ACE0: ;
    eax = MEM32(esp + 4);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002AD12; /* je: equal / zero */

loc_0002ACED: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);

loc_0002ACF2: ;
    eax = MEM32(eax + 0xC);
    MEM32(esi) = eax;
    edx = esp + 0xC;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0002AD03u); RECOMP_ABI_CALL(0x0001A390u, sub_0001A390); /* call 0x0001A390 */

loc_0002AD03: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002ACF2; /* jne: not equal / not zero */

loc_0002AD0B: ;
    MEM32(ebx) = esi;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0002AD12: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ebx) = ecx;
    eax = ebx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002ACEB
 * Original: 0x0002ACEB - 0x0002AD1C (49 bytes, 21 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002ACEB(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002ACEB: ;
    if (_flags /* je: equal / zero */) goto loc_0002AD12;

loc_0002ACED: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x14);

loc_0002ACF2: ;
    eax = MEM32(eax + 0xC);
    MEM32(esi) = eax;
    edx = esp + 0xC;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0002AD03u); RECOMP_ABI_CALL(0x0001A390u, sub_0001A390); /* call 0x0001A390 */

loc_0002AD03: ;
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edi (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002ACF2; /* jne: not equal / not zero */

loc_0002AD0B: ;
    MEM32(ebx) = esi;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

loc_0002AD12: ;
    ecx = MEM32(esp + 0x10);
    MEM32(ebx) = ecx;
    eax = ebx;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002AD20
 * Original: 0x0002AD20 - 0x0002AE6A (330 bytes, 139 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AD20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002AD20: ;
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
    PUSH32(esp, 0x0002AD48u); RECOMP_ABI_CALL(0x0002AF60u, sub_0002AF60); /* call 0x0002AF60 */

loc_0002AD48: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edi (32-bit) */
    eax = edi;
    esi = edi + 4;
    if (CMP_AE(_fa, _fb)) goto loc_0002AD66; /* jae: above or equal (unsigned >=) */

loc_0002AD54: ;
    ecx = MEM32(eax + -4);
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0002AD66; /* ja: above (unsigned >) */

loc_0002AD5D: ;
    if (CMP_B(_fa, _fb)) goto loc_0002AD66; /* jb: below (unsigned <) */

loc_0002AD5F: ;
    _fb = (uint32_t)(0xFFFFFFFCu) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0xFFFFFFFCu;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002AD54; /* jb: below (unsigned <) */

loc_0002AD66: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002AD7F; /* jae: above or equal (unsigned >=) */

loc_0002AD6A: ;
    edx = MEM32(eax);
    /* nop */

loc_0002AD70: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0002AD7F; /* ja: above (unsigned >) */

loc_0002AD76: ;
    if (CMP_B(_fa, _fb)) goto loc_0002AD7F; /* jb: below (unsigned <) */

loc_0002AD78: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002AD70; /* jb: below (unsigned <) */

loc_0002AD7F: ;
    ecx = esi;
    ebp = eax;

loc_0002AD83: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002ADA9; /* jae: above or equal (unsigned >=) */

loc_0002AD87: ;
    edx = MEM32(eax);
    edi = MEM32(ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, edx (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0002ADA2; /* ja: above (unsigned >) */

loc_0002AD8F: ;
    if (CMP_B(_fa, _fb)) goto loc_0002ADA9; /* jb: below (unsigned <) */

loc_0002AD91: ;
    ebx = MEM32(ecx);
    edx = esi;
    edi = MEM32(edx);
    MEM32(edx) = ebx;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ecx) = edi;

loc_0002ADA2: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002AD87; /* jb: below (unsigned <) */

loc_0002ADA9: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x1C)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(esp + 0x1C) (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0002ADE0; /* jbe: below or equal (unsigned <=) */

loc_0002ADAF: ;
    edx = ebp + -4;

loc_0002ADB2: ;
    edi = MEM32(edx);
    ebx = MEM32(eax);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edi (32-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0002ADC8; /* ja: above (unsigned >) */

loc_0002ADBA: ;
    if (CMP_B(_fa, _fb)) goto loc_0002ADD6; /* jb: below (unsigned <) */

loc_0002ADBC: ;
    ebx = MEM32(edx);
    edi = MEM32(eax + -4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = ebx;
    MEM32(edx) = edi;

loc_0002ADC8: ;
    edi = MEM32(esp + 0x1C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    edx = edx - 4;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002ADB2; /* jb: below (unsigned <) */

loc_0002ADD6: ;
    edx = MEM32(esp + 0x1C);
    ebx = MEM32(esp + 0x20);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, edx (32-bit) */

loc_0002ADE0: ;
    if (CMP_NE(_fa, _fb)) goto loc_0002AE18; /* jne: not equal / not zero */

loc_0002ADE2: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002AE59; /* je: equal / zero */

loc_0002ADE6: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002ADF2; /* je: equal / zero */

loc_0002ADEA: ;
    edi = MEM32(esi);
    edx = MEM32(eax);
    MEM32(eax) = edi;
    MEM32(esi) = edx;

loc_0002ADF2: ;
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
    goto loc_0002AD83;

loc_0002AE18: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    ebp = ebp - 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AE41; /* jne: not equal / not zero */

loc_0002AE1F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002AE30; /* je: equal / zero */

loc_0002AE26: ;
    edi = MEM32(eax);
    edx = MEM32(ebp);
    MEM32(ebp) = edi;
    MEM32(eax) = edx;

loc_0002AE30: ;
    edi = MEM32(esi + -4);
    edx = MEM32(eax);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    MEM32(eax) = edi;
    MEM32(esi) = edx;
    goto loc_0002AD83;

loc_0002AE41: ;
    ebx = MEM32(ebp);
    edx = ecx;
    edi = MEM32(edx);
    MEM32(edx) = ebx;
    ebx = MEM32(esp + 0x20);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(ebp) = edi;
    goto loc_0002AD83;

loc_0002AE59: ;
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
 * sub_0002AE70
 * Original: 0x0002AE70 - 0x0002AEB3 (67 bytes, 28 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: crt
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AE70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002AE70: ;
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
    if (CMP_LE(_fas, _fbs)) goto loc_0002AEB0; /* jle: less or equal (signed <=) */

loc_0002AE86: ;
    PUSH32(esp, ebx);

loc_0002AE87: ;
    eax = MEM32(edi);
    ebx = MEM32(edi + esi + -4);
    MEM32(edi + esi + -4) = eax;
    edx = esi + -4;
    edx = (uint32_t)(((int32_t)(int32_t)(edx)) >> ((2) & 31u));
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    PUSH32(esp, edi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0002AE9Fu); RECOMP_ABI_CALL(0x0002B0E0u, sub_0002B0E0); /* call 0x0002B0E0 */

loc_0002AE9F: ;
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
    if (CMP_G(_fas, _fbs)) goto loc_0002AE87; /* jg: greater (signed >) */

loc_0002AEAF: ;
    POP32(esp, ebx);

loc_0002AEB0: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002AEC0
 * Original: 0x0002AEC0 - 0x0002AF25 (101 bytes, 50 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AEC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002AEC0: ;
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0xC);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002AF22; /* je: equal / zero */

loc_0002AECE: ;
    PUSH32(esp, esi);
    esi = edi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002AF21; /* je: equal / zero */

loc_0002AED6: ;
    PUSH32(esp, ebp);

loc_0002AED7: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(edi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002AEED; /* jae: above or equal (unsigned >=) */

loc_0002AEDD: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    eax = esi + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_0002AF19; /* je: equal / zero */

loc_0002AEE4: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002AF19; /* je: equal / zero */

loc_0002AEE8: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    goto loc_0002AF11;

loc_0002AEED: ;
    edx = MEM32(esi + -4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    eax = esi + -4;
    if (CMP_AE(_fa, _fb)) goto loc_0002AF19; /* jae: above or equal (unsigned >=) */

loc_0002AEF7: ;
    ebp = MEM32(eax + -4);
    edx = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, ebp (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002AEF7; /* jb: below (unsigned <) */

loc_0002AF03: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002AF19; /* je: equal / zero */

loc_0002AF07: ;
    eax = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002AF19; /* je: equal / zero */

loc_0002AF0E: ;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, edx);

loc_0002AF11: ;
    PUSH32(esp, 0x0002AF16u); RECOMP_ABI_CALL(0x0002B150u, sub_0002B150); /* call 0x0002B150 */

loc_0002AF16: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002AF19: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AED7; /* jne: not equal / not zero */

loc_0002AF20: ;
    POP32(esp, ebp);

loc_0002AF21: ;
    POP32(esp, esi);

loc_0002AF22: ;
    POP32(esp, edi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002AF30
 * Original: 0x0002AF30 - 0x0002AF54 (36 bytes, 16 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AF30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002AF30: ;
    ecx = MEM32(esp + 4);
    edx = MEM32(esp + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002AF53; /* je: equal / zero */

loc_0002AF3C: ;
    PUSH32(esp, esi);
    /* nop */

loc_0002AF40: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002AF48; /* je: equal / zero */

loc_0002AF44: ;
    esi = MEM32(ecx);
    MEM32(eax) = esi;

loc_0002AF48: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 4;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002AF40; /* jne: not equal / not zero */

loc_0002AF52: ;
    POP32(esp, esi);

loc_0002AF53: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0002AF60
 * Original: 0x0002AF60 - 0x0002B09A (314 bytes, 134 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002AF60(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002AF60: ;
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
    if (CMP_LE(_fas, _fbs)) goto loc_0002B06D; /* jle: less or equal (signed <=) */

loc_0002AF7C: ;
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
    if (CMP_AE(_fa, _fb)) goto loc_0002AF9E; /* jae: above or equal (unsigned >=) */

loc_0002AF99: ;
    MEM32(eax + ecx) = esi;
    MEM32(ecx) = edx;

loc_0002AF9E: ;
    edx = MEM32(ebx + ecx);
    esi = MEM32(eax + ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002AFAE; /* jae: above or equal (unsigned >=) */

loc_0002AFA8: ;
    MEM32(ebx + ecx) = esi;
    MEM32(eax + ecx) = edx;

loc_0002AFAE: ;
    edx = MEM32(eax + ecx);
    esi = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002AFBC; /* jae: above or equal (unsigned >=) */

loc_0002AFB7: ;
    MEM32(eax + ecx) = esi;
    MEM32(ecx) = edx;

loc_0002AFBC: ;
    edx = MEM32(esp + 0x18);
    edi = MEM32(edx);
    esi = edx;
    _fb = (uint32_t)(eax) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esi = esi - eax;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002AFD8; /* jae: above or equal (unsigned >=) */

loc_0002AFCA: ;
    MEM32(esp + 0x1C) = edi;
    edi = MEM32(esi);
    MEM32(edx) = edi;
    edi = MEM32(esp + 0x1C);
    MEM32(esi) = edi;

loc_0002AFD8: ;
    edi = MEM32(eax + edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(edx) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002AFEE; /* jae: above or equal (unsigned >=) */

loc_0002AFDF: ;
    MEM32(esp + 0x1C) = edi;
    edi = MEM32(edx);
    MEM32(eax + edx) = edi;
    edi = MEM32(esp + 0x1C);
    MEM32(edx) = edi;

loc_0002AFEE: ;
    edi = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B002; /* jae: above or equal (unsigned >=) */

loc_0002AFF4: ;
    MEM32(esp + 0x1C) = edi;
    edi = MEM32(esi);
    MEM32(edx) = edi;
    edi = MEM32(esp + 0x1C);
    MEM32(esi) = edi;

loc_0002B002: ;
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
    if (CMP_AE(_fa, _fb)) goto loc_0002B01E; /* jae: above or equal (unsigned >=) */

loc_0002B010: ;
    MEM32(esp + 0x1C) = ebx;
    ebx = MEM32(edi);
    MEM32(esi) = ebx;
    ebx = MEM32(esp + 0x1C);
    MEM32(edi) = ebx;

loc_0002B01E: ;
    ebx = MEM32(ebp);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B034; /* jae: above or equal (unsigned >=) */

loc_0002B025: ;
    MEM32(esp + 0x1C) = ebx;
    ebx = MEM32(esi);
    MEM32(ebp) = ebx;
    ebx = MEM32(esp + 0x1C);
    MEM32(esi) = ebx;

loc_0002B034: ;
    ebx = MEM32(esi);
    ebp = MEM32(edi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B040; /* jae: above or equal (unsigned >=) */

loc_0002B03C: ;
    MEM32(esi) = ebp;
    MEM32(edi) = ebx;

loc_0002B040: ;
    edi = MEM32(edx);
    ebx = MEM32(eax + ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B04E; /* jae: above or equal (unsigned >=) */

loc_0002B049: ;
    MEM32(edx) = ebx;
    MEM32(eax + ecx) = edi;

loc_0002B04E: ;
    edi = MEM32(esi);
    ebx = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B05A; /* jae: above or equal (unsigned >=) */

loc_0002B056: ;
    MEM32(esi) = ebx;
    MEM32(edx) = edi;

loc_0002B05A: ;
    esi = MEM32(edx);
    edi = MEM32(eax + ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B068; /* jae: above or equal (unsigned >=) */

loc_0002B063: ;
    MEM32(edx) = edi;
    MEM32(eax + ecx) = esi;

loc_0002B068: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0002B06A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0002B06D: ;
    eax = MEM32(esp + 0x10);
    edx = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B07D; /* jae: above or equal (unsigned >=) */

loc_0002B077: ;
    esi = MEM32(ecx);
    MEM32(eax) = esi;
    MEM32(ecx) = edx;

loc_0002B07D: ;
    edx = MEM32(ebp);
    esi = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B08B; /* jae: above or equal (unsigned >=) */

loc_0002B086: ;
    MEM32(ebp) = esi;
    MEM32(eax) = edx;

loc_0002B08B: ;
    edx = MEM32(eax);
    esi = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B06A; /* jae: above or equal (unsigned >=) */

loc_0002B093: ;
    MEM32(eax) = esi;
    POP32(esp, esi);
    MEM32(ecx) = edx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B00A
 * Original: 0x0002B00A - 0x0002B09A (144 bytes, 67 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B00A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002B00A: ;
    ebx = MEM32(esi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B01E; /* jae: above or equal (unsigned >=) */

loc_0002B010: ;
    MEM32(esp + 0x1C) = ebx;
    ebx = MEM32(edi);
    MEM32(esi) = ebx;
    ebx = MEM32(esp + 0x1C);
    MEM32(edi) = ebx;

loc_0002B01E: ;
    ebx = MEM32(ebp);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B034; /* jae: above or equal (unsigned >=) */

loc_0002B025: ;
    MEM32(esp + 0x1C) = ebx;
    ebx = MEM32(esi);
    MEM32(ebp) = ebx;
    ebx = MEM32(esp + 0x1C);
    MEM32(esi) = ebx;

loc_0002B034: ;
    ebx = MEM32(esi);
    ebp = MEM32(edi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B040; /* jae: above or equal (unsigned >=) */

loc_0002B03C: ;
    MEM32(esi) = ebp;
    MEM32(edi) = ebx;

loc_0002B040: ;
    edi = MEM32(edx);
    ebx = MEM32(eax + ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B04E; /* jae: above or equal (unsigned >=) */

loc_0002B049: ;
    MEM32(edx) = ebx;
    MEM32(eax + ecx) = edi;

loc_0002B04E: ;
    edi = MEM32(esi);
    ebx = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B05A; /* jae: above or equal (unsigned >=) */

loc_0002B056: ;
    MEM32(esi) = ebx;
    MEM32(edx) = edi;

loc_0002B05A: ;
    esi = MEM32(edx);
    edi = MEM32(eax + ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B068; /* jae: above or equal (unsigned >=) */

loc_0002B063: ;
    MEM32(edx) = edi;
    MEM32(eax + ecx) = esi;

loc_0002B068: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0002B06A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    esi = MEM32(ecx);
    MEM32(eax) = esi;
    MEM32(ecx) = edx;

loc_0002B07D: ;
    edx = MEM32(ebp);
    esi = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B08B; /* jae: above or equal (unsigned >=) */

loc_0002B086: ;
    MEM32(ebp) = esi;
    MEM32(eax) = edx;

loc_0002B08B: ;
    edx = MEM32(eax);
    esi = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B06A; /* jae: above or equal (unsigned >=) */

loc_0002B093: ;
    MEM32(eax) = esi;
    POP32(esp, esi);
    MEM32(ecx) = edx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B00C
 * Original: 0x0002B00C - 0x0002B09A (142 bytes, 66 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B00C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002B00C: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(edi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B01E; /* jae: above or equal (unsigned >=) */

loc_0002B010: ;
    MEM32(esp + 0x1C) = ebx;
    ebx = MEM32(edi);
    MEM32(esi) = ebx;
    ebx = MEM32(esp + 0x1C);
    MEM32(edi) = ebx;

loc_0002B01E: ;
    ebx = MEM32(ebp);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(esi) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B034; /* jae: above or equal (unsigned >=) */

loc_0002B025: ;
    MEM32(esp + 0x1C) = ebx;
    ebx = MEM32(esi);
    MEM32(ebp) = ebx;
    ebx = MEM32(esp + 0x1C);
    MEM32(esi) = ebx;

loc_0002B034: ;
    ebx = MEM32(esi);
    ebp = MEM32(edi);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ebp (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B040; /* jae: above or equal (unsigned >=) */

loc_0002B03C: ;
    MEM32(esi) = ebp;
    MEM32(edi) = ebx;

loc_0002B040: ;
    edi = MEM32(edx);
    ebx = MEM32(eax + ecx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B04E; /* jae: above or equal (unsigned >=) */

loc_0002B049: ;
    MEM32(edx) = ebx;
    MEM32(eax + ecx) = edi;

loc_0002B04E: ;
    edi = MEM32(esi);
    ebx = MEM32(edx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B05A; /* jae: above or equal (unsigned >=) */

loc_0002B056: ;
    MEM32(esi) = ebx;
    MEM32(edx) = edi;

loc_0002B05A: ;
    esi = MEM32(edx);
    edi = MEM32(eax + ecx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B068; /* jae: above or equal (unsigned >=) */

loc_0002B063: ;
    MEM32(edx) = edi;
    MEM32(eax + ecx) = esi;

loc_0002B068: ;
    POP32(esp, edi);
    POP32(esp, ebx);

loc_0002B06A: ;
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

    esi = MEM32(ecx);
    MEM32(eax) = esi;
    MEM32(ecx) = edx;

loc_0002B07D: ;
    edx = MEM32(ebp);
    esi = MEM32(eax);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B08B; /* jae: above or equal (unsigned >=) */

loc_0002B086: ;
    MEM32(ebp) = esi;
    MEM32(eax) = edx;

loc_0002B08B: ;
    edx = MEM32(eax);
    esi = MEM32(ecx);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B06A; /* jae: above or equal (unsigned >=) */

loc_0002B093: ;
    MEM32(eax) = esi;
    POP32(esp, esi);
    MEM32(ecx) = edx;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B0A0
 * Original: 0x0002B0A0 - 0x0002B0DB (59 bytes, 30 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002B0A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002B0A0: ;
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
    if (CMP_LE(_fas, _fbs)) goto loc_0002B0D7; /* jle: less or equal (signed <=) */

loc_0002B0BD: ;
    PUSH32(esp, ebx);
    edi = edi;

loc_0002B0C0: ;
    ebx = MEM32(ebp + esi * 4 + -4);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    edx = edi;
    eax = esi;
    PUSH32(esp, 0x0002B0CFu); RECOMP_ABI_CALL(0x0002B0E0u, sub_0002B0E0); /* call 0x0002B0E0 */

loc_0002B0CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0002B0C0; /* jg: greater (signed >) */

loc_0002B0D6: ;
    POP32(esp, ebx);

loc_0002B0D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B0A5
 * Original: 0x0002B0A5 - 0x0002B0DB (54 bytes, 28 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B0A5(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002B0A5: ;
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
    if (CMP_LE(_fas, _fbs)) goto loc_0002B0D7; /* jle: less or equal (signed <=) */

loc_0002B0BD: ;
    PUSH32(esp, ebx);
    edi = edi;

loc_0002B0C0: ;
    ebx = MEM32(ebp + esi * 4 + -4);
    esi--;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    PUSH32(esp, ebp);
    edx = edi;
    eax = esi;
    PUSH32(esp, 0x0002B0CFu); RECOMP_ABI_CALL(0x0002B0E0u, sub_0002B0E0); /* call 0x0002B0E0 */

loc_0002B0CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0002B0C0; /* jg: greater (signed >) */

loc_0002B0D6: ;
    POP32(esp, ebx);

loc_0002B0D7: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B0E0
 * Original: 0x0002B0E0 - 0x0002B142 (98 bytes, 45 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B0E0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002B0E0: ;
    ecx = MEM32(esp + 4);
    PUSH32(esp, esi);
    esi = eax;
    eax = esi + esi + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    PUSH32(esp, edi);
    edi = esi;
    if (CMP_GE(_fas, _fbs)) goto loc_0002B10E; /* jge: greater or equal (signed >=) */

loc_0002B0F2: ;
    PUSH32(esp, ebp);

loc_0002B0F3: ;
    ebp = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + eax * 4 + -4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(ecx + eax * 4 + -4) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B0FD; /* jae: above or equal (unsigned >=) */

loc_0002B0FC: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */

loc_0002B0FD: ;
    ebp = MEM32(ecx + eax * 4);
    MEM32(ecx + esi * 4) = ebp;
    esi = eax;
    eax = eax + eax + 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0002B0F3; /* jl: less (signed <) */

loc_0002B10D: ;
    POP32(esp, ebp);

loc_0002B10E: ;
    if (CMP_NE(_fa, _fb)) goto loc_0002B11A; /* jne: not equal / not zero */

loc_0002B110: ;
    eax = MEM32(ecx + edx * 4 + -4);
    MEM32(ecx + esi * 4) = eax;
    esi = edx + -1;

loc_0002B11A: ;
    eax = esi + -1;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    _fb = (uint32_t)(edx) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = (uint32_t)(((int32_t)(int32_t)(eax)) >> ((1) & 31u));
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sar result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0002B13C; /* jge: greater or equal (signed >=) */

loc_0002B126: ;
    edx = MEM32(ecx + eax * 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ebx (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002B13C; /* jae: above or equal (unsigned >=) */

loc_0002B12D: ;
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
    if (CMP_L(_fas, _fbs)) goto loc_0002B126; /* jl: less (signed <) */

loc_0002B13C: ;
    POP32(esp, edi);
    MEM32(ecx + esi * 4) = ebx;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B150
 * Original: 0x0002B150 - 0x0002B209 (185 bytes, 75 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B150(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002B150: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_0002B182; /* je: equal / zero */

loc_0002B177: ;
    edx = ((int32_t)eax < 0) ? 0xFFFFFFFF : 0; /* cdq */
    { int64_t _dividend = ((int64_t)(int32_t)edx << 32) | eax;
      eax = (uint32_t)((int32_t)(_dividend / (int32_t)edi));
      edx = (uint32_t)((int32_t)(_dividend % (int32_t)edi)); }
    eax = edi;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    edi = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0002B177; /* jne: not equal / not zero */

loc_0002B182: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0002B201; /* jge: greater or equal (signed >=) */

loc_0002B186: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002B201; /* jle: less or equal (signed <=) */

loc_0002B18A: ;
    edx = ebp + eax * 4;
    MEM32(esp + 0x24) = eax;

loc_0002B192: ;
    eax = MEM32(edx);
    MEM32(esp + 0x18) = eax;
    eax = edx + esi * 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    edi = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0002B1A7; /* jne: not equal / not zero */

loc_0002B1A1: ;
    eax = esp + 0x20;
    goto loc_0002B1AF;

loc_0002B1A7: ;
    MEM32(esp + 0x28) = eax;
    eax = esp + 0x28;

loc_0002B1AF: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B1ED; /* je: equal / zero */

loc_0002B1B5: ;
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
    if (CMP_GE(_fas, _fbs)) goto loc_0002B1D3; /* jge: greater or equal (signed >=) */

loc_0002B1C6: ;
    ecx = ecx + esi * 4;
    MEM32(esp + 0x10) = ecx;
    eax = esp + 0x10;
    goto loc_0002B1E7;

loc_0002B1D3: ;
    eax = (uint32_t)((int32_t)eax * (int32_t)0x3FFFFFFF);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + eax * 4;
    MEM32(esp + 0x14) = eax;
    eax = esp + 0x14;

loc_0002B1E7: ;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002B1B5; /* jne: not equal / not zero */

loc_0002B1ED: ;
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
    if ((_fa != 0)) goto loc_0002B192; /* jne: not equal / not zero */

loc_0002B201: ;
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
 * sub_0002B1D9
 * Original: 0x0002B1D9 - 0x0002B209 (48 bytes, 20 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B1D9(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002B1D9: ;
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebp + eax * 4;
    MEM32(esp + 0x14) = eax;
    eax = esp + 0x14;
    ecx = MEM32(eax);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0002B1B5(); return; } /* jne: not equal / not zero */

loc_0002B1ED: ;
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
    if ((_fa != 0)) { g_seh_ebp = ebp; sub_0002B192(); return; } /* jne: not equal / not zero */

loc_0002B201: ;
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
 * sub_0002B210
 * Original: 0x0002B210 - 0x0002B225 (21 bytes, 8 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0002B210(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002B210: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B222; /* je: equal / zero */

loc_0002B218: ;
    eax = MEM32(eax + 0x14);
    eax = MEM32(eax + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002B222: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002B230
 * Original: 0x0002B230 - 0x0002B259 (41 bytes, 12 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B230(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002B230: ;
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
 * sub_0002B260
 * Original: 0x0002B260 - 0x0002B347 (231 bytes, 98 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B260(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002B260: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = ecx;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002B26Du); RECOMP_ABI_CALL(0x000C3B90u, sub_000C3B90); /* call 0x000C3B90 */

loc_0002B26D: ;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002B27F; /* jne: not equal / not zero */

loc_0002B278: ;
    edi = 1;
    goto loc_0002B28D;

loc_0002B27F: ;
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

loc_0002B28D: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 4), 0x2000000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002B343; /* jne: not equal / not zero */

loc_0002B29A: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B2B3; /* je: equal / zero */

loc_0002B2A1: ;
    ecx = MEM32(eax + 0x10);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B2B3; /* je: equal / zero */

loc_0002B2A8: ;
    edx = esi;
    PUSH32(esp, 0x0002B2AFu); RECOMP_ABI_CALL(0x0001DB60u, sub_0001DB60); /* call 0x0001DB60 */

loc_0002B2AF: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0002B2B3: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B2C7; /* je: equal / zero */

loc_0002B2BA: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002B2C0u); RECOMP_ABI_CALL(0x0001D930u, sub_0001D930); /* call 0x0001D930 */

loc_0002B2C0: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0002B2C7: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B324; /* je: equal / zero */

loc_0002B2CC: ;
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002B2EA; /* jne: not equal / not zero */

loc_0002B2D7: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B343; /* je: equal / zero */

loc_0002B2DC: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002B2E3u); RECOMP_ABI_CALL(0x0001E9E0u, sub_0001E9E0); /* call 0x0001E9E0 */

loc_0002B2E3: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0002B2EA: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0002B317; /* je: equal / zero */

loc_0002B2F1: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0002B306; /* je: equal / zero */

loc_0002B2F6: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0002B333; /* jne: not equal / not zero */

loc_0002B2FB: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002B301u); RECOMP_ABI_CALL(0x0001E7A0u, sub_0001E7A0); /* call 0x0001E7A0 */

loc_0002B301: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002B333;

loc_0002B306: ;
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = esi;
    PUSH32(esp, 0x0002B315u); RECOMP_ABI_CALL(0x0001D9F0u, sub_0001D9F0); /* call 0x0001D9F0 */

loc_0002B315: ;
    goto loc_0002B333;

loc_0002B317: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x0002B31Fu); RECOMP_ABI_CALL(0x0001DD30u, sub_0001DD30); /* call 0x0001DD30 */

loc_0002B31F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002B333;

loc_0002B324: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B333; /* je: equal / zero */

loc_0002B329: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002B330u); RECOMP_ABI_CALL(0x0001E9E0u, sub_0001E9E0); /* call 0x0001E9E0 */

loc_0002B330: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002B333: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0002B343; /* jns: not sign (positive) */

loc_0002B338: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0002B340u); RECOMP_ABI_CALL(0x0001DAA0u, sub_0001DAA0); /* call 0x0001DAA0 */

loc_0002B340: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002B343: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B350
 * Original: 0x0002B350 - 0x0002B489 (313 bytes, 118 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B350(void)
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

loc_0002B350: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(8));
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(0x3337A0)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(esp + 0xC)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0xC)); /* fsub dword ptr [esp + 0xc] */
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(esi + 0xC);
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x3337C4)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    PUSH32(esp, edi);
    MEMF(esp + 0xC) = xmm0.f[0]; /* movss */
    edx = 0;
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_0002B398; /* ja: above (unsigned >) */

loc_0002B383: ;
    ecx = MEM32(esp + 0xC);
    MEM32(eax + 0xC) = ecx;
    MEM32(eax + 0x1C) = ecx;
    MEM32(eax + 0x2C) = ecx;
    ecx = MEM32(eax + 0x40);
    _cf = 0; /* logical op clears CF */
    ecx = ecx | 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    goto loc_0002B3A7;

loc_0002B398: ;
    ecx = MEM32(eax + 0x40);
    MEM32(eax + 0xC) = edx;
    MEM32(eax + 0x1C) = edx;
    MEM32(eax + 0x2C) = edx;
    _cf = 0; /* logical op clears CF */
    ecx = ecx & 0xFFFFFFF7u;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0002B3A7: ;
    MEM32(eax + 0x40) = ecx;
    eax = MEM32(esi + 0x10);
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002B3BC; /* jne: not equal / not zero */

loc_0002B3B5: ;
    edi = 1;
    goto loc_0002B3CA;

loc_0002B3BC: ;
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

loc_0002B3CA: ;
    _fa = (uint32_t)(MEM32(esi + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x2000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi + 4), 0x2000000 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0002B483; /* jne: not equal / not zero */

loc_0002B3D7: ;
    eax = MEM32(esi + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002B3EF; /* je: equal / zero */

loc_0002B3DE: ;
    _fa = (uint32_t)(MEM32(eax + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x10), edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002B3EF; /* je: equal / zero */

loc_0002B3E3: ;
    edx = esi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    g_seh_ebp = ebp; sub_0001DB60(); return; /* tail jmp 0x0001DB60 */

loc_0002B3EF: ;
    ecx = MEM32(esi);
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(ecx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0002B405; /* je: equal / zero */

loc_0002B3F6: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002B3FCu); RECOMP_ABI_CALL(0x0001D930u, sub_0001D930); /* call 0x0001D930 */

loc_0002B3FC: ;
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

loc_0002B405: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 0x40 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0002B464; /* je: equal / zero */

loc_0002B40A: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax);
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002B42A; /* jne: not equal / not zero */

loc_0002B415: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0002B483; /* je: equal / zero */

loc_0002B41A: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002B421u); RECOMP_ABI_CALL(0x0001E9E0u, sub_0001E9E0); /* call 0x0001E9E0 */

loc_0002B421: ;
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

loc_0002B42A: ;
    ecx = MEM32(eax);
    eax = MEM32(ecx);
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0002B457; /* je: equal / zero */

loc_0002B431: ;
    _fb = (uint32_t)(5) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(5));
    eax = eax - 5;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0002B446; /* je: equal / zero */

loc_0002B436: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0002B473; /* jne: not equal / not zero */

loc_0002B43B: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002B441u); RECOMP_ABI_CALL(0x0001E7A0u, sub_0001E7A0); /* call 0x0001E7A0 */

loc_0002B441: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002B473;

loc_0002B446: ;
    _cf = 0; /* xor clears CF */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    SET_LO8(ecx, (CMP_EQ(_fa, _fb)) ? 1 : 0); /* sete */
    edx = esi;
    PUSH32(esp, 0x0002B455u); RECOMP_ABI_CALL(0x0001D9F0u, sub_0001D9F0); /* call 0x0001D9F0 */

loc_0002B455: ;
    goto loc_0002B473;

loc_0002B457: ;
    PUSH32(esp, edi);
    eax = esi;
    PUSH32(esp, 0x0002B45Fu); RECOMP_ABI_CALL(0x0001DD30u, sub_0001DD30); /* call 0x0001DD30 */

loc_0002B45F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002B473;

loc_0002B464: ;
    _fa = (uint32_t)(HI8(ecx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(ecx), 1 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0002B473; /* je: equal / zero */

loc_0002B469: ;
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002B470u); RECOMP_ABI_CALL(0x0001E9E0u, sub_0001E9E0); /* call 0x0001E9E0 */

loc_0002B470: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002B473: ;
    _fa = (uint32_t)(MEM8(esi)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(esi), 0 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((((uint8_t)((uint8_t)(_fa) - (uint8_t)(_fb)) >> 7) == 0)) goto loc_0002B483; /* jns: not sign (positive) */

loc_0002B478: ;
    PUSH32(esp, edi);
    ecx = esi;
    PUSH32(esp, 0x0002B480u); RECOMP_ABI_CALL(0x0001DAA0u, sub_0001DAA0); /* call 0x0001DAA0 */

loc_0002B480: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002B483: ;
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
 * sub_0002B490
 * Original: 0x0002B490 - 0x0002B523 (147 bytes, 54 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002B490(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002B490: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx);
    PUSH32(esp, ebx);
    ebx = eax;
    eax = MEM32(ebx);
    PUSH32(esp, esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x10000 (32-bit) */
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0002B4B2; /* je: equal / zero */

loc_0002B4AF: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x50;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002B4B2: ;
    MEM32(eax + 0x30) = edx;
    edx = MEM32(ecx + 4);
    MEM32(eax + 0x34) = edx;
    ecx = MEM32(ecx + 8);
    MEM32(eax + 0x38) = ecx;
    MEM32(eax + 0x40) = MEM32(eax + 0x40) | 2;
    _fa = (uint32_t)(MEM32(eax + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B51C; /* je: equal / zero */

loc_0002B4CF: ;
    edx = MEM32(ebx + 0x14);
    eax = MEM32(edx + 8);
    eax = MEM32(eax + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B51C; /* je: equal / zero */

loc_0002B4DC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B51C; /* je: equal / zero */

loc_0002B4E4: ;
    edx = MEM32(eax + 0xC);
    eax = esp + 0x60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B4F0u); RECOMP_ABI_CALL(0x000C37B0u, sub_000C37B0); /* call 0x000C37B0 */

loc_0002B4F0: ;
    edi = MEM32(ebx + 0xC);
    ecx = esp + 0x60;
    PUSH32(esp, ecx);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B504u); RECOMP_ABI_CALL(0x000C3470u, sub_000C3470); /* call 0x000C3470 */

loc_0002B504: ;
    ebx = MEM32(ebx + 0xC);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x50;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, edx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B51C; /* je: equal / zero */

loc_0002B513: ;
    ecx = 0x14;
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

loc_0002B51C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B530
 * Original: 0x0002B530 - 0x0002B5E4 (180 bytes, 61 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002B530(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002B530: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xA8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xA8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx), 0x10000 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0002B5DE; /* je: equal / zero */

loc_0002B54A: ;
    edi = MEM32(ebx + 0xC);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B55D; /* je: equal / zero */

loc_0002B554: ;
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

loc_0002B55D: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x4000000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x4000000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B58A; /* je: equal / zero */

loc_0002B567: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000 (32-bit) */
    edi = MEM32(ebx + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_0002B57A; /* je: equal / zero */

loc_0002B572: ;
    _fb = (uint32_t)(0xA0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0xA0;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002B57D;

loc_0002B57A: ;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002B57D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B58A; /* je: equal / zero */

loc_0002B581: ;
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

loc_0002B58A: ;
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B5DE; /* je: equal / zero */

loc_0002B594: ;
    eax = MEM32(ebx + 0x14);
    edx = MEM32(eax + 8);
    eax = MEM32(edx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B5DE; /* je: equal / zero */

loc_0002B5A0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B5DE; /* je: equal / zero */

loc_0002B5A8: ;
    edx = MEM32(eax + 0xC);
    eax = esp + 0x60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B5B4u); RECOMP_ABI_CALL(0x000C37B0u, sub_000C37B0); /* call 0x000C37B0 */

loc_0002B5B4: ;
    edi = MEM32(ebx + 0xC);
    eax = esp + 0x60;
    PUSH32(esp, eax);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esi = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B5C8u); RECOMP_ABI_CALL(0x000C3470u, sub_000C3470); /* call 0x000C3470 */

loc_0002B5C8: ;
    edi = MEM32(ebx + 0xC);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esi;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ecx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B5DE; /* je: equal / zero */

loc_0002B5D7: ;
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

loc_0002B5DE: ;
    POP32(esp, edi);
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B5F0
 * Original: 0x0002B5F0 - 0x0002B625 (53 bytes, 22 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B5F0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002B5F0: ;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0xC);
    _fa = (uint32_t)(MEM32(esi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(esi), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B622; /* je: equal / zero */

loc_0002B5FE: ;
    eax = MEM32(esi + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B61B; /* je: equal / zero */

loc_0002B605: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B61B; /* je: equal / zero */

loc_0002B60C: ;
    eax = MEM32(eax);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B61B; /* je: equal / zero */

loc_0002B612: ;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002B618u); RECOMP_ABI_CALL(0x0002B5F0u, sub_0002B5F0); /* call 0x0002B5F0 */

loc_0002B618: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002B61B: ;
    edx = esi;
    PUSH32(esp, 0x0002B622u); RECOMP_ABI_CALL(0x0002B630u, sub_0002B630); /* call 0x0002B630 */

loc_0002B622: ;
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B630
 * Original: 0x0002B630 - 0x0002B67A (74 bytes, 34 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B630(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002B630: ;
    _fa = (uint32_t)(MEM32(edx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edx), 0x400000 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0002B676; /* je: equal / zero */

loc_0002B63B: ;
    eax = MEM32(edx + 0x14);
    ecx = MEM32(eax + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B676; /* je: equal / zero */

loc_0002B645: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B676; /* je: equal / zero */

loc_0002B64C: ;
    _fa = (uint32_t)(MEM8(eax)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(eax), 1 (8-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002B667; /* jne: not equal / not zero */

loc_0002B651: ;
    eax = MEM32(eax + 0xC);
    esi = MEM32(edx + 0xC);
    PUSH32(esp, eax);
    edi = ecx + 0x10;
    PUSH32(esp, 0x0002B660u); RECOMP_ABI_CALL(0x000C3470u, sub_000C3470); /* call 0x000C3470 */

loc_0002B660: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002B667: ;
    ecx = MEM32(edx + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002B673u); RECOMP_ABI_CALL(0x0002B680u, sub_0002B680); /* call 0x0002B680 */

loc_0002B673: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002B676: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B680
 * Original: 0x0002B680 - 0x0002B74D (205 bytes, 71 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002B680(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002B680: ;
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
    if (TEST_Z(_fa, _fb)) goto loc_0002B746; /* je: equal / zero */

loc_0002B69B: ;
    eax = MEM32(ebx + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B746; /* je: equal / zero */

loc_0002B6A6: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B746; /* je: equal / zero */

loc_0002B6B1: ;
    ecx = MEM32(eax + 4);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B746; /* je: equal / zero */

loc_0002B6BC: ;
    esi = MEM32(ebp + 0xC);
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B6C6u); RECOMP_ABI_CALL(0x0001B8B0u, sub_0001B8B0); /* call 0x0001B8B0 */

loc_0002B6C6: ;
    _fa = (uint32_t)(MEM32(ebx)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(ebx), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B71B; /* je: equal / zero */

loc_0002B6CE: ;
    edi = edi;

loc_0002B6D0: ;
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(eax + 8);
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0002B71B; /* je: equal / zero */

loc_0002B6E1: ;
    edx = esp + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B6F5; /* je: equal / zero */

loc_0002B6E9: ;
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

loc_0002B6F5: ;
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edi = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B708u); RECOMP_ABI_CALL(0x000C3470u, sub_000C3470); /* call 0x000C3470 */

loc_0002B708: ;
    ebx = MEM32(esp + 0x10);
    eax = MEM32(ebx);
    esi = MEM32(ebp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) goto loc_0002B6D0; /* jne: not equal / not zero */

loc_0002B71B: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B746; /* je: equal / zero */

loc_0002B722: ;
    edx = esp + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B736; /* je: equal / zero */

loc_0002B72A: ;
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

loc_0002B736: ;
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, eax);
    edi = esp + 0x14;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B743u); RECOMP_ABI_CALL(0x000C3470u, sub_000C3470); /* call 0x000C3470 */

loc_0002B743: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002B746: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B6D6
 * Original: 0x0002B6D6 - 0x0002B74D (119 bytes, 44 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B6D6(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002B6D6: ;
    eax = MEM32(ecx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0002B71B; /* je: equal / zero */

loc_0002B6E1: ;
    edx = esp + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B6F5; /* je: equal / zero */

loc_0002B6E9: ;
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

loc_0002B6F5: ;
    eax = MEM32(ebx + 0x14);
    ecx = MEM32(eax + 8);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    edi = esp + 0x14;
    PUSH32(esp, 0x0002B708u); RECOMP_ABI_CALL(0x000C3470u, sub_000C3470); /* call 0x000C3470 */

loc_0002B708: ;
    ebx = MEM32(esp + 0x10);
    eax = MEM32(ebx);
    esi = MEM32(ebp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    if (TEST_NZ(_fa, _fb)) { g_seh_ebp = ebp; sub_0002B6D0(); return; } /* jne: not equal / not zero */

loc_0002B71B: ;
    eax = MEM32(ebp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B746; /* je: equal / zero */

loc_0002B722: ;
    edx = esp + 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B736; /* je: equal / zero */

loc_0002B72A: ;
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

loc_0002B736: ;
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, eax);
    edi = esp + 0x14;
    PUSH32(esp, 0x0002B743u); RECOMP_ABI_CALL(0x000C3470u, sub_000C3470); /* call 0x000C3470 */

loc_0002B743: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002B746: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B750
 * Original: 0x0002B750 - 0x0002B853 (259 bytes, 86 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002B750(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002B750: ;
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
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = eax;
    _fa = (uint32_t)(MEM32(edi)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(edi), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B84C; /* je: equal / zero */

loc_0002B76D: ;
    eax = MEM32(edi + 0x14);
    ebx = MEM32(eax + 8);
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B84C; /* je: equal / zero */

loc_0002B77E: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B7B1; /* je: equal / zero */

loc_0002B786: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B7B1; /* je: equal / zero */

loc_0002B78D: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B7B1; /* je: equal / zero */

loc_0002B794: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B7B1; /* je: equal / zero */

loc_0002B79B: ;
    PUSH32(esp, 1);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B7A8u); RECOMP_ABI_CALL(0x0002B680u, sub_0002B680); /* call 0x0002B680 */

loc_0002B7A8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x70;
    goto loc_0002B7B4;

loc_0002B7B1: ;
    edx = MEM32(eax + 0xC);

loc_0002B7B4: ;
    eax = esp + 0x20;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B7BDu); RECOMP_ABI_CALL(0x000C37B0u, sub_000C37B0); /* call 0x000C37B0 */

loc_0002B7BD: ;
    edi = MEM32(edi + 0xC);
    edx = esp + 0x20;
    esi = ebx + 0x10;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B7CDu); RECOMP_ABI_CALL(0x000C3470u, sub_000C3470); /* call 0x000C3470 */

loc_0002B7CD: ;
    SET_LO8(ecx, MEM8(ebx + 0x50));
    SET_LO8(eax, 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B845; /* je: equal / zero */

loc_0002B7D9: ;
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x40), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B7F1; /* je: equal / zero */

loc_0002B7DE: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(esi + 0x2C);
    eax = MEM32(esi + 0xC);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    goto loc_0002B7FE;

loc_0002B7F1: ;
    eax = 0x3F800000;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;

loc_0002B7FE: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x3A83126F);
    eax = esp + 0x18;
    ecx = 0x49A8B8;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B815u); RECOMP_ABI_CALL(0x0002C760u, sub_0002C760); /* call 0x0002C760 */

loc_0002B815: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002B836; /* jne: not equal / not zero */

loc_0002B81C: ;
    PUSH32(esp, 0x3A83126F);
    eax = esp + 0x18;
    ecx = 0x49A888;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B82Fu); RECOMP_ABI_CALL(0x0002C760u, sub_0002C760); /* call 0x0002C760 */

loc_0002B82F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B845; /* je: equal / zero */

loc_0002B836: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0002B845: ;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002B84Cu); RECOMP_ABI_CALL(0x000C2380u, sub_000C2380); /* call 0x000C2380 */

loc_0002B84C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B770
 * Original: 0x0002B770 - 0x0002B853 (227 bytes, 75 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B770(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002B770: ;
    ebx = MEM32(eax + 8);
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B84C; /* je: equal / zero */

loc_0002B77E: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B7B1; /* je: equal / zero */

loc_0002B786: ;
    ecx = MEM32(eax + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B7B1; /* je: equal / zero */

loc_0002B78D: ;
    ecx = MEM32(ecx + 8);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B7B1; /* je: equal / zero */

loc_0002B794: ;
    edx = MEM32(ecx + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B7B1; /* je: equal / zero */

loc_0002B79B: ;
    PUSH32(esp, 1);
    ecx = esp + 0x74;
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002B7A8u); RECOMP_ABI_CALL(0x0002B680u, sub_0002B680); /* call 0x0002B680 */

loc_0002B7A8: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edx = esp + 0x70;
    goto loc_0002B7B4;

loc_0002B7B1: ;
    edx = MEM32(eax + 0xC);

loc_0002B7B4: ;
    eax = esp + 0x20;
    PUSH32(esp, 0x0002B7BDu); RECOMP_ABI_CALL(0x000C37B0u, sub_000C37B0); /* call 0x000C37B0 */

loc_0002B7BD: ;
    edi = MEM32(edi + 0xC);
    edx = esp + 0x20;
    esi = ebx + 0x10;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002B7CDu); RECOMP_ABI_CALL(0x000C3470u, sub_000C3470); /* call 0x000C3470 */

loc_0002B7CD: ;
    SET_LO8(ecx, MEM8(ebx + 0x50));
    SET_LO8(eax, 8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(LO8(ecx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), LO8(ecx) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B845; /* je: equal / zero */

loc_0002B7D9: ;
    _fa = (uint32_t)(MEM8(esi + 0x40)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 0x40), LO8(eax) (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B7F1; /* je: equal / zero */

loc_0002B7DE: ;
    ecx = MEM32(esi + 0x1C);
    edx = MEM32(esi + 0x2C);
    eax = MEM32(esi + 0xC);
    MEM32(esp + 0x18) = ecx;
    MEM32(esp + 0x1C) = edx;
    goto loc_0002B7FE;

loc_0002B7F1: ;
    eax = 0x3F800000;
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x1C) = eax;

loc_0002B7FE: ;
    MEM32(esp + 0x14) = eax;
    PUSH32(esp, 0x3A83126F);
    eax = esp + 0x18;
    ecx = 0x49A8B8;
    PUSH32(esp, 0x0002B815u); RECOMP_ABI_CALL(0x0002C760u, sub_0002C760); /* call 0x0002C760 */

loc_0002B815: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002B836; /* jne: not equal / not zero */

loc_0002B81C: ;
    PUSH32(esp, 0x3A83126F);
    eax = esp + 0x18;
    ecx = 0x49A888;
    PUSH32(esp, 0x0002B82Fu); RECOMP_ABI_CALL(0x0002C760u, sub_0002C760); /* call 0x0002C760 */

loc_0002B82F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B845; /* je: equal / zero */

loc_0002B836: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(esi + 0xC) = eax;
    MEM32(esi + 0x1C) = eax;
    MEM32(esi + 0x2C) = eax;
    MEM32(esi + 0x40) = MEM32(esi + 0x40) & 0xFFFFFFF7u;
    _fa = (uint32_t)(MEM32(esi + 0x40)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0002B845: ;
    eax = esi;
    PUSH32(esp, 0x0002B84Cu); RECOMP_ABI_CALL(0x000C2380u, sub_000C2380); /* call 0x000C2380 */

loc_0002B84C: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B860
 * Original: 0x0002B860 - 0x0002B8FD (157 bytes, 60 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002B860: ;
    PUSH32(esp, ecx);
    ecx = MEM32(ebx);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x400000 (32-bit) */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0002B8B0; /* je: equal / zero */

loc_0002B86D: ;
    eax = MEM32(ebx + 0x14);
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B8B0; /* je: equal / zero */

loc_0002B878: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B894; /* je: equal / zero */

loc_0002B880: ;
    esi = MEM32(ebx + 0xC);
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 0x50;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi = eax + 0x10;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B894; /* je: equal / zero */

loc_0002B88D: ;
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

loc_0002B894: ;
    ecx = MEM32(ebx + 0x14);
    eax = MEM32(ecx + 8);
    edx = MEM32(eax);
    ecx = MEM32(edx + 0xC);
    esi = MEM32(ebx + 0xC);
    PUSH32(esp, ecx);
    edi = eax + 0x10;
    PUSH32(esp, 0x0002B8ABu); RECOMP_ABI_CALL(0x000C3470u, sub_000C3470); /* call 0x000C3470 */

loc_0002B8AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002B8C9;

loc_0002B8B0: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B8C9; /* je: equal / zero */

loc_0002B8B8: ;
    edi = MEM32(ebx + 0xC);
    esi = edi + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B8C9; /* je: equal / zero */

loc_0002B8C2: ;
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

loc_0002B8C9: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B8F9; /* je: equal / zero */

loc_0002B8CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B8EF; /* je: equal / zero */

loc_0002B8D6: ;
    edx = MEM32(ebx + 0x14);
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B8EF; /* je: equal / zero */

loc_0002B8E1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    PUSH32(esp, 0x0002B8EBu); RECOMP_ABI_CALL(0x00020BD0u, sub_00020BD0); /* call 0x00020BD0 */

loc_0002B8EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0002B8EF: ;
    eax = MEM32(ebx + 0xC);
    ecx = ebx;
    PUSH32(esp, 0x0002B8F9u); RECOMP_ABI_CALL(0x00020BD0u, sub_00020BD0); /* call 0x00020BD0 */

loc_0002B8F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B894
 * Original: 0x0002B894 - 0x0002B8FD (105 bytes, 41 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B894(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002B894: ;
    ecx = MEM32(ebx + 0x14);
    eax = MEM32(ecx + 8);
    edx = MEM32(eax);
    ecx = MEM32(edx + 0xC);
    esi = MEM32(ebx + 0xC);
    PUSH32(esp, ecx);
    edi = eax + 0x10;
    PUSH32(esp, 0x0002B8ABu); RECOMP_ABI_CALL(0x000C3470u, sub_000C3470); /* call 0x000C3470 */

loc_0002B8AB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002B8C9;

    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test ecx, 0x10000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B8C9; /* je: equal / zero */

loc_0002B8B8: ;
    edi = MEM32(ebx + 0xC);
    esi = edi + 0x50;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B8C9; /* je: equal / zero */

loc_0002B8C2: ;
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

loc_0002B8C9: ;
    eax = MEM32(ebx);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test LO8(eax), 2 (8-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B8F9; /* je: equal / zero */

loc_0002B8CF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x400000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test eax, 0x400000 (32-bit) */
    if (TEST_Z(_fa, _fb)) goto loc_0002B8EF; /* je: equal / zero */

loc_0002B8D6: ;
    edx = MEM32(ebx + 0x14);
    eax = MEM32(edx + 8);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002B8EF; /* je: equal / zero */

loc_0002B8E1: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = ebx;
    PUSH32(esp, 0x0002B8EBu); RECOMP_ABI_CALL(0x00020BD0u, sub_00020BD0); /* call 0x00020BD0 */

loc_0002B8EB: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0002B8EF: ;
    eax = MEM32(ebx + 0xC);
    ecx = ebx;
    PUSH32(esp, 0x0002B8F9u); RECOMP_ABI_CALL(0x00020BD0u, sub_00020BD0); /* call 0x00020BD0 */

loc_0002B8F9: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002B900
 * Original: 0x0002B900 - 0x0002BA43 (323 bytes, 83 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002B900(void)
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

loc_0002B900: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    edx = MEM32(ecx);
    ecx = MEM32(ecx + 4);
    MEM32(esp + 0x10) = edx;
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x10)); /* fmul dword ptr [esp + 0x10] */
    MEM32(esp + 0x14) = ecx;
    fp_push(MEMF(esp + 0x14)); /* fld float */
    edx = MEM32(eax);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    eax = MEM32(eax + 4);
    MEM32(esp + 8) = eax;
    MEM32(esp + 4) = edx;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    ecx = MEM32(0x49A894);
    eax = MEM32(0x49A89C);
    edx = MEM32(0x49A898);
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEM32(esp + 0x1C) = ecx;
    MEM32(esp + 0x24) = eax;
    eax = esp + 4;
    ecx = esp + 0x10;
    MEM32(esp + 0x20) = edx;
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    fp_push(MEMF(esp + 0x10)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3337C0)); /* fmul dword ptr [0x3337c0] */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3337C0)); /* fmul dword ptr [0x3337c0] */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0002B9B7u); RECOMP_ABI_CALL(0x0002C570u, sub_0002C570); /* call 0x0002C570 */

loc_0002B9B7: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337A0); /* comiss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002B9CC; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3337A0)) */

loc_0002B9C5: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002B9CC: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002B9E8; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0002B9D9: ;
    xmm0 = XMM_SCALAR(MEMF(0x333894)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    goto loc_0002B9F3;

loc_0002B9E8: ;
    fp_push(MEMF(esp)); /* fld float */
    PUSH32(esp, 0x0002B9F0u); RECOMP_ABI_CALL(0x002941B0u, sub_002941B0); /* call 0x002941B0 */

loc_0002B9F0: ;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002B9F3: ;
    edx = esp + 0x1C;
    eax = esp + 4;
    ecx = esp + 0x10;
    PUSH32(esp, 0x0002BA04u); RECOMP_ABI_CALL(0x0002C620u, sub_0002C620); /* call 0x0002C620 */

loc_0002BA04: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp); /* subss */
    if ((_fca > _fcb)) goto loc_0002BA19; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0002BA14: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */

loc_0002BA19: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x333894); /* comiss */
    xmm1 = XMM_SCALAR(MEMF(0x333898)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002BA2E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x333894)) */

loc_0002BA2A: ;
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */

loc_0002BA2E: ;
    xmm2 = XMM_SCALAR(MEMF(0x333A80)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002BA3F; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0002BA3B: ;
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */

loc_0002BA3F: ;
    _fb = (uint32_t)(0x28) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x28;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002BA50
 * Original: 0x0002BA50 - 0x0002BC4D (509 bytes, 131 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BA50(void)
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

loc_0002BA50: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    ecx = MEM32(esi + 4);
    eax = MEM32(esi);
    MEM32(esp + 0xC) = ecx;
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    MEM32(esp + 8) = eax;
    fp_push(MEMF(esp + 8)); /* fld float */
    eax = MEM32(edi + 4);
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    edx = MEM32(edi);
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x14) = edx;
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    eax = esi;
    ecx = esp + 8;
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 8) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0xC) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3337C0)); /* fmul dword ptr [0x3337c0] */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x18)); /* fmul dword ptr [esp + 0x18] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0x14)); /* fmul dword ptr [esp + 0x14] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    fp_top() = RECOMP_FP_PC(MEMF(0x3337A0) / fp_top()); /* fdivr dword ptr [0x3337a0] */
    fp_push(MEMF(esp + 0x14)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x14) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(esp + 0x18)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * fp_st1()); /* fmul st(1) */
    MEMF(esp + 0x18) = (float)fp_top(); fp_pop(); /* fstp */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(0x3337C0)); /* fmul dword ptr [0x3337c0] */
    MEMF(esp + 0x1C) = (float)fp_top(); fp_pop(); /* fstp */
    PUSH32(esp, 0x0002BAE8u); RECOMP_ABI_CALL(0x0002C570u, sub_0002C570); /* call 0x0002C570 */

loc_0002BAE8: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337A0); /* comiss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002BAFC; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3337A0)) */

loc_0002BAF7: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_0002BB4D;

loc_0002BAFC: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002BB19; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0002BB09: ;
    xmm0 = XMM_SCALAR(MEMF(0x333894)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    goto loc_0002BB26;

loc_0002BB19: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x0002BB22u); RECOMP_ABI_CALL(0x002941B0u, sub_002941B0); /* call 0x002941B0 */

loc_0002BB22: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002BB26: ;
    edx = 0x49A8AC;
    eax = esi;
    ecx = esp + 8;
    PUSH32(esp, 0x0002BB36u); RECOMP_ABI_CALL(0x0002C620u, sub_0002C620); /* call 0x0002C620 */

loc_0002BB36: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */
    if ((_fca > _fcb)) goto loc_0002BB4D; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0002BB47: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_0002BB4D: ;
    MEMF(esp) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(esi + 8); /* comiss */
    fp_top() = fabs(fp_top()); /* fabs */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002BB62; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(esi + 8)) */

loc_0002BB60: ;
    fp_top() = -fp_top(); /* fchs */

loc_0002BB62: ;
    eax = edi;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    ecx = esp + 0x14;
    PUSH32(esp, 0x0002BB70u); RECOMP_ABI_CALL(0x0002C570u, sub_0002C570); /* call 0x0002C570 */

loc_0002BB70: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337A0); /* comiss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002BB84; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3337A0)) */

loc_0002BB7F: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    goto loc_0002BBD5;

loc_0002BB84: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002BBA1; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0002BB91: ;
    xmm0 = XMM_SCALAR(MEMF(0x333894)); /* movss */
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    goto loc_0002BBAE;

loc_0002BBA1: ;
    fp_push(MEMF(esp + 4)); /* fld float */
    PUSH32(esp, 0x0002BBAAu); RECOMP_ABI_CALL(0x002941B0u, sub_002941B0); /* call 0x002941B0 */

loc_0002BBAA: ;
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002BBAE: ;
    edx = 0x49A8AC;
    eax = edi;
    ecx = esp + 0x14;
    PUSH32(esp, 0x0002BBBEu); RECOMP_ABI_CALL(0x0002C620u, sub_0002C620); /* call 0x0002C620 */

loc_0002BBBE: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */
    if ((_fca > _fcb)) goto loc_0002BBD5; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0002BBCF: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 4)); /* movss */

loc_0002BBD5: ;
    MEMF(esp + 4) = xmm0.f[0]; /* movss */
    fp_push(MEMF(esp + 4)); /* fld float */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = MEMF(edi + 8); /* comiss */
    fp_top() = fabs(fp_top()); /* fabs */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002BBEC; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(edi + 8)) */

loc_0002BBEA: ;
    fp_top() = -fp_top(); /* fchs */

loc_0002BBEC: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 4); /* subss */
    xmm2 = XMM_SCALAR(MEMF(0x333894)); /* movss */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    xmm3 = XMM_SCALAR(MEMF(0x333898)); /* movss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002BC14; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0002BC10: ;
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */

loc_0002BC14: ;
    xmm1 = XMM_SCALAR(MEMF(0x333A80)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002BC25; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0002BC21: ;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */

loc_0002BC25: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x3339A4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002BC35; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3339A4)) */

loc_0002BC2E: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm2; /* movaps */

loc_0002BC35: ;
    xmm2 = XMM_SCALAR(MEMF(0x3339A0)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002BC49; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0002BC42: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */

loc_0002BC49: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
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
 * sub_0002BC06
 * Original: 0x0002BC06 - 0x0002BC4D (71 bytes, 18 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002BC06(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0002BC06: ;
    xmm3 = XMM_SCALAR(MEMF(0x333898)); /* movss */
    if (_flags /* jbe: below or equal (unsigned <=) */) goto loc_0002BC14;

loc_0002BC10: ;
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */

loc_0002BC14: ;
    xmm1 = XMM_SCALAR(MEMF(0x333A80)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002BC25; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm0.f[0]) */

loc_0002BC21: ;
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */

loc_0002BC25: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x3339A4); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002BC35; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x3339A4)) */

loc_0002BC2E: ;
    xmm2.f[0] = xmm2.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm2; /* movaps */

loc_0002BC35: ;
    xmm2 = XMM_SCALAR(MEMF(0x3339A0)); /* movss */
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002BC49; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0002BC42: ;
    xmm1.f[0] = xmm1.f[0] - xmm0.f[0]; /* subss */
    xmm0 = xmm1; /* movaps */

loc_0002BC49: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002BC50
 * Original: 0x0002BC50 - 0x0002C4EC (2204 bytes, 561 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002BC50(void)
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

loc_0002BC50: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    _cf = 0; /* logical op clears CF */
    esp = esp & 0xFFFFFFF0u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fb = (uint32_t)(0xF4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0xF4));
    esp = esp - 0xF4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    ebx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(ebx)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ebx), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    if (TEST_Z(_fa, _fb)) goto loc_0002C4E5; /* je: equal / zero */

loc_0002BC6B: ;
    eax = MEM32(ebx + 0x14);
    esi = MEM32(eax);
    eax = MEM32(esi + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C4E5; /* je: equal / zero */

loc_0002BC7B: ;
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C4E5; /* je: equal / zero */

loc_0002BC85: ;
    eax = MEM32(esi + 0x30);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C4E5; /* je: equal / zero */

loc_0002BC90: ;
    eax = MEM32(esi + 0x2C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C4E5; /* je: equal / zero */

loc_0002BC9B: ;
    PUSH32(esp, 0);
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002BCA4u); RECOMP_ABI_CALL(0x0005B440u, sub_0005B440); /* call 0x0005B440 */

loc_0002BCA4: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x2C) = eax;
    PUSH32(esp, 1);
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002BCB4u); RECOMP_ABI_CALL(0x0005B440u, sub_0005B440); /* call 0x0005B440 */

loc_0002BCB4: ;
    ecx = MEM32(edi + 0x10);
    edi = MEM32(ecx);
    ebx = eax;
    eax = MEM32(esp + 0x30);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C4E5; /* je: equal / zero */

loc_0002BCCA: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C4E5; /* je: equal / zero */

loc_0002BCD2: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C4E5; /* je: equal / zero */

loc_0002BCDA: ;
    _fa = (uint32_t)(MEM8(esi + 1)) & 0xFFu; _fb = (uint32_t)(2) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(esi + 1), 2 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEM32(esp + 0x4C) = 0;
    if (TEST_NZ(_fa, _fb)) goto loc_0002BD1B; /* jne: not equal / not zero */

loc_0002BCE8: ;
    edx = ZX8(MEM8(esi + 0x3A));
    eax = MEM32(esi + 0x2C);
    edx = (uint32_t)((int32_t)edx * (int32_t)0x34);
    eax = ZX8(MEM8(edx + eax + 0x33));
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
    MEM32(esp + 0x20) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0002BD50; /* je: equal / zero */

loc_0002BD07: ;
    SET_LO8(eax, MEM8(esi + 2));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0002BDAC; /* jae: above or equal (unsigned >=) */

loc_0002BD12: ;
    eax = ZX8(LO8(eax));
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0002BDB1;

loc_0002BD1B: ;
    ecx = ZX8(MEM8(esi + 0x3A));
    edx = MEM32(esi + 0x2C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)0x34);
    _fa = (uint32_t)(MEM8(ecx + edx + 0x33)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + edx + 0x33), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0002BD9F; /* je: equal / zero */

loc_0002BD2C: ;
    eax = MEM32(esi + 0x1C);
    ecx = ZX16(MEM16(eax + 0x60));
    eax = ZX8(MEM8(eax + 0x62));
    edx = MEM32(esi + 0x30);
    eax = (uint32_t)((int32_t)eax * (int32_t)0x34);
    ecx = MEM32(edx + ecx * 4 + 8);
    _fa = (uint32_t)(MEM8(ecx + eax + 0x33)) & 0xFFu; _fb = (uint32_t)(4) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test MEM8(ecx + eax + 0x33), 4 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0002BD9F; /* je: equal / zero */

loc_0002BD48: ;
    MEM32(esp + 0x20) = 0;

loc_0002BD50: ;
    MEM8(esi + 2) = 0;

loc_0002BD54: ;
    xmm0 = XMM_SCALAR(MEMF(0x3339A4)); /* movss */
    eax = MEM32(ebp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 3 (32-bit) */
    _cf = (int)(_fa < _fb);
    xmm1 = XMM_SCALAR(MEMF(0x333CB0)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x3339A0)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333CAC)); /* movss */
    MEMF(esp + 0x50) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    if (CMP_A(_fa, _fb)) goto loc_0002BE2C; /* ja: above (unsigned >) */

loc_0002BD98: ;
    { uint32_t _jt = MEM32(eax * 4 + 0x2C4EC); /* switch: 4 entries, 4 targets */
    if (_jt == 0x0002BDCBu) goto loc_0002BDCB;
    if (_jt == 0x0002BE0Eu) goto loc_0002BE0E;
    if (_jt == 0x0002BE18u) goto loc_0002BE18;
    if (_jt == 0x0002BE22u) goto loc_0002BE22;
    g_seh_ebp = ebp; RECOMP_ITAIL(_jt); return; }

loc_0002BD9F: ;
    MEM32(esp + 0x20) = 1;
    goto loc_0002BD07;

loc_0002BDAC: ;
    eax = 6;

loc_0002BDB1: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(6) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 6 (8-bit) */
    _cf = (int)(_fa < _fb);
    xmm0 = XMM_SCALAR(MEMF(0x3339EC)); /* movss */
    MEM8(esi + 2) = LO8(eax);
    MEMF(ebp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_AE(_fa, _fb)) goto loc_0002C4E5; /* jae: above or equal (unsigned >=) */

loc_0002BDC9: ;
    goto loc_0002BD54;

loc_0002BDCB: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333CA8)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333CA4)); /* movss */
    MEMF(esp + 0x28) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333950)); /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(0x333CA0)); /* movss */
    MEMF(esp + 0x3C) = xmm0.f[0]; /* movss */
    goto loc_0002BE35;

loc_0002BE0E: ;
    xmm0 = XMM_SCALAR(MEMF(0x333C9C)); /* movss */
    goto loc_0002BE2F;

loc_0002BE18: ;
    xmm0 = XMM_SCALAR(MEMF(0x333C98)); /* movss */
    goto loc_0002BE2F;

loc_0002BE22: ;
    xmm0 = XMM_SCALAR(MEMF(0x333C94)); /* movss */
    goto loc_0002BE2F;

loc_0002BE2C: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */

loc_0002BE2F: ;
    MEMF(esp + 0x1C) = xmm0.f[0]; /* movss */

loc_0002BE35: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0x1C)); /* movss */
    eax = MEM32(ebp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] + MEMF(0x333C90); /* addss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    xmm0 = xmm2; /* movaps */
    xmm0.f[0] = xmm0.f[0] - xmm1.f[0]; /* subss */
    MEMF(esp + 0x58) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0002BE94; /* je: equal / zero */

loc_0002BE60: ;
    xmm0 = XMM_SCALAR(MEMF(0x333894)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x333A80)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x50) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x28) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x3C) = xmm1.f[0]; /* movss */
    MEMF(esp + 0x6C) = xmm0.f[0]; /* movss */
    MEMF(esp + 0x58) = xmm1.f[0]; /* movss */

loc_0002BE94: ;
    eax = MEM32(ebp + 8);
    ecx = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002BEA0u); RECOMP_ABI_CALL(0x0002B230u, sub_0002B230); /* call 0x0002B230 */

loc_0002BEA0: ;
    esi = MEM32(esp + 0x2C);
    edx = MEM32(esi + 0x14);
    eax = MEM32(edx + 8);
    ecx = MEM32(eax + 0x40);
    edx = MEM32(eax + 0x44);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = MEM32(eax + 8);
    MEM32(esp + 0x8C) = ecx;
    ecx = MEM32(ebx + 0x14);
    MEM32(esp + 0x94) = eax;
    eax = MEM32(ecx + 8);
    ecx = MEM32(eax + 0x44);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x90) = edx;
    edx = MEM32(eax);
    MEM32(esp + 0x80) = edx;
    edx = MEM32(eax + 8);
    MEM32(esp + 0x84) = ecx;
    ecx = esp + 0x98;
    eax = edi;
    MEM32(esp + 0x88) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002BEFFu); RECOMP_ABI_CALL(0x0002B230u, sub_0002B230); /* call 0x0002B230 */

loc_0002BEFF: ;
    PUSH32(esp, 1);
    eax = esp + 0xB4;
    PUSH32(esp, eax);
    PUSH32(esp, edi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002BF0Fu); RECOMP_ABI_CALL(0x0002B680u, sub_0002B680); /* call 0x0002B680 */

loc_0002BF0F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC0;
    ecx = esp + 0x70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002BF22u); RECOMP_ABI_CALL(0x00028F60u, sub_00028F60); /* call 0x00028F60 */

loc_0002BF22: ;
    eax = esp + 0x70;
    ecx = esp + 0x98;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002BF32u); RECOMP_ABI_CALL(0x0002B900u, sub_0002B900); /* call 0x0002B900 */

loc_0002BF32: ;
    PUSH32(esp, 1);
    ecx = esp + 0xB4;
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    MEMF(esp + 0x60) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002BF48u); RECOMP_ABI_CALL(0x0002B680u, sub_0002B680); /* call 0x0002B680 */

loc_0002BF48: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC0;
    ecx = esp + 0x60;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002BF5Bu); RECOMP_ABI_CALL(0x00028F60u, sub_00028F60); /* call 0x00028F60 */

loc_0002BF5B: ;
    eax = MEM32(esp + 0xD4);
    ecx = MEM32(esp + 0xD8);
    edx = MEM32(esp + 0xD0);
    MEM32(esp + 0x9C) = eax;
    MEM32(esp + 0xA0) = ecx;
    ecx = esp + 0x30;
    eax = esi;
    MEM32(esp + 0x98) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002BF90u); RECOMP_ABI_CALL(0x0002B230u, sub_0002B230); /* call 0x0002B230 */

loc_0002BF90: ;
    eax = ecx;
    ecx = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002BF9Bu); RECOMP_ABI_CALL(0x0002B900u, sub_0002B900); /* call 0x0002B900 */

loc_0002BF9B: ;
    edi = esp + 0x30;
    esi = esp + 0x40;
    MEMF(esp + 0x24) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002BFAEu); RECOMP_ABI_CALL(0x0002BA50u, sub_0002BA50); /* call 0x0002BA50 */

loc_0002BFAE: ;
    eax = MEM32(esp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0xA8) = xmm0.f[0]; /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0002C0A6; /* jne: not equal / not zero */

loc_0002BFC3: ;
    ecx = MEM32(ebp + 0xC);
    xmm1 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002BFF6; /* jp: parity */

loc_0002BFD6: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (RECOMP_PARITY8((_fa) & (_fb))) goto loc_0002BFF6; /* jp: parity */

loc_0002BFE4: ;
    xmm1 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0002C0A6; /* jnp: not parity */

loc_0002BFF6: ;
    edx = MEM32(esp + 0x2C);
    eax = MEM32(edx + 0xC);
    xmm0 = XMM_SCALAR(MEMF(ecx)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 0x30); /* subss */
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x30)) >> 32) & 1);
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEMF(esp + 0x30) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 4); /* subss */
    MEMF(esp + 0x34) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(eax + 8); /* subss */
    eax = esp + 0x30;
    MEMF(esp + 0x38) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C038u); RECOMP_ABI_CALL(0x00028F90u, sub_00028F90); /* call 0x00028F90 */

loc_0002C038: ;
    eax = esp + 0x30;
    ecx = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C045u); RECOMP_ABI_CALL(0x0002B900u, sub_0002B900); /* call 0x0002B900 */

loc_0002C045: ;
    edi = esp + 0x30;
    esi = esp + 0x40;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C058u); RECOMP_ABI_CALL(0x0002BA50u, sub_0002BA50); /* call 0x0002BA50 */

loc_0002C058: ;
    eax = MEM32(ebp + 0x18);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C09E; /* je: equal / zero */

loc_0002C05F: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(0x333C8C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm3.f[0] = xmm3.f[0] + xmm1.f[0]; /* addss */
    _fca = xmm2.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0002C08B; /* ja: above (unsigned >) (xmm2.f[0] vs xmm3.f[0]) */

loc_0002C07C: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    xmm3.f[0] = xmm3.f[0] - xmm1.f[0]; /* subss */
    _fca = xmm3.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002C09E; /* jbe: below or equal (unsigned <=) (xmm3.f[0] vs xmm2.f[0]) */

loc_0002C08B: ;
    eax = esp + 0x60;
    ecx = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C098u); RECOMP_ABI_CALL(0x0002B900u, sub_0002B900); /* call 0x0002B900 */

loc_0002C098: ;
    edi = esp + 0x60;
    goto loc_0002C0CF;

loc_0002C09E: ;
    xmm0.f[0] = xmm0.f[0] + MEMF(esp + 0x1C); /* addss */
    goto loc_0002C0E6;

loc_0002C0A6: ;
    eax = MEM32(esp + 0x60);
    ecx = MEM32(esp + 0x64);
    edx = MEM32(esp + 0x68);
    MEM32(esp + 0x30) = eax;
    MEM32(esp + 0x34) = ecx;
    eax = esp + 0x30;
    ecx = esp + 0x40;
    MEM32(esp + 0x38) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C0CBu); RECOMP_ABI_CALL(0x0002B900u, sub_0002B900); /* call 0x0002B900 */

loc_0002C0CB: ;
    edi = esp + 0x30;

loc_0002C0CF: ;
    esi = esp + 0x40;
    MEMF(esp + 0x20) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C0DEu); RECOMP_ABI_CALL(0x0002BA50u, sub_0002BA50); /* call 0x0002BA50 */

loc_0002C0DE: ;
    MEM32(esp + 0x4C) = 1;

loc_0002C0E6: ;
    PUSH32(esp, 1);
    eax = esp + 0xB4;
    PUSH32(esp, eax);
    PUSH32(esp, ebx);
    MEMF(esp + 0x68) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C0FCu); RECOMP_ABI_CALL(0x0002B680u, sub_0002B680); /* call 0x0002B680 */

loc_0002C0FC: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esp + 0xC0;
    ecx = esp + 0x70;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C10Fu); RECOMP_ABI_CALL(0x00028F60u, sub_00028F60); /* call 0x00028F60 */

loc_0002C10F: ;
    ecx = MEM32(esp + 0xD0);
    eax = MEM32(esp + 0xD8);
    edx = MEM32(esp + 0xD4);
    MEM32(esp + 0x68) = eax;
    MEM32(esp + 0x60) = ecx;
    ecx = esp + 0x30;
    eax = ebx;
    MEM32(esp + 0x64) = edx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C13Bu); RECOMP_ABI_CALL(0x0002B230u, sub_0002B230); /* call 0x0002B230 */

loc_0002C13B: ;
    eax = ecx;
    ecx = esp + 0x40;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C146u); RECOMP_ABI_CALL(0x0002B900u, sub_0002B900); /* call 0x0002B900 */

loc_0002C146: ;
    edi = esp + 0x30;
    esi = esp + 0x40;
    MEMF(esp + 0x7C) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C159u); RECOMP_ABI_CALL(0x0002BA50u, sub_0002BA50); /* call 0x0002BA50 */

loc_0002C159: ;
    edi = esp + 0x70;
    MEMF(esp + 0xA4) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C16Bu); RECOMP_ABI_CALL(0x0002BA50u, sub_0002BA50); /* call 0x0002BA50 */

loc_0002C16B: ;
    eax = MEM32(esp + 0x4C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    MEMF(esp + 0xAC) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C187; /* je: equal / zero */

loc_0002C17C: ;
    eax = edi;
    ecx = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C185u); RECOMP_ABI_CALL(0x0002B900u, sub_0002B900); /* call 0x0002B900 */

loc_0002C185: ;
    goto loc_0002C1B6;

loc_0002C187: ;
    eax = MEM32(ebp + 0x20);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C199; /* je: equal / zero */

loc_0002C18E: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0 = xmm1; /* movaps */
    goto loc_0002C1BC;

loc_0002C199: ;
    eax = MEM32(ebp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C1A8; /* je: equal / zero */

loc_0002C1A0: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    goto loc_0002C1B6;

loc_0002C1A8: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */
    xmm0.f[0] = xmm0.f[0] * MEMF(0x333958); /* mulss */

loc_0002C1B6: ;
    xmm1 = XMM_SCALAR(MEMF(esp + 0x20)); /* movss */

loc_0002C1BC: ;
    xmm6 = XMM_SCALAR(MEMF(ebp + 0x10)); /* movss */
    _fca = xmm6.f[0]; _fcb = MEMF(0x3337A0); /* ucomiss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    xmm7 = XMM_ZERO(); /* xorps self = zero */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x24)); /* movss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0002C201; /* jnp: not parity */

loc_0002C1DD: ;
    _fca = xmm3.f[0]; _fcb = xmm7.f[0]; /* ucomiss */
    eax = (eax & 0xFFFF00FFu) | ((uint32_t)((((_fca == _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x40u : 0u) | (((_fca != _fca || _fcb != _fcb)) ? 0x04u : 0u) | (((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) ? 0x01u : 0u) | 0x02u) << 8); /* lahf (ucomiss) */
    _fa = (uint32_t)(HI8(eax)) & 0xFFu; _fb = (uint32_t)(0x44) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* test HI8(eax), 0x44 (8-bit) */
    _cf = 0; /* nothing borrows from zero */
    if ((!RECOMP_PARITY8((_fa) & (_fb)))) goto loc_0002C1FA; /* jnp: not parity */

loc_0002C1E6: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002C1F0; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0002C1EB: ;
    _fca = xmm7.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0002C201; /* ja: above (unsigned >) (xmm7.f[0] vs xmm3.f[0]) */

loc_0002C1F0: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002C1FA; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0002C1F5: ;
    _fca = xmm3.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0002C201; /* ja: above (unsigned >) (xmm3.f[0] vs xmm7.f[0]) */

loc_0002C1FA: ;
    eax = 1;
    goto loc_0002C203;

loc_0002C201: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002C203: ;
    ecx = MEM32(ebp + 0x18);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm5 = XMM_SCALAR(MEMF(esp + 0x28)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0002C263; /* jne: not equal / not zero */

loc_0002C210: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x18)); /* fsub dword ptr [esp + 0x18] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x3337BC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0002C22B; /* jbe: below or equal (unsigned <=) */

loc_0002C226: ;
    _fca = xmm5.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0002C24C; /* ja: above (unsigned >) (xmm5.f[0] vs xmm1.f[0]) */

loc_0002C22B: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */
    fp_top() = RECOMP_FP_PC(fp_top() - MEMF(esp + 0x28)); /* fsub dword ptr [esp + 0x28] */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x3337BC)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp != 1) /* fcompi */) goto loc_0002C269; /* jbe: below or equal (unsigned <=) */

loc_0002C247: ;
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002C269; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_0002C24C: ;
    MEMF(esp + 0x1C) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x24) = xmm7.f[0]; /* movss */
    MEMF(esp + 0x18) = xmm7.f[0]; /* movss */
    goto loc_0002C398;

loc_0002C263: ;
    xmm4 = XMM_SCALAR(MEMF(esp + 0x18)); /* movss */

loc_0002C269: ;
    _fca = xmm1.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002C282; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm7.f[0]) */

loc_0002C26E: ;
    _fca = xmm1.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002C282; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm2.f[0]) */

loc_0002C273: ;
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0002C298; /* ja: above (unsigned >) (xmm7.f[0] vs xmm1.f[0]) */

loc_0002C27F: ;
    xmm7 = XMM_ZERO(); /* xorps self = zero */

loc_0002C282: ;
    _fca = xmm7.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002C2AA; /* jbe: below or equal (unsigned <=) (xmm7.f[0] vs xmm1.f[0]) */

loc_0002C287: ;
    _fca = xmm2.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002C2AA; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm1.f[0]) */

loc_0002C28C: ;
    xmm7 = xmm2; /* movaps */
    xmm7.f[0] = xmm7.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm7.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002C2A7; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm7.f[0]) */

loc_0002C298: ;
    xmm7 = XMM_ZERO(); /* xorps self = zero */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    goto loc_0002C2EC;

loc_0002C2A7: ;
    xmm7 = XMM_ZERO(); /* xorps self = zero */

loc_0002C2AA: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_NE(_fa, _fb)) goto loc_0002C2B1; /* jne: not equal / not zero */

loc_0002C2AE: ;
    xmm3 = xmm7; /* movaps */

loc_0002C2B1: ;
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] + xmm3.f[0]; /* addss */
    MEMF(esp + 0x1C) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0002C2D1; /* ja: above (unsigned >) (xmm1.f[0] vs xmm4.f[0]) */

loc_0002C2CC: ;
    _fca = xmm5.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002C2EC; /* jbe: below or equal (unsigned <=) (xmm5.f[0] vs xmm1.f[0]) */

loc_0002C2D1: ;
    _fca = xmm1.f[0]; _fcb = xmm4.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002C2E2; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm4.f[0]) */

loc_0002C2D6: ;
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm4.f[0]; /* movss */
    goto loc_0002C2EC;

loc_0002C2E2: ;
    xmm5.f[0] = xmm5.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x1C) = xmm5.f[0]; /* movss */

loc_0002C2EC: ;
    xmm2 = XMM_SCALAR(MEMF(esp + 0xA8)); /* movss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x5C)); /* movss */
    xmm3 = XMM_SCALAR(MEMF(esp + 0x6C)); /* movss */
    xmm4 = XMM_SCALAR(MEMF(esp + 0x58)); /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    MEMF(esp + 0x24) = xmm1.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] + xmm2.f[0]; /* addss */
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0002C323; /* ja: above (unsigned >) (xmm1.f[0] vs xmm3.f[0]) */

loc_0002C31E: ;
    _fca = xmm4.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002C33E; /* jbe: below or equal (unsigned <=) (xmm4.f[0] vs xmm1.f[0]) */

loc_0002C323: ;
    _fca = xmm1.f[0]; _fcb = xmm3.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002C334; /* jbe: below or equal (unsigned <=) (xmm1.f[0] vs xmm3.f[0]) */

loc_0002C328: ;
    xmm3.f[0] = xmm3.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm3.f[0]; /* movss */
    goto loc_0002C33E;

loc_0002C334: ;
    xmm4.f[0] = xmm4.f[0] - xmm2.f[0]; /* subss */
    MEMF(esp + 0x24) = xmm4.f[0]; /* movss */

loc_0002C33E: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x54)); /* movss */
    if (CMP_NE(_fa, _fb)) goto loc_0002C34B; /* jne: not equal / not zero */

loc_0002C348: ;
    xmm1 = xmm7; /* movaps */

loc_0002C34B: ;
    xmm3 = XMM_SCALAR(MEMF(esp + 0x7C)); /* movss */
    xmm2 = XMM_SCALAR(MEMF(esp + 0x3C)); /* movss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm0.f[0] = xmm0.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
    xmm1 = XMM_SCALAR(MEMF(esp + 0x50)); /* movss */
    MEMF(esp + 0x18) = xmm0.f[0]; /* movss */
    xmm0.f[0] = xmm0.f[0] + xmm3.f[0]; /* addss */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca > _fcb)) goto loc_0002C37D; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0002C378: ;
    _fca = xmm2.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002C398; /* jbe: below or equal (unsigned <=) (xmm2.f[0] vs xmm0.f[0]) */

loc_0002C37D: ;
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002C38E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm1.f[0]) */

loc_0002C382: ;
    xmm1.f[0] = xmm1.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm1.f[0]; /* movss */
    goto loc_0002C398;

loc_0002C38E: ;
    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */

loc_0002C398: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    esi = MEM32(esp + 0x2C);
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x33389C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_0002C3BE; /* ja: above (unsigned >) */

loc_0002C3AE: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C3BBu); RECOMP_ABI_CALL(0x000C4220u, sub_000C4220); /* call 0x000C4220 */

loc_0002C3BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002C3BE: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x33389C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_0002C3E0; /* ja: above (unsigned >) */

loc_0002C3D0: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C3DDu); RECOMP_ABI_CALL(0x000C42F0u, sub_000C42F0); /* call 0x000C42F0 */

loc_0002C3DD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002C3E0: ;
    ecx = esp + 0x70;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C3EBu); RECOMP_ABI_CALL(0x0002B230u, sub_0002B230); /* call 0x0002B230 */

loc_0002C3EB: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = esp + 0xA0;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C3FDu); RECOMP_ABI_CALL(0x000C4550u, sub_000C4550); /* call 0x000C4550 */

loc_0002C3FD: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x33389C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_0002C422; /* ja: above (unsigned >) */

loc_0002C412: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C41Fu); RECOMP_ABI_CALL(0x000C4220u, sub_000C4220); /* call 0x000C4220 */

loc_0002C41F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002C422: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xAC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xA4); /* subss */
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C442u); RECOMP_ABI_CALL(0x000C42F0u, sub_000C42F0); /* call 0x000C42F0 */

loc_0002C442: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x70;
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C450u); RECOMP_ABI_CALL(0x0002B230u, sub_0002B230); /* call 0x0002B230 */

loc_0002C450: ;
    edx = MEM32(ebx + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = esp + 0x68;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C45Fu); RECOMP_ABI_CALL(0x000C4550u, sub_000C4550); /* call 0x000C4550 */

loc_0002C45F: ;
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C466u); RECOMP_ABI_CALL(0x00016930u, sub_00016930); /* call 0x00016930 */

loc_0002C466: ;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C472u); RECOMP_ABI_CALL(0x0002B680u, sub_0002B680); /* call 0x0002B680 */

loc_0002C472: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C47Cu); RECOMP_ABI_CALL(0x0002B750u, sub_0002B750); /* call 0x0002B750 */

loc_0002C47C: ;
    edx = MEM32(ebx + 0x14);
    eax = MEM32(edx + 8);
    ecx = MEM32(esp + 0x80);
    edx = MEM32(esp + 0x84);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x88);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C4A9u); RECOMP_ABI_CALL(0x00016930u, sub_00016930); /* call 0x00016930 */

loc_0002C4A9: ;
    edx = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C4B5u); RECOMP_ABI_CALL(0x0002B680u, sub_0002B680); /* call 0x0002B680 */

loc_0002C4B5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002C4BFu); RECOMP_ABI_CALL(0x0002B750u, sub_0002B750); /* call 0x0002B750 */

loc_0002C4BF: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 0x8C);
    edx = MEM32(esp + 0x90);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x94);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;

loc_0002C4E5: ;
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
 * sub_0002C38C
 * Original: 0x0002C38C - 0x0002C4EC (352 bytes, 105 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C38C(void)
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

loc_0002C38C: ;
    goto loc_0002C398;

    xmm2.f[0] = xmm2.f[0] - xmm3.f[0]; /* subss */
    MEMF(esp + 0x18) = xmm2.f[0]; /* movss */

loc_0002C398: ;
    fp_push(MEMF(esp + 0x1C)); /* fld float */
    esi = MEM32(esp + 0x2C);
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x33389C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_0002C3BE; /* ja: above (unsigned >) */

loc_0002C3AE: ;
    ecx = MEM32(esp + 0x1C);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002C3BBu); RECOMP_ABI_CALL(0x000C4220u, sub_000C4220); /* call 0x000C4220 */

loc_0002C3BB: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002C3BE: ;
    fp_push(MEMF(esp + 0x24)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    fp_push(MEMF(0x33389C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_0002C3E0; /* ja: above (unsigned >) */

loc_0002C3D0: ;
    edx = MEM32(esp + 0x24);
    eax = MEM32(esi + 0xC);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002C3DDu); RECOMP_ABI_CALL(0x000C42F0u, sub_000C42F0); /* call 0x000C42F0 */

loc_0002C3DD: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002C3E0: ;
    ecx = esp + 0x70;
    eax = esi;
    PUSH32(esp, 0x0002C3EBu); RECOMP_ABI_CALL(0x0002B230u, sub_0002B230); /* call 0x0002B230 */

loc_0002C3EB: ;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    edx = esp + 0xA0;
    PUSH32(esp, 0x0002C3FDu); RECOMP_ABI_CALL(0x000C4550u, sub_000C4550); /* call 0x000C4550 */

loc_0002C3FD: ;
    fp_push(MEMF(esp + 0x20)); /* fld float */
    fp_top() = fabs(fp_top()); /* fabs */
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(8)) >> 32) & 1);
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    fp_push(MEMF(0x33389C)); /* fld float */
    g_fp_cmp = RECOMP_FCMP(fp_top(), fp_st1()); fp_pop(); /* fcompi */
    fp_pop(); /* fstp st(0) */
    if ((g_fp_cmp == 1) /* fcompi */) goto loc_0002C422; /* ja: above (unsigned >) */

loc_0002C412: ;
    ecx = MEM32(esp + 0x18);
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002C41Fu); RECOMP_ABI_CALL(0x000C4220u, sub_000C4220); /* call 0x000C4220 */

loc_0002C41F: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002C422: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0xAC)); /* movss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp + 0xA4); /* subss */
    eax = MEM32(ebx + 0xC);
    PUSH32(esp, ecx);
    MEMF(esp) = xmm0.f[0]; /* movss */
    PUSH32(esp, 0x0002C442u); RECOMP_ABI_CALL(0x000C42F0u, sub_000C42F0); /* call 0x000C42F0 */

loc_0002C442: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x70;
    eax = ebx;
    PUSH32(esp, 0x0002C450u); RECOMP_ABI_CALL(0x0002B230u, sub_0002B230); /* call 0x0002B230 */

loc_0002C450: ;
    edx = MEM32(ebx + 0xC);
    PUSH32(esp, 0);
    PUSH32(esp, edx);
    edx = esp + 0x68;
    PUSH32(esp, 0x0002C45Fu); RECOMP_ABI_CALL(0x000C4550u, sub_000C4550); /* call 0x000C4550 */

loc_0002C45F: ;
    eax = ebx;
    PUSH32(esp, 0x0002C466u); RECOMP_ABI_CALL(0x00016930u, sub_00016930); /* call 0x00016930 */

loc_0002C466: ;
    ecx = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002C472u); RECOMP_ABI_CALL(0x0002B680u, sub_0002B680); /* call 0x0002B680 */

loc_0002C472: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = ebx;
    PUSH32(esp, 0x0002C47Cu); RECOMP_ABI_CALL(0x0002B750u, sub_0002B750); /* call 0x0002B750 */

loc_0002C47C: ;
    edx = MEM32(ebx + 0x14);
    eax = MEM32(edx + 8);
    ecx = MEM32(esp + 0x80);
    edx = MEM32(esp + 0x84);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x88);
    MEM32(eax + 4) = edx;
    MEM32(eax + 8) = ecx;
    eax = esi;
    PUSH32(esp, 0x0002C4A9u); RECOMP_ABI_CALL(0x00016930u, sub_00016930); /* call 0x00016930 */

loc_0002C4A9: ;
    edx = MEM32(eax + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002C4B5u); RECOMP_ABI_CALL(0x0002B680u, sub_0002B680); /* call 0x0002B680 */

loc_0002C4B5: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x0002C4BFu); RECOMP_ABI_CALL(0x0002B750u, sub_0002B750); /* call 0x0002B750 */

loc_0002C4BF: ;
    eax = MEM32(esi + 0x14);
    eax = MEM32(eax + 8);
    ecx = MEM32(esp + 0x8C);
    edx = MEM32(esp + 0x90);
    _fb = (uint32_t)(0x40) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x40)) >> 32) & 1);
    eax = eax + 0x40;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(eax) = ecx;
    ecx = MEM32(esp + 0x94);
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
 * sub_0002C500
 * Original: 0x0002C500 - 0x0002C568 (104 bytes, 31 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C500(void)
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

loc_0002C500: ;
    PUSH32(esp, ecx);
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0x0002C50Au); RECOMP_ABI_CALL(0x0002C570u, sub_0002C570); /* call 0x0002C570 */

loc_0002C50A: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x3337A0); /* comiss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002C51D; /* jb: below (unsigned <) (xmm0.f[0] vs MEMF(0x3337A0)) */

loc_0002C518: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    POP32(esp, ecx);
    esp += 4; return; /* ret */

loc_0002C51D: ;
    xmm1 = XMM_SCALAR(MEMF(0x3337A4)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    if ((_fca < _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002C539; /* jb: below (unsigned <) (xmm1.f[0] vs xmm0.f[0]) */

loc_0002C52A: ;
    xmm0 = XMM_SCALAR(MEMF(0x333894)); /* movss */
    MEMF(esp) = xmm0.f[0]; /* movss */
    goto loc_0002C544;

loc_0002C539: ;
    fp_push(MEMF(esp)); /* fld float */
    PUSH32(esp, 0x0002C541u); RECOMP_ABI_CALL(0x002941B0u, sub_002941B0); /* call 0x002941B0 */

loc_0002C541: ;
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */

loc_0002C544: ;
    edx = MEM32(esp + 8);
    eax = esi;
    ecx = edi;
    PUSH32(esp, 0x0002C551u); RECOMP_ABI_CALL(0x0002C620u, sub_0002C620); /* call 0x0002C620 */

loc_0002C551: ;
    xmm1 = xmm0; /* movaps */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm1.f[0]; /* comiss */
    xmm0.f[0] = xmm0.f[0] - MEMF(esp); /* subss */
    if ((_fca > _fcb)) goto loc_0002C566; /* ja: above (unsigned >) (xmm0.f[0] vs xmm1.f[0]) */

loc_0002C561: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */

loc_0002C566: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002C570
 * Original: 0x0002C570 - 0x0002C61B (171 bytes, 56 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C570(void)
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

loc_0002C570: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ecx)); /* fld float */
    xmm3 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    fp_push(MEMF(ecx + 4)); /* fld float */
    xmm4 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    fp_push(MEMF(ecx + 8)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm1 = XMM_SCALAR(MEMF(eax)); /* movss */
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
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm3.f[0] = xmm3.f[0] * xmm0.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm0.f[0]; /* mulss */
    MEMF(esp + 4) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
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
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm5 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm5.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm1.f[0] = xmm1.f[0] * MEMF(esp + 4); /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm3.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] + xmm2.f[0]; /* addss */
    xmm0.f[0] = xmm0.f[0] + xmm1.f[0]; /* addss */
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
 * sub_0002C620
 * Original: 0x0002C620 - 0x0002C752 (306 bytes, 91 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C620(void)
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

loc_0002C620: ;
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    fp_push(MEMF(ecx)); /* fld float */
    xmm2 = XMM_SCALAR(MEMF(ecx + 4)); /* movss */
    fp_push(MEMF(ecx + 4)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    fp_push(MEMF(ecx + 8)); /* fld float */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
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
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
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
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm5 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 4) = xmm5.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C749; /* je: equal / zero */

loc_0002C718: ;
    xmm2 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002C749; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0002C742: ;
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp) = MEM32(esp) - 0x80000000u;
    _fa = (uint32_t)(MEM32(esp)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0002C749: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002C62A
 * Original: 0x0002C62A - 0x0002C752 (296 bytes, 88 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C62A(void)
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

loc_0002C62A: ;
    fp_push(MEMF(ecx + 4)); /* fld float */
    xmm0 = XMM_SCALAR(MEMF(ecx + 8)); /* movss */
    fp_push(MEMF(ecx + 8)); /* fld float */
    xmm4 = XMM_SCALAR(MEMF(eax)); /* movss */
    { double _t = fp_top(); fp_push(_t); } /* fld st(0) */
    xmm3 = XMM_SCALAR(MEMF(eax + 8)); /* movss */
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
    MEMF(esp) = (float)fp_top(); /* fst */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(ecx)); /* fmul dword ptr [ecx] */
    xmm1 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm1.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    MEMF(esp + 0x10) = (float)fp_top(); fp_pop(); /* fstp */
    fp_push(MEMF(eax)); /* fld float */
    xmm1 = XMM_SCALAR(MEMF(eax + 4)); /* movss */
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
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    xmm5 = XMM_SCALAR(MEMF(esp)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm5.f[0]; /* mulss */
    xmm4.f[0] = xmm4.f[0] * xmm5.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm5.f[0]; /* mulss */
    xmm6 = xmm1; /* movaps */
    xmm6.f[0] = xmm6.f[0] * xmm0.f[0]; /* mulss */
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 4) = xmm5.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C749; /* je: equal / zero */

loc_0002C718: ;
    xmm2 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002C749; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0002C742: ;
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp) = MEM32(esp) - 0x80000000u;
    _fa = (uint32_t)(MEM32(esp)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0002C749: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002C6B8
 * Original: 0x0002C6B8 - 0x0002C752 (154 bytes, 40 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C6B8(void)
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

loc_0002C6B8: ;
    xmm5 = xmm3; /* movaps */
    xmm5.f[0] = xmm5.f[0] * xmm2.f[0]; /* mulss */
    xmm5.f[0] = xmm5.f[0] - xmm6.f[0]; /* subss */
    xmm6 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm4.f[0]; /* mulss */
    xmm3.f[0] = xmm3.f[0] * xmm6.f[0]; /* mulss */
    xmm0.f[0] = xmm0.f[0] - xmm3.f[0]; /* subss */
    xmm1.f[0] = xmm1.f[0] * xmm6.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] * xmm4.f[0]; /* mulss */
    MEMF(esp + 4) = xmm5.f[0]; /* movss */
    MEMF(esp + 8) = xmm0.f[0]; /* movss */
    xmm1.f[0] = xmm1.f[0] - xmm2.f[0]; /* subss */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    MEMF(esp + 0xC) = xmm1.f[0]; /* movss */
    fp_push(MEMF(esp + 0xC)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 0xC)); /* fmul dword ptr [esp + 0xc] */
    fp_push(MEMF(esp + 8)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 8)); /* fmul dword ptr [esp + 8] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_push(MEMF(esp + 4)); /* fld float */
    fp_top() = RECOMP_FP_PC(fp_top() * MEMF(esp + 4)); /* fmul dword ptr [esp + 4] */
    fp_st1() = RECOMP_FP_PC(fp_st1() + fp_top()); fp_pop(); /* faddp st(1) */
    fp_top() = RECOMP_FP_PC(sqrt(fp_top())); /* fsqrt */
    MEMF(esp) = (float)fp_top(); fp_pop(); /* fstp */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C749; /* je: equal / zero */

loc_0002C718: ;
    xmm2 = XMM_SCALAR(MEMF(edx + 8)); /* movss */
    xmm2.f[0] = xmm2.f[0] * xmm1.f[0]; /* mulss */
    xmm1 = XMM_SCALAR(MEMF(edx + 4)); /* movss */
    xmm1.f[0] = xmm1.f[0] * xmm0.f[0]; /* mulss */
    xmm0 = XMM_SCALAR(MEMF(edx)); /* movss */
    xmm0.f[0] = xmm0.f[0] * xmm5.f[0]; /* mulss */
    xmm2.f[0] = xmm2.f[0] + xmm1.f[0]; /* addss */
    xmm2.f[0] = xmm2.f[0] + xmm0.f[0]; /* addss */
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    _fca = xmm0.f[0]; _fcb = xmm2.f[0]; /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002C749; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs xmm2.f[0]) */

loc_0002C742: ;
    _fb = (uint32_t)(0x80000000u) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    MEM32(esp) = MEM32(esp) - 0x80000000u;
    _fa = (uint32_t)(MEM32(esp)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */

loc_0002C749: ;
    xmm0 = XMM_SCALAR(MEMF(esp)); /* movss */
    _fb = (uint32_t)(0x1C) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x1C;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

    #undef fp_push
    #undef fp_pop
    #undef fp_top
    #undef fp_st
    #undef fp_st1
}

/**
 * sub_0002C760
 * Original: 0x0002C760 - 0x0002C7D5 (117 bytes, 31 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C760(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C760: ;
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
    if (CMP_LE(_fas, _fbs)) goto loc_0002C7B2; /* jle: less or equal (signed <=) */

loc_0002C7AC: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002C7B2: ;
    edx = MEM32(esp + 4);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0002C7D1; /* jg: greater (signed >) */

loc_0002C7C2: ;
    edx = MEM32(esp + 8);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    SET_LO8(eax, (CMP_LE(_fas, _fbs)) ? 1 : 0); /* setle */

loc_0002C7D1: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002C7E0
 * Original: 0x0002C7E0 - 0x0002C812 (50 bytes, 18 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C7E0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C7E0: ;
    edx = MEM32(eax);
    ecx = MEM32(esp + 4);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002C7F3; /* jle: less or equal (signed <=) */

loc_0002C7F0: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0002C7F3: ;
    edx = MEM32(eax + 4);
    edx = edx & 0x7FFFFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    if (CMP_G(_fas, _fbs)) goto loc_0002C7F0; /* jg: greater (signed >) */

loc_0002C800: ;
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
 * sub_0002C820
 * Original: 0x0002C820 - 0x0002C838 (24 bytes, 12 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_zero
 * Frame: fpo_leaf
 */
void sub_0002C820(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C820: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C835; /* je: equal / zero */

loc_0002C824: ;
    eax = MEM32(eax + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C835; /* je: equal / zero */

loc_0002C82B: ;
    eax = MEM32(eax + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002C835; /* je: equal / zero */

loc_0002C832: ;
    eax = MEM32(eax);
    esp += 4; return; /* ret */

loc_0002C835: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002C840
 * Original: 0x0002C840 - 0x0002C855 (21 bytes, 7 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C840(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C840: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x10000) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x10000 (32-bit) */
    eax = MEM32(eax + 0xC);
    if (TEST_Z(_fa, _fb)) goto loc_0002C851; /* je: equal / zero */

loc_0002C84B: ;
    _fb = (uint32_t)(0x80) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x80;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002C851: ;
    _fb = (uint32_t)(0x30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002C859
 * Original: 0x0002C859 - 0x0002C85D (4 bytes, 4 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C859(void)
{

loc_0002C859: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0002C85D
 * Original: 0x0002C85D - 0x0002C860 (3 bytes, 3 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C85D(void)
{

loc_0002C85D: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0002C860
 * Original: 0x0002C860 - 0x0002C882 (34 bytes, 12 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C860(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0002C860: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax), 0x7FFFFFFF (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_Z(_fa, _fb)) goto loc_0002C86B; /* je: equal / zero */

loc_0002C868: ;
    _cf = 0; /* xor clears CF */
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esp += 4; return; /* ret */

loc_0002C86B: ;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0x7FFFFFFF) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* test MEM32(eax + 4), 0x7FFFFFFF (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (TEST_NZ(_fa, _fb)) goto loc_0002C868; /* jne: not equal / not zero */

loc_0002C874: ;
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
 * sub_0002C890
 * Original: 0x0002C890 - 0x0002C9C2 (306 bytes, 91 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002C890(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C890: ;
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
    PUSH32(esp, 0x0002C8A9u); RECOMP_ABI_CALL(0x000C30B0u, sub_000C30B0); /* call 0x000C30B0 */

loc_0002C8A9: ;
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
    PUSH32(esp, 0x0002C925u); RECOMP_ABI_CALL(0x000C37B0u, sub_000C37B0); /* call 0x000C37B0 */

loc_0002C925: ;
    eax = MEM32(esi + 0x10);
    edx = MEM32(eax + 0x30);
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
    eax = MEM32(esp + 0x10);
    MEM32(ebx + 0xA0) = ecx;
    edx = MEM32(esi + 8);
    ecx = MEM32(esp + 0x14);
    MEM32(ebx + 0xA4) = edx;
    edx = MEM32(esp + 0x1C);
    MEM32(ebx + 0xAC) = eax;
    MEM32(ebx + 0xA8) = ecx;
    MEM32(ebx + 0x2C) = edx;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002C990; /* jne: not equal / not zero */

loc_0002C98B: ;
    PUSH32(esp, 0x0002C990u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002C990: ;
    edx = MEM32(ebx + 0x2C);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    PUSH32(esp, 0x0002C99Du); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0002C99D: ;
    ecx = MEM32(ebx + 0x2C);
    esi = MEM32(esp + 0x18);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM32(ebx + 0x28) = eax;
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
    POP32(esp, edi);
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebp);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0002C9D0
 * Original: 0x0002C9D0 - 0x0002CA0A (58 bytes, 22 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002C9D0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002C9D0: ;
    eax = MEM32(esi + 0x2C);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0002CA08; /* jbe: below or equal (unsigned <=) */

loc_0002C9DA: ;
    /* nop */

loc_0002C9E0: ;
    eax = MEM32(esi + 0x28);
    eax = MEM32(eax + edi * 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002CA00; /* je: equal / zero */

loc_0002C9EA: ;
    ecx = MEM32(esi + 0xA8);
    PUSH32(esp, ecx);
    PUSH32(esp, 0xCE);
    PUSH32(esp, 2);
    PUSH32(esp, 0x0002C9FDu); RECOMP_ABI_CALL(0x0010F720u, sub_0010F720); /* call 0x0010F720 */

loc_0002C9FD: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002CA00: ;
    eax = MEM32(esi + 0x2C);
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002C9E0; /* jb: below (unsigned <) */

loc_0002CA08: ;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002CA10
 * Original: 0x0002CA10 - 0x0002CA1D (13 bytes, 5 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CA10(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002CA10: ;
    eax = MEM32(esp + 4);
    ecx = MEM32(esp + 8);
    eax = MEM32(eax);
    _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    eax = eax - MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002CA20
 * Original: 0x0002CA20 - 0x0002CA68 (72 bytes, 30 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CA20(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002CA20: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002CA67; /* je: equal / zero */

loc_0002CA26: ;
    PUSH32(esp, edi);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002CA2Du); RECOMP_ABI_CALL(0x000BDB60u, sub_000BDB60); /* call 0x000BDB60 */

loc_0002CA2D: ;
    eax = MEM32(esi);
    edi = MEM32(eax + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002CA4B; /* je: equal / zero */

loc_0002CA39: ;
    PUSH32(esp, 0x0002CA3Eu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002CA3E: ;
    ecx = MEM32(esi);
    ecx = MEM32(ecx + 4);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002CA4Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002CA48u); } /* indirect call */
    }

loc_0002CA4B: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002CA60; /* je: equal / zero */

loc_0002CA51: ;
    PUSH32(esp, 0x0002CA56u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002CA56: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002CA60u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002CA5Du); } /* indirect call */
    }

loc_0002CA60: ;
    MEM32(esi) = 0;
    POP32(esp, edi);

loc_0002CA67: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0002CA70
 * Original: 0x0002CA70 - 0x0002CB7D (269 bytes, 92 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CA70(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002CA70: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002CA85u); RECOMP_ABI_CALL(0x000BFDB0u, sub_000BFDB0); /* call 0x000BFDB0 */

loc_0002CA85: ;
    esi = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002CAB8; /* je: equal / zero */

loc_0002CA8E: ;
    eax = MEM32(0x64D33C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002CAA9; /* je: equal / zero */

loc_0002CA97: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002CAA9; /* jne: not equal / not zero */

loc_0002CAA0: ;
    eax = MEM32(esp + 8);
    eax = eax >> 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    goto loc_0002CAB0;

loc_0002CAA9: ;
    eax = MEM32(esp + 8);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */

loc_0002CAB0: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 8) = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0002CABF; /* jne: not equal / not zero */

loc_0002CAB8: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002CABF: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002CACD; /* jne: not equal / not zero */

loc_0002CAC8: ;
    PUSH32(esp, 0x0002CACDu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002CACD: ;
    PUSH32(esp, edi);
    edx = 8;
    ecx = eax;
    PUSH32(esp, 0x0002CADAu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0002CADA: ;
    edx = MEM32(esp + 0xC);
    edi = eax;
    MEM32(edi) = edx;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002CAF0; /* jne: not equal / not zero */

loc_0002CAEB: ;
    PUSH32(esp, 0x0002CAF0u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002CAF0: ;
    edx = MEM32(esp + 0xC);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    PUSH32(esp, 0x0002CAFEu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0002CAFE: ;
    MEM32(edi + 4) = eax;
    eax = MEM32(esp + 0xC);
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0002CB75; /* jbe: below or equal (unsigned <=) */

loc_0002CB0B: ;
    edx = MEM32(0x64D33C);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    ebp = MEM32(0x64D398);
    /* nop */

loc_0002CB20: ;
    eax = MEM32(esi);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0002CB50; /* je: equal / zero */

loc_0002CB2D: ;
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

loc_0002CB50: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002CB5D; /* je: equal / zero */

loc_0002CB54: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002CB60; /* je: equal / zero */

loc_0002CB5D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002CB60: ;
    eax = MEM32(edi + 4);
    ebx = MEM32(esp + 0x10);
    MEM32(eax + ecx * 4) = ebx;
    eax = MEM32(esp + 0x14);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002CB20; /* jb: below (unsigned <) */

loc_0002CB73: ;
    POP32(esp, ebp);
    POP32(esp, ebx);

loc_0002CB75: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002CB80
 * Original: 0x0002CB80 - 0x0002CC1C (156 bytes, 34 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CB80(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002CB80: ;
    PUSH32(esp, 0x3DCCCCCD);
    eax = 0x1F4;
    ecx = esi;
    PUSH32(esp, 0x0002CB91u); RECOMP_ABI_CALL(0x000BF8B0u, sub_000BF8B0); /* call 0x000BF8B0 */

loc_0002CB91: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0x1C;
    eax = 0x1F4;
    PUSH32(esp, 0x0002CBA3u); RECOMP_ABI_CALL(0x000BF8B0u, sub_000BF8B0); /* call 0x000BF8B0 */

loc_0002CBA3: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0x38;
    eax = 0x1F4;
    PUSH32(esp, 0x0002CBB5u); RECOMP_ABI_CALL(0x000BF8B0u, sub_000BF8B0); /* call 0x000BF8B0 */

loc_0002CBB5: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0x54;
    eax = 0x1F4;
    PUSH32(esp, 0x0002CBC7u); RECOMP_ABI_CALL(0x000BF8B0u, sub_000BF8B0); /* call 0x000BF8B0 */

loc_0002CBC7: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0x70;
    eax = 0x1F4;
    PUSH32(esp, 0x0002CBD9u); RECOMP_ABI_CALL(0x000BF8B0u, sub_000BF8B0); /* call 0x000BF8B0 */

loc_0002CBD9: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0x8C;
    eax = 0x1F4;
    PUSH32(esp, 0x0002CBEEu); RECOMP_ABI_CALL(0x000BF8B0u, sub_000BF8B0); /* call 0x000BF8B0 */

loc_0002CBEE: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0xA8;
    eax = 0x1F4;
    PUSH32(esp, 0x0002CC03u); RECOMP_ABI_CALL(0x000BF8B0u, sub_000BF8B0); /* call 0x000BF8B0 */

loc_0002CC03: ;
    PUSH32(esp, 0x3DCCCCCD);
    ecx = esi + 0xC4;
    eax = 0x1F4;
    PUSH32(esp, 0x0002CC18u); RECOMP_ABI_CALL(0x000BF8B0u, sub_000BF8B0); /* call 0x000BF8B0 */

loc_0002CC18: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002CC20
 * Original: 0x0002CC20 - 0x0002CDBC (412 bytes, 145 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CC20(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002CC20: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    ebx = eax;
    PUSH32(esp, edi);
    edi = MEM32(ebx + 0x10);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002CC3E; /* je: equal / zero */

loc_0002CC2E: ;
    PUSH32(esp, 0x0002CC33u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002CC33: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002CC3Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002CC3Bu); } /* indirect call */
    }

loc_0002CC3E: ;
    PUSH32(esp, ebp);
    eax = ebx;
    MEM32(ebx + 0x10) = esi;
    MEM32(ebx + 0xC) = esi;
    MEM32(ebx + 8) = esi;
    MEM32(ebx + 4) = esi;
    MEM32(ebx) = esi;
    PUSH32(esp, 0x0002CC54u); RECOMP_ABI_CALL(0x000BF5F0u, sub_000BF5F0); /* call 0x000BF5F0 */

loc_0002CC54: ;
    edi = MEM32(ebx + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    ebp = ebx + 0x1C;
    if (CMP_EQ(_fa, _fb)) goto loc_0002CC6E; /* je: equal / zero */

loc_0002CC5E: ;
    PUSH32(esp, 0x0002CC63u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002CC63: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002CC6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002CC6Bu); } /* indirect call */
    }

loc_0002CC6E: ;
    eax = ebp;
    MEM32(ebp + 0x10) = esi;
    MEM32(ebp + 0xC) = esi;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 4) = esi;
    MEM32(ebp) = esi;
    PUSH32(esp, 0x0002CC84u); RECOMP_ABI_CALL(0x000BF5F0u, sub_000BF5F0); /* call 0x000BF5F0 */

loc_0002CC84: ;
    edi = MEM32(ebx + 0x48);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    ebp = ebx + 0x38;
    if (CMP_EQ(_fa, _fb)) goto loc_0002CC9E; /* je: equal / zero */

loc_0002CC8E: ;
    PUSH32(esp, 0x0002CC93u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002CC93: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002CC9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002CC9Bu); } /* indirect call */
    }

loc_0002CC9E: ;
    eax = ebp;
    MEM32(ebp + 0x10) = esi;
    MEM32(ebp + 0xC) = esi;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 4) = esi;
    MEM32(ebp) = esi;
    PUSH32(esp, 0x0002CCB4u); RECOMP_ABI_CALL(0x000BF5F0u, sub_000BF5F0); /* call 0x000BF5F0 */

loc_0002CCB4: ;
    edi = MEM32(ebx + 0x64);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    ebp = ebx + 0x54;
    if (CMP_EQ(_fa, _fb)) goto loc_0002CCCE; /* je: equal / zero */

loc_0002CCBE: ;
    PUSH32(esp, 0x0002CCC3u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002CCC3: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002CCCEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002CCCBu); } /* indirect call */
    }

loc_0002CCCE: ;
    eax = ebp;
    MEM32(ebp + 0x10) = esi;
    MEM32(ebp + 0xC) = esi;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 4) = esi;
    MEM32(ebp) = esi;
    PUSH32(esp, 0x0002CCE4u); RECOMP_ABI_CALL(0x000BF5F0u, sub_000BF5F0); /* call 0x000BF5F0 */

loc_0002CCE4: ;
    edi = MEM32(ebx + 0x80);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    ebp = ebx + 0x70;
    if (CMP_EQ(_fa, _fb)) goto loc_0002CD01; /* je: equal / zero */

loc_0002CCF1: ;
    PUSH32(esp, 0x0002CCF6u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002CCF6: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002CD01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002CCFEu); } /* indirect call */
    }

loc_0002CD01: ;
    eax = ebp;
    MEM32(ebp + 0x10) = esi;
    MEM32(ebp + 0xC) = esi;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 4) = esi;
    MEM32(ebp) = esi;
    PUSH32(esp, 0x0002CD17u); RECOMP_ABI_CALL(0x000BF5F0u, sub_000BF5F0); /* call 0x000BF5F0 */

loc_0002CD17: ;
    edi = MEM32(ebx + 0x9C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    ebp = ebx + 0x8C;
    if (CMP_EQ(_fa, _fb)) goto loc_0002CD37; /* je: equal / zero */

loc_0002CD27: ;
    PUSH32(esp, 0x0002CD2Cu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002CD2C: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002CD37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002CD34u); } /* indirect call */
    }

loc_0002CD37: ;
    eax = ebp;
    MEM32(ebp + 0x10) = esi;
    MEM32(ebp + 0xC) = esi;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 4) = esi;
    MEM32(ebp) = esi;
    PUSH32(esp, 0x0002CD4Du); RECOMP_ABI_CALL(0x000BF5F0u, sub_000BF5F0); /* call 0x000BF5F0 */

loc_0002CD4D: ;
    edi = MEM32(ebx + 0xB8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    ebp = ebx + 0xA8;
    if (CMP_EQ(_fa, _fb)) goto loc_0002CD6D; /* je: equal / zero */

loc_0002CD5D: ;
    PUSH32(esp, 0x0002CD62u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002CD62: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002CD6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002CD6Au); } /* indirect call */
    }

loc_0002CD6D: ;
    eax = ebp;
    MEM32(ebp + 0x10) = esi;
    MEM32(ebp + 0xC) = esi;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 4) = esi;
    MEM32(ebp) = esi;
    PUSH32(esp, 0x0002CD83u); RECOMP_ABI_CALL(0x000BF5F0u, sub_000BF5F0); /* call 0x000BF5F0 */

loc_0002CD83: ;
    edi = MEM32(ebx + 0xD4);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0002CDA4; /* je: equal / zero */

loc_0002CD94: ;
    PUSH32(esp, 0x0002CD99u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002CD99: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002CDA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002CDA1u); } /* indirect call */
    }

loc_0002CDA4: ;
    POP32(esp, edi);
    MEM32(ebx + 0x10) = esi;
    MEM32(ebx + 0xC) = esi;
    MEM32(ebx + 8) = esi;
    MEM32(ebx + 4) = esi;
    MEM32(ebx) = esi;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000BF5F0(); return; /* tail jmp 0x000BF5F0 */

}

/**
 * sub_0002CC54
 * Original: 0x0002CC54 - 0x0002CDBC (360 bytes, 123 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CC54(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002CC54: ;
    edi = MEM32(ebx + 0x2C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    ebp = ebx + 0x1C;
    if (CMP_EQ(_fa, _fb)) goto loc_0002CC6E; /* je: equal / zero */

loc_0002CC5E: ;
    PUSH32(esp, 0x0002CC63u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002CC63: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002CC6Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002CC6Bu); } /* indirect call */
    }

loc_0002CC6E: ;
    eax = ebp;
    MEM32(ebp + 0x10) = esi;
    MEM32(ebp + 0xC) = esi;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 4) = esi;
    MEM32(ebp) = esi;
    PUSH32(esp, 0x0002CC84u); RECOMP_ABI_CALL(0x000BF5F0u, sub_000BF5F0); /* call 0x000BF5F0 */

loc_0002CC84: ;
    edi = MEM32(ebx + 0x48);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    ebp = ebx + 0x38;
    if (CMP_EQ(_fa, _fb)) goto loc_0002CC9E; /* je: equal / zero */

loc_0002CC8E: ;
    PUSH32(esp, 0x0002CC93u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002CC93: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002CC9Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002CC9Bu); } /* indirect call */
    }

loc_0002CC9E: ;
    eax = ebp;
    MEM32(ebp + 0x10) = esi;
    MEM32(ebp + 0xC) = esi;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 4) = esi;
    MEM32(ebp) = esi;
    PUSH32(esp, 0x0002CCB4u); RECOMP_ABI_CALL(0x000BF5F0u, sub_000BF5F0); /* call 0x000BF5F0 */

loc_0002CCB4: ;
    edi = MEM32(ebx + 0x64);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    ebp = ebx + 0x54;
    if (CMP_EQ(_fa, _fb)) goto loc_0002CCCE; /* je: equal / zero */

loc_0002CCBE: ;
    PUSH32(esp, 0x0002CCC3u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002CCC3: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002CCCEu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002CCCBu); } /* indirect call */
    }

loc_0002CCCE: ;
    eax = ebp;
    MEM32(ebp + 0x10) = esi;
    MEM32(ebp + 0xC) = esi;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 4) = esi;
    MEM32(ebp) = esi;
    PUSH32(esp, 0x0002CCE4u); RECOMP_ABI_CALL(0x000BF5F0u, sub_000BF5F0); /* call 0x000BF5F0 */

loc_0002CCE4: ;
    edi = MEM32(ebx + 0x80);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    ebp = ebx + 0x70;
    if (CMP_EQ(_fa, _fb)) goto loc_0002CD01; /* je: equal / zero */

loc_0002CCF1: ;
    PUSH32(esp, 0x0002CCF6u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002CCF6: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002CD01u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002CCFEu); } /* indirect call */
    }

loc_0002CD01: ;
    eax = ebp;
    MEM32(ebp + 0x10) = esi;
    MEM32(ebp + 0xC) = esi;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 4) = esi;
    MEM32(ebp) = esi;
    PUSH32(esp, 0x0002CD17u); RECOMP_ABI_CALL(0x000BF5F0u, sub_000BF5F0); /* call 0x000BF5F0 */

loc_0002CD17: ;
    edi = MEM32(ebx + 0x9C);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    ebp = ebx + 0x8C;
    if (CMP_EQ(_fa, _fb)) goto loc_0002CD37; /* je: equal / zero */

loc_0002CD27: ;
    PUSH32(esp, 0x0002CD2Cu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002CD2C: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002CD37u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002CD34u); } /* indirect call */
    }

loc_0002CD37: ;
    eax = ebp;
    MEM32(ebp + 0x10) = esi;
    MEM32(ebp + 0xC) = esi;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 4) = esi;
    MEM32(ebp) = esi;
    PUSH32(esp, 0x0002CD4Du); RECOMP_ABI_CALL(0x000BF5F0u, sub_000BF5F0); /* call 0x000BF5F0 */

loc_0002CD4D: ;
    edi = MEM32(ebx + 0xB8);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    ebp = ebx + 0xA8;
    if (CMP_EQ(_fa, _fb)) goto loc_0002CD6D; /* je: equal / zero */

loc_0002CD5D: ;
    PUSH32(esp, 0x0002CD62u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002CD62: ;
    ecx = MEM32(ebp + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002CD6Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002CD6Au); } /* indirect call */
    }

loc_0002CD6D: ;
    eax = ebp;
    MEM32(ebp + 0x10) = esi;
    MEM32(ebp + 0xC) = esi;
    MEM32(ebp + 8) = esi;
    MEM32(ebp + 4) = esi;
    MEM32(ebp) = esi;
    PUSH32(esp, 0x0002CD83u); RECOMP_ABI_CALL(0x000BF5F0u, sub_000BF5F0); /* call 0x000BF5F0 */

loc_0002CD83: ;
    edi = MEM32(ebx + 0xD4);
    _fb = (uint32_t)(0xC4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0xC4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, esi (32-bit) */
    POP32(esp, ebp);
    if (CMP_EQ(_fa, _fb)) goto loc_0002CDA4; /* je: equal / zero */

loc_0002CD94: ;
    PUSH32(esp, 0x0002CD99u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002CD99: ;
    ecx = MEM32(ebx + 0x10);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002CDA4u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002CDA1u); } /* indirect call */
    }

loc_0002CDA4: ;
    POP32(esp, edi);
    MEM32(ebx + 0x10) = esi;
    MEM32(ebx + 0xC) = esi;
    MEM32(ebx + 8) = esi;
    MEM32(ebx + 4) = esi;
    MEM32(ebx) = esi;
    POP32(esp, esi);
    eax = ebx;
    POP32(esp, ebx);
    g_seh_ebp = ebp; sub_000BF5F0(); return; /* tail jmp 0x000BF5F0 */

}

/**
 * sub_0002CDC0
 * Original: 0x0002CDC0 - 0x0002CF6D (429 bytes, 120 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * Category: game_vtable
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CDC0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002CDC0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x29750A);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    esi = MEM32(esp + 0x1C);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002CDE2u); RECOMP_ABI_CALL(0x0001A530u, sub_0001A530); /* call 0x0001A530 */

loc_0002CDE2: ;
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
    PUSH32(esp, 0x0002CE1Bu); RECOMP_ABI_CALL(0x000F9650u, sub_000F9650); /* call 0x000F9650 */

loc_0002CE1B: ;
    MEM32(esi + 0x4048) = eax;
    MEM8(eax + 0x15) = LO8(ebx);
    eax = MEM32(esi + 0x4048);
    MEM32(eax + 4) = eax;
    eax = MEM32(esi + 0x4048);
    MEM32(eax) = eax;
    eax = MEM32(esi + 0x4048);
    MEM32(eax + 8) = eax;
    MEM32(esi + 0x404C) = ebp;
    ecx = MEM32(esp + 0x28);
    MEM8(esp + 0x18) = LO8(ebx);
    eax = MEM32(esp + 0x24);
    MEM32(esi + 0x4000) = ebp;
    MEM32(esi + 0x4008) = ebp;
    MEM32(esi + 0x4010) = eax;
    MEM32(esi + 0x4028) = ecx;
    MEM32(esi + 0x4040) = ebp;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002CE7C; /* jne: not equal / not zero */

loc_0002CE77: ;
    PUSH32(esp, 0x0002CE7Cu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002CE7C: ;
    edx = 0xC;
    ecx = eax;
    PUSH32(esp, 0x0002CE88u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0002CE88: ;
    edi = eax;
    MEM32(esp + 0x24) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM8(esp + 0x18) = 2;
    if (CMP_EQ(_fa, _fb)) goto loc_0002CEB8; /* je: equal / zero */

loc_0002CE97: ;
    PUSH32(esp, 0x0002CE9Cu); RECOMP_ABI_CALL(0x0001A530u, sub_0001A530); /* call 0x0001A530 */

loc_0002CE9C: ;
    MEM32(edi + 4) = eax;
    MEM8(eax + 0x11) = LO8(ebx);
    eax = MEM32(edi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(edi + 4);
    MEM32(eax) = eax;
    eax = MEM32(edi + 4);
    MEM32(eax + 8) = eax;
    MEM32(edi + 8) = ebp;
    goto loc_0002CEBA;

loc_0002CEB8: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002CEBA: ;
    MEM8(esp + 0x18) = LO8(ebx);
    MEM32(esi + 0x4020) = edi;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002CED2; /* jne: not equal / not zero */

loc_0002CECD: ;
    PUSH32(esp, 0x0002CED2u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002CED2: ;
    edx = 0xC;
    ecx = eax;
    PUSH32(esp, 0x0002CEDEu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0002CEDE: ;
    edi = eax;
    MEM32(esp + 0x24) = edi;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebp (32-bit) */
    MEM8(esp + 0x18) = 3;
    if (CMP_EQ(_fa, _fb)) goto loc_0002CF0E; /* je: equal / zero */

loc_0002CEED: ;
    PUSH32(esp, 0x0002CEF2u); RECOMP_ABI_CALL(0x0001A530u, sub_0001A530); /* call 0x0001A530 */

loc_0002CEF2: ;
    MEM32(edi + 4) = eax;
    MEM8(eax + 0x11) = LO8(ebx);
    eax = MEM32(edi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(edi + 4);
    MEM32(eax) = eax;
    eax = MEM32(edi + 4);
    MEM32(eax + 8) = eax;
    MEM32(edi + 8) = ebp;
    goto loc_0002CF10;

loc_0002CF0E: ;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002CF10: ;
    MEM8(esp + 0x18) = LO8(ebx);
    PUSH32(esp, 0x14);
    MEM32(esi + 0x4024) = edi;
    MEM32(esi + 0x4034) = ebx;
    MEM32(esi + 0x4030) = ebx;
    PUSH32(esp, 0x0002CF2Du); RECOMP_ABI_CALL(0x0028A380u, sub_0028A380); /* call 0x0028A380 */

loc_0002CF2D: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebp (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002CF3C; /* je: equal / zero */

loc_0002CF34: ;
    MEM32(eax) = 0x3233D8;
    goto loc_0002CF3E;

loc_0002CF3C: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002CF3E: ;
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    PUSH32(esp, 0x4000);
    PUSH32(esp, esi);
    MEM32(esi + 0x402C) = eax;
    edx = MEM32(eax);
    PUSH32(esp, 0x2D120);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx); PUSH32(esp, 0x0002CF56u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002CF54u); } /* indirect call */
    }

loc_0002CF56: ;
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
 * sub_0002CF70
 * Original: 0x0002CF70 - 0x0002CFA8 (56 bytes, 28 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CF70(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002CF70: ;
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
    PUSH32(esp, 0x0002CF87u); RECOMP_ABI_CALL(0x0002E120u, sub_0002E120); /* call 0x0002E120 */

loc_0002CF87: ;
    edi = MEM32(esi + 4);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002CF9D; /* je: equal / zero */

loc_0002CF90: ;
    PUSH32(esp, 0x0002CF95u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002CF95: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002CF9Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002CF9Au); } /* indirect call */
    }

loc_0002CF9D: ;
    POP32(esp, edi);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    POP32(esp, esi);
    POP32(esp, ebx);
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002CFB0
 * Original: 0x0002CFB0 - 0x0002D118 (360 bytes, 124 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002CFB0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002CFB0: ;
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x2972EA);
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    PUSH32(esp, ecx);
    PUSH32(esp, ebx);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x1C);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    eax = 1;
    MEM32(esp + 0x1C) = eax;
    ecx = MEM32(ebp + 0x402C);
    MEM32(ebp + 0x4040) = eax;
    eax = MEM32(ecx);
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0002CFE8u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002CFE5u); } /* indirect call */
    }

loc_0002CFE8: ;
    eax = MEM32(ebp + 0x402C);
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, eax);
    MEM32(ebp + 0x4034) = ebx;
    PUSH32(esp, 0x0002CFFCu); RECOMP_ABI_CALL(0x0028B370u, sub_0028B370); /* call 0x0028B370 */

loc_0002CFFC: ;
    esi = MEM32(ebp + 0x4020);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D043; /* je: equal / zero */

loc_0002D009: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002D01Au); RECOMP_ABI_CALL(0x00019CA0u, sub_00019CA0); /* call 0x00019CA0 */

loc_0002D01A: ;
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D02E; /* je: equal / zero */

loc_0002D021: ;
    PUSH32(esp, 0x0002D026u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002D026: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002D02Eu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D02Bu); } /* indirect call */
    }

loc_0002D02E: ;
    edi = esi;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    PUSH32(esp, 0x0002D03Bu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002D03B: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002D043u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D040u); } /* indirect call */
    }

loc_0002D043: ;
    esi = MEM32(ebp + 0x4024);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D087; /* je: equal / zero */

loc_0002D04D: ;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002D05Eu); RECOMP_ABI_CALL(0x00019CA0u, sub_00019CA0); /* call 0x00019CA0 */

loc_0002D05E: ;
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D072; /* je: equal / zero */

loc_0002D065: ;
    PUSH32(esp, 0x0002D06Au); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002D06A: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002D072u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D06Fu); } /* indirect call */
    }

loc_0002D072: ;
    edi = esi;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    PUSH32(esp, 0x0002D07Fu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002D07F: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, esi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002D087u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D084u); } /* indirect call */
    }

loc_0002D087: ;
    PUSH32(esp, 1);
    PUSH32(esp, ebp);
    PUSH32(esp, 0x0002D08Fu); RECOMP_ABI_CALL(0x0002DA50u, sub_0002DA50); /* call 0x0002DA50 */

loc_0002D08F: ;
    MEM8(esp + 0x1C) = LO8(ebx);
    eax = MEM32(ebp + 0x4048);
    ecx = MEM32(eax);
    esi = ebp + 0x4044;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002D0ADu); RECOMP_ABI_CALL(0x0002E120u, sub_0002E120); /* call 0x0002E120 */

loc_0002D0AD: ;
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D0C1; /* je: equal / zero */

loc_0002D0B4: ;
    PUSH32(esp, 0x0002D0B9u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002D0B9: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002D0C1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D0BEu); } /* indirect call */
    }

loc_0002D0C1: ;
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    MEM32(esp + 0x1C) = 0xFFFFFFFFu;
    eax = MEM32(ebp + 0x4018);
    ecx = MEM32(eax);
    esi = ebp + 0x4014;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    eax = esp + 0x2C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002D0E9u); RECOMP_ABI_CALL(0x00019CA0u, sub_00019CA0); /* call 0x00019CA0 */

loc_0002D0E9: ;
    edi = MEM32(esi + 4);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D0FD; /* je: equal / zero */

loc_0002D0F0: ;
    PUSH32(esp, 0x0002D0F5u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002D0F5: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002D0FDu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D0FAu); } /* indirect call */
    }

loc_0002D0FD: ;
    ecx = MEM32(esp + 0x14);
    POP32(esp, edi);
    MEM32(esi + 4) = ebx;
    MEM32(esi + 8) = ebx;
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002D120
 * Original: 0x0002D120 - 0x0002D12A (10 bytes, 3 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002D120: ;
    PUSH32(esp, esi);
    esi = MEM32(esp + 8);
    g_seh_ebp = ebp; sub_0002D130(); return; /* tail jmp 0x0002D130 */

}

/**
 * sub_0002D130
 * Original: 0x0002D130 - 0x0002D17B (75 bytes, 18 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D130(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002D130: ;
    ecx = MEM32(esi + 0x402C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0002D13Bu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D138u); } /* indirect call */
    }

loc_0002D13B: ;
    eax = MEM32(esi + 0x4040);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D150; /* je: equal / zero */

loc_0002D145: ;
    ecx = MEM32(esi + 0x402C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x10); PUSH32(esp, 0x0002D150u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D14Du); } /* indirect call */
    }

loc_0002D150: ;
    eax = MEM32(esi + 0x4008);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4000)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x4000) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D130; /* je: equal / zero */

loc_0002D15E: ;
    eax = esi;
    PUSH32(esp, 0x0002D165u); RECOMP_ABI_CALL(0x0002D180u, sub_0002D180); /* call 0x0002D180 */

loc_0002D165: ;
    eax = 0x5E59CC;
    MEM32(esi + 0x4030) = 1;
    PUSH32(esp, 0x0002D179u); RECOMP_ABI_CALL(0x000BF500u, sub_000BF500); /* call 0x000BF500 */

loc_0002D179: ;
    goto loc_0002D130;

}

/**
 * sub_0002D180
 * Original: 0x0002D180 - 0x0002D2F3 (371 bytes, 99 insns)
 * Folder: world (between: 0x00029240 and 0x0002D300)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002D180(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002D180: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    PUSH32(esp, ecx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(0x34A648);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(0x64D220) = 0;
    MEM32(0x64D224) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0002D1AC; /* jne: not equal / not zero */

loc_0002D1A7: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D1ACu); RECOMP_ABI_CALL(0x00011440u, sub_00011440); /* call 0x00011440 */

loc_0002D1AC: ;
    eax = 0x64DA00;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D1B6u); RECOMP_ABI_CALL(0x00011360u, sub_00011360); /* call 0x00011360 */

loc_0002D1B6: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D1C4; /* jne: not equal / not zero */

loc_0002D1BF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D1C4u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002D1C4: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0002D1CBu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D1C8u); } /* indirect call */
    }

loc_0002D1CB: ;
    eax = MEM32(esi + 0x4008);
    MEM32(esi + 0x4030) = 0;
    MEM32(esi + 0x4000) = eax;
    eax = MEM32(0x34A648);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D1EF; /* jne: not equal / not zero */

loc_0002D1EA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D1EFu); RECOMP_ABI_CALL(0x00011440u, sub_00011440); /* call 0x00011440 */

loc_0002D1EF: ;
    eax = 0x64DA00;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D1F9u); RECOMP_ABI_CALL(0x00011360u, sub_00011360); /* call 0x00011360 */

loc_0002D1F9: ;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D200u); RECOMP_ABI_CALL(0x0002D300u, sub_0002D300); /* call 0x0002D300 */

loc_0002D200: ;
    eax = MEM32(0x34A648);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D20E; /* jne: not equal / not zero */

loc_0002D209: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D20Eu); RECOMP_ABI_CALL(0x00011440u, sub_00011440); /* call 0x00011440 */

loc_0002D20E: ;
    eax = 0x64DA00;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D218u); RECOMP_ABI_CALL(0x00011360u, sub_00011360); /* call 0x00011360 */

loc_0002D218: ;
    eax = MEM32(0x34A648);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D226; /* jne: not equal / not zero */

loc_0002D221: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D226u); RECOMP_ABI_CALL(0x00011440u, sub_00011440); /* call 0x00011440 */

loc_0002D226: ;
    eax = 0x64DA00;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D230u); RECOMP_ABI_CALL(0x00011360u, sub_00011360); /* call 0x00011360 */

loc_0002D230: ;
    PUSH32(esp, 0);
    PUSH32(esp, esi);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D238u); RECOMP_ABI_CALL(0x0002DA50u, sub_0002DA50); /* call 0x0002DA50 */

loc_0002D238: ;
    eax = MEM32(0x34A648);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D246; /* jne: not equal / not zero */

loc_0002D241: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D246u); RECOMP_ABI_CALL(0x00011440u, sub_00011440); /* call 0x00011440 */

loc_0002D246: ;
    eax = 0x64DA00;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D250u); RECOMP_ABI_CALL(0x00011360u, sub_00011360); /* call 0x00011360 */

loc_0002D250: ;
    eax = MEM32(0x34A648);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D25E; /* jne: not equal / not zero */

loc_0002D259: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D25Eu); RECOMP_ABI_CALL(0x00011440u, sub_00011440); /* call 0x00011440 */

loc_0002D25E: ;
    eax = 0x64DA00;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D268u); RECOMP_ABI_CALL(0x00011360u, sub_00011360); /* call 0x00011360 */

loc_0002D268: ;
    eax = esi;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D26Fu); RECOMP_ABI_CALL(0x0002D780u, sub_0002D780); /* call 0x0002D780 */

loc_0002D26F: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 1 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D2EE; /* je: equal / zero */

loc_0002D274: ;
    eax = MEM32(0x34A648);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D282; /* jne: not equal / not zero */

loc_0002D27D: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D282u); RECOMP_ABI_CALL(0x00011440u, sub_00011440); /* call 0x00011440 */

loc_0002D282: ;
    eax = 0x64DA00;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D28Cu); RECOMP_ABI_CALL(0x00011360u, sub_00011360); /* call 0x00011360 */

loc_0002D28C: ;
    eax = MEM32(0x34A648);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D29A; /* jne: not equal / not zero */

loc_0002D295: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D29Au); RECOMP_ABI_CALL(0x00011440u, sub_00011440); /* call 0x00011440 */

loc_0002D29A: ;
    eax = 0x64DA00;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D2A4u); RECOMP_ABI_CALL(0x00011360u, sub_00011360); /* call 0x00011360 */

loc_0002D2A4: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D2A9u); RECOMP_ABI_CALL(0x0002D930u, sub_0002D930); /* call 0x0002D930 */

loc_0002D2A9: ;
    eax = MEM32(0x34A648);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D2B7; /* jne: not equal / not zero */

loc_0002D2B2: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D2B7u); RECOMP_ABI_CALL(0x00011440u, sub_00011440); /* call 0x00011440 */

loc_0002D2B7: ;
    eax = 0x64DA00;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D2C1u); RECOMP_ABI_CALL(0x00011360u, sub_00011360); /* call 0x00011360 */

loc_0002D2C1: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D2CF; /* jne: not equal / not zero */

loc_0002D2CA: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D2CFu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002D2CF: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0002D2D6u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002D2D3u); } /* indirect call */
    }

loc_0002D2D6: ;
    eax = MEM32(0x34A648);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D2E4; /* jne: not equal / not zero */

loc_0002D2DF: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D2E4u); RECOMP_ABI_CALL(0x00011440u, sub_00011440); /* call 0x00011440 */

loc_0002D2E4: ;
    eax = 0x64DA00;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002D2EEu); RECOMP_ABI_CALL(0x00011360u, sub_00011360); /* call 0x00011360 */

loc_0002D2EE: ;
    POP32(esp, esi);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

}

/**
 * sub_0002D300
 * Original: 0x0002D300 - 0x0002D775 (1141 bytes, 319 insns)
 * Folder: world (source: cLoader.cpp)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D300(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002D300: ;
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(esp) < (uint32_t)(0x24));
    esp = esp - 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, esi);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    esi = eax;
    eax = MEM32(esi + 0x4000);
    PUSH32(esp, edi);
    PUSH32(esp, ebx);
    MEM32(esp + 0x20) = ebx;
    MEM32(esp + 0x1C) = ebx;
    MEM32(esp + 0x24) = ebx;
    MEM8(0x64D3A0) = 1;
    PUSH32(esp, 0x0002D32Au); RECOMP_ABI_CALL(0x000BD7B0u, sub_000BD7B0); /* call 0x000BD7B0 */

loc_0002D32A: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0002D332u); RECOMP_ABI_CALL(0x0002DE80u, sub_0002DE80); /* call 0x0002DE80 */

loc_0002D332: ;
    edi = MEM32(esi + 0x4024);
    eax = MEM32(edi + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = edi;
    PUSH32(esp, 0x0002D346u); RECOMP_ABI_CALL(0x0001A3F0u, sub_0001A3F0); /* call 0x0001A3F0 */

loc_0002D346: ;
    eax = MEM32(edi + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(edi + 4);
    MEM32(edi + 8) = ebx;
    MEM32(eax) = eax;
    edi = MEM32(edi + 4);
    MEM32(edi + 8) = edi;
    edx = MEM32(esi + 0x4024);
    eax = MEM32(esi + 0x4000);
    PUSH32(esp, 1);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002D36Fu); RECOMP_ABI_CALL(0x00029240u, sub_00029240); /* call 0x00029240 */

loc_0002D36F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0xC)) >> 32) & 1);
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esi + 0x400C) = eax;
    PUSH32(esp, 0x0002D37Du); RECOMP_ABI_CALL(0x000BD960u, sub_000BD960); /* call 0x000BD960 */

loc_0002D37D: ;
    ecx = MEM32(esi + 0x4024);
    edx = MEM32(ecx + 4);
    ecx = MEM32(esi + 0x4018);
    eax = MEM32(esi + 0x4048);
    edi = MEM32(eax);
    ebp = esi + 0x4014;
    MEM8(0x64D3A0) = LO8(ebx);
    ebx = MEM32(edx);
    edx = MEM32(ecx + 4);
    PUSH32(esp, edx);
    ecx = ebp;
    MEM32(esp + 0x18) = ebx;
    MEM32(esp + 0x14) = edi;
    PUSH32(esp, 0x0002D3B5u); RECOMP_ABI_CALL(0x0001A3F0u, sub_0001A3F0); /* call 0x0001A3F0 */

loc_0002D3B5: ;
    eax = MEM32(ebp + 4);
    MEM32(eax + 4) = eax;
    eax = MEM32(ebp + 4);
    MEM32(ebp + 8) = 0;
    MEM32(eax) = eax;
    eax = MEM32(ebp + 4);
    MEM32(eax + 8) = eax;
    eax = MEM32(esi + 0x4024);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(eax + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D654; /* je: equal / zero */

loc_0002D3DC: ;
    /* nop */

loc_0002D3E0: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4048)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x4048) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D654; /* je: equal / zero */

loc_0002D3EC: ;
    eax = MEM32(ebx + 0xC);
    ecx = MEM32(edi + 0xC);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(edi) + (uint64_t)(0xC)) >> 32) & 1);
    edi = edi + 0xC;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xC)) >> 32) & 1);
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002D424; /* jne: not equal / not zero */

loc_0002D3FC: ;
    edi = MEM32(esp + 0x10);
    eax = MEM32(edi + 0x10);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0002D40B; /* je: equal / zero */

loc_0002D408: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa != 0)) goto loc_0002D412; /* jne: not equal / not zero */

loc_0002D40B: ;
    MEM32(edi + 0x10) = 1;

loc_0002D412: ;
    eax = 1;
    MEM32(esp + 0x1C) = eax;
    MEM32(esp + 0x18) = eax;
    goto loc_0002D4FF;

loc_0002D424: ;
    if (CMP_BE(_fa, _fb)) goto loc_0002D5E3; /* jbe: below or equal (unsigned <=) */

loc_0002D42A: ;
    ecx = MEM32(esp + 0x10);
    eax = MEM32(ecx + 0x10);
    _fb = (uint32_t)(0) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(0));
    eax = eax - 0;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa == 0)) goto loc_0002D5BD; /* je: equal / zero */

loc_0002D43A: ;
    eax--;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x7FFFFFFFu); /* dec result/SF/OF; CF unchanged */
    if ((_fa == 0)) goto loc_0002D525; /* je: equal / zero */

loc_0002D441: ;
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    _cf = (int)((uint32_t)(eax) < (uint32_t)(2));
    eax = eax - 2;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    if ((_fa != 0)) goto loc_0002D4EF; /* jne: not equal / not zero */

loc_0002D44A: ;
    PUSH32(esp, 0x323420);
    PUSH32(esp, 0x32316C);
    PUSH32(esp, 0x128);
    PUSH32(esp, 0x323448);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0002D468u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0002D468: ;
    edi = MEM32(edi);
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    eax = 0x493610;
    PUSH32(esp, 0x0002D478u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002D478: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D48E; /* je: equal / zero */

loc_0002D485: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D498; /* je: equal / zero */

loc_0002D48E: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D49F; /* je: equal / zero */

loc_0002D498: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002D4A1; /* je: equal / zero */

loc_0002D49F: ;
    ecx = eax;

loc_0002D4A1: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D4EF; /* je: equal / zero */

loc_0002D4A6: ;
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
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x47EC30)) >> 32) & 1);
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002D4BEu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002D4BE: ;
    ecx = MEM32(esi + 0x4028);
    edi = eax;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002D4CFu); RECOMP_ABI_CALL(0x000299E0u, sub_000299E0); /* call 0x000299E0 */

loc_0002D4CF: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = edi;
    PUSH32(esp, 0x0002D4D9u); RECOMP_ABI_CALL(0x00013330u, sub_00013330); /* call 0x00013330 */

loc_0002D4D9: ;
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002D4DFu); RECOMP_ABI_CALL(0x000BDB60u, sub_000BDB60); /* call 0x000BDB60 */

loc_0002D4DF: ;
    eax = 1;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM32(esp + 0x18) = eax;
    MEM32(esp + 0x20) = eax;

loc_0002D4EF: ;
    eax = MEM32(esp + 0x1C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D5FC; /* je: equal / zero */

loc_0002D4FB: ;
    edi = MEM32(esp + 0x10);

loc_0002D4FF: ;
    edx = MEM32(esp + 0x14);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4018)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(esi + 0x4018) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D600; /* je: equal / zero */

loc_0002D50F: ;
    edx = esp + 0x14;
    MEM32(esp + 0x1C) = 0;
    PUSH32(esp, 0x0002D520u); RECOMP_ABI_CALL(0x0001A390u, sub_0001A390); /* call 0x0001A390 */

loc_0002D520: ;
    goto loc_0002D600;

loc_0002D525: ;
    eax = MEM32(esi + 0x4034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D54F; /* je: equal / zero */

loc_0002D52F: ;
    ecx = MEM32(esi + 0x4020);
    eax = MEM32(ecx + 4);
    MEM32(esp + 0x18) = eax;
    ebx = edi;
    eax = esp + 0x24;
    PUSH32(esp, 0x0002D547u); RECOMP_ABI_CALL(0x0002E050u, sub_0002E050); /* call 0x0002E050 */

loc_0002D547: ;
    ecx = MEM32(esp + 0x18);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ecx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002D5B0; /* jne: not equal / not zero */

loc_0002D54F: ;
    edx = MEM32(esp + 0x10);
    MEM32(edx + 0x10) = 3;
    edi = MEM32(edi);
    PUSH32(esp, edi);
    eax = 0x493610;
    PUSH32(esp, 0x0002D567u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002D567: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D57D; /* je: equal / zero */

loc_0002D574: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D587; /* je: equal / zero */

loc_0002D57D: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D58E; /* je: equal / zero */

loc_0002D587: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002D590; /* je: equal / zero */

loc_0002D58E: ;
    ecx = eax;

loc_0002D590: ;
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
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x47EC30)) >> 32) & 1);
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002D5A8u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002D5A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0002D5B0u); RECOMP_ABI_CALL(0x00021ED0u, sub_00021ED0); /* call 0x00021ED0 */

loc_0002D5B0: ;
    MEM32(esp + 0x18) = 1;
    goto loc_0002D4EF;

loc_0002D5BD: ;
    PUSH32(esp, 0x323484);
    PUSH32(esp, 0x32316C);
    PUSH32(esp, 0x111);
    PUSH32(esp, 0x323448);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0002D5DBu); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0002D5DB: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x14)) >> 32) & 1);
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    goto loc_0002D4EF;

loc_0002D5E3: ;
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    eax = ebp;
    MEM32(esp + 0x20) = 1;
    PUSH32(esp, 0x0002D5F7u); RECOMP_ABI_CALL(0x0002A6F0u, sub_0002A6F0); /* call 0x0002A6F0 */

loc_0002D5F7: ;
    goto loc_0002D4FB;

loc_0002D5FC: ;
    edi = MEM32(esp + 0x10);

loc_0002D600: ;
    eax = MEM32(esp + 0x18);
    _cf = 0; /* xor clears CF */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D63B; /* je: equal / zero */

loc_0002D60A: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4048)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x4048) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D63B; /* je: equal / zero */

loc_0002D612: ;
    edx = esp + 0x10;
    MEM32(esp + 0x18) = ebx;
    PUSH32(esp, 0x0002D61Fu); RECOMP_ABI_CALL(0x0027F560u, sub_0027F560); /* call 0x0027F560 */

loc_0002D61F: ;
    _fa = (uint32_t)(MEM32(esp + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(esp + 0x20), ebx (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D63B; /* je: equal / zero */

loc_0002D625: ;
    PUSH32(esp, edi);
    eax = esp + 0x24;
    PUSH32(esp, eax);
    ecx = esi + 0x4044;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002D637u); RECOMP_ABI_CALL(0x0027A6D0u, sub_0027A6D0); /* call 0x0027A6D0 */

loc_0002D637: ;
    MEM32(esp + 0x20) = ebx;

loc_0002D63B: ;
    edx = MEM32(esi + 0x4024);
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    edi = MEM32(esp + 0x10);
    ebx = eax;
    if (CMP_NE(_fa, _fb)) goto loc_0002D3E0; /* jne: not equal / not zero */

loc_0002D654: ;
    ecx = MEM32(esi + 0x4024);
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, MEM32(ecx + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D68C; /* je: equal / zero */

loc_0002D65F: ;
    goto loc_0002D665;

loc_0002D661: ;
    ebx = MEM32(esp + 0x14);

loc_0002D665: ;
    edx = esp + 0x28;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ebx) + (uint64_t)(0xC)) >> 32) & 1);
    ebx = ebx + 0xC;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, edx);
    eax = ebp;
    PUSH32(esp, 0x0002D674u); RECOMP_ABI_CALL(0x0002A6F0u, sub_0002A6F0); /* call 0x0002A6F0 */

loc_0002D674: ;
    edx = esp + 0x14;
    PUSH32(esp, 0x0002D67Du); RECOMP_ABI_CALL(0x0001A390u, sub_0001A390); /* call 0x0001A390 */

loc_0002D67D: ;
    eax = MEM32(esi + 0x4024);
    ecx = MEM32(esp + 0x14);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, MEM32(eax + 4) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002D661; /* jne: not equal / not zero */

loc_0002D68C: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4048)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x4048) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D76D; /* je: equal / zero */

loc_0002D698: ;
    goto loc_0002D6A0;

loc_0002D69A: ;
    edi = MEM32(esp + 0x10);
    edi = edi;

loc_0002D6A0: ;
    eax = MEM32(esi + 0x4034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D6C7; /* je: equal / zero */

loc_0002D6AA: ;
    ecx = MEM32(esi + 0x4020);
    ebp = MEM32(ecx + 4);
    ebx = edi + 0xC;
    eax = esp + 0x24;
    PUSH32(esp, 0x0002D6BFu); RECOMP_ABI_CALL(0x0002E050u, sub_0002E050); /* call 0x0002E050 */

loc_0002D6BF: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebp (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002D754; /* jne: not equal / not zero */

loc_0002D6C7: ;
    MEM32(edi + 0x10) = 3;
    edi = MEM32(edi + 0xC);
    PUSH32(esp, edi);
    eax = 0x493610;
    PUSH32(esp, 0x0002D6DCu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002D6DC: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D6F2; /* je: equal / zero */

loc_0002D6E9: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D6FC; /* je: equal / zero */

loc_0002D6F2: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D703; /* je: equal / zero */

loc_0002D6FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    _cf = (int)(_fa < _fb);
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002D705; /* je: equal / zero */

loc_0002D703: ;
    ecx = eax;

loc_0002D705: ;
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
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(eax) + (uint64_t)(0x47EC30)) >> 32) & 1);
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002D71Du); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002D71D: ;
    ecx = MEM32(eax + 0x20);
    edi = MEM32(eax + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(4)) >> 32) & 1);
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_AE(_fa, _fb)) goto loc_0002D754; /* jae: above or equal (unsigned >=) */

loc_0002D72A: ;
    /* nop */

loc_0002D730: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    _cf = 0; /* nothing borrows from zero */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D74D; /* je: equal / zero */

loc_0002D736: ;
    edx = eax;
    _cf = 0; /* logical op clears CF */
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_EQ(_fa, _fb)) goto loc_0002D74D; /* je: equal / zero */

loc_0002D740: ;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 1 (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002D74D; /* jne: not equal / not zero */

loc_0002D746: ;
    _cf = 0; /* logical op clears CF */
    MEM32(eax + 4) = MEM32(eax + 4) & 0xFFFBFFFFu;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0002D74D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(ecx) + (uint64_t)(8)) >> 32) & 1);
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_B(_fa, _fb)) goto loc_0002D730; /* jb: below (unsigned <) */

loc_0002D754: ;
    edx = esp + 0x10;
    PUSH32(esp, 0x0002D75Du); RECOMP_ABI_CALL(0x0027F560u, sub_0027F560); /* call 0x0027F560 */

loc_0002D75D: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4048)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x4048) (32-bit) */
    _cf = (int)(_fa < _fb);
    if (CMP_NE(_fa, _fb)) goto loc_0002D69A; /* jne: not equal / not zero */

loc_0002D76D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    _cf = (int)((((uint64_t)(esp) + (uint64_t)(0x24)) >> 32) & 1);
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002D6BF
 * Original: 0x0002D6BF - 0x0002D775 (182 bytes, 58 insns)
 * Folder: world (between: 0x0002D300 and 0x0002EA40)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D6BF(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002D6BF: ;
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(ebp) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), ebp (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D754; /* jne: not equal / not zero */

loc_0002D6C7: ;
    MEM32(edi + 0x10) = 3;
    edi = MEM32(edi + 0xC);
    PUSH32(esp, edi);
    eax = 0x493610;
    PUSH32(esp, 0x0002D6DCu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002D6DC: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D6F2; /* je: equal / zero */

loc_0002D6E9: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D6FC; /* je: equal / zero */

loc_0002D6F2: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D703; /* je: equal / zero */

loc_0002D6FC: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002D705; /* je: equal / zero */

loc_0002D703: ;
    ecx = eax;

loc_0002D705: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002D71Du); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002D71D: ;
    ecx = MEM32(eax + 0x20);
    edi = MEM32(eax + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002D754; /* jae: above or equal (unsigned >=) */

loc_0002D72A: ;
    /* nop */

loc_0002D730: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D74D; /* je: equal / zero */

loc_0002D736: ;
    edx = eax;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D74D; /* je: equal / zero */

loc_0002D740: ;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D74D; /* jne: not equal / not zero */

loc_0002D746: ;
    MEM32(eax + 4) = MEM32(eax + 4) & 0xFFFBFFFFu;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0002D74D: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002D730; /* jb: below (unsigned <) */

loc_0002D754: ;
    edx = esp + 0x10;
    PUSH32(esp, 0x0002D75Du); RECOMP_ABI_CALL(0x0027F560u, sub_0027F560); /* call 0x0027F560 */

loc_0002D75D: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4048)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x4048) (32-bit) */
    if (CMP_NE(_fa, _fb)) { g_seh_ebp = ebp; sub_0002D69A(); return; } /* jne: not equal / not zero */

loc_0002D76D: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x24) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x24;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002D780
 * Original: 0x0002D780 - 0x0002D929 (425 bytes, 131 insns)
 * Folder: world (between: 0x0002D300 and 0x0002EA40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D780(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002D780: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    ecx = MEM32(esi + 0x4018);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    PUSH32(esp, edi);
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0002D858; /* je: equal / zero */

loc_0002D79C: ;
    /* nop */

loc_0002D7A0: ;
    ebx = MEM32(eax + 0xC);
    edi = eax + 0xC;
    PUSH32(esp, ebx);
    eax = 0x493610;
    PUSH32(esp, 0x0002D7B1u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002D7B1: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D7C7; /* je: equal / zero */

loc_0002D7BE: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D7D1; /* je: equal / zero */

loc_0002D7C7: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D7D8; /* je: equal / zero */

loc_0002D7D1: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002D7DA; /* je: equal / zero */

loc_0002D7D8: ;
    ecx = eax;

loc_0002D7DA: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D83F; /* je: equal / zero */

loc_0002D7DF: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002D7F7u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002D7F7: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D83F; /* jne: not equal / not zero */

loc_0002D7FF: ;
    eax = MEM32(edi);
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002D808u); RECOMP_ABI_CALL(0x000BD7B0u, sub_000BD7B0); /* call 0x000BD7B0 */

loc_0002D808: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0002D810u); RECOMP_ABI_CALL(0x0002DE80u, sub_0002DE80); /* call 0x0002DE80 */

loc_0002D810: ;
    eax = MEM32(edi);
    PUSH32(esp, 0x0002D817u); RECOMP_ABI_CALL(0x00029510u, sub_00029510); /* call 0x00029510 */

loc_0002D817: ;
    ecx = MEM32(0x64D29C);
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002D824u); RECOMP_ABI_CALL(0x00088570u, sub_00088570); /* call 0x00088570 */

loc_0002D824: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0002D82Cu); RECOMP_ABI_CALL(0x000BD960u, sub_000BD960); /* call 0x000BD960 */

loc_0002D82C: ;
    ecx = esi + 0x4044;
    eax = edi;
    PUSH32(esp, 0x0002D839u); RECOMP_ABI_CALL(0x0002E0B0u, sub_0002E0B0); /* call 0x0002E0B0 */

loc_0002D839: ;
    MEM32(eax) = 0;

loc_0002D83F: ;
    edx = esp + 0x10;
    PUSH32(esp, 0x0002D848u); RECOMP_ABI_CALL(0x0001A390u, sub_0001A390); /* call 0x0001A390 */

loc_0002D848: ;
    eax = MEM32(esp + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4018)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x4018) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D7A0; /* jne: not equal / not zero */

loc_0002D858: ;
    esi = MEM32(esi + 0x400C);
    PUSH32(esp, esi);
    eax = 0x493610;
    PUSH32(esp, 0x0002D869u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002D869: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D87F; /* je: equal / zero */

loc_0002D876: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D889; /* je: equal / zero */

loc_0002D87F: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D890; /* je: equal / zero */

loc_0002D889: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002D892; /* je: equal / zero */

loc_0002D890: ;
    ecx = eax;

loc_0002D892: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D920; /* je: equal / zero */

loc_0002D89B: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002D8B3u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002D8B3: ;
    esi = MEM32(eax + 0x5D8);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0xFFFFFFFFu (32-bit) */
    MEM32(0x33A3BC) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002D920; /* je: equal / zero */

loc_0002D8C7: ;
    PUSH32(esp, 0x0002D8CCu); RECOMP_ABI_CALL(0x00056380u, sub_00056380); /* call 0x00056380 */

loc_0002D8CC: ;
    eax = MEM32(0x64D33C);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D919; /* je: equal / zero */

loc_0002D8D5: ;
    eax = MEM32(0x34AC10);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx = esi;
    eax = eax << 0x14;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx & 0xF0000;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | ecx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    edx = esi;
    edx = edx & 0xFFFF;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = eax | edx;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0);
    eax = eax | 0xFD000000u;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */
    PUSH32(esp, 0x0002D901u); RECOMP_ABI_CALL(0x000BD7B0u, sub_000BD7B0); /* call 0x000BD7B0 */

loc_0002D901: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax = esi;
    PUSH32(esp, 0x0002D90Bu); RECOMP_ABI_CALL(0x00056210u, sub_00056210); /* call 0x00056210 */

loc_0002D90B: ;
    PUSH32(esp, 0x0002D910u); RECOMP_ABI_CALL(0x000BD960u, sub_000BD960); /* call 0x000BD960 */

loc_0002D910: ;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002D919: ;
    eax = esi;
    PUSH32(esp, 0x0002D920u); RECOMP_ABI_CALL(0x00056210u, sub_00056210); /* call 0x00056210 */

loc_0002D920: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    POP32(esp, ebx);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002D930
 * Original: 0x0002D930 - 0x0002DA43 (275 bytes, 78 insns)
 * Folder: world (between: 0x0002D300 and 0x0002EA40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002D930(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002D930: ;
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esi + 0x4048);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0xC) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002DA02; /* je: equal / zero */

loc_0002D94A: ;
    /* nop */

loc_0002D950: ;
    eax = MEM32(edi + 0x10);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D9E9; /* jne: not equal / not zero */

loc_0002D95B: ;
    ebx = MEM32(edi + 0xC);
    ebp = edi + 0xC;
    PUSH32(esp, ebx);
    eax = 0x493610;
    PUSH32(esp, 0x0002D96Cu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002D96C: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D982; /* je: equal / zero */

loc_0002D979: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D98C; /* je: equal / zero */

loc_0002D982: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D993; /* je: equal / zero */

loc_0002D98C: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = ebx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002D995; /* je: equal / zero */

loc_0002D993: ;
    ecx = eax;

loc_0002D995: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002D9E9; /* je: equal / zero */

loc_0002D99A: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002D9B2u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002D9B2: ;
    ecx = MEM32(esi + 0x4028);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    ebx = eax;
    PUSH32(esp, 0x0002D9C3u); RECOMP_ABI_CALL(0x000295F0u, sub_000295F0); /* call 0x000295F0 */

loc_0002D9C3: ;
    MEM32(edi + 0x10) = 1;
    eax = MEM32(esi + 0x4034);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D9E9; /* jne: not equal / not zero */

loc_0002D9D7: ;
    eax = MEM32(esi + 0x4020);
    edx = esp + 0x10;
    PUSH32(esp, edx);
    ebx = ebp;
    PUSH32(esp, 0x0002D9E9u); RECOMP_ABI_CALL(0x0002A6F0u, sub_0002A6F0); /* call 0x0002A6F0 */

loc_0002D9E9: ;
    edx = esp + 0xC;
    PUSH32(esp, 0x0002D9F2u); RECOMP_ABI_CALL(0x0027F560u, sub_0027F560); /* call 0x0027F560 */

loc_0002D9F2: ;
    edi = MEM32(esp + 0xC);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4048)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x4048) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002D950; /* jne: not equal / not zero */

loc_0002DA02: ;
    eax = MEM32(esi + 0x4000);
    MEM32(esi + 0x4004) = eax;
    eax = MEM32(esi + 0x4028);
    PUSH32(esp, 0x0002DA19u); RECOMP_ABI_CALL(0x00064C30u, sub_00064C30); /* call 0x00064C30 */

loc_0002DA19: ;
    PUSH32(esp, 0x0002DA1Eu); RECOMP_ABI_CALL(0x000F84E0u, sub_000F84E0); /* call 0x000F84E0 */

loc_0002DA1E: ;
    ecx = MEM32(esi + 0x4028);
    eax = 1;
    MEM32(ecx + 0xC) = eax;
    MEM32(0x64D1F4) = eax;
    eax = MEM32(0x64D1F8);
    POP32(esp, edi);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    POP32(esp, ebp);
    MEM32(0x64D1F8) = eax;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002DA50
 * Original: 0x0002DA50 - 0x0002DB77 (295 bytes, 95 insns)
 * Folder: world (between: 0x0002D300 and 0x0002EA40)
 * CC: cdecl, 2 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DA50(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002DA50: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(esp + 0x10);
    eax = MEM32(eax + 0x4048);
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    ebp = 0; /* xor self */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    MEM32(esp + 0x10) = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002DB6E; /* je: equal / zero */

loc_0002DA72: ;
    PUSH32(esp, esi);

loc_0002DA73: ;
    _fa = (uint32_t)(MEM32(edi + 0x10)) & 0xFFFFFFFFu; _fb = (uint32_t)(3) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(edi + 0x10), 3 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DA85; /* je: equal / zero */

loc_0002DA79: ;
    eax = MEM32(esp + 0x24);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DB35; /* je: equal / zero */

loc_0002DA85: ;
    esi = MEM32(edi + 0xC);
    PUSH32(esp, esi);
    eax = 0x493610;
    PUSH32(esp, 0x0002DA93u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002DA93: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DAA9; /* je: equal / zero */

loc_0002DAA0: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DAB3; /* je: equal / zero */

loc_0002DAA9: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DABA; /* je: equal / zero */

loc_0002DAB3: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002DABC; /* je: equal / zero */

loc_0002DABA: ;
    ecx = eax;

loc_0002DABC: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DB35; /* je: equal / zero */

loc_0002DAC1: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002DAD9u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002DAD9: ;
    esi = eax;
    eax = MEM32(esp + 0x24);
    ecx = MEM32(eax + 0x4028);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002DAEBu); RECOMP_ABI_CALL(0x000299E0u, sub_000299E0); /* call 0x000299E0 */

loc_0002DAEB: ;
    eax = esi;
    PUSH32(esp, 0x0002DAF2u); RECOMP_ABI_CALL(0x00013330u, sub_00013330); /* call 0x00013330 */

loc_0002DAF2: ;
    ecx = esp + 0x18;
    PUSH32(esp, ecx);
    ebx = 0x47EC20;
    eax = esi;
    PUSH32(esp, 0x0002DB03u); RECOMP_ABI_CALL(0x000C1120u, sub_000C1120); /* call 0x000C1120 */

loc_0002DB03: ;
    eax = MEM32(esp + 0x1C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DB2E; /* je: equal / zero */

loc_0002DB0E: ;
    ecx = eax;
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ebx = ZX8(LO8(ecx));
    edx = esp + 0x10;
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x47EC30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0002DB2Bu); RECOMP_ABI_CALL(0x000C1120u, sub_000C1120); /* call 0x000C1120 */

loc_0002DB2B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002DB2E: ;
    ebx = 1;
    ebp = edi;

loc_0002DB35: ;
    edx = esp + 0x14;
    PUSH32(esp, 0x0002DB3Eu); RECOMP_ABI_CALL(0x0027F560u, sub_0027F560); /* call 0x0027F560 */

loc_0002DB3E: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DB59; /* je: equal / zero */

loc_0002DB42: ;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, ebp);
    edx = esp + 0x1C;
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x4044) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x4044;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002DB57u); RECOMP_ABI_CALL(0x0027A6D0u, sub_0027A6D0); /* call 0x0027A6D0 */

loc_0002DB57: ;
    ebx = 0; /* xor self */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */

loc_0002DB59: ;
    ecx = MEM32(esp + 0x20);
    edi = MEM32(esp + 0x14);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 0x4048)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(ecx + 0x4048) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DA73; /* jne: not equal / not zero */

loc_0002DB6D: ;
    POP32(esp, esi);

loc_0002DB6E: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 12; return; /* ret 8 */

}

/**
 * sub_0002DB80
 * Original: 0x0002DB80 - 0x0002DE1C (668 bytes, 192 insns)
 * Folder: world (between: 0x0002D300 and 0x0002EA40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DB80(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002DB80: ;
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    eax = MEM32(0x336F0C);
    PUSH32(esp, ebx);
    MEM32(esp + 0x20) = eax;
    eax = MEM32(esi + 0x4030);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    edi = ecx;
    if (CMP_NE(_fa, _fb)) goto loc_0002DBD4; /* jne: not equal / not zero */

loc_0002DB9B: ;
    goto loc_0002DBA0;

    /* nop */

loc_0002DBA0: ;
    ebx = MEM32(0x64D940);
    MEM32(0x64D350) = 1;
    MEM32(0x33A37C) = 0;
    PUSH32(esp, 0x0002DBBFu); RECOMP_ABI_CALL(0x00276080u, sub_00276080); /* call 0x00276080 */

loc_0002DBBF: ;
    ecx = MEM32(esi + 0x402C);
    eax = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 8); PUSH32(esp, 0x0002DBCAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002DBC7u); } /* indirect call */
    }

loc_0002DBCA: ;
    eax = MEM32(esi + 0x4030);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DBA0; /* je: equal / zero */

loc_0002DBD4: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4004)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, MEM32(esi + 0x4004) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DC10; /* je: equal / zero */

loc_0002DBDC: ;
    MEM32(0x64D350) = 1;
    MEM32(esi + 0x4008) = edi;
    /* nop */

loc_0002DBF0: ;
    ebx = MEM32(0x64D940);
    PUSH32(esp, 0x0002DBFBu); RECOMP_ABI_CALL(0x00276080u, sub_00276080); /* call 0x00276080 */

loc_0002DBFB: ;
    ecx = MEM32(esi + 0x402C);
    edx = MEM32(ecx);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002DC06u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002DC03u); } /* indirect call */
    }

loc_0002DC06: ;
    eax = MEM32(esi + 0x4030);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DBF0; /* je: equal / zero */

loc_0002DC10: ;
    _fa = (uint32_t)(MEM8(0x64CFB8)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x64CFB8), 1 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DC87; /* jne: not equal / not zero */

loc_0002DC19: ;
    SET_LO8(eax, MEM8(0x64CFB9));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DC87; /* jne: not equal / not zero */

loc_0002DC22: ;
    eax = MEM32(0x33A378);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esi + 0x4004)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(esi + 0x4004) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DC87; /* je: equal / zero */

loc_0002DC2F: ;
    PUSH32(esp, eax);
    eax = esp + 0x14;
    PUSH32(esp, 0x323170);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002DC3Fu); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_0002DC3F: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x10;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002DC4Eu); RECOMP_ABI_CALL(0x000C79E0u, sub_000C79E0); /* call 0x000C79E0 */

loc_0002DC4E: ;
    edx = MEM32(esi + 0x4004);
    PUSH32(esp, edx);
    eax = esp + 0x28;
    PUSH32(esp, 0x323170);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002DC64u); RECOMP_ABI_CALL(0x0028A4FDu, sub_0028A4FD); /* call 0x0028A4FD */

loc_0002DC64: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    ecx = esp + 0x1C;
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002DC73u); RECOMP_ABI_CALL(0x000C7980u, sub_000C7980); /* call 0x000C7980 */

loc_0002DC73: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0002DC7Bu); RECOMP_ABI_CALL(0x000C7A80u, sub_000C7A80); /* call 0x000C7A80 */

loc_0002DC7B: ;
    edx = MEM32(esi + 0x4004);
    MEM32(0x33A378) = edx;

loc_0002DC87: ;
    ecx = MEM32(esi + 0x4020);
    eax = MEM32(esi + 0x4024);
    ebx = MEM32(0x64D33C);
    MEM32(esi + 0x4024) = ecx;
    MEM32(esi + 0x4020) = eax;
    edx = ecx;
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(0x33A37C) = 1;
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0002DD5C; /* je: equal / zero */

loc_0002DCC2: ;
    ebp = 0xFFFBFFFFu;

loc_0002DCC7: ;
    edi = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    eax = 0x493610;
    PUSH32(esp, 0x0002DCD5u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002DCD5: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DCE5; /* je: equal / zero */

loc_0002DCDC: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DCEF; /* je: equal / zero */

loc_0002DCE5: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DCF6; /* je: equal / zero */

loc_0002DCEF: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002DCF8; /* je: equal / zero */

loc_0002DCF6: ;
    ecx = eax;

loc_0002DCF8: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002DD10u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002DD10: ;
    ecx = MEM32(eax + 0x20);
    edi = MEM32(eax + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002DD40; /* jae: above or equal (unsigned >=) */

loc_0002DD1D: ;
    /* nop */

loc_0002DD20: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DD39; /* je: equal / zero */

loc_0002DD26: ;
    edx = eax;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DD39; /* je: equal / zero */

loc_0002DD30: ;
    _fa = (uint32_t)(MEM32(eax + 0x20)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0x20), 1 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DD39; /* jne: not equal / not zero */

loc_0002DD36: ;
    MEM32(eax + 4) = MEM32(eax + 4) & ebp;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */

loc_0002DD39: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002DD20; /* jb: below (unsigned <) */

loc_0002DD40: ;
    edx = esp + 0xC;
    PUSH32(esp, 0x0002DD49u); RECOMP_ABI_CALL(0x0001A390u, sub_0001A390); /* call 0x0001A390 */

loc_0002DD49: ;
    ecx = MEM32(esi + 0x4024);
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DCC7; /* jne: not equal / not zero */

loc_0002DD5C: ;
    edx = MEM32(esi + 0x4020);
    ecx = MEM32(edx + 4);
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0xC) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0002DE0C; /* je: equal / zero */

loc_0002DD73: ;
    ebp = 0x40000;
    goto loc_0002DD80;

    /* nop */

loc_0002DD80: ;
    edi = MEM32(eax + 0xC);
    PUSH32(esp, edi);
    eax = 0x493610;
    PUSH32(esp, 0x0002DD8Eu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002DD8E: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DD9E; /* je: equal / zero */

loc_0002DD95: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DDA8; /* je: equal / zero */

loc_0002DD9E: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DDAF; /* je: equal / zero */

loc_0002DDA8: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = edi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002DDB1; /* je: equal / zero */

loc_0002DDAF: ;
    ecx = eax;

loc_0002DDB1: ;
    eax = ecx;
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(eax, LO8(eax) + LO8(ecx));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(eax));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002DDC9u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002DDC9: ;
    ecx = MEM32(eax + 0x20);
    edi = MEM32(eax + 0x14);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002DDF0; /* jae: above or equal (unsigned >=) */

loc_0002DDD6: ;
    eax = MEM32(ecx);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DDE9; /* je: equal / zero */

loc_0002DDDC: ;
    edx = eax;
    SET_LO8(edx, LO8(edx) & 3);
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* and result */
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(1) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 1 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DDE9; /* je: equal / zero */

loc_0002DDE6: ;
    MEM32(eax + 4) = MEM32(eax + 4) | ebp;
    _fa = (uint32_t)(MEM32(eax + 4)) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* or result */

loc_0002DDE9: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002DDD6; /* jb: below (unsigned <) */

loc_0002DDF0: ;
    edx = esp + 0xC;
    PUSH32(esp, 0x0002DDF9u); RECOMP_ABI_CALL(0x0001A390u, sub_0001A390); /* call 0x0001A390 */

loc_0002DDF9: ;
    ecx = MEM32(esi + 0x4020);
    eax = MEM32(esp + 0xC);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx + 4) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DD80; /* jne: not equal / not zero */

loc_0002DE0C: ;
    ecx = MEM32(esp + 0x28);
    PUSH32(esp, 0x0002DE15u); RECOMP_ABI_CALL(0x00295F59u, sub_00295F59); /* call 0x00295F59 */

loc_0002DE15: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x20) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x20;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002DE20
 * Original: 0x0002DE20 - 0x0002DE7B (91 bytes, 29 insns)
 * Folder: world (between: 0x0002D300 and 0x0002EA40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DE20(void)
{

loc_0002DE20: ;
    PUSH32(esp, esi);
    esi = MEM32(edi + 0x4020);
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, ecx);
    ecx = esi;
    PUSH32(esp, 0x0002DE35u); RECOMP_ABI_CALL(0x0001A3F0u, sub_0001A3F0); /* call 0x0001A3F0 */

loc_0002DE35: ;
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
    PUSH32(esp, 0x0002DE61u); RECOMP_ABI_CALL(0x0001A3F0u, sub_0001A3F0); /* call 0x0001A3F0 */

loc_0002DE61: ;
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
 * sub_0002DE80
 * Original: 0x0002DE80 - 0x0002DEE3 (99 bytes, 30 insns)
 * Folder: world (between: 0x0002D300 and 0x0002EA40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DE80(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002DE80: ;
    eax = MEM32(esi + 0x4034);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DEE2; /* je: equal / zero */

loc_0002DE8A: ;
    eax = MEM32(esi + 0x4010);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 1 (32-bit) */
    if (CMP_GE(_fas, _fbs)) goto loc_0002DEE2; /* jge: greater or equal (signed >=) */

loc_0002DE95: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DEA3; /* jne: not equal / not zero */

loc_0002DE9E: ;
    PUSH32(esp, 0x0002DEA3u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002DEA3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0002DEAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002DEA7u); } /* indirect call */
    }

loc_0002DEAA: ;
    edx = MEM32(0x64D220);
    ecx = MEM32(esi + 0x402C);
    eax = MEM32(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D220) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0002DEC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002DEBFu); } /* indirect call */
    }

loc_0002DEC2: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DED0; /* jne: not equal / not zero */

loc_0002DECB: ;
    PUSH32(esp, 0x0002DED0u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002DED0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0002DED7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002DED4u); } /* indirect call */
    }

loc_0002DED7: ;
    eax = MEM32(esi + 0x4010);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0002DE95; /* jl: less (signed <) */

loc_0002DEE2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0002DE9A
 * Original: 0x0002DE9A - 0x0002DEE3 (73 bytes, 23 insns)
 * Folder: world (between: 0x0002D300 and 0x0002EA40)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DE9A(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002DE9A: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DEA3; /* jne: not equal / not zero */

loc_0002DE9E: ;
    PUSH32(esp, 0x0002DEA3u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002DEA3: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x4C); PUSH32(esp, 0x0002DEAAu); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002DEA7u); } /* indirect call */
    }

loc_0002DEAA: ;
    edx = MEM32(0x64D220);
    ecx = MEM32(esi + 0x402C);
    eax = MEM32(ecx);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(0x64D220) = edx;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 4); PUSH32(esp, 0x0002DEC2u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002DEBFu); } /* indirect call */
    }

loc_0002DEC2: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002DED0; /* jne: not equal / not zero */

loc_0002DECB: ;
    PUSH32(esp, 0x0002DED0u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002DED0: ;
    edx = MEM32(eax);
    ecx = eax;
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(edx + 0x48); PUSH32(esp, 0x0002DED7u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002DED4u); } /* indirect call */
    }

loc_0002DED7: ;
    eax = MEM32(esi + 0x4010);
    _fa = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu; _fb = (uint32_t)(1) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax), 1 (32-bit) */
    if (CMP_L(_fas, _fbs)) { g_seh_ebp = ebp; sub_0002DE95(); return; } /* jl: less (signed <) */

loc_0002DEE2: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0002DEF0
 * Original: 0x0002DEF0 - 0x0002DF56 (102 bytes, 38 insns)
 * Folder: world (between: 0x0002D300 and 0x0002EA40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DEF0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002DEF0: ;
    PUSH32(esp, esi);
    esi = MEM32(eax + 0x400C);
    PUSH32(esp, edi);
    PUSH32(esp, esi);
    eax = 0x493610;
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x0002DF05u); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002DF05: ;
    ecx = MEM32(0x64D33C);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DF1B; /* je: equal / zero */

loc_0002DF12: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DF25; /* je: equal / zero */

loc_0002DF1B: ;
    ecx = MEM32(0x3400FC);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DF2C; /* je: equal / zero */

loc_0002DF25: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0xFFFFFFFFu (32-bit) */
    ecx = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002DF2E; /* je: equal / zero */

loc_0002DF2C: ;
    ecx = eax;

loc_0002DF2E: ;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0xFFFFFFFFu) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0xFFFFFFFFu (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002DF51; /* je: equal / zero */

loc_0002DF33: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(ecx)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(edx, LO8(edx) + LO8(ecx));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    eax = ZX8(LO8(edx));
    eax = eax << 4;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x47EC30;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002DF4Bu); RECOMP_ABI_CALL(0x000C0F60u, sub_000C0F60); /* call 0x000C0F60 */

loc_0002DF4B: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

loc_0002DF51: ;
    eax = edi;
    POP32(esp, edi);
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002DF60
 * Original: 0x0002DF60 - 0x0002DFB4 (84 bytes, 30 insns)
 * Folder: world (between: 0x0002D300 and 0x0002EA40)
 * Category: game_io
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DF60(void)
{

loc_0002DF60: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0x323408);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    esi = ecx;
    PUSH32(esp, 0x0002DF73u); RECOMP_ABI_CALL(0x00281A86u, sub_00281A86); /* call 0x00281A86 */

loc_0002DF73: ;
    PUSH32(esp, 0x3233EC);
    PUSH32(esp, 1);
    PUSH32(esp, 0);
    PUSH32(esp, 0);
    MEM32(esi + 8) = eax;
    PUSH32(esp, 0x0002DF86u); RECOMP_ABI_CALL(0x00281A86u, sub_00281A86); /* call 0x00281A86 */

loc_0002DF86: ;
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
    PUSH32(esp, 0x0002DFA5u); RECOMP_ABI_CALL(0x0027FB7Du, sub_0027FB7D); /* call 0x0027FB7D */

loc_0002DFA5: ;
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    MEM32(esi + 4) = eax;
    PUSH32(esp, 0x0002DFB0u); RECOMP_ABI_CALL(0x0027F96Eu, sub_0027F96E); /* call 0x0027F96E */

loc_0002DFB0: ;
    POP32(esp, esi);
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0002DFC0
 * Original: 0x0002DFC0 - 0x0002DFDD (29 bytes, 13 insns)
 * Folder: world (between: 0x0002D300 and 0x0002EA40)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DFC0(void)
{

loc_0002DFC0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi + 8);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002DFD0u); RECOMP_ABI_CALL(0x00281AE1u, sub_00281AE1); /* call 0x00281AE1 */

loc_0002DFD0: ;
    ecx = MEM32(esi + 0xC);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002DFDBu); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_0002DFDB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002DFE0
 * Original: 0x0002DFE0 - 0x0002DFFD (29 bytes, 13 insns)
 * Folder: world (between: 0x0002D300 and 0x0002EA40)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DFE0(void)
{

loc_0002DFE0: ;
    PUSH32(esp, esi);
    PUSH32(esp, 0);
    esi = ecx;
    eax = MEM32(esi + 0xC);
    PUSH32(esp, 1);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002DFF0u); RECOMP_ABI_CALL(0x00281AE1u, sub_00281AE1); /* call 0x00281AE1 */

loc_0002DFF0: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002DFFBu); RECOMP_ABI_CALL(0x00281C95u, sub_00281C95); /* call 0x00281C95 */

loc_0002DFFB: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002DFFC
 * Original: 0x0002DFFC - 0x0002DFFD (1 bytes, 1 insns)
 * Folder: world (between: 0x0002D300 and 0x0002EA40)
 * Category: game_vtable
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002DFFC(void)
{

loc_0002DFFC: ;
    esp += 4; return; /* ret */

}

/**
 * sub_0002E000
 * Original: 0x0002E000 - 0x0002E012 (18 bytes, 9 insns)
 * Folder: world (between: 0x0002D300 and 0x0002EA40)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E000(void)
{
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    int _cf = 0; /* carry flag */

loc_0002E000: ;
    PUSH32(esp, esi);
    esi = ecx;
    PUSH32(esp, 0x0002E008u); RECOMP_ABI_CALL(0x0027FBEBu, sub_0027FBEB); /* call 0x0027FBEB */

loc_0002E008: ;
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
 * sub_0002E020
 * Original: 0x0002E020 - 0x0002E042 (34 bytes, 15 insns)
 * Folder: world (between: 0x0002D300 and 0x0002EA40)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E020(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002E020: ;
    PUSH32(esp, esi);
    esi = ecx;
    eax = MEM32(esi);
    { uint32_t _icall_esp = g_esp;
    { uint32_t _icall_target = MEM32(eax + 0xC); PUSH32(esp, 0x0002E028u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002E025u); } /* indirect call */
    }

loc_0002E028: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E040; /* je: equal / zero */

loc_0002E02C: ;
    ecx = MEM32(esi + 8);
    PUSH32(esp, 0);
    PUSH32(esp, 1);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002E039u); RECOMP_ABI_CALL(0x00281AE1u, sub_00281AE1); /* call 0x00281AE1 */

loc_0002E039: ;
    PUSH32(esp, 0);
    PUSH32(esp, 0x0002E040u); RECOMP_ABI_CALL(0x0027FA3Cu, sub_0027FA3C); /* call 0x0027FA3C */

loc_0002E040: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002E050
 * Original: 0x0002E050 - 0x0002E0AB (91 bytes, 39 insns)
 * Folder: world (between: 0x0002D300 and 0x0002EA40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E050(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002E050: ;
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    esi = ecx;
    edx = MEM32(esi + 4);
    ecx = MEM32(edx + 4);
    _fa = (uint32_t)(MEM8(ecx + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x11), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0002E079; /* jne: not equal / not zero */

loc_0002E063: ;
    edi = MEM32(ebx);

loc_0002E065: ;
    _fa = (uint32_t)(MEM32(ecx + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx + 0xC), edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002E06F; /* jae: above or equal (unsigned >=) */

loc_0002E06A: ;
    ecx = MEM32(ecx + 8);
    goto loc_0002E073;

loc_0002E06F: ;
    edx = ecx;
    ecx = MEM32(ecx);

loc_0002E073: ;
    _fa = (uint32_t)(MEM8(ecx + 0x11)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(ecx + 0x11), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E065; /* je: equal / zero */

loc_0002E079: ;
    ecx = MEM32(esi + 4);
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, ecx (32-bit) */
    MEM32(esp + 8) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002E099; /* je: equal / zero */

loc_0002E084: ;
    esi = MEM32(ebx);
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(edx + 0xC) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002E099; /* jb: below (unsigned <) */

loc_0002E08B: ;
    ecx = esp + 8;
    ecx = MEM32(ecx);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002E099: ;
    MEM32(esp + 0xC) = ecx;
    ecx = esp + 0xC;
    ecx = MEM32(ecx);
    POP32(esp, edi);
    MEM32(eax) = ecx;
    POP32(esp, esi);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002E0B0
 * Original: 0x0002E0B0 - 0x0002E11A (106 bytes, 45 insns)
 * Folder: world (between: 0x0002D300 and 0x0002EA40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E0B0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002E0B0: ;
    edx = MEM32(ecx + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    eax = MEM32(edx + 4);
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    PUSH32(esp, edi);
    if (CMP_NE(_fa, _fb)) goto loc_0002E0DC; /* jne: not equal / not zero */

loc_0002E0C5: ;
    edi = MEM32(esi);

loc_0002E0C7: ;
    _fa = (uint32_t)(MEM32(eax + 0xC)) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + 0xC), edi (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002E0D1; /* jae: above or equal (unsigned >=) */

loc_0002E0CC: ;
    eax = MEM32(eax + 8);
    goto loc_0002E0D5;

loc_0002E0D1: ;
    edx = eax;
    eax = MEM32(eax);

loc_0002E0D5: ;
    SET_LO8(ebx, MEM8(eax + 0x15));
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E0C7; /* je: equal / zero */

loc_0002E0DC: ;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 4)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edx, MEM32(ecx + 4) (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E0E8; /* je: equal / zero */

loc_0002E0E1: ;
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(edx + 0xC)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(edx + 0xC) (32-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002E110; /* jae: above or equal (unsigned >=) */

loc_0002E0E8: ;
    eax = MEM32(esi);
    MEM32(esp + 0x10) = eax;
    PUSH32(esp, edx);
    eax = esp + 0x14;
    esi = esp + 0x10;
    MEM32(esp + 0x18) = 0;
    PUSH32(esp, 0x0002E104u); RECOMP_ABI_CALL(0x00108760u, sub_00108760); /* call 0x00108760 */

loc_0002E104: ;
    eax = MEM32(eax);
    POP32(esp, edi);
    POP32(esp, esi);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + 0x10;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002E110: ;
    POP32(esp, edi);
    POP32(esp, esi);
    eax = edx + 0x10;
    POP32(esp, ebx);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002E120
 * Original: 0x0002E120 - 0x0002E19A (122 bytes, 48 insns)
 * Folder: world (between: 0x0002D300 and 0x0002EA40)
 * CC: cdecl, 3 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E120(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E120: ;
    ecx = MEM32(esi + 4);
    eax = MEM32(esp + 8);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, MEM32(ecx) (32-bit) */
    PUSH32(esp, ebx);
    ebx = MEM32(esp + 0x10);
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0xC);
    if (CMP_NE(_fa, _fb)) goto loc_0002E16B; /* jne: not equal / not zero */

loc_0002E135: ;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebx, ecx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E16B; /* jne: not equal / not zero */

loc_0002E139: ;
    eax = MEM32(ecx + 4);
    PUSH32(esp, eax);
    ecx = esi;
    PUSH32(esp, 0x0002E144u); RECOMP_ABI_CALL(0x0002E340u, sub_0002E340); /* call 0x0002E340 */

loc_0002E144: ;
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

loc_0002E16B: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E190; /* je: equal / zero */

loc_0002E16F: ;
    PUSH32(esp, edi);

loc_0002E170: ;
    edx = esp + 0x14;
    edi = eax;
    PUSH32(esp, 0x0002E17Bu); RECOMP_ABI_CALL(0x0027F560u, sub_0027F560); /* call 0x0027F560 */

loc_0002E17B: ;
    PUSH32(esp, edi);
    eax = esp + 0x14;
    PUSH32(esp, eax);
    PUSH32(esp, esi);
    PUSH32(esp, 0x0002E187u); RECOMP_ABI_CALL(0x0027A6D0u, sub_0027A6D0); /* call 0x0027A6D0 */

loc_0002E187: ;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ebx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ebx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E170; /* jne: not equal / not zero */

loc_0002E18F: ;
    POP32(esp, edi);

loc_0002E190: ;
    MEM32(ebp) = eax;
    eax = ebp;
    POP32(esp, ebp);
    POP32(esp, ebx);
    esp += 16; return; /* ret 12 */

}

/**
 * sub_0002E1A0
 * Original: 0x0002E1A0 - 0x0002E33E (414 bytes, 138 insns)
 * Folder: world (between: 0x0002D300 and 0x0002EA40)
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E1A0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E1A0: ;
    eax = MEM32(XBOX_FS_BASE);
    PUSH32(esp, 0xFFFFFFFFu);
    PUSH32(esp, 0x297148);
    PUSH32(esp, eax);
    MEM32(XBOX_FS_BASE) = esp;
    eax = MEM32(edi + 8);
    _fb = (uint32_t)(0x44) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x44;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0x1FFFFFFE) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0x1FFFFFFE (32-bit) */
    PUSH32(esp, ebp);
    ebp = MEM32(esp + 0x60);
    PUSH32(esp, esi);
    if (CMP_B(_fa, _fb)) goto loc_0002E214; /* jb: below (unsigned <) */

loc_0002E1C8: ;
    PUSH32(esp, 0x13);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    PUSH32(esp, 0x323378);
    ecx = esp + 0x10;
    MEM32(esp + 0x28) = 0xF;
    MEM32(esp + 0x24) = esi;
    MEM8(esp + 0x14) = 0;
    PUSH32(esp, 0x0002E1EBu); RECOMP_ABI_CALL(0x00017340u, sub_00017340); /* call 0x00017340 */

loc_0002E1EB: ;
    eax = esp + 8;
    PUSH32(esp, eax);
    ecx = esp + 0x28;
    MEM32(esp + 0x58) = esi;
    PUSH32(esp, 0x0002E1FDu); RECOMP_ABI_CALL(0x00017430u, sub_00017430); /* call 0x00017430 */

loc_0002E1FD: ;
    PUSH32(esp, 0x334DD0);
    ecx = esp + 0x28;
    PUSH32(esp, ecx);
    MEM32(esp + 0x2C) = 0x323120;
    PUSH32(esp, 0x0002E214u); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_0002E214: ;
    eax = MEM32(edi + 4);
    esi = MEM32(esp + 0x68);
    PUSH32(esp, 0);
    PUSH32(esp, eax);
    PUSH32(esp, ebp);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002E225u); RECOMP_ABI_CALL(0x00108A10u, sub_00108A10); /* call 0x00108A10 */

loc_0002E225: ;
    edx = MEM32(edi + 8);
    esi = eax;
    eax = MEM32(edi + 4);
    edx++;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, eax (32-bit) */
    MEM32(esp + 0x64) = esi;
    MEM32(edi + 8) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0002E246; /* jne: not equal / not zero */

loc_0002E239: ;
    MEM32(eax + 4) = esi;
    edx = MEM32(edi + 4);
    MEM32(edx) = esi;
    eax = MEM32(edi + 4);
    goto loc_0002E267;

loc_0002E246: ;
    SET_LO8(eax, MEM8(esp + 0x60));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E25C; /* je: equal / zero */

loc_0002E24E: ;
    MEM32(ebp) = esi;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E26A; /* jne: not equal / not zero */

loc_0002E258: ;
    MEM32(eax) = esi;
    goto loc_0002E26A;

loc_0002E25C: ;
    MEM32(ebp + 8) = esi;
    eax = MEM32(edi + 4);
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(eax + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, MEM32(eax + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E26A; /* jne: not equal / not zero */

loc_0002E267: ;
    MEM32(eax + 8) = esi;

loc_0002E26A: ;
    ecx = MEM32(esi + 4);
    SET_LO8(edx, MEM8(ecx + 0x14));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = esi + 4;
    PUSH32(esp, ebx);
    SET_LO8(ebx, 1);
    if (CMP_NE(_fa, _fb)) goto loc_0002E31B; /* jne: not equal / not zero */

loc_0002E27E: ;
    edi = edi;

loc_0002E280: ;
    ecx = MEM32(eax);
    ebp = MEM32(ecx + 4);
    edx = MEM32(ebp);
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, edx (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E2D8; /* jne: not equal / not zero */

loc_0002E28C: ;
    edx = MEM32(ebp + 8);
    _fa = (uint32_t)(MEM8(edx + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14), 0 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E2AD; /* jne: not equal / not zero */

loc_0002E295: ;
    ecx = MEM32(eax);
    MEM8(ecx + 0x14) = LO8(ebx);
    MEM8(edx + 0x14) = LO8(ebx);
    edx = MEM32(eax);
    ecx = MEM32(edx + 4);
    MEM8(ecx + 0x14) = 0;
    edx = MEM32(eax);
    esi = MEM32(edx + 4);
    goto loc_0002E306;

loc_0002E2AD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx + 8)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx + 8) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E2BA; /* jne: not equal / not zero */

loc_0002E2B2: ;
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0002E2BAu); RECOMP_ABI_CALL(0x000F3E60u, sub_000F3E60); /* call 0x000F3E60 */

loc_0002E2BA: ;
    eax = MEM32(esi + 4);
    MEM8(eax + 0x14) = LO8(ebx);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x14) = 0;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002E2D6u); RECOMP_ABI_CALL(0x000F95F0u, sub_000F95F0); /* call 0x000F95F0 */

loc_0002E2D6: ;
    goto loc_0002E306;

loc_0002E2D8: ;
    _fa = (uint32_t)(MEM8(edx + 0x14)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(edx + 0x14), 0 (8-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E295; /* je: equal / zero */

loc_0002E2DE: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(ecx)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(ecx) (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E2EA; /* jne: not equal / not zero */

loc_0002E2E2: ;
    PUSH32(esp, edi);
    esi = ecx;
    PUSH32(esp, 0x0002E2EAu); RECOMP_ABI_CALL(0x000F95F0u, sub_000F95F0); /* call 0x000F95F0 */

loc_0002E2EA: ;
    eax = MEM32(esi + 4);
    MEM8(eax + 0x14) = LO8(ebx);
    ecx = MEM32(esi + 4);
    edx = MEM32(ecx + 4);
    MEM8(edx + 0x14) = 0;
    eax = MEM32(esi + 4);
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    PUSH32(esp, 0x0002E306u); RECOMP_ABI_CALL(0x000F3E60u, sub_000F3E60); /* call 0x000F3E60 */

loc_0002E306: ;
    ecx = MEM32(esi + 4);
    SET_LO8(edx, MEM8(ecx + 0x14));
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0 (8-bit) */
    eax = esi + 4;
    if (CMP_EQ(_fa, _fb)) goto loc_0002E280; /* je: equal / zero */

loc_0002E317: ;
    esi = MEM32(esp + 0x68);

loc_0002E31B: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edx + 4);
    ecx = MEM32(esp + 0x50);
    MEM8(eax + 0x14) = LO8(ebx);
    eax = MEM32(esp + 0x60);
    POP32(esp, ebx);
    MEM32(eax) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0002E31B
 * Original: 0x0002E31B - 0x0002E33E (35 bytes, 12 insns)
 * Folder: world (between: 0x0002D300 and 0x0002EA40)
 * Category: game_vtable
 * CC: cdecl, 4 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E31B(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E31B: ;
    edx = MEM32(edi + 4);
    eax = MEM32(edx + 4);
    ecx = MEM32(esp + 0x50);
    MEM8(eax + 0x14) = LO8(ebx);
    eax = MEM32(esp + 0x60);
    POP32(esp, ebx);
    MEM32(eax) = esi;
    POP32(esp, esi);
    POP32(esp, ebp);
    MEM32(XBOX_FS_BASE) = ecx;
    _fb = (uint32_t)(0x50) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x50;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 20; return; /* ret 16 */

}

/**
 * sub_0002E340
 * Original: 0x0002E340 - 0x0002E37F (63 bytes, 29 insns)
 * Folder: world (between: 0x0002D300 and 0x0002EA40)
 * CC: cdecl, 1 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E340(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002E340: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    edi = MEM32(esp + 0x10);
    SET_LO8(eax, MEM8(edi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    ebx = ecx;
    esi = edi;
    if (CMP_NE(_fa, _fb)) goto loc_0002E379; /* jne: not equal / not zero */

loc_0002E352: ;
    eax = MEM32(esi + 8);
    PUSH32(esp, eax);
    ecx = ebx;
    PUSH32(esp, 0x0002E35Du); RECOMP_ABI_CALL(0x0002E340u, sub_0002E340); /* call 0x0002E340 */

loc_0002E35D: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = MEM32(esi);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E370; /* je: equal / zero */

loc_0002E363: ;
    PUSH32(esp, 0x0002E368u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002E368: ;
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edi);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002E370u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002E36Du); } /* indirect call */
    }

loc_0002E370: ;
    SET_LO8(eax, MEM8(esi + 0x15));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    edi = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002E352; /* je: equal / zero */

loc_0002E379: ;
    POP32(esp, edi);
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 8; return; /* ret 4 */

}

/**
 * sub_0002E380
 * Original: 0x0002E380 - 0x0002E4C5 (325 bytes, 122 insns)
 * Folder: world (between: 0x0002D300 and 0x0002EA40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E380(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E380: ;
    ecx = MEM32(esp + 4);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    PUSH32(esp, esi);
    PUSH32(esp, 1);
    eax = esp + 0xC;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002E395u); RECOMP_ABI_CALL(0x000BFDB0u, sub_000BFDB0); /* call 0x000BFDB0 */

loc_0002E395: ;
    esi = eax;
    eax = MEM32(esp + 0x14);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    eax = MEM32(0x64CF80);
    if (CMP_NE(_fa, _fb)) goto loc_0002E3C7; /* jne: not equal / not zero */

loc_0002E3A7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E3B0; /* jne: not equal / not zero */

loc_0002E3AB: ;
    PUSH32(esp, 0x0002E3B0u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002E3B0: ;
    edx = 4;
    ecx = eax;
    PUSH32(esp, 0x0002E3BCu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0002E3BC: ;
    MEM32(eax) = 0;
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002E3C7: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E3D0; /* jne: not equal / not zero */

loc_0002E3CB: ;
    PUSH32(esp, 0x0002E3D0u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002E3D0: ;
    edx = MEM32(esp + 8);
    PUSH32(esp, ebp);
    PUSH32(esp, edi);
    ecx = eax;
    PUSH32(esp, 0x0002E3DDu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0002E3DD: ;
    ebp = eax;
    eax = MEM32(0x64D398);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    ecx = ebp;
    if (CMP_NE(_fa, _fb)) goto loc_0002E40F; /* jne: not equal / not zero */

loc_0002E3EA: ;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    eax = ebp;
    if (CMP_EQ(_fa, _fb)) goto loc_0002E4BE; /* je: equal / zero */

loc_0002E3F4: ;
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

loc_0002E40F: ;
    eax = MEM32(esp + 0x10);
    _fb = (uint32_t)(esi) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    eax = eax + esi;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    MEM32(esp + 0x14) = eax;
    if (CMP_AE(_fa, _fb)) goto loc_0002E4BC; /* jae: above or equal (unsigned >=) */

loc_0002E421: ;
    PUSH32(esp, ebx);

loc_0002E422: ;
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
    if (CMP_AE(_fa, _fb)) goto loc_0002E4B1; /* jae: above or equal (unsigned >=) */

loc_0002E473: ;
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
    if (CMP_EQ(_fa, _fb)) goto loc_0002E4A7; /* je: equal / zero */

loc_0002E487: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x80) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x80 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E494; /* jne: not equal / not zero */

loc_0002E48C: ;
    SET_LO8(eax, MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM8(ecx) = LO8(eax);
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    goto loc_0002E4A7;

loc_0002E494: ;
    _fa = (uint32_t)(LO8(edx)) & 0xFFu; _fb = (uint32_t)(0x40) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(edx), 0x40 (8-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E4AD; /* jne: not equal / not zero */

loc_0002E499: ;
    SET_LO16(edx, MEM16(esi));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    MEM8(ecx) = HI8(edx);
    MEM8(ecx + 1) = LO8(edx);
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ecx = ecx + 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002E4A7: ;
    SET_LO8(eax, MEM8(esi));
    MEM8(ecx) = LO8(eax);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    ecx++;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0002E4AD: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, edi (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002E473; /* jb: below (unsigned <) */

loc_0002E4B1: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(MEM32(esp + 0x18)) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, MEM32(esp + 0x18) (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002E422; /* jb: below (unsigned <) */

loc_0002E4BB: ;
    POP32(esp, ebx);

loc_0002E4BC: ;
    eax = ebp;

loc_0002E4BE: ;
    POP32(esp, edi);
    POP32(esp, ebp);
    POP32(esp, esi);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002E4D0
 * Original: 0x0002E4D0 - 0x0002EA40 (1392 bytes, 424 insns)
 * Folder: world (between: 0x0002D300 and 0x0002EA40)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: standard_frame
 */
void sub_0002E4D0(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* prologue saves caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    double _fca = 0.0, _fcb = 0.0;
    (void)_fca; (void)_fcb;

loc_0002E4D0: ;
    PUSH32(esp, ebp);
    ebp = esp;
    g_ebp = ebp; /* publish frame for frameless callees */
    g_seh_ebp = ebp;
    esp = esp & 0xFFFFFFF8u;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    eax = 0x200C;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E4E0u); RECOMP_ABI_CALL(0x0028A870u, sub_0028A870); /* call 0x0028A870 */

loc_0002E4E0: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    PUSH32(esp, edi);
    MEM32(0x64D8FC) = 0;
    if (CMP_NE(_fa, _fb)) goto loc_0002E4FB; /* jne: not equal / not zero */

loc_0002E4F6: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E4FBu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002E4FB: ;
    edx = 0x4C;
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E507u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0002E507: ;
    ebx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = 0x13;
    edi = ebx;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = MEM32(ebp + 8);
    PUSH32(esp, 1);
    eax = esp + 0x18;
    PUSH32(esp, eax);
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E524u); RECOMP_ABI_CALL(0x000BFDB0u, sub_000BFDB0); /* call 0x000BFDB0 */

loc_0002E524: ;
    edi = MEM32(0x64D33C);
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    esi = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0002E53C; /* je: equal / zero */

loc_0002E533: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E53F; /* je: equal / zero */

loc_0002E53C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002E53F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E54C; /* je: equal / zero */

loc_0002E543: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E54F; /* je: equal / zero */

loc_0002E54C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002E54F: ;
    edx = MEM32(esi);
    eax = MEM32(0x64D398);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002E584; /* je: equal / zero */

loc_0002E561: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(edx);
    MEM8(esp + 0x13) = LO8(ecx);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x10);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x11) = LO8(edx);
    MEM8(esp + 0x12) = LO8(ecx);

loc_0002E584: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    ecx = MEM32(esp + 0x10);
    MEM32(ebx + 8) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002E598; /* je: equal / zero */

loc_0002E58F: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E59B; /* je: equal / zero */

loc_0002E598: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002E59B: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E5A8; /* je: equal / zero */

loc_0002E59F: ;
    _fa = (uint32_t)(MEM32(0x64D3A4)) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(0x64D3A4), 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E5AB; /* je: equal / zero */

loc_0002E5A8: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002E5AB: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E5EB; /* je: equal / zero */

loc_0002E5BC: ;
    edx = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(esp + 0x10));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(edx);
    MEM8(esp + 0x13) = LO8(ecx);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x10);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x11) = LO8(edx);
    MEM8(esp + 0x12) = LO8(ecx);
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */

loc_0002E5EB: ;
    xmm1 = XMM_SCALAR(MEMF(0x334048)); /* movss */
    _fca = xmm1.f[0]; _fcb = xmm0.f[0]; /* comiss */
    MEMF(ebx + 0x20) = xmm0.f[0]; /* movss */
    if ((_fca > _fcb)) goto loc_0002E606; /* ja: above (unsigned >) (xmm1.f[0] vs xmm0.f[0]) */

loc_0002E5FD: ;
    _fca = xmm0.f[0]; _fcb = MEMF(0x333A9C); /* comiss */
    if ((_fca <= _fcb || (_fca != _fca || _fcb != _fcb))) goto loc_0002E60E; /* jbe: below or equal (unsigned <=) (xmm0.f[0] vs MEMF(0x333A9C)) */

loc_0002E606: ;
    xmm0 = XMM_ZERO(); /* xorps self = zero */
    MEMF(ebx + 0x20) = xmm0.f[0]; /* movss */

loc_0002E60E: ;
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E648; /* je: equal / zero */

loc_0002E61F: ;
    edx = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(esp + 0x10));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(edx);
    MEM8(esp + 0x13) = LO8(ecx);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x10);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x11) = LO8(edx);
    MEM8(esp + 0x12) = LO8(ecx);

loc_0002E648: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(ebx + 0x18) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E68D; /* je: equal / zero */

loc_0002E664: ;
    edx = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(esp + 0x10));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(edx);
    MEM8(esp + 0x13) = LO8(ecx);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x10);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x11) = LO8(edx);
    MEM8(esp + 0x12) = LO8(ecx);

loc_0002E68D: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(ebx + 0x1C) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E6D2; /* je: equal / zero */

loc_0002E6A9: ;
    edx = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(esp + 0x10));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(edx);
    MEM8(esp + 0x13) = LO8(ecx);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x10);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x11) = LO8(edx);
    MEM8(esp + 0x12) = LO8(ecx);

loc_0002E6D2: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    MEMF(ebx + 0x24) = xmm0.f[0]; /* movss */
    xmm0 = XMM_SCALAR(MEMF(esi)); /* movss */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEMF(esp + 0x10) = xmm0.f[0]; /* movss */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E717; /* je: equal / zero */

loc_0002E6EE: ;
    edx = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(esp + 0x10));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(edx);
    MEM8(esp + 0x13) = LO8(ecx);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x10);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x11) = LO8(edx);
    MEM8(esp + 0x12) = LO8(ecx);

loc_0002E717: ;
    xmm0 = XMM_SCALAR(MEMF(esp + 0x10)); /* movss */
    ecx = 0; /* xor self */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEMF(ebx + 0x28) = xmm0.f[0]; /* movss */
    SET_LO16(ecx, MEM16(esi));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = ecx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002E73F; /* je: equal / zero */

loc_0002E732: ;
    edx = ecx;
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(edx);
    MEM8(esp + 0x11) = LO8(ecx);

loc_0002E73F: ;
    SET_LO16(ecx, MEM16(esp + 0x10));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ebx + 0x2C) = LO16(ecx);
    SET_LO16(edx, MEM16(esi));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002E765; /* je: equal / zero */

loc_0002E758: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(edx);
    MEM8(esp + 0x11) = LO8(ecx);

loc_0002E765: ;
    SET_LO16(ecx, MEM16(esp + 0x10));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ebx + 0x2E) = LO16(ecx);
    SET_LO16(edx, MEM16(esi));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002E78B; /* je: equal / zero */

loc_0002E77E: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(edx);
    MEM8(esp + 0x11) = LO8(ecx);

loc_0002E78B: ;
    SET_LO16(ecx, MEM16(esp + 0x10));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ebx + 0x30) = LO16(ecx);
    SET_LO16(edx, MEM16(esi));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002E7B1; /* je: equal / zero */

loc_0002E7A4: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(edx);
    MEM8(esp + 0x11) = LO8(ecx);

loc_0002E7B1: ;
    SET_LO16(ecx, MEM16(esp + 0x10));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ebx + 0x32) = LO16(ecx);
    SET_LO16(edx, MEM16(esi));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002E7D7; /* je: equal / zero */

loc_0002E7CA: ;
    SET_LO8(ecx, LO8(edx));
    edx = edx >> 8;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(edx);
    MEM8(esp + 0x11) = LO8(ecx);

loc_0002E7D7: ;
    SET_LO16(ecx, MEM16(esp + 0x10));
    edx = 0; /* xor self */
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM16(ebx + 0x34) = LO16(ecx);
    SET_LO16(edx, MEM16(esi));
    _fb = (uint32_t)(2) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 2;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = edx;
    if (CMP_EQ(_fa, _fb)) goto loc_0002E7FF; /* je: equal / zero */

loc_0002E7F0: ;
    ecx = edx;
    SET_LO8(eax, LO8(edx));
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(ecx);
    MEM8(esp + 0x11) = LO8(eax);

loc_0002E7FF: ;
    SET_LO16(edx, MEM16(esp + 0x10));
    MEM16(ebx + 0x36) = LO16(edx);
    SET_LO8(eax, MEM8(esi));
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM8(ebx + 0x38) = LO8(eax);
    eax = MEM32(0x64D3A4);
    if (CMP_EQ(_fa, _fb)) goto loc_0002E81C; /* je: equal / zero */

loc_0002E817: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E81F; /* je: equal / zero */

loc_0002E81C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002E81F: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E828; /* je: equal / zero */

loc_0002E823: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E829; /* je: equal / zero */

loc_0002E828: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0002E829: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E832; /* je: equal / zero */

loc_0002E82D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E833; /* je: equal / zero */

loc_0002E832: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0002E833: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E83C; /* je: equal / zero */

loc_0002E837: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E83D; /* je: equal / zero */

loc_0002E83C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0002E83D: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E84B; /* jne: not equal / not zero */

loc_0002E846: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E84Bu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002E84B: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x2E);
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E860u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0002E860: ;
    MEM32(ebx) = eax;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E870; /* jne: not equal / not zero */

loc_0002E86B: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E870u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002E870: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x2E);
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E885u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0002E885: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 4) = edi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x2E);
    edi = MEM32(ebx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002E915; /* jle: less or equal (signed <=) */

loc_0002E8BB: ;
    goto loc_0002E8C0;

    /* nop */

loc_0002E8C0: ;
    ecx = MEM32(esi);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(0x64D398);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E8FC; /* je: equal / zero */

loc_0002E8D3: ;
    edx = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(esp + 0x10));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(edx);
    MEM8(esp + 0x13) = LO8(ecx);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x10);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x11) = LO8(edx);
    MEM8(esp + 0x12) = LO8(ecx);

loc_0002E8FC: ;
    ecx = MEM32(esp + 0x10);
    MEM32(edi) = ecx;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x2E);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0002E8C0; /* jl: less (signed <) */

loc_0002E915: ;
    esi = MEM32(ebx + 8);
    edi = ebx + 8;
    PUSH32(esp, 1);
    PUSH32(esp, 0x2E380);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E927u); RECOMP_ABI_CALL(0x000BD740u, sub_000BD740); /* call 0x000BD740 */

loc_0002E927: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x30);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x38);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    MEM32(esp + 0x1C) = eax;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x32);
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x38);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = MEM32(0x64CF80);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0002E95D; /* jne: not equal / not zero */

loc_0002E954: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E959u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002E959: ;
    edx = MEM32(esp + 0x14);

loc_0002E95D: ;
    esi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(esi + 4); PUSH32(esp, 0x0002E965u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002E962u); } /* indirect call */
    }

loc_0002E965: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EA0A; /* je: equal / zero */

loc_0002E96D: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x30);
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x38);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    MEM32(ebx + 0xC) = eax;
    MEM32(esp + 0x14) = ecx;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x38);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x32);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = eax + eax * 2;
    eax = MEM32(0x64CF80);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0002E9A9; /* jne: not equal / not zero */

loc_0002E9A0: ;
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E9A5u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002E9A5: ;
    edx = MEM32(esp + 0x14);

loc_0002E9A9: ;
    esi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(esi + 4); PUSH32(esp, 0x0002E9B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002E9AEu); } /* indirect call */
    }

loc_0002E9B1: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E9D7; /* je: equal / zero */

loc_0002E9B7: ;
    MEM32(ebx + 0x10) = edi;
    ecx = MEM32(esp + 0x14);
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
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0002E9D7: ;
    PUSH32(esp, 0x322FB0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002E9E6u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_0002E9E6: ;
    ecx = 0x400;
    esi = esp + 0x18;
    edi = esp + 0x1018;
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
    PUSH32(esp, 0x334D7C);
    ecx = esp + 0x101C;
    PUSH32(esp, ecx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002EA0Au); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_0002EA0A: ;
    PUSH32(esp, 0x322FB0);
    edx = esp + 0x101C;
    PUSH32(esp, edx);
    g_ebp = ebp; /* frame stays current across calls */
    g_seh_ebp = ebp;
    PUSH32(esp, 0x0002EA1Cu); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_0002EA1C: ;
    PUSH32(esp, 0x334D7C);
    eax = esp + 0x1C;
    ecx = 0x400;
    esi = esp + 0x101C;
    edi = esp + 0x1C;
    PUSH32(esp, eax);
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
    PUSH32(esp, 0x0002EA3Du); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_0002EA3D: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0002E81C
 * Original: 0x0002E81C - 0x0002EA40 (548 bytes, 178 insns)
 * Folder: world (between: 0x0002D300 and 0x0002EA40)
 * Category: game_vtable
 * CC: thiscall, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002E81C(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002E81C: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E828; /* je: equal / zero */

loc_0002E823: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E829; /* je: equal / zero */

loc_0002E828: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0002E829: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E832; /* je: equal / zero */

loc_0002E82D: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E833; /* je: equal / zero */

loc_0002E832: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0002E833: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E83C; /* je: equal / zero */

loc_0002E837: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(2) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 2 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E83D; /* je: equal / zero */

loc_0002E83C: ;
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */

loc_0002E83D: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E84B; /* jne: not equal / not zero */

loc_0002E846: ;
    PUSH32(esp, 0x0002E84Bu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002E84B: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x2E);
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    PUSH32(esp, 0x0002E860u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0002E860: ;
    MEM32(ebx) = eax;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002E870; /* jne: not equal / not zero */

loc_0002E86B: ;
    PUSH32(esp, 0x0002E870u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002E870: ;
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x2E);
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    PUSH32(esp, 0x0002E885u); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0002E885: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x2E);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    ecx = ecx << 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = ecx;
    ecx = ecx >> 2;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edi = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    MEM32(ebx + 4) = edi;
    { uint32_t _i; int32_t _st = RECOMP_DF_STEP(4); for (_i = 0; _i < ecx; _i++) MEM32(edi + _i*_st) = eax; edi += ecx * _st; }
    ecx = 0; /* rep stosd */
    ecx = edx;
    ecx = ecx & 3;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* and result */
    if (!g_df) { memset((void*)XBOX_PTR(edi), (uint8_t)eax, ecx); edi += ecx; }
    else { uint32_t _i; for (_i = 0; _i < ecx; _i++) MEM8(edi - _i) = LO8(eax); edi -= ecx; }
    ecx = 0; /* rep stosb */
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x2E);
    edi = MEM32(ebx);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_LE(_fas, _fbs)) goto loc_0002E915; /* jle: less or equal (signed <=) */

loc_0002E8BB: ;
    goto loc_0002E8C0;

    /* nop */

loc_0002E8C0: ;
    ecx = MEM32(esi);
    MEM32(esp + 0x10) = ecx;
    ecx = MEM32(0x64D398);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esi = esi + 4;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E8FC; /* je: equal / zero */

loc_0002E8D3: ;
    edx = MEM32(esp + 0x10);
    SET_LO8(ecx, MEM8(esp + 0x10));
    edx = edx >> 0x18;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x10) = LO8(edx);
    MEM8(esp + 0x13) = LO8(ecx);
    ecx = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x10);
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x11) = LO8(edx);
    MEM8(esp + 0x12) = LO8(ecx);

loc_0002E8FC: ;
    ecx = MEM32(esp + 0x10);
    MEM32(edi) = ecx;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x2C);
    ecx = (uint32_t)(int32_t)SMEM16(ebx + 0x2E);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    edi = edi + 4;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(edx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, edx (32-bit) */
    if (CMP_L(_fas, _fbs)) goto loc_0002E8C0; /* jl: less (signed <) */

loc_0002E915: ;
    esi = MEM32(ebx + 8);
    edi = ebx + 8;
    PUSH32(esp, 1);
    PUSH32(esp, 0x2E380);
    PUSH32(esp, 0x0002E927u); RECOMP_ABI_CALL(0x000BD740u, sub_000BD740); /* call 0x000BD740 */

loc_0002E927: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x30);
    eax = (uint32_t)(int32_t)SMEM8(ebx + 0x38);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    MEM32(esp + 0x1C) = eax;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x32);
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x38);
    edx = (uint32_t)((int32_t)edx * (int32_t)ecx);
    edx = (uint32_t)((int32_t)edx * (int32_t)eax);
    eax = MEM32(0x64CF80);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0002E95D; /* jne: not equal / not zero */

loc_0002E954: ;
    PUSH32(esp, 0x0002E959u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002E959: ;
    edx = MEM32(esp + 0x14);

loc_0002E95D: ;
    esi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(esi + 4); PUSH32(esp, 0x0002E965u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002E962u); } /* indirect call */
    }

loc_0002E965: ;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EA0A; /* je: equal / zero */

loc_0002E96D: ;
    edx = (uint32_t)(int32_t)SMEM16(ebx + 0x30);
    ecx = (uint32_t)(int32_t)SMEM8(ebx + 0x38);
    ecx = (uint32_t)((int32_t)ecx * (int32_t)edx);
    MEM32(ebx + 0xC) = eax;
    MEM32(esp + 0x14) = ecx;
    edx = (uint32_t)(int32_t)SMEM8(ebx + 0x38);
    eax = (uint32_t)(int32_t)SMEM16(ebx + 0x32);
    eax = (uint32_t)((int32_t)eax * (int32_t)edx);
    eax = (uint32_t)((int32_t)eax * (int32_t)ecx);
    edx = eax + eax * 2;
    eax = MEM32(0x64CF80);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x14) = edx;
    if (CMP_NE(_fa, _fb)) goto loc_0002E9A9; /* jne: not equal / not zero */

loc_0002E9A0: ;
    PUSH32(esp, 0x0002E9A5u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002E9A5: ;
    edx = MEM32(esp + 0x14);

loc_0002E9A9: ;
    esi = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, edx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(esi + 4); PUSH32(esp, 0x0002E9B1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002E9AEu); } /* indirect call */
    }

loc_0002E9B1: ;
    edi = eax;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002E9D7; /* je: equal / zero */

loc_0002E9B7: ;
    MEM32(ebx + 0x10) = edi;
    ecx = MEM32(esp + 0x14);
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
    eax = ebx;
    POP32(esp, ebx);
    esp = ebp;
    POP32(esp, ebp);
    esp += 4; return; /* ret */

loc_0002E9D7: ;
    PUSH32(esp, 0x322FB0);
    eax = esp + 0x1C;
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002E9E6u); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_0002E9E6: ;
    ecx = 0x400;
    esi = esp + 0x18;
    edi = esp + 0x1018;
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
    PUSH32(esp, 0x334D7C);
    ecx = esp + 0x101C;
    PUSH32(esp, ecx);
    PUSH32(esp, 0x0002EA0Au); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_0002EA0A: ;
    PUSH32(esp, 0x322FB0);
    edx = esp + 0x101C;
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002EA1Cu); RECOMP_ABI_CALL(0x002759B0u, sub_002759B0); /* call 0x002759B0 */

loc_0002EA1C: ;
    PUSH32(esp, 0x334D7C);
    eax = esp + 0x1C;
    ecx = 0x400;
    esi = esp + 0x101C;
    edi = esp + 0x1C;
    PUSH32(esp, eax);
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
    PUSH32(esp, 0x0002EA3Du); RECOMP_ABI_CALL(0x0028CA33u, sub_0028CA33); /* call 0x0028CA33 */

loc_0002EA3D: ;
    (void)0;
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */
    /* int3: debug-trap slide byte, stepped over */

}

/**
 * sub_0002EA40
 * Original: 0x0002EA40 - 0x0002EC28 (488 bytes, 159 insns)
 * Folder: world (source: GRI_load.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EA40(void)
{
    uint32_t ebp = 0;
    ebp = g_ebp;  /* frameless: caller's frame */
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;
    ebp = g_seh_ebp; /* fpo_leaf: inherit caller's frame */

loc_0002EA40: ;
    eax = MEM32(0x64CF80);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* sub source, before the write */
    esp = esp - 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* sub result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002EA51; /* jne: not equal / not zero */

loc_0002EA4C: ;
    PUSH32(esp, 0x0002EA51u); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002EA51: ;
    PUSH32(esp, ebx);
    PUSH32(esp, ebp);
    edx = 8;
    ecx = eax;
    PUSH32(esp, 0x0002EA5Fu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0002EA5F: ;
    ebx = eax;
    eax = 0; /* xor self */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    ecx = ebx;
    MEM32(ecx) = eax;
    PUSH32(esp, 1);
    edx = esp + 0x14;
    MEM32(ecx + 4) = eax;
    eax = MEM32(esp + 0x20);
    PUSH32(esp, edx);
    PUSH32(esp, eax);
    PUSH32(esp, 0x0002EA7Bu); RECOMP_ABI_CALL(0x000BFDB0u, sub_000BFDB0); /* call 0x000BFDB0 */

loc_0002EA7B: ;
    ebp = eax;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ebp, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002EA8A; /* jne: not equal / not zero */

loc_0002EA84: ;
    POP32(esp, ebp);
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

loc_0002EA8A: ;
    eax = MEM32(esp + 0x10);
    eax = eax >> 3;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0002EC20; /* je: equal / zero */

loc_0002EA9D: ;
    eax = MEM32(0x64CF80);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002EAAB; /* jne: not equal / not zero */

loc_0002EAA6: ;
    PUSH32(esp, 0x0002EAABu); RECOMP_ABI_CALL(0x00272F80u, sub_00272F80); /* call 0x00272F80 */

loc_0002EAAB: ;
    edx = MEM32(esp + 0x10);
    PUSH32(esp, edi);
    edx = edx << 2;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = eax;
    PUSH32(esp, 0x0002EABAu); RECOMP_ABI_CALL(0x00012720u, sub_00012720); /* call 0x00012720 */

loc_0002EABA: ;
    MEM32(ebx) = eax;
    eax = MEM32(esp + 0x14);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    MEM32(esp + 0x18) = 0;
    if (CMP_BE(_fa, _fb)) goto loc_0002EBFD; /* jbe: below or equal (unsigned <=) */

loc_0002EAD0: ;
    PUSH32(esp, esi);

loc_0002EAD1: ;
    esi = MEM32(ebp);
    edi = MEM32(0x64D398);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x10) = esi;
    if (CMP_EQ(_fa, _fb)) goto loc_0002EB10; /* je: equal / zero */

loc_0002EAE5: ;
    SET_LO8(eax, MEM8(esp + 0x10));
    ecx = esi;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x13) = LO8(eax);
    MEM8(esp + 0x10) = LO8(ecx);
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x10);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x11) = LO8(edx);
    MEM8(esp + 0x12) = LO8(eax);
    esi = MEM32(esp + 0x10);

loc_0002EB10: ;
    eax = MEM32(ebp);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebp = ebp + 4;
    _fa = (uint32_t)(ebp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    MEM32(esp + 0x10) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0002EB41; /* je: equal / zero */

loc_0002EB1E: ;
    ecx = eax;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x13) = LO8(eax);
    MEM8(esp + 0x10) = LO8(ecx);
    eax = MEM32(esp + 0x10);
    edx = MEM32(esp + 0x10);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    edx = edx >> 0x10;
    _fa = (uint32_t)(edx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x11) = LO8(edx);
    MEM8(esp + 0x12) = LO8(eax);

loc_0002EB41: ;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    eax = MEM32(esp + 0x10);
    MEM32(esp + 0x14) = eax;
    if (CMP_EQ(_fa, _fb)) goto loc_0002EB72; /* je: equal / zero */

loc_0002EB4D: ;
    ecx = eax;
    ecx = ecx >> 0x18;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    SET_LO8(edx, LO8(eax));
    MEM8(esp + 0x14) = LO8(ecx);
    MEM8(esp + 0x17) = LO8(edx);
    eax = MEM32(esp + 0x14);
    ecx = MEM32(esp + 0x14);
    eax = eax >> 8;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    ecx = ecx >> 0x10;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    MEM8(esp + 0x15) = LO8(ecx);
    MEM8(esp + 0x16) = LO8(eax);

loc_0002EB72: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EBE7; /* je: equal / zero */

loc_0002EB76: ;
    PUSH32(esp, 4);
    edx = esp + 0x18;
    PUSH32(esp, 0x3235B8);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002EB87u); RECOMP_ABI_CALL(0x0028B420u, sub_0028B420); /* call 0x0028B420 */

loc_0002EB87: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002EBAE; /* jne: not equal / not zero */

loc_0002EB8E: ;
    eax = MEM32(ebx + 4);
    ecx = MEM32(ebx);
    PUSH32(esp, 1);
    PUSH32(esp, 0x2E4D0);
    edi = ecx + eax * 4;
    PUSH32(esp, 0x0002EBA2u); RECOMP_ABI_CALL(0x000BD740u, sub_000BD740); /* call 0x000BD740 */

loc_0002EBA2: ;
    eax = MEM32(ebx + 4);
    _fb = (uint32_t)(8) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 8;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    MEM32(ebx + 4) = eax;
    goto loc_0002EBE7;

loc_0002EBAE: ;
    PUSH32(esp, 4);
    edx = esp + 0x18;
    PUSH32(esp, 0x3235B0);
    PUSH32(esp, edx);
    PUSH32(esp, 0x0002EBBFu); RECOMP_ABI_CALL(0x0028B420u, sub_0028B420); /* call 0x0028B420 */

loc_0002EBBF: ;
    _fb = (uint32_t)(0xC) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0xC;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002EBE7; /* jne: not equal / not zero */

loc_0002EBC6: ;
    PUSH32(esp, 0x323594);
    PUSH32(esp, 0x3230E0);
    PUSH32(esp, 0x14A);
    PUSH32(esp, 0x323560);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0002EBE4u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0002EBE4: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002EBE7: ;
    eax = MEM32(esp + 0x1C);
    ecx = MEM32(esp + 0x18);
    eax++;
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(ecx) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, ecx (32-bit) */
    MEM32(esp + 0x1C) = eax;
    if (CMP_B(_fa, _fb)) goto loc_0002EAD1; /* jb: below (unsigned <) */

loc_0002EBFC: ;
    POP32(esp, esi);

loc_0002EBFD: ;
    eax = MEM32(ebx + 4);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002EC1F; /* jne: not equal / not zero */

loc_0002EC04: ;
    edi = MEM32(ebx);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EC19; /* je: equal / zero */

loc_0002EC0A: ;
    PUSH32(esp, 0x0002EC0Fu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002EC0F: ;
    ecx = MEM32(ebx);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002EC19u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002EC16u); } /* indirect call */
    }

loc_0002EC19: ;
    MEM32(ebx) = 0;

loc_0002EC1F: ;
    POP32(esp, edi);

loc_0002EC20: ;
    POP32(esp, ebp);
    eax = ebx;
    POP32(esp, ebx);
    _fb = (uint32_t)(0x10) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x10;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    esp += 4; return; /* ret */

}

/**
 * sub_0002EC30
 * Original: 0x0002EC30 - 0x0002ECC3 (147 bytes, 43 insns)
 * Folder: world (source: GRI_load.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EC30(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002EC30: ;
    eax = MEM32(edi + 4);
    PUSH32(esp, esi);
    esi = 0; /* xor self */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0002ECC1; /* jbe: below or equal (unsigned <=) */

loc_0002EC3E: ;
    PUSH32(esp, ebx);
    /* nop */

loc_0002EC40: ;
    eax = MEM32(edi);
    _fa = (uint32_t)(MEM32(eax + esi * 4)) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(eax + esi * 4), 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002EC69; /* jne: not equal / not zero */

loc_0002EC48: ;
    PUSH32(esp, 0x323500);
    PUSH32(esp, 0x3234E0);
    PUSH32(esp, 0x190);
    PUSH32(esp, 0x323560);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0002EC66u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0002EC66: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002EC69: ;
    _fa = (uint32_t)(MEM8(0x3662F8)) & 0xFFu; _fb = (uint32_t)(0x64) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp MEM8(0x3662F8), 0x64 (8-bit) */
    ecx = MEM32(edi);
    ebx = MEM32(ecx + esi * 4);
    if (CMP_B(_fa, _fb)) goto loc_0002EC98; /* jb: below (unsigned <) */

loc_0002EC77: ;
    PUSH32(esp, 0x32354C);
    PUSH32(esp, 0x323518);
    PUSH32(esp, 0x172);
    PUSH32(esp, 0x323560);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0002EC95u); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0002EC95: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002EC98: ;
    SET_LO8(eax, MEM8(0x3662F8));
    edx = ZX8(LO8(eax));
    SET_LO8(eax, LO8(eax) + 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    MEM32(edx * 4 + 0x366300) = ebx;
    MEM8(0x3662F8) = LO8(eax);
    eax = MEM32(edi);
    eax = MEM32(eax + esi * 4);
    PUSH32(esp, 0x0002ECB8u); RECOMP_ABI_CALL(0x00025050u, sub_00025050); /* call 0x00025050 */

loc_0002ECB8: ;
    eax = MEM32(edi + 4);
    esi++;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002EC40; /* jb: below (unsigned <) */

loc_0002ECC0: ;
    POP32(esp, ebx);

loc_0002ECC1: ;
    POP32(esp, esi);
    esp += 4; return; /* ret */

}

/**
 * sub_0002ECD0
 * Original: 0x0002ECD0 - 0x0002ED83 (179 bytes, 53 insns)
 * Folder: world (source: GRI_load.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002ECD0(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002ECD0: ;
    PUSH32(esp, ebx);
    PUSH32(esp, esi);
    esi = eax;
    SET_LO8(eax, MEM8(0x3662F8));
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_A(_fa, _fb)) goto loc_0002ED03; /* ja: above (unsigned >) */

loc_0002ECDD: ;
    PUSH32(esp, 0x32354C);
    PUSH32(esp, 0x323294);
    PUSH32(esp, 0x1A9);
    PUSH32(esp, 0x323560);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0002ECFBu); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0002ECFB: ;
    SET_LO8(eax, MEM8(0x3662F8));
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002ED03: ;
    SET_LO8(ebx, 0); /* xor self */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* xor result */
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0002ED80; /* jbe: below or equal (unsigned <=) */

loc_0002ED09: ;
    /* nop */

loc_0002ED10: ;
    ecx = ZX8(LO8(ebx));
    _fa = (uint32_t)(MEM32(ecx * 4 + 0x366300)) & 0xFFFFFFFFu; _fb = (uint32_t)(esi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp MEM32(ecx * 4 + 0x366300), esi (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002ED25; /* je: equal / zero */

loc_0002ED1C: ;
    SET_LO8(ebx, LO8(ebx) + 1);
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x80u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(eax) (8-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002ED10; /* jb: below (unsigned <) */

loc_0002ED22: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002ED25: ;
    ecx = MEM32(esp + 0xC);
    SET_LO8(eax, LO8(eax) - 1);
    _fa = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fb = (_fa == 0x7Fu); /* dec result/SF/OF; CF unchanged */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    MEM8(0x3662F8) = LO8(eax);
    if (CMP_EQ(_fa, _fb)) goto loc_0002ED48; /* je: equal / zero */

loc_0002ED34: ;
    edx = ZX8(LO8(ebx));
    esi = MEM32(edx * 4 + 0x366300);
    PUSH32(esp, 0x0002ED43u); RECOMP_ABI_CALL(0x00024D10u, sub_00024D10); /* call 0x00024D10 */

loc_0002ED43: ;
    SET_LO8(eax, MEM8(0x3662F8));

loc_0002ED48: ;
    _fa = (uint32_t)(LO8(eax)) & 0xFFu; _fb = (uint32_t)(0) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(eax), 0 (8-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0002ED72; /* jbe: below or equal (unsigned <=) */

loc_0002ED4C: ;
    _fa = (uint32_t)(LO8(ebx)) & 0xFFu; _fb = (uint32_t)(LO8(eax)) & 0xFFu;
    _fas = (int32_t)(int8_t)(_fa); _fbs = (int32_t)(int8_t)(_fb); /* cmp LO8(ebx), LO8(eax) (8-bit) */
    if (CMP_AE(_fa, _fb)) goto loc_0002ED72; /* jae: above or equal (unsigned >=) */

loc_0002ED50: ;
    eax = ZX8(LO8(eax));
    edx = MEM32(eax * 4 + 0x366300);
    ecx = ZX8(LO8(ebx));
    POP32(esp, esi);
    MEM32(ecx * 4 + 0x366300) = edx;
    MEM32(eax * 4 + 0x366300) = 0;
    POP32(esp, ebx);
    esp += 4; return; /* ret */

loc_0002ED72: ;
    eax = ZX8(LO8(ebx));
    MEM32(eax * 4 + 0x366300) = 0;

loc_0002ED80: ;
    POP32(esp, esi);
    POP32(esp, ebx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002ED90
 * Original: 0x0002ED90 - 0x0002EE46 (182 bytes, 69 insns)
 * Folder: world (between: 0x0002ECD0 and 0x0002EE50)
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002ED90(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002ED90: ;
    PUSH32(esp, ecx);
    eax = MEM32(esi);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EE44; /* je: equal / zero */

loc_0002ED9B: ;
    ecx = MEM32(eax + 4);
    PUSH32(esp, edi);
    edi = 0; /* xor self */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* xor result */
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp ecx, 0 (32-bit) */
    if (CMP_BE(_fa, _fb)) goto loc_0002EDC0; /* jbe: below or equal (unsigned <=) */

loc_0002EDA5: ;
    eax = MEM32(esi);
    ecx = MEM32(eax);
    eax = MEM32(ecx + edi * 4);
    PUSH32(esp, 1);
    PUSH32(esp, 0x0002EDB3u); RECOMP_ABI_CALL(0x0002ECD0u, sub_0002ECD0); /* call 0x0002ECD0 */

loc_0002EDB3: ;
    edx = MEM32(esi);
    eax = MEM32(edx + 4);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    edi++;
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fb = (_fa == 0x80000000u); /* inc result/SF/OF; CF unchanged */
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(eax) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, eax (32-bit) */
    if (CMP_B(_fa, _fb)) goto loc_0002EDA5; /* jb: below (unsigned <) */

loc_0002EDC0: ;
    eax = MEM32(esi);
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EDD9; /* je: equal / zero */

loc_0002EDC8: ;
    PUSH32(esp, 0x0002EDCDu); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002EDCD: ;
    ecx = MEM32(esi);
    ecx = MEM32(ecx);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002EDD9u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002EDD6u); } /* indirect call */
    }

loc_0002EDD9: ;
    edx = MEM32(esi);
    MEM32(edx) = 0;
    eax = MEM32(esi);
    PUSH32(esp, ebx);
    ecx = esp + 8;
    MEM32(eax + 4) = 0;
    eax = MEM32(esi);
    PUSH32(esp, ecx);
    ebx = 0x47EC20;
    PUSH32(esp, 0x0002EDFCu); RECOMP_ABI_CALL(0x000C1120u, sub_000C1120); /* call 0x000C1120 */

loc_0002EDFC: ;
    eax = MEM32(esp + 0xC);
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EE27; /* je: equal / zero */

loc_0002EE07: ;
    ecx = eax;
    ecx = ecx >> 8;
    _fa = (uint32_t)(ecx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    _fb = (uint32_t)(LO8(eax)) & 0xFFu; _fbs = (int32_t)(int8_t)(_fb); /* add source, before the write */
    SET_LO8(ecx, LO8(ecx) + LO8(eax));
    _fa = (uint32_t)(LO8(ecx)) & 0xFFu; _fas = (int32_t)(int8_t)(_fa); /* add result */
    ebx = ZX8(LO8(ecx));
    edx = esp + 8;
    ebx = ebx << 4;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* shift result */
    PUSH32(esp, edx);
    _fb = (uint32_t)(0x47EC30) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    ebx = ebx + 0x47EC30;
    _fa = (uint32_t)(ebx) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */
    PUSH32(esp, 0x0002EE24u); RECOMP_ABI_CALL(0x000C1120u, sub_000C1120); /* call 0x000C1120 */

loc_0002EE24: ;
    _fb = (uint32_t)(4) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 4;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002EE27: ;
    edi = MEM32(esi);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    POP32(esp, ebx);
    if (CMP_EQ(_fa, _fb)) goto loc_0002EE3D; /* je: equal / zero */

loc_0002EE2E: ;
    PUSH32(esp, 0x0002EE33u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002EE33: ;
    ecx = MEM32(esi);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002EE3Du); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002EE3Au); } /* indirect call */
    }

loc_0002EE3D: ;
    MEM32(esi) = 0;
    POP32(esp, edi);

loc_0002EE44: ;
    POP32(esp, ecx);
    esp += 4; return; /* ret */

}

/**
 * sub_0002EE50
 * Original: 0x0002EE50 - 0x0002EEBC (108 bytes, 30 insns)
 * Folder: world (source: GRI_load.c)
 * Category: game_vehicle
 * CC: cdecl, 0 params, returns int_or_void
 * Frame: fpo_leaf
 */
void sub_0002EE50(void)
{
    int _flags = 0; /* fallback flag var */
    uint32_t _fa = 0, _fb = 0;
    int32_t _fas = 0, _fbs = 0;
    (void)_fa; (void)_fb; (void)_fas; (void)_fbs;

loc_0002EE50: ;
    _fa = (uint32_t)(esi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp esi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EE5E; /* je: equal / zero */

loc_0002EE54: ;
    eax = MEM32(esi + 0x1C0);
    _fa = (uint32_t)(eax) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp eax, 0 (32-bit) */
    if (CMP_NE(_fa, _fb)) goto loc_0002EE7F; /* jne: not equal / not zero */

loc_0002EE5E: ;
    PUSH32(esp, 0x3234CC);
    PUSH32(esp, 0x3234A4);
    PUSH32(esp, 0x203);
    PUSH32(esp, 0x323560);
    PUSH32(esp, 0x32308C);
    PUSH32(esp, 0x0002EE7Cu); RECOMP_ABI_CALL(0x0028B226u, sub_0028B226); /* call 0x0028B226 */

loc_0002EE7C: ;
    _fb = (uint32_t)(0x14) & 0xFFFFFFFFu; _fbs = (int32_t)(int32_t)(_fb); /* add source, before the write */
    esp = esp + 0x14;
    _fa = (uint32_t)(esp) & 0xFFFFFFFFu; _fas = (int32_t)(int32_t)(_fa); /* add result */

loc_0002EE7F: ;
    eax = MEM32(esi + 0x1C0);
    PUSH32(esp, edi);
    edi = MEM32(eax);
    _fa = (uint32_t)(edi) & 0xFFFFFFFFu; _fb = (uint32_t)(0) & 0xFFFFFFFFu;
    _fas = (int32_t)(int32_t)(_fa); _fbs = (int32_t)(int32_t)(_fb); /* cmp edi, 0 (32-bit) */
    if (CMP_EQ(_fa, _fb)) goto loc_0002EEA1; /* je: equal / zero */

loc_0002EE8C: ;
    PUSH32(esp, 0x0002EE91u); RECOMP_ABI_CALL(0x00272D70u, sub_00272D70); /* call 0x00272D70 */

loc_0002EE91: ;
    ecx = MEM32(esi + 0x1C0);
    ecx = MEM32(ecx);
    edx = MEM32(eax);
    { uint32_t _icall_esp = g_esp;
    PUSH32(esp, ecx);
    ecx = eax;
    { uint32_t _icall_target = MEM32(edx + 8); PUSH32(esp, 0x0002EEA1u); RECOMP_ICALL_SAFE_AT(_icall_target, _icall_esp, 0x0002EE9Eu); } /* indirect call */
    }

loc_0002EEA1: ;
    edx = MEM32(esi + 0x1C0);
    MEM32(edx) = 0;
    eax = MEM32(esi + 0x1C0);
    MEM32(eax + 4) = 0;
    POP32(esp, edi);
    esp += 4; return; /* ret */

}
